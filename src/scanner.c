#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdbool.h>

enum TokenType {
    CONCAT,
    BRACKET_CONCAT,
    CONCAT_LIST,
    BEGIN_BRACE,
    OVERRIDE_VAR_NAME,           // NAME when followed by =value (value present)
    OVERRIDE_VAR_NAME_NO_VALUE,  // NAME= when followed by whitespace (no value)
    OVERRIDE_END,                // zero-width, after an override when the command continues on the same line
    NEWLINE,                     // the '\n' terminator; the internal lexer handles it everywhere else
};

// Mirrors `variable_name` in grammar.ts: letters, digits, and underscores only
static bool is_variable_name_char(int32_t c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_';
}

void *tree_sitter_fish_external_scanner_create() { return NULL; }
void tree_sitter_fish_external_scanner_destroy(void *p) {}
void tree_sitter_fish_external_scanner_reset(void *p) {}
unsigned tree_sitter_fish_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_fish_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_fish_external_scanner_scan(
    void *payload, TSLexer *lexer, const bool *valid_symbols
) {
    // During error recovery tree-sitter marks every external token valid.
    // OVERRIDE_END and BEGIN_BRACE are never valid together otherwise.
    if (valid_symbols[OVERRIDE_END] && valid_symbols[BEGIN_BRACE]) {
        // '\n' is an external token, so the internal lexer no longer emits it
        // during recovery. Emit it here, so recovery still ends the broken
        // statement at its line instead of reading the next line into it.
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            lexer->advance(lexer, true);
        }
        if (lexer->lookahead == '\r') lexer->advance(lexer, false);
        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            lexer->result_symbol = NEWLINE;
            return true;
        }
        return false;
    }

    // BEGIN_BRACE: { followed by whitespace or ; (for begin_statement)
    // Must take priority over internal '{' token used by brace_expansion
    if (valid_symbols[BEGIN_BRACE]) {
        // Skip leading whitespace (since whitespace is in extras)
        while (iswspace(lexer->lookahead)) {
            lexer->advance(lexer, true);  // skip=true for whitespace
        }

        if (lexer->lookahead == '{') {
            lexer->advance(lexer, false);  // consume '{'
            if (lexer->lookahead == ';' || iswspace(lexer->lookahead)) {
                lexer->mark_end(lexer);
                lexer->result_symbol = BEGIN_BRACE;
                return true;
            }
        }
        // Not matched - return false to let internal lexer try
        // (returning false resets lexer state)
    }

    if (valid_symbols[CONCAT_LIST]) {
        if (!(
            lexer->lookahead == 0 ||
            lexer->lookahead != '['
        )) {
            lexer->result_symbol = CONCAT_LIST;
            return true;
        }
    }

    if (valid_symbols[CONCAT]) {
        if (!(
            lexer->lookahead == 0 ||
            lexer->lookahead == '>' ||
            lexer->lookahead == '<' ||
            lexer->lookahead == ')' ||
            lexer->lookahead == ';' ||
            lexer->lookahead == '&' ||
            lexer->lookahead == '|' ||
            iswspace(lexer->lookahead)
        )) {
            lexer->result_symbol = CONCAT;
            return true;
        }
    }

    if (valid_symbols[BRACKET_CONCAT]) {
        if (!(
            lexer->lookahead == 0 ||
            lexer->lookahead == ')' ||
            lexer->lookahead == '(' ||
            lexer->lookahead == '}' ||
            lexer->lookahead == ',' ||
            iswspace(lexer->lookahead)
        )) {
            lexer->result_symbol = BRACKET_CONCAT;
            return true;
        }
    }

    // An override must be followed by another override or the command name on
    // the same line. Newlines and comments are extras, so without this check
    // `k=v` + newline + `echo hi` would parse as one command.
    if (valid_symbols[OVERRIDE_END]) {
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            lexer->advance(lexer, true);
        }
        lexer->mark_end(lexer);
        if (lexer->lookahead == '\\') {
            // `\` + newline continues the line
            lexer->advance(lexer, false);
            if (lexer->lookahead == '\r') lexer->advance(lexer, false);
            if (lexer->lookahead != '\n') {
                lexer->result_symbol = OVERRIDE_END;
                return true;
            }
            lexer->advance(lexer, false);
            while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                lexer->advance(lexer, false);
            }
            lexer->mark_end(lexer);
        }
        switch (lexer->lookahead) {
            case '\r': case '\n':
                // Hand the newline to the parser as a terminator (invalid here),
                // so error recovery ends the statement at this line instead of
                // skipping the newline as an extra and reading the next line.
                if (lexer->lookahead == '\r') lexer->advance(lexer, false);
                if (lexer->lookahead == '\n') lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                lexer->result_symbol = NEWLINE;
                return true;
            case 0: case '#':
                return false;
            default:
                lexer->result_symbol = OVERRIDE_END;
                return true;
        }
    }

    // Match variable name for override when followed by '='
    if (valid_symbols[OVERRIDE_VAR_NAME] || valid_symbols[OVERRIDE_VAR_NAME_NO_VALUE]) {
        // Skip any leading whitespace (marked as skipped so tree-sitter can roll back if needed)
        while (iswspace(lexer->lookahead)) {
            lexer->advance(lexer, true);  // true = mark as skipped/whitespace
        }

        if (is_variable_name_char(lexer->lookahead)) {
            // Consume variable name
            lexer->advance(lexer, false);
            while (is_variable_name_char(lexer->lookahead)) {
                lexer->advance(lexer, false);
            }

            // Must be followed by '='
            if (lexer->lookahead == '=') {
                lexer->mark_end(lexer);  // Mark end BEFORE the '='

                // Peek at what follows the '='
                lexer->advance(lexer, false);  // consume '='

                if (iswspace(lexer->lookahead) || lexer->lookahead == 0) {
                    // NAME= followed by whitespace - no value
                    if (valid_symbols[OVERRIDE_VAR_NAME_NO_VALUE]) {
                        lexer->mark_end(lexer);  // Include '=' in token
                        lexer->result_symbol = OVERRIDE_VAR_NAME_NO_VALUE;
                        return true;
                    }
                } else {
                    // NAME= followed by value
                    if (valid_symbols[OVERRIDE_VAR_NAME]) {
                        // mark_end was set before '=' - token is just NAME
                        lexer->result_symbol = OVERRIDE_VAR_NAME;
                        return true;
                    }
                }
            }
        }
    }

    return false;
}
