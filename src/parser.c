#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_PIPE_PIPE = 1,
  anon_sym_SEMI = 2,
  anon_sym_or = 3,
  anon_sym_AMP_AMP = 4,
  anon_sym_and = 5,
  aux_sym_redirection_token1 = 6,
  aux_sym_redirection_token2 = 7,
  anon_sym_PIPE = 8,
  anon_sym_AMP = 9,
  anon_sym_LF = 10,
  anon_sym_CR = 11,
  anon_sym_CR_LF = 12,
  anon_sym_POUND = 13,
  aux_sym_comment_token1 = 14,
  sym_variable_name = 15,
  anon_sym_DOLLAR = 16,
  aux_sym_index_token1 = 17,
  aux_sym_index_token2 = 18,
  anon_sym_DOT_DOT = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACE = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_double_quote_string_token1 = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_single_quote_string_token1 = 28,
  sym_escape_sequence = 29,
  sym_word = 30,
  sym_bracket_word = 31,
  sym__concat = 32,
  sym__bracket_concat = 33,
  sym_program = 34,
  sym__statements = 35,
  sym__top_statement = 36,
  sym_conditional_execution = 37,
  sym_redirection = 38,
  sym_pipe = 39,
  sym_background = 40,
  sym__terminator = 41,
  sym__statement = 42,
  sym_comment = 43,
  sym_variable_expansion = 44,
  sym_index = 45,
  sym_range = 46,
  sym_list_element_access = 47,
  sym_bracket_expansion = 48,
  sym_double_quote_string = 49,
  sym_single_quote_string = 50,
  sym_command = 51,
  sym_concatenation = 52,
  sym__expression = 53,
  sym__base_expression = 54,
  sym_bracket_concatenation = 55,
  sym__bracket_expression = 56,
  sym__base_bracket_expression = 57,
  aux_sym__statements_repeat1 = 58,
  aux_sym__statements_repeat2 = 59,
  aux_sym_conditional_execution_repeat1 = 60,
  aux_sym__terminator_repeat1 = 61,
  aux_sym_variable_expansion_repeat1 = 62,
  aux_sym_variable_expansion_repeat2 = 63,
  aux_sym_list_element_access_repeat1 = 64,
  aux_sym_bracket_expansion_repeat1 = 65,
  aux_sym_double_quote_string_repeat1 = 66,
  aux_sym_single_quote_string_repeat1 = 67,
  aux_sym_command_repeat1 = 68,
  aux_sym_concatenation_repeat1 = 69,
  aux_sym_bracket_concatenation_repeat1 = 70,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_SEMI] = ";",
  [anon_sym_or] = "or",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [aux_sym_redirection_token1] = "redirection_token1",
  [aux_sym_redirection_token2] = "redirection_token2",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_variable_name] = "variable_name",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_index_token1] = "index_token1",
  [aux_sym_index_token2] = "index_token2",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_word] = "word",
  [sym_bracket_word] = "word",
  [sym__concat] = "_concat",
  [sym__bracket_concat] = "_bracket_concat",
  [sym_program] = "program",
  [sym__statements] = "_statements",
  [sym__top_statement] = "_top_statement",
  [sym_conditional_execution] = "conditional_execution",
  [sym_redirection] = "redirection",
  [sym_pipe] = "pipe",
  [sym_background] = "background",
  [sym__terminator] = "_terminator",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_variable_expansion] = "variable_expansion",
  [sym_index] = "index",
  [sym_range] = "range",
  [sym_list_element_access] = "list_element_access",
  [sym_bracket_expansion] = "bracket_expansion",
  [sym_double_quote_string] = "double_quote_string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_command] = "command",
  [sym_concatenation] = "concatenation",
  [sym__expression] = "_expression",
  [sym__base_expression] = "_base_expression",
  [sym_bracket_concatenation] = "concatenation",
  [sym__bracket_expression] = "_bracket_expression",
  [sym__base_bracket_expression] = "_base_bracket_expression",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym__statements_repeat2] = "_statements_repeat2",
  [aux_sym_conditional_execution_repeat1] = "conditional_execution_repeat1",
  [aux_sym__terminator_repeat1] = "_terminator_repeat1",
  [aux_sym_variable_expansion_repeat1] = "variable_expansion_repeat1",
  [aux_sym_variable_expansion_repeat2] = "variable_expansion_repeat2",
  [aux_sym_list_element_access_repeat1] = "list_element_access_repeat1",
  [aux_sym_bracket_expansion_repeat1] = "bracket_expansion_repeat1",
  [aux_sym_double_quote_string_repeat1] = "double_quote_string_repeat1",
  [aux_sym_single_quote_string_repeat1] = "single_quote_string_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
  [aux_sym_bracket_concatenation_repeat1] = "bracket_concatenation_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [aux_sym_redirection_token1] = aux_sym_redirection_token1,
  [aux_sym_redirection_token2] = aux_sym_redirection_token2,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_index_token1] = aux_sym_index_token1,
  [aux_sym_index_token2] = aux_sym_index_token2,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_token1] = aux_sym_double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_word] = sym_word,
  [sym_bracket_word] = sym_word,
  [sym__concat] = sym__concat,
  [sym__bracket_concat] = sym__bracket_concat,
  [sym_program] = sym_program,
  [sym__statements] = sym__statements,
  [sym__top_statement] = sym__top_statement,
  [sym_conditional_execution] = sym_conditional_execution,
  [sym_redirection] = sym_redirection,
  [sym_pipe] = sym_pipe,
  [sym_background] = sym_background,
  [sym__terminator] = sym__terminator,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_variable_expansion] = sym_variable_expansion,
  [sym_index] = sym_index,
  [sym_range] = sym_range,
  [sym_list_element_access] = sym_list_element_access,
  [sym_bracket_expansion] = sym_bracket_expansion,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_command] = sym_command,
  [sym_concatenation] = sym_concatenation,
  [sym__expression] = sym__expression,
  [sym__base_expression] = sym__base_expression,
  [sym_bracket_concatenation] = sym_concatenation,
  [sym__bracket_expression] = sym__bracket_expression,
  [sym__base_bracket_expression] = sym__base_bracket_expression,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym__statements_repeat2] = aux_sym__statements_repeat2,
  [aux_sym_conditional_execution_repeat1] = aux_sym_conditional_execution_repeat1,
  [aux_sym__terminator_repeat1] = aux_sym__terminator_repeat1,
  [aux_sym_variable_expansion_repeat1] = aux_sym_variable_expansion_repeat1,
  [aux_sym_variable_expansion_repeat2] = aux_sym_variable_expansion_repeat2,
  [aux_sym_list_element_access_repeat1] = aux_sym_list_element_access_repeat1,
  [aux_sym_bracket_expansion_repeat1] = aux_sym_bracket_expansion_repeat1,
  [aux_sym_double_quote_string_repeat1] = aux_sym_double_quote_string_repeat1,
  [aux_sym_single_quote_string_repeat1] = aux_sym_single_quote_string_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1,
  [aux_sym_bracket_concatenation_repeat1] = aux_sym_bracket_concatenation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_redirection_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_redirection_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_word] = {
    .visible = true,
    .named = true,
  },
  [sym__concat] = {
    .visible = false,
    .named = true,
  },
  [sym__bracket_concat] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym__top_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional_execution] = {
    .visible = true,
    .named = true,
  },
  [sym_redirection] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_list_element_access] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__base_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_bracket_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym__bracket_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__base_bracket_expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statements_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_execution_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__terminator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_expansion_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_element_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracket_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracket_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arguments = 1,
  field_name = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 1},
    {field_name, 0},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '$' || (c < '['
      ? (c < ';'
        ? (c >= '&' && c <= '*')
        : c <= ';')
      : (c <= '^' || (c >= '{' && c <= '~')))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '$')))
    : (c <= '*' || (c < '['
      ? (c < '>'
        ? (c >= ';' && c <= '<')
        : c <= '>')
      : (c <= '^' || (c >= '{' && c <= '~')))));
}

