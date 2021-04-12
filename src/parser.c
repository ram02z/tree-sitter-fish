#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 116
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
  [11] = {.lex_state = 28, .external_lex_state = 2},
  [12] = {.lex_state = 28, .external_lex_state = 2},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 28, .external_lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 28, .external_lex_state = 2},
  [17] = {.lex_state = 28, .external_lex_state = 2},
  [18] = {.lex_state = 28, .external_lex_state = 2},
  [19] = {.lex_state = 28, .external_lex_state = 2},
  [20] = {.lex_state = 28, .external_lex_state = 2},
  [21] = {.lex_state = 28, .external_lex_state = 2},
  [22] = {.lex_state = 28, .external_lex_state = 2},
  [23] = {.lex_state = 28, .external_lex_state = 2},
  [24] = {.lex_state = 28, .external_lex_state = 2},
  [25] = {.lex_state = 28, .external_lex_state = 2},
  [26] = {.lex_state = 28, .external_lex_state = 2},
  [27] = {.lex_state = 28, .external_lex_state = 2},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 5},
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
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 49},
  [115] = {.lex_state = 0},
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
    [sym_program] = STATE(113),
    [sym__statements] = STATE(115),
    [sym__top_statement] = STATE(37),
    [sym_conditional_execution] = STATE(37),
    [sym_redirection] = STATE(29),
    [sym_pipe] = STATE(29),
    [sym_background] = STATE(29),
    [sym__terminator] = STATE(5),
    [sym__statement] = STATE(29),
    [sym_comment] = STATE(37),
    [sym_variable_expansion] = STATE(14),
    [sym_list_element_access] = STATE(14),
    [sym_bracket_expansion] = STATE(14),
    [sym_double_quote_string] = STATE(14),
    [sym_single_quote_string] = STATE(14),
    [sym_command] = STATE(29),
    [sym_concatenation] = STATE(6),
    [sym__expression] = STATE(6),
    [sym__base_expression] = STATE(14),
    [aux_sym__statements_repeat1] = STATE(5),
    [aux_sym__statements_repeat2] = STATE(2),
    [aux_sym__terminator_repeat1] = STATE(43),
    [aux_sym_variable_expansion_repeat1] = STATE(101),
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
    STATE(43), 1,
      aux_sym__terminator_repeat1,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(37), 3,
      sym__top_statement,
      sym_conditional_execution,
      sym_comment,
    ACTIONS(5), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(29), 5,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
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
    STATE(43), 1,
      aux_sym__terminator_repeat1,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(33), 2,
      sym_variable_name,
      sym_word,
    STATE(5), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(37), 3,
      sym__top_statement,
      sym_conditional_execution,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(29), 5,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
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
    STATE(43), 1,
      aux_sym__terminator_repeat1,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(40), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    STATE(39), 3,
      sym__top_statement,
      sym_conditional_execution,
      sym_comment,
    ACTIONS(5), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(29), 5,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
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
    STATE(43), 1,
      aux_sym__terminator_repeat1,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(40), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    STATE(39), 3,
      sym__top_statement,
      sym_conditional_execution,
      sym_comment,
    ACTIONS(5), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(29), 5,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
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
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(7), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(14), 6,
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
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(8), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(14), 6,
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
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_escape_sequence,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(68), 2,
      sym_variable_name,
      sym_word,
    STATE(8), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(66), 11,
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
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(34), 3,
      sym__top_statement,
      sym_conditional_execution,
      sym_comment,
    STATE(29), 5,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [497] = 13,
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
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(38), 3,
      sym__top_statement,
      sym_conditional_execution,
      sym_comment,
    STATE(29), 5,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [550] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(12), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(101), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(103), 17,
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
  [582] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(105), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(107), 17,
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
  [614] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(109), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(111), 17,
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
  [646] = 4,
    ACTIONS(120), 1,
      sym__concat,
    STATE(16), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(118), 18,
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
  [677] = 11,
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
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(30), 5,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [722] = 4,
    ACTIONS(120), 1,
      sym__concat,
    STATE(17), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(124), 18,
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
  [753] = 4,
    ACTIONS(130), 1,
      sym__concat,
    STATE(17), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(128), 18,
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
  [784] = 2,
    ACTIONS(133), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(135), 18,
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
  [810] = 2,
    ACTIONS(137), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(139), 18,
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
  [836] = 2,
    ACTIONS(126), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(128), 18,
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
  [862] = 2,
    ACTIONS(141), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(143), 18,
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
  [888] = 2,
    ACTIONS(145), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(147), 18,
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
  [914] = 2,
    ACTIONS(149), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(151), 18,
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
  [940] = 2,
    ACTIONS(153), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(155), 18,
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
  [966] = 2,
    ACTIONS(157), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(159), 18,
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
  [992] = 2,
    ACTIONS(161), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(163), 18,
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
  [1018] = 2,
    ACTIONS(165), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(167), 18,
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
  [1044] = 2,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(171), 18,
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
  [1069] = 6,
    ACTIONS(177), 1,
      aux_sym_redirection_token1,
    ACTIONS(179), 1,
      aux_sym_redirection_token2,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(175), 14,
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
  [1102] = 4,
    ACTIONS(177), 1,
      aux_sym_redirection_token1,
    ACTIONS(179), 1,
      aux_sym_redirection_token2,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(187), 16,
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
  [1131] = 2,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(191), 18,
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
  [1156] = 2,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(195), 18,
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
  [1181] = 11,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(109), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(197), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(99), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(89), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1222] = 5,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(213), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(217), 11,
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
  [1250] = 10,
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
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(32), 2,
      sym_concatenation,
      sym__expression,
    STATE(14), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [1288] = 11,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_escape_sequence,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(197), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(111), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(89), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1328] = 5,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(213), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(223), 11,
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
  [1356] = 5,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(213), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(227), 11,
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
  [1384] = 5,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(213), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(229), 11,
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
  [1412] = 5,
    STATE(43), 1,
      aux_sym__terminator_repeat1,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    STATE(40), 2,
      sym__terminator,
      aux_sym__statements_repeat1,
    ACTIONS(233), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(236), 8,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1440] = 10,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(197), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(112), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(89), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1478] = 2,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(240), 14,
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
  [1499] = 4,
    STATE(44), 1,
      aux_sym__terminator_repeat1,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(244), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(246), 8,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1523] = 4,
    STATE(44), 1,
      aux_sym__terminator_repeat1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(250), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(253), 8,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1547] = 9,
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
    ACTIONS(257), 1,
      sym_escape_sequence,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(255), 2,
      sym_variable_name,
      sym_word,
    STATE(20), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [1581] = 8,
    ACTIONS(199), 1,
      anon_sym_DOLLAR,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      sym_escape_sequence,
    STATE(108), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(259), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(95), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1611] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1639] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(52), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1667] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(47), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1695] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(53), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1723] = 8,
    ACTIONS(277), 1,
      anon_sym_DOLLAR,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(280), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1751] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1779] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1807] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(55), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1835] = 8,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1863] = 3,
    ACTIONS(296), 1,
      anon_sym_LBRACK,
    STATE(56), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(109), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1879] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(58), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(101), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1895] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(56), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(105), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1911] = 6,
    ACTIONS(263), 1,
      anon_sym_DOLLAR,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(265), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(75), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1932] = 5,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(305), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1950] = 1,
    ACTIONS(145), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1960] = 5,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(309), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(70), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1978] = 5,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(305), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1996] = 5,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(315), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(63), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2014] = 4,
    ACTIONS(109), 1,
      sym_escape_sequence,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    STATE(65), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(111), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2030] = 4,
    ACTIONS(105), 1,
      sym_escape_sequence,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(65), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(107), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2046] = 5,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(324), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(60), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2064] = 4,
    ACTIONS(101), 1,
      sym_escape_sequence,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(66), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(103), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2080] = 5,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(331), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2098] = 5,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(305), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [2116] = 1,
    ACTIONS(149), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2126] = 3,
    ACTIONS(336), 1,
      anon_sym_LBRACK,
    STATE(72), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(109), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2139] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(72), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(105), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2152] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(73), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(101), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2165] = 1,
    ACTIONS(339), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2174] = 1,
    ACTIONS(133), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2183] = 2,
    ACTIONS(343), 1,
      anon_sym_DOT_DOT,
    ACTIONS(341), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2194] = 1,
    ACTIONS(161), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2203] = 2,
    ACTIONS(145), 1,
      sym_escape_sequence,
    ACTIONS(147), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2213] = 1,
    ACTIONS(345), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [2221] = 2,
    ACTIONS(149), 1,
      sym_escape_sequence,
    ACTIONS(151), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [2231] = 1,
    ACTIONS(149), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2238] = 3,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(349), 2,
      anon_sym_or,
      anon_sym_and,
  [2249] = 3,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(353), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2260] = 3,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(358), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2271] = 3,
    ACTIONS(362), 1,
      sym__bracket_concat,
    STATE(91), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2282] = 3,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(366), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2293] = 3,
    ACTIONS(368), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(370), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2304] = 3,
    ACTIONS(362), 1,
      sym__bracket_concat,
    STATE(86), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2315] = 3,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(377), 2,
      anon_sym_or,
      anon_sym_and,
  [2326] = 3,
    ACTIONS(381), 1,
      sym__bracket_concat,
    STATE(91), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2337] = 1,
    ACTIONS(145), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2344] = 3,
    ACTIONS(384), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(366), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2355] = 3,
    ACTIONS(386), 1,
      sym_variable_name,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
  [2365] = 1,
    ACTIONS(379), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2371] = 1,
    ACTIONS(379), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2377] = 1,
    ACTIONS(165), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2383] = 1,
    ACTIONS(133), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2389] = 2,
    STATE(104), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2397] = 3,
    ACTIONS(392), 1,
      sym_variable_name,
    ACTIONS(394), 1,
      anon_sym_DOLLAR,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
  [2407] = 3,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    ACTIONS(397), 1,
      sym_variable_name,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
  [2417] = 1,
    ACTIONS(161), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2423] = 3,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_bracket_expansion_repeat1,
  [2433] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_bracket_expansion_repeat1,
  [2443] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_bracket_expansion_repeat1,
  [2453] = 3,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    ACTIONS(408), 1,
      sym_variable_name,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
  [2463] = 1,
    ACTIONS(137), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2469] = 3,
    ACTIONS(388), 1,
      anon_sym_DOLLAR,
    ACTIONS(410), 1,
      sym_variable_name,
    STATE(100), 1,
      aux_sym_variable_expansion_repeat1,
  [2479] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_bracket_expansion_repeat1,
  [2489] = 2,
    ACTIONS(120), 1,
      sym__concat,
    STATE(16), 1,
      aux_sym_concatenation_repeat1,
  [2496] = 2,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_bracket_expansion_repeat1,
  [2503] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2508] = 1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
  [2512] = 1,
    ACTIONS(416), 1,
      aux_sym_comment_token1,
  [2516] = 1,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(12)] = 582,
  [SMALL_STATE(13)] = 614,
  [SMALL_STATE(14)] = 646,
  [SMALL_STATE(15)] = 677,
  [SMALL_STATE(16)] = 722,
  [SMALL_STATE(17)] = 753,
  [SMALL_STATE(18)] = 784,
  [SMALL_STATE(19)] = 810,
  [SMALL_STATE(20)] = 836,
  [SMALL_STATE(21)] = 862,
  [SMALL_STATE(22)] = 888,
  [SMALL_STATE(23)] = 914,
  [SMALL_STATE(24)] = 940,
  [SMALL_STATE(25)] = 966,
  [SMALL_STATE(26)] = 992,
  [SMALL_STATE(27)] = 1018,
  [SMALL_STATE(28)] = 1044,
  [SMALL_STATE(29)] = 1069,
  [SMALL_STATE(30)] = 1102,
  [SMALL_STATE(31)] = 1131,
  [SMALL_STATE(32)] = 1156,
  [SMALL_STATE(33)] = 1181,
  [SMALL_STATE(34)] = 1222,
  [SMALL_STATE(35)] = 1250,
  [SMALL_STATE(36)] = 1288,
  [SMALL_STATE(37)] = 1328,
  [SMALL_STATE(38)] = 1356,
  [SMALL_STATE(39)] = 1384,
  [SMALL_STATE(40)] = 1412,
  [SMALL_STATE(41)] = 1440,
  [SMALL_STATE(42)] = 1478,
  [SMALL_STATE(43)] = 1499,
  [SMALL_STATE(44)] = 1523,
  [SMALL_STATE(45)] = 1547,
  [SMALL_STATE(46)] = 1581,
  [SMALL_STATE(47)] = 1611,
  [SMALL_STATE(48)] = 1639,
  [SMALL_STATE(49)] = 1667,
  [SMALL_STATE(50)] = 1695,
  [SMALL_STATE(51)] = 1723,
  [SMALL_STATE(52)] = 1751,
  [SMALL_STATE(53)] = 1779,
  [SMALL_STATE(54)] = 1807,
  [SMALL_STATE(55)] = 1835,
  [SMALL_STATE(56)] = 1863,
  [SMALL_STATE(57)] = 1879,
  [SMALL_STATE(58)] = 1895,
  [SMALL_STATE(59)] = 1911,
  [SMALL_STATE(60)] = 1932,
  [SMALL_STATE(61)] = 1950,
  [SMALL_STATE(62)] = 1960,
  [SMALL_STATE(63)] = 1978,
  [SMALL_STATE(64)] = 1996,
  [SMALL_STATE(65)] = 2014,
  [SMALL_STATE(66)] = 2030,
  [SMALL_STATE(67)] = 2046,
  [SMALL_STATE(68)] = 2064,
  [SMALL_STATE(69)] = 2080,
  [SMALL_STATE(70)] = 2098,
  [SMALL_STATE(71)] = 2116,
  [SMALL_STATE(72)] = 2126,
  [SMALL_STATE(73)] = 2139,
  [SMALL_STATE(74)] = 2152,
  [SMALL_STATE(75)] = 2165,
  [SMALL_STATE(76)] = 2174,
  [SMALL_STATE(77)] = 2183,
  [SMALL_STATE(78)] = 2194,
  [SMALL_STATE(79)] = 2203,
  [SMALL_STATE(80)] = 2213,
  [SMALL_STATE(81)] = 2221,
  [SMALL_STATE(82)] = 2231,
  [SMALL_STATE(83)] = 2238,
  [SMALL_STATE(84)] = 2249,
  [SMALL_STATE(85)] = 2260,
  [SMALL_STATE(86)] = 2271,
  [SMALL_STATE(87)] = 2282,
  [SMALL_STATE(88)] = 2293,
  [SMALL_STATE(89)] = 2304,
  [SMALL_STATE(90)] = 2315,
  [SMALL_STATE(91)] = 2326,
  [SMALL_STATE(92)] = 2337,
  [SMALL_STATE(93)] = 2344,
  [SMALL_STATE(94)] = 2355,
  [SMALL_STATE(95)] = 2365,
  [SMALL_STATE(96)] = 2371,
  [SMALL_STATE(97)] = 2377,
  [SMALL_STATE(98)] = 2383,
  [SMALL_STATE(99)] = 2389,
  [SMALL_STATE(100)] = 2397,
  [SMALL_STATE(101)] = 2407,
  [SMALL_STATE(102)] = 2417,
  [SMALL_STATE(103)] = 2423,
  [SMALL_STATE(104)] = 2433,
  [SMALL_STATE(105)] = 2443,
  [SMALL_STATE(106)] = 2453,
  [SMALL_STATE(107)] = 2463,
  [SMALL_STATE(108)] = 2469,
  [SMALL_STATE(109)] = 2479,
  [SMALL_STATE(110)] = 2489,
  [SMALL_STATE(111)] = 2496,
  [SMALL_STATE(112)] = 2503,
  [SMALL_STATE(113)] = 2508,
  [SMALL_STATE(114)] = 2512,
  [SMALL_STATE(115)] = 2516,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat2, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(43),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(114),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(14),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(101),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(48),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(36),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(67),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(85),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat2, 2), SHIFT_REPEAT(110),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(101),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(48),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(67),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(85),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(110),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(48),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_statement, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_statement, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_execution, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat2, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_execution, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat2, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(43),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terminator, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__terminator, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__terminator_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__terminator_repeat1, 2), SHIFT_REPEAT(44),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__terminator_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(94),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(75),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(64),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(54),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(49),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(106),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(69),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(50),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(84),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_execution_repeat1, 2), SHIFT_REPEAT(90),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_execution_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(46),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(100),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(41),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [414] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
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
