#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
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
  sym__top_statement = 35,
  sym_conditional_execution = 36,
  sym_redirection = 37,
  sym_pipe = 38,
  sym_background = 39,
  sym__terminator = 40,
  sym__statement = 41,
  sym_comment = 42,
  sym_variable_expansion = 43,
  sym_index = 44,
  sym_range = 45,
  sym_list_element_access = 46,
  sym_bracket_expansion = 47,
  sym_double_quote_string = 48,
  sym_single_quote_string = 49,
  sym_command = 50,
  sym_concatenation = 51,
  sym__expression = 52,
  sym__base_expression = 53,
  sym_bracket_concatenation = 54,
  sym__bracket_expression = 55,
  sym__base_bracket_expression = 56,
  aux_sym_program_repeat1 = 57,
  aux_sym_conditional_execution_repeat1 = 58,
  aux_sym_variable_expansion_repeat1 = 59,
  aux_sym_variable_expansion_repeat2 = 60,
  aux_sym_list_element_access_repeat1 = 61,
  aux_sym_bracket_expansion_repeat1 = 62,
  aux_sym_double_quote_string_repeat1 = 63,
  aux_sym_single_quote_string_repeat1 = 64,
  aux_sym_command_repeat1 = 65,
  aux_sym_concatenation_repeat1 = 66,
  aux_sym_bracket_concatenation_repeat1 = 67,
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_conditional_execution_repeat1] = "conditional_execution_repeat1",
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
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_conditional_execution_repeat1] = aux_sym_conditional_execution_repeat1,
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_execution_repeat1] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '2')) ADVANCE(37);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 26:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(49);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(49);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(72);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(72);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(19);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '?') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(32);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (!sym_bracket_word_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_index_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_bracket_word);
      if (!sym_bracket_word_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 26, .external_lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 26, .external_lex_state = 2},
  [12] = {.lex_state = 26, .external_lex_state = 2},
  [13] = {.lex_state = 26, .external_lex_state = 2},
  [14] = {.lex_state = 26, .external_lex_state = 2},
  [15] = {.lex_state = 26, .external_lex_state = 2},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26, .external_lex_state = 2},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26, .external_lex_state = 2},
  [20] = {.lex_state = 26, .external_lex_state = 2},
  [21] = {.lex_state = 26, .external_lex_state = 2},
  [22] = {.lex_state = 26, .external_lex_state = 2},
  [23] = {.lex_state = 26, .external_lex_state = 2},
  [24] = {.lex_state = 26, .external_lex_state = 2},
  [25] = {.lex_state = 26, .external_lex_state = 2},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26, .external_lex_state = 2},
  [28] = {.lex_state = 26, .external_lex_state = 2},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 47},
  [107] = {.lex_state = 0},
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
    [sym_program] = STATE(107),
    [sym__top_statement] = STATE(3),
    [sym_conditional_execution] = STATE(16),
    [sym_redirection] = STATE(16),
    [sym_pipe] = STATE(16),
    [sym_background] = STATE(16),
    [sym__terminator] = STATE(3),
    [sym__statement] = STATE(16),
    [sym_comment] = STATE(3),
    [sym_variable_expansion] = STATE(15),
    [sym_list_element_access] = STATE(15),
    [sym_bracket_expansion] = STATE(15),
    [sym_double_quote_string] = STATE(15),
    [sym_single_quote_string] = STATE(15),
    [sym_command] = STATE(16),
    [sym_concatenation] = STATE(6),
    [sym__expression] = STATE(6),
    [sym__base_expression] = STATE(15),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_variable_expansion_repeat1] = STATE(88),
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
  [0] = 15,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_escape_sequence,
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(31), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    ACTIONS(25), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(2), 4,
      sym__top_statement,
      sym__terminator,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(15), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(16), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [64] = 15,
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
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    ACTIONS(54), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(2), 4,
      sym__top_statement,
      sym__terminator,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(15), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(16), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [128] = 12,
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
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(5), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(15), 6,
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
  [183] = 12,
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
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(64), 2,
      sym_variable_name,
      sym_word,
    STATE(5), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(15), 6,
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
  [238] = 12,
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
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(15), 6,
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
  [293] = 11,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(15), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(29), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [339] = 4,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(8), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(99), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(101), 17,
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
  [371] = 11,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(15), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(26), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [417] = 11,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 2,
      sym_concatenation,
      sym__expression,
    STATE(15), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(18), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym__statement,
      sym_command,
  [463] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(8), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(106), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(108), 17,
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
  [495] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(11), 2,
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
  [527] = 4,
    ACTIONS(118), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(116), 18,
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
  [558] = 4,
    ACTIONS(125), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(123), 18,
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
  [589] = 4,
    ACTIONS(125), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(129), 18,
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
  [620] = 9,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      aux_sym_redirection_token1,
    ACTIONS(139), 1,
      aux_sym_redirection_token2,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_AMP,
    STATE(77), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(133), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(145), 11,
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
  [660] = 2,
    ACTIONS(147), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(149), 18,
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
  [686] = 6,
    ACTIONS(137), 1,
      aux_sym_redirection_token1,
    ACTIONS(139), 1,
      aux_sym_redirection_token2,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(153), 15,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
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
  [720] = 2,
    ACTIONS(114), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(116), 18,
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
  [746] = 2,
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
  [772] = 2,
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
  [798] = 2,
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
  [824] = 2,
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
  [850] = 2,
    ACTIONS(171), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(173), 18,
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
  [876] = 2,
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
  [902] = 5,
    ACTIONS(137), 1,
      aux_sym_redirection_token1,
    ACTIONS(139), 1,
      aux_sym_redirection_token2,
    STATE(77), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(181), 16,
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
  [934] = 2,
    ACTIONS(183), 3,
      sym__concat,
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
  [960] = 2,
    ACTIONS(187), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(189), 18,
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
  [986] = 6,
    ACTIONS(137), 1,
      aux_sym_redirection_token1,
    ACTIONS(139), 1,
      aux_sym_redirection_token2,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(193), 15,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
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
  [1020] = 2,
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
  [1045] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(201), 18,
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
  [1070] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(205), 18,
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
  [1095] = 11,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(99), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(207), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(100), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(83), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1136] = 10,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(207), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(105), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(83), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1174] = 10,
    ACTIONS(21), 1,
      sym_escape_sequence,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(9), 2,
      sym_variable_name,
      sym_word,
    STATE(30), 2,
      sym_concatenation,
      sym__expression,
    STATE(15), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [1212] = 11,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      sym_escape_sequence,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(98), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(207), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(103), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(83), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1252] = 9,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      sym_escape_sequence,
    STATE(88), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(223), 2,
      sym_variable_name,
      sym_word,
    STATE(19), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [1286] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(229), 12,
      anon_sym_SEMI,
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
  [1305] = 8,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_SQUOTE,
    ACTIONS(233), 1,
      sym_escape_sequence,
    STATE(98), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(231), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(91), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [1335] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(47), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1363] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1391] = 8,
    ACTIONS(245), 1,
      anon_sym_DOLLAR,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    ACTIONS(253), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(248), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1419] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(41), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1447] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1475] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(44), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1503] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(48), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1531] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1559] = 8,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1587] = 3,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    STATE(50), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(110), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1603] = 3,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    STATE(51), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(106), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1619] = 3,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    STATE(51), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(99), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1635] = 6,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_index,
    STATE(94), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(68), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1656] = 5,
    ACTIONS(273), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(278), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(53), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1674] = 4,
    ACTIONS(99), 1,
      sym_escape_sequence,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    STATE(54), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(101), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1690] = 5,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(288), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(53), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1708] = 4,
    ACTIONS(106), 1,
      sym_escape_sequence,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(54), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(108), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1724] = 4,
    ACTIONS(110), 1,
      sym_escape_sequence,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(56), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(112), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1740] = 5,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(294), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(62), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1758] = 1,
    ACTIONS(187), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1768] = 1,
    ACTIONS(147), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1778] = 5,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(288), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(53), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1796] = 5,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(288), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(53), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1814] = 5,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(302), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(55), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1832] = 5,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(306), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(61), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1850] = 1,
    ACTIONS(163), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1859] = 1,
    ACTIONS(159), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1868] = 2,
    ACTIONS(310), 1,
      anon_sym_DOT_DOT,
    ACTIONS(308), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1879] = 1,
    ACTIONS(312), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1888] = 3,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    STATE(69), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(99), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1901] = 3,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    STATE(69), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(106), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1914] = 3,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    STATE(70), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(110), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1927] = 2,
    ACTIONS(187), 1,
      sym_escape_sequence,
    ACTIONS(189), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1937] = 2,
    ACTIONS(147), 1,
      sym_escape_sequence,
    ACTIONS(149), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1947] = 1,
    ACTIONS(317), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1955] = 1,
    ACTIONS(187), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1962] = 1,
    ACTIONS(147), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1969] = 3,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(321), 2,
      anon_sym_or,
      anon_sym_and,
  [1980] = 3,
    ACTIONS(325), 1,
      sym__bracket_concat,
    STATE(86), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1991] = 3,
    ACTIONS(327), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(329), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2002] = 3,
    ACTIONS(331), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(329), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2013] = 3,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(335), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2024] = 3,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(340), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2035] = 3,
    ACTIONS(325), 1,
      sym__bracket_concat,
    STATE(78), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2046] = 3,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(346), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2057] = 3,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_conditional_execution_repeat1,
    ACTIONS(351), 2,
      anon_sym_or,
      anon_sym_and,
  [2068] = 3,
    ACTIONS(355), 1,
      sym__bracket_concat,
    STATE(86), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2079] = 1,
    ACTIONS(353), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2085] = 3,
    ACTIONS(358), 1,
      sym_variable_name,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_variable_expansion_repeat1,
  [2095] = 1,
    ACTIONS(159), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2101] = 3,
    ACTIONS(362), 1,
      sym_variable_name,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      aux_sym_variable_expansion_repeat1,
  [2111] = 1,
    ACTIONS(353), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2117] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_bracket_expansion_repeat1,
  [2127] = 1,
    ACTIONS(171), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2133] = 3,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(371), 1,
      sym_variable_name,
    STATE(90), 1,
      aux_sym_variable_expansion_repeat1,
  [2143] = 1,
    ACTIONS(163), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2149] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_bracket_expansion_repeat1,
  [2159] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_bracket_expansion_repeat1,
  [2169] = 3,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(380), 1,
      sym_variable_name,
    STATE(90), 1,
      aux_sym_variable_expansion_repeat1,
  [2179] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_bracket_expansion_repeat1,
  [2189] = 2,
    STATE(92), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2197] = 3,
    ACTIONS(360), 1,
      anon_sym_DOLLAR,
    ACTIONS(384), 1,
      sym_variable_name,
    STATE(90), 1,
      aux_sym_variable_expansion_repeat1,
  [2207] = 1,
    ACTIONS(155), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2213] = 2,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_bracket_expansion_repeat1,
  [2220] = 2,
    ACTIONS(125), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_concatenation_repeat1,
  [2227] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2232] = 1,
    ACTIONS(386), 1,
      aux_sym_comment_token1,
  [2236] = 1,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 238,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 339,
  [SMALL_STATE(9)] = 371,
  [SMALL_STATE(10)] = 417,
  [SMALL_STATE(11)] = 463,
  [SMALL_STATE(12)] = 495,
  [SMALL_STATE(13)] = 527,
  [SMALL_STATE(14)] = 558,
  [SMALL_STATE(15)] = 589,
  [SMALL_STATE(16)] = 620,
  [SMALL_STATE(17)] = 660,
  [SMALL_STATE(18)] = 686,
  [SMALL_STATE(19)] = 720,
  [SMALL_STATE(20)] = 746,
  [SMALL_STATE(21)] = 772,
  [SMALL_STATE(22)] = 798,
  [SMALL_STATE(23)] = 824,
  [SMALL_STATE(24)] = 850,
  [SMALL_STATE(25)] = 876,
  [SMALL_STATE(26)] = 902,
  [SMALL_STATE(27)] = 934,
  [SMALL_STATE(28)] = 960,
  [SMALL_STATE(29)] = 986,
  [SMALL_STATE(30)] = 1020,
  [SMALL_STATE(31)] = 1045,
  [SMALL_STATE(32)] = 1070,
  [SMALL_STATE(33)] = 1095,
  [SMALL_STATE(34)] = 1136,
  [SMALL_STATE(35)] = 1174,
  [SMALL_STATE(36)] = 1212,
  [SMALL_STATE(37)] = 1252,
  [SMALL_STATE(38)] = 1286,
  [SMALL_STATE(39)] = 1305,
  [SMALL_STATE(40)] = 1335,
  [SMALL_STATE(41)] = 1363,
  [SMALL_STATE(42)] = 1391,
  [SMALL_STATE(43)] = 1419,
  [SMALL_STATE(44)] = 1447,
  [SMALL_STATE(45)] = 1475,
  [SMALL_STATE(46)] = 1503,
  [SMALL_STATE(47)] = 1531,
  [SMALL_STATE(48)] = 1559,
  [SMALL_STATE(49)] = 1587,
  [SMALL_STATE(50)] = 1603,
  [SMALL_STATE(51)] = 1619,
  [SMALL_STATE(52)] = 1635,
  [SMALL_STATE(53)] = 1656,
  [SMALL_STATE(54)] = 1674,
  [SMALL_STATE(55)] = 1690,
  [SMALL_STATE(56)] = 1708,
  [SMALL_STATE(57)] = 1724,
  [SMALL_STATE(58)] = 1740,
  [SMALL_STATE(59)] = 1758,
  [SMALL_STATE(60)] = 1768,
  [SMALL_STATE(61)] = 1778,
  [SMALL_STATE(62)] = 1796,
  [SMALL_STATE(63)] = 1814,
  [SMALL_STATE(64)] = 1832,
  [SMALL_STATE(65)] = 1850,
  [SMALL_STATE(66)] = 1859,
  [SMALL_STATE(67)] = 1868,
  [SMALL_STATE(68)] = 1879,
  [SMALL_STATE(69)] = 1888,
  [SMALL_STATE(70)] = 1901,
  [SMALL_STATE(71)] = 1914,
  [SMALL_STATE(72)] = 1927,
  [SMALL_STATE(73)] = 1937,
  [SMALL_STATE(74)] = 1947,
  [SMALL_STATE(75)] = 1955,
  [SMALL_STATE(76)] = 1962,
  [SMALL_STATE(77)] = 1969,
  [SMALL_STATE(78)] = 1980,
  [SMALL_STATE(79)] = 1991,
  [SMALL_STATE(80)] = 2002,
  [SMALL_STATE(81)] = 2013,
  [SMALL_STATE(82)] = 2024,
  [SMALL_STATE(83)] = 2035,
  [SMALL_STATE(84)] = 2046,
  [SMALL_STATE(85)] = 2057,
  [SMALL_STATE(86)] = 2068,
  [SMALL_STATE(87)] = 2079,
  [SMALL_STATE(88)] = 2085,
  [SMALL_STATE(89)] = 2095,
  [SMALL_STATE(90)] = 2101,
  [SMALL_STATE(91)] = 2111,
  [SMALL_STATE(92)] = 2117,
  [SMALL_STATE(93)] = 2127,
  [SMALL_STATE(94)] = 2133,
  [SMALL_STATE(95)] = 2143,
  [SMALL_STATE(96)] = 2149,
  [SMALL_STATE(97)] = 2159,
  [SMALL_STATE(98)] = 2169,
  [SMALL_STATE(99)] = 2179,
  [SMALL_STATE(100)] = 2189,
  [SMALL_STATE(101)] = 2197,
  [SMALL_STATE(102)] = 2207,
  [SMALL_STATE(103)] = 2213,
  [SMALL_STATE(104)] = 2220,
  [SMALL_STATE(105)] = 2227,
  [SMALL_STATE(106)] = 2232,
  [SMALL_STATE(107)] = 2236,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(106),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(104),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(88),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(64),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(104),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_statement, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_statement, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_execution, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_execution, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(94),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(68),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(58),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(45),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(101),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(53),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(43),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(40),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(81),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_execution_repeat1, 2), SHIFT_REPEAT(85),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_execution_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(39),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(90),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(34),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [388] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