static inline bool sym_bracket_word_character_set_1(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '$' || (c < '['
      ? (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(27);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == '{') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '|') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '2')) ADVANCE(39);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 28:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(51);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(74);
      END_STATE();
    case 29:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(51);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(74);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(74);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(74);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '&') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '}') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(21);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '?') ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '?') ADVANCE(40);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(37);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (!sym_bracket_word_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '>') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_index_token2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_bracket_word);
      if (!sym_bracket_word_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 28, .external_lex_state = 2},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 28, .external_lex_state = 2},
  [15] = {.lex_state = 28, .external_lex_state = 2},
  [16] = {.lex_state = 28, .external_lex_state = 2},
  [17] = {.lex_state = 28, .external_lex_state = 2},
  [18] = {.lex_state = 28, .external_lex_state = 2},
  [19] = {.lex_state = 28, .external_lex_state = 2},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28, .external_lex_state = 2},
  [22] = {.lex_state = 28, .external_lex_state = 2},
  [23] = {.lex_state = 28, .external_lex_state = 2},
  [24] = {.lex_state = 28, .external_lex_state = 2},
  [25] = {.lex_state = 28, .external_lex_state = 2},
  [26] = {.lex_state = 28, .external_lex_state = 2},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28, .external_lex_state = 2},
  [29] = {.lex_state = 28, .external_lex_state = 2},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 49},
  [117] = {.lex_state = 49},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 49},
};

enum {
  ts_external_token__concat = 0,
  ts_external_token__bracket_concat = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__concat] = sym__concat,
  [ts_external_token__bracket_concat] = sym__bracket_concat,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__concat] = true,
    [ts_external_token__bracket_concat] = true,
  },
  [2] = {
    [ts_external_token__concat] = true,
  },
  [3] = {
    [ts_external_token__bracket_concat] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [aux_sym_redirection_token1] = ACTIONS(1),
    [aux_sym_redirection_token2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_index_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__concat] = ACTIONS(1),
    [sym__bracket_concat] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(118),
    [sym__statements] = STATE(119),
    [sym__top_statement] = STATE(37),
    [sym_conditional_execution] = STATE(33),
    [sym_redirection] = STATE(33),
    [sym_pipe] = STATE(33),
    [sym_background] = STATE(33),
    [sym__terminator] = STATE(5),
    [sym__statement] = STATE(33),
    [sym_comment] = STATE(37),
    [sym_variable_expansion] = STATE(16),
    [sym_list_element_access] = STATE(16),
    [sym_bracket_expansion] = STATE(16),
    [sym_double_quote_string] = STATE(16),
    [sym_single_quote_string] = STATE(16),
    [sym_command] = STATE(33),
    [sym_concatenation] = STATE(8),
    [sym__expression] = STATE(8),
    [sym__base_expression] = STATE(16),
    [aux_sym__statements_repeat1] = STATE(5),
    [aux_sym__statements_repeat2] = STATE(2),
    [aux_sym__terminator_repeat1] = STATE(45),
    [aux_sym_variable_expansion_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_variable_name] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(21),
    [sym_word] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym__statements_repeat2,
    STATE(45), 1,
      aux_sym__terminator_repeat1,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    STATE(8), 2,
      sym_concatenation,
      sym__expression,
    STATE(37), 2,
      sym__top_statement,
      sym_comment,
    ACTIONS(5), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(33), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [72] = 18,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      sym_escape_sequence,
    STATE(3), 1,
      aux_sym__statements_repeat2,
    STATE(45), 1,
      aux_sym__terminator_repeat1,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(33), 2,
      sym_variable_name,
      sym_word,
    STATE(5), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    STATE(8), 2,
      sym_concatenation,
      sym__expression,
    STATE(37), 2,
      sym__top_statement,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(33), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [144] = 17,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym__terminator_repeat1,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(8), 2,
      sym_concatenation,
      sym__expression,
    STATE(39), 2,
      sym__top_statement,
      sym_comment,
    STATE(40), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    ACTIONS(5), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(33), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [213] = 16,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym__terminator_repeat1,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(8), 2,
      sym_concatenation,
      sym__expression,
    STATE(39), 2,
      sym__top_statement,
      sym_comment,
    STATE(40), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    ACTIONS(5), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(33), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [279] = 12,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(7), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(58), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
  [334] = 12,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(82), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(64), 2,
      sym_variable_name,
      sym_word,
    STATE(7), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(62), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
  [389] = 12,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(87), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
  [444] = 13,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(8), 2,
      sym_concatenation,
      sym__expression,
    STATE(95), 2,
      sym__top_statement,
      sym_comment,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(31), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [497] = 13,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_POUND,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(8), 2,
      sym_concatenation,
      sym__expression,
    STATE(20), 2,
      sym__top_statement,
      sym_comment,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(33), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [550] = 13,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_POUND,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(8), 2,
      sym_concatenation,
      sym__expression,
    STATE(27), 2,
      sym__top_statement,
      sym_comment,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(33), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [603] = 4,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(12), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(103), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(105), 17,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [635] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(12), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(110), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(112), 17,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [667] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(114), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(116), 17,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [699] = 4,
    ACTIONS(122), 1,
      sym__concat,
    STATE(15), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(120), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [730] = 4,
    ACTIONS(129), 1,
      sym__concat,
    STATE(17), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(127), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [761] = 4,
    ACTIONS(129), 1,
      sym__concat,
    STATE(15), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(133), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [792] = 2,
    ACTIONS(135), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(137), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [818] = 2,
    ACTIONS(139), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(141), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [844] = 5,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(145), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(149), 15,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [876] = 2,
    ACTIONS(118), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(120), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [902] = 2,
    ACTIONS(151), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(153), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [928] = 2,
    ACTIONS(155), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(157), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [954] = 2,
    ACTIONS(159), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(161), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [980] = 2,
    ACTIONS(163), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(165), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1006] = 2,
    ACTIONS(167), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(169), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1032] = 5,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(145), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(173), 15,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1064] = 2,
    ACTIONS(175), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(177), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1090] = 2,
    ACTIONS(179), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(181), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1116] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(185), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1141] = 4,
    ACTIONS(191), 1,
      aux_sym_redirection_token1,
    ACTIONS(193), 1,
      aux_sym_redirection_token2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(189), 16,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1170] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(197), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1195] = 6,
    ACTIONS(191), 1,
      aux_sym_redirection_token1,
    ACTIONS(193), 1,
      aux_sym_redirection_token2,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(201), 14,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1228] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(209), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1253] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(213), 18,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1278] = 11,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(104), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(215), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(103), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(85), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1319] = 5,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(145), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(231), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1347] = 10,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(32), 2,
      sym_concatenation,
      sym__expression,
    STATE(16), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [1385] = 5,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(145), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(233), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1413] = 5,
    STATE(45), 1,
      aux_sym__terminator_repeat1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    STATE(40), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    ACTIONS(237), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(240), 8,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1441] = 11,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      sym_escape_sequence,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(109), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(215), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(115), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(85), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1481] = 10,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(215), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(114), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(85), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1519] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(209), 14,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1540] = 9,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(244), 2,
      sym_variable_name,
      sym_word,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [1574] = 4,
    STATE(46), 1,
      aux_sym__terminator_repeat1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(250), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(252), 8,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1598] = 4,
    STATE(46), 1,
      aux_sym__terminator_repeat1,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(256), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(259), 8,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1622] = 8,
    ACTIONS(217), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(263), 1,
      sym_escape_sequence,
    STATE(97), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(261), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(112), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1652] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1680] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1708] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(49), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1736] = 8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(280), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1764] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1792] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(52), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1820] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1848] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(48), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1876] = 8,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(54), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1904] = 3,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(58), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(114), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1920] = 3,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    STATE(59), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(110), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1936] = 3,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    STATE(59), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(103), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1952] = 6,
    ACTIONS(265), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_index,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(267), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(77), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1973] = 5,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(307), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(70), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1991] = 4,
    ACTIONS(110), 1,
      sym_escape_sequence,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(63), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2007] = 4,
    ACTIONS(103), 1,
      sym_escape_sequence,
    ACTIONS(311), 1,
      anon_sym_LBRACK,
    STATE(63), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(105), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2023] = 5,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(316), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2041] = 4,
    ACTIONS(114), 1,
      sym_escape_sequence,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(62), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(116), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2057] = 1,
    ACTIONS(175), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2067] = 1,
    ACTIONS(139), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2077] = 5,
    ACTIONS(318), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(323), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2095] = 5,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(316), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2113] = 5,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(316), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2131] = 5,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(332), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(64), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2149] = 5,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(336), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2167] = 2,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(338), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2178] = 1,
    ACTIONS(159), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2187] = 3,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(78), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(114), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2200] = 3,
    ACTIONS(342), 1,
      anon_sym_LBRACK,
    STATE(76), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(103), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2213] = 1,
    ACTIONS(345), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2222] = 3,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(76), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(110), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2235] = 1,
    ACTIONS(155), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2244] = 2,
    ACTIONS(139), 1,
      sym_escape_sequence,
    ACTIONS(141), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2254] = 2,
    ACTIONS(175), 1,
      sym_escape_sequence,
    ACTIONS(177), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2264] = 1,
    ACTIONS(347), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2272] = 3,
    ACTIONS(351), 1,
      sym__bracket_concat,
    STATE(83), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2283] = 3,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(356), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2294] = 3,
    ACTIONS(361), 1,
      sym__bracket_concat,
    STATE(94), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2305] = 1,
    ACTIONS(175), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2312] = 3,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(365), 2,
      anon_sym_or,
      anon_sym_and,
  [2323] = 3,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(370), 2,
      anon_sym_or,
      anon_sym_and,
  [2334] = 1,
    ACTIONS(139), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2341] = 3,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(374), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2352] = 3,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(378), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2363] = 3,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(382), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2374] = 3,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(382), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2385] = 3,
    ACTIONS(361), 1,
      sym__bracket_concat,
    STATE(83), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2396] = 3,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(388), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [2407] = 3,
    ACTIONS(392), 1,
      sym_variable_name,
    ACTIONS(394), 1,
      anon_sym_DOLLAR,
    STATE(96), 1,
      aux_sym_variable_expansion_repeat1,
  [2417] = 3,
    ACTIONS(397), 1,
      sym_variable_name,
    ACTIONS(399), 1,
      anon_sym_DOLLAR,
    STATE(96), 1,
      aux_sym_variable_expansion_repeat1,
  [2427] = 1,
    ACTIONS(155), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2433] = 1,
    ACTIONS(159), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2439] = 3,
    ACTIONS(399), 1,
      anon_sym_DOLLAR,
    ACTIONS(401), 1,
      sym_variable_name,
    STATE(96), 1,
      aux_sym_variable_expansion_repeat1,
  [2449] = 1,
    ACTIONS(207), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
  [2455] = 3,
    ACTIONS(399), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      sym_variable_name,
    STATE(96), 1,
      aux_sym_variable_expansion_repeat1,
  [2465] = 2,
    STATE(106), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2473] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_bracket_expansion_repeat1,
  [2483] = 1,
    ACTIONS(151), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2489] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_bracket_expansion_repeat1,
  [2499] = 1,
    ACTIONS(167), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2505] = 3,
    ACTIONS(399), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      sym_variable_name,
    STATE(96), 1,
      aux_sym_variable_expansion_repeat1,
  [2515] = 3,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_bracket_expansion_repeat1,
  [2525] = 3,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_bracket_expansion_repeat1,
  [2535] = 1,
    ACTIONS(349), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2541] = 1,
    ACTIONS(349), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2547] = 2,
    ACTIONS(129), 1,
      sym__concat,
    STATE(17), 1,
      aux_sym_concatenation_repeat1,
  [2554] = 1,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2559] = 2,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_bracket_expansion_repeat1,
  [2566] = 1,
    ACTIONS(420), 1,
      aux_sym_comment_token1,
  [2570] = 1,
    ACTIONS(422), 1,
      aux_sym_comment_token1,
  [2574] = 1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
  [2578] = 1,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
  [2582] = 1,
    ACTIONS(428), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 279,
  [SMALL_STATE(7)] = 334,
  [SMALL_STATE(8)] = 389,
  [SMALL_STATE(9)] = 444,
  [SMALL_STATE(10)] = 497,
  [SMALL_STATE(11)] = 550,
  [SMALL_STATE(12)] = 603,
  [SMALL_STATE(13)] = 635,
  [SMALL_STATE(14)] = 667,
  [SMALL_STATE(15)] = 699,
  [SMALL_STATE(16)] = 730,
  [SMALL_STATE(17)] = 761,
  [SMALL_STATE(18)] = 792,
  [SMALL_STATE(19)] = 818,
  [SMALL_STATE(20)] = 844,
  [SMALL_STATE(21)] = 876,
  [SMALL_STATE(22)] = 902,
  [SMALL_STATE(23)] = 928,
  [SMALL_STATE(24)] = 954,
  [SMALL_STATE(25)] = 980,
  [SMALL_STATE(26)] = 1006,
  [SMALL_STATE(27)] = 1032,
  [SMALL_STATE(28)] = 1064,
  [SMALL_STATE(29)] = 1090,
  [SMALL_STATE(30)] = 1116,
  [SMALL_STATE(31)] = 1141,
  [SMALL_STATE(32)] = 1170,
  [SMALL_STATE(33)] = 1195,
  [SMALL_STATE(34)] = 1228,
  [SMALL_STATE(35)] = 1253,
  [SMALL_STATE(36)] = 1278,
  [SMALL_STATE(37)] = 1319,
  [SMALL_STATE(38)] = 1347,
  [SMALL_STATE(39)] = 1385,
  [SMALL_STATE(40)] = 1413,
  [SMALL_STATE(41)] = 1441,
  [SMALL_STATE(42)] = 1481,
  [SMALL_STATE(43)] = 1519,
  [SMALL_STATE(44)] = 1540,
  [SMALL_STATE(45)] = 1574,
  [SMALL_STATE(46)] = 1598,
  [SMALL_STATE(47)] = 1622,
  [SMALL_STATE(48)] = 1652,
  [SMALL_STATE(49)] = 1680,
  [SMALL_STATE(50)] = 1708,
  [SMALL_STATE(51)] = 1736,
  [SMALL_STATE(52)] = 1764,
  [SMALL_STATE(53)] = 1792,
  [SMALL_STATE(54)] = 1820,
  [SMALL_STATE(55)] = 1848,
  [SMALL_STATE(56)] = 1876,
  [SMALL_STATE(57)] = 1904,
  [SMALL_STATE(58)] = 1920,
  [SMALL_STATE(59)] = 1936,
  [SMALL_STATE(60)] = 1952,
  [SMALL_STATE(61)] = 1973,
  [SMALL_STATE(62)] = 1991,
  [SMALL_STATE(63)] = 2007,
  [SMALL_STATE(64)] = 2023,
  [SMALL_STATE(65)] = 2041,
  [SMALL_STATE(66)] = 2057,
  [SMALL_STATE(67)] = 2067,
  [SMALL_STATE(68)] = 2077,
  [SMALL_STATE(69)] = 2095,
  [SMALL_STATE(70)] = 2113,
  [SMALL_STATE(71)] = 2131,
  [SMALL_STATE(72)] = 2149,
  [SMALL_STATE(73)] = 2167,
  [SMALL_STATE(74)] = 2178,
  [SMALL_STATE(75)] = 2187,
  [SMALL_STATE(76)] = 2200,
  [SMALL_STATE(77)] = 2213,
  [SMALL_STATE(78)] = 2222,
  [SMALL_STATE(79)] = 2235,
  [SMALL_STATE(80)] = 2244,
  [SMALL_STATE(81)] = 2254,
  [SMALL_STATE(82)] = 2264,
  [SMALL_STATE(83)] = 2272,
  [SMALL_STATE(84)] = 2283,
  [SMALL_STATE(85)] = 2294,
  [SMALL_STATE(86)] = 2305,
  [SMALL_STATE(87)] = 2312,
  [SMALL_STATE(88)] = 2323,
  [SMALL_STATE(89)] = 2334,
  [SMALL_STATE(90)] = 2341,
  [SMALL_STATE(91)] = 2352,
  [SMALL_STATE(92)] = 2363,
  [SMALL_STATE(93)] = 2374,
  [SMALL_STATE(94)] = 2385,
  [SMALL_STATE(95)] = 2396,
  [SMALL_STATE(96)] = 2407,
  [SMALL_STATE(97)] = 2417,
  [SMALL_STATE(98)] = 2427,
  [SMALL_STATE(99)] = 2433,
  [SMALL_STATE(100)] = 2439,
  [SMALL_STATE(101)] = 2449,
  [SMALL_STATE(102)] = 2455,
  [SMALL_STATE(103)] = 2465,
  [SMALL_STATE(104)] = 2473,
  [SMALL_STATE(105)] = 2483,
  [SMALL_STATE(106)] = 2489,
  [SMALL_STATE(107)] = 2499,
  [SMALL_STATE(108)] = 2505,
  [SMALL_STATE(109)] = 2515,
  [SMALL_STATE(110)] = 2525,
  [SMALL_STATE(111)] = 2535,
  [SMALL_STATE(112)] = 2541,
  [SMALL_STATE(113)] = 2547,
  [SMALL_STATE(114)] = 2554,
  [SMALL_STATE(115)] = 2559,
  [SMALL_STATE(116)] = 2566,
  [SMALL_STATE(117)] = 2570,
  [SMALL_STATE(118)] = 2574,
  [SMALL_STATE(119)] = 2578,
  [SMALL_STATE(120)] = 2582,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat2, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(45),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(120),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(100),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(55),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(41),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(72),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(90),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(113),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(16),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(100),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(55),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(72),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(90),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(113),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(55),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(44),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_execution, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_execution, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_statement, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_statement, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat2, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(45),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terminator, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__terminator, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__terminator_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(46),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__terminator_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(108),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(77),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(61),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(53),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(50),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(102),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(68),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(56),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(47),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(84),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_execution_repeat1, 2), SHIFT_REPEAT(88),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_execution_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(96),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(42),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [424] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fish_external_scanner_create(void);
void tree_sitter_fish_external_scanner_destroy(void *);
bool tree_sitter_fish_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fish_external_scanner_serialize(void *, char *);
void tree_sitter_fish_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fish(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_fish_external_scanner_create,
      tree_sitter_fish_external_scanner_destroy,
      tree_sitter_fish_external_scanner_scan,
      tree_sitter_fish_external_scanner_serialize,
      tree_sitter_fish_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
