#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_PIPE_PIPE = 1,
  aux_sym_conditional_execution_token1 = 2,
  anon_sym_AMP_AMP = 3,
  aux_sym_conditional_execution_token2 = 4,
  aux_sym_redirection_token1 = 5,
  aux_sym_redirection_token2 = 6,
  anon_sym_PIPE = 7,
  anon_sym_AMP = 8,
  anon_sym_SEMI = 9,
  anon_sym_LF = 10,
  anon_sym_CR = 11,
  anon_sym_CR_LF = 12,
  anon_sym_begin = 13,
  anon_sym_end = 14,
  anon_sym_POUND = 15,
  aux_sym_comment_token1 = 16,
  sym_variable_name = 17,
  anon_sym_DOLLAR = 18,
  aux_sym_index_token1 = 19,
  aux_sym_index_token2 = 20,
  anon_sym_DOT_DOT = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_LBRACE = 24,
  anon_sym_COMMA = 25,
  anon_sym_RBRACE = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_double_quote_string_token1 = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_single_quote_string_token1 = 30,
  sym_escape_sequence = 31,
  sym_word = 32,
  sym_bracket_word = 33,
  sym__concat = 34,
  sym__bracket_concat = 35,
  sym_program = 36,
  sym_conditional_execution = 37,
  sym_redirection = 38,
  sym_pipe = 39,
  sym_background = 40,
  sym_begin = 41,
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
  aux_sym_variable_expansion_repeat1 = 58,
  aux_sym_variable_expansion_repeat2 = 59,
  aux_sym_list_element_access_repeat1 = 60,
  aux_sym_bracket_expansion_repeat1 = 61,
  aux_sym_double_quote_string_repeat1 = 62,
  aux_sym_single_quote_string_repeat1 = 63,
  aux_sym_command_repeat1 = 64,
  aux_sym_concatenation_repeat1 = 65,
  aux_sym_bracket_concatenation_repeat1 = 66,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE_PIPE] = "||",
  [aux_sym_conditional_execution_token1] = "conditional_execution_token1",
  [anon_sym_AMP_AMP] = "&&",
  [aux_sym_conditional_execution_token2] = "conditional_execution_token2",
  [aux_sym_redirection_token1] = "redirection_token1",
  [aux_sym_redirection_token2] = "redirection_token2",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
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
  [sym_conditional_execution] = "conditional_execution",
  [sym_redirection] = "redirection",
  [sym_pipe] = "pipe",
  [sym_background] = "background",
  [sym_begin] = "begin",
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
  [aux_sym_conditional_execution_token1] = aux_sym_conditional_execution_token1,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [aux_sym_conditional_execution_token2] = aux_sym_conditional_execution_token2,
  [aux_sym_redirection_token1] = aux_sym_redirection_token1,
  [aux_sym_redirection_token2] = aux_sym_redirection_token2,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
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
  [sym_conditional_execution] = sym_conditional_execution,
  [sym_redirection] = sym_redirection,
  [sym_pipe] = sym_pipe,
  [sym_background] = sym_background,
  [sym_begin] = sym_begin,
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
  [aux_sym_conditional_execution_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_conditional_execution_token2] = {
    .visible = false,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [sym_begin] = {
    .visible = true,
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

static inline bool sym_word_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '}') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(63);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(63);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '2')) ADVANCE(44);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 34:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(63);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(98);
      END_STATE();
    case 35:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(63);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < '\\' || '^' < lookahead) &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(98);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(98);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ';') ADVANCE(52);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead == '}') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_conditional_execution_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_conditional_execution_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(27);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '?') ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '?') ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(40);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(42);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '>') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(98);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'g') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (!sym_bracket_word_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_index_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bracket_word);
      if (!sym_bracket_word_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 34, .external_lex_state = 2},
  [17] = {.lex_state = 34, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 34, .external_lex_state = 2},
  [21] = {.lex_state = 34, .external_lex_state = 2},
  [22] = {.lex_state = 34, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 34, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 34, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 34, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 34, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 34, .external_lex_state = 2},
  [45] = {.lex_state = 34, .external_lex_state = 2},
  [46] = {.lex_state = 34, .external_lex_state = 2},
  [47] = {.lex_state = 34, .external_lex_state = 2},
  [48] = {.lex_state = 34, .external_lex_state = 2},
  [49] = {.lex_state = 34, .external_lex_state = 2},
  [50] = {.lex_state = 34, .external_lex_state = 2},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 15},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 60},
  [157] = {.lex_state = 60},
  [158] = {.lex_state = 0},
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
    [aux_sym_conditional_execution_token1] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [aux_sym_conditional_execution_token2] = ACTIONS(1),
    [aux_sym_redirection_token1] = ACTIONS(1),
    [aux_sym_redirection_token2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(1),
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
    [sym_program] = STATE(158),
    [sym_conditional_execution] = STATE(58),
    [sym_redirection] = STATE(58),
    [sym_pipe] = STATE(58),
    [sym_background] = STATE(58),
    [sym_begin] = STATE(58),
    [sym_comment] = STATE(11),
    [sym_variable_expansion] = STATE(21),
    [sym_list_element_access] = STATE(21),
    [sym_bracket_expansion] = STATE(21),
    [sym_double_quote_string] = STATE(21),
    [sym_single_quote_string] = STATE(21),
    [sym_command] = STATE(58),
    [sym_concatenation] = STATE(2),
    [sym__expression] = STATE(2),
    [sym__base_expression] = STATE(21),
    [aux_sym_program_repeat1] = STATE(11),
    [aux_sym_variable_expansion_repeat1] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(5),
    [anon_sym_CR_LF] = ACTIONS(5),
    [anon_sym_begin] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_variable_name] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_escape_sequence] = ACTIONS(23),
    [sym_word] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(11), 2,
      sym_variable_name,
      sym_word,
    STATE(5), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(27), 14,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
  [58] = 12,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
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
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(33), 2,
      sym_variable_name,
      sym_word,
    STATE(3), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(31), 14,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
  [116] = 11,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(6), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(27), 15,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
  [172] = 12,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(11), 2,
      sym_variable_name,
      sym_word,
    STATE(3), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(70), 14,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
  [230] = 11,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(7), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(70), 15,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
  [286] = 11,
    ACTIONS(75), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      sym_escape_sequence,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(72), 2,
      sym_variable_name,
      sym_word,
    STATE(7), 3,
      sym_concatenation,
      sym__expression,
      aux_sym_command_repeat1,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    ACTIONS(31), 15,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
  [342] = 16,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_begin,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_escape_sequence,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(104), 2,
      sym_variable_name,
      sym_word,
    STATE(2), 2,
      sym_concatenation,
      sym__expression,
    STATE(8), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(95), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(58), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [407] = 16,
    ACTIONS(128), 1,
      anon_sym_begin,
    ACTIONS(131), 1,
      anon_sym_end,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_DOLLAR,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      sym_escape_sequence,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(136), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      sym__expression,
    STATE(9), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(125), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(52), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [472] = 16,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(159), 1,
      anon_sym_begin,
    ACTIONS(161), 1,
      anon_sym_end,
    ACTIONS(163), 1,
      anon_sym_POUND,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      sym__expression,
    STATE(12), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(157), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(52), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [537] = 16,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(11), 2,
      sym_variable_name,
      sym_word,
    STATE(2), 2,
      sym_concatenation,
      sym__expression,
    STATE(8), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(167), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(58), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [602] = 16,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(159), 1,
      anon_sym_begin,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      sym__expression,
    STATE(9), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(169), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(52), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [667] = 16,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(159), 1,
      anon_sym_begin,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      sym__expression,
    STATE(14), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(173), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(52), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [732] = 16,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(159), 1,
      anon_sym_begin,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_end,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      sym__expression,
    STATE(9), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(169), 4,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(52), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [797] = 4,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 2,
      sym__concat,
      sym_escape_sequence,
    STATE(18), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(179), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [832] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(20), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(183), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(185), 20,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [867] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(16), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(181), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(179), 20,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [902] = 4,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(183), 2,
      sym__concat,
      sym_escape_sequence,
    STATE(19), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(185), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [937] = 4,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 2,
      sym__concat,
      sym_escape_sequence,
    STATE(19), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(187), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [972] = 4,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(20), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(192), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(187), 20,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1007] = 4,
    ACTIONS(201), 1,
      sym__concat,
    STATE(24), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(199), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1041] = 4,
    ACTIONS(207), 1,
      sym__concat,
    STATE(22), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(205), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1075] = 4,
    ACTIONS(197), 1,
      sym_escape_sequence,
    ACTIONS(210), 1,
      sym__concat,
    STATE(26), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(199), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1109] = 4,
    ACTIONS(201), 1,
      sym__concat,
    STATE(22), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(214), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1143] = 4,
    ACTIONS(203), 1,
      sym_escape_sequence,
    ACTIONS(216), 1,
      sym__concat,
    STATE(25), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(205), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1177] = 4,
    ACTIONS(210), 1,
      sym__concat,
    ACTIONS(212), 1,
      sym_escape_sequence,
    STATE(25), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(214), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1211] = 2,
    ACTIONS(221), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(219), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1240] = 2,
    ACTIONS(203), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(205), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1269] = 2,
    ACTIONS(225), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(223), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1298] = 2,
    ACTIONS(229), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(227), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1327] = 2,
    ACTIONS(203), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(205), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1356] = 2,
    ACTIONS(233), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(231), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1385] = 2,
    ACTIONS(221), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(219), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1414] = 2,
    ACTIONS(237), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(235), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1443] = 2,
    ACTIONS(239), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(241), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1472] = 2,
    ACTIONS(245), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(243), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1501] = 2,
    ACTIONS(249), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(247), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1530] = 12,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(251), 1,
      anon_sym_DOLLAR,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(11), 2,
      sym_variable_name,
      sym_word,
    STATE(2), 2,
      sym_concatenation,
      sym__expression,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(51), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [1579] = 12,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(159), 1,
      anon_sym_begin,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      sym__expression,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(53), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [1628] = 12,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(159), 1,
      anon_sym_begin,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      sym__expression,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(55), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [1677] = 12,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(251), 1,
      anon_sym_DOLLAR,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(11), 2,
      sym_variable_name,
      sym_word,
    STATE(2), 2,
      sym_concatenation,
      sym__expression,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
    STATE(62), 6,
      sym_conditional_execution,
      sym_redirection,
      sym_pipe,
      sym_background,
      sym_begin,
      sym_command,
  [1726] = 2,
    ACTIONS(239), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(241), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1755] = 2,
    ACTIONS(273), 2,
      sym__concat,
      sym_escape_sequence,
    ACTIONS(271), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1784] = 2,
    ACTIONS(273), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(271), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1813] = 2,
    ACTIONS(225), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(223), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1842] = 2,
    ACTIONS(249), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(247), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1871] = 2,
    ACTIONS(233), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(231), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1900] = 2,
    ACTIONS(245), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(243), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1929] = 2,
    ACTIONS(229), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(227), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1958] = 2,
    ACTIONS(237), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(235), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [1987] = 7,
    ACTIONS(279), 1,
      aux_sym_redirection_token1,
    ACTIONS(281), 1,
      aux_sym_redirection_token2,
    ACTIONS(283), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_AMP,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(277), 4,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
    ACTIONS(287), 13,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2025] = 7,
    ACTIONS(291), 1,
      aux_sym_redirection_token1,
    ACTIONS(293), 1,
      aux_sym_redirection_token2,
    ACTIONS(295), 1,
      anon_sym_PIPE,
    ACTIONS(297), 1,
      anon_sym_AMP,
    ACTIONS(301), 1,
      sym_escape_sequence,
    ACTIONS(289), 4,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
    ACTIONS(299), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2063] = 4,
    ACTIONS(291), 1,
      aux_sym_redirection_token1,
    ACTIONS(293), 1,
      aux_sym_redirection_token2,
    ACTIONS(305), 1,
      sym_escape_sequence,
    ACTIONS(303), 20,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2095] = 2,
    ACTIONS(309), 1,
      sym_escape_sequence,
    ACTIONS(307), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2123] = 7,
    ACTIONS(275), 1,
      sym_escape_sequence,
    ACTIONS(291), 1,
      aux_sym_redirection_token1,
    ACTIONS(293), 1,
      aux_sym_redirection_token2,
    ACTIONS(295), 1,
      anon_sym_PIPE,
    ACTIONS(297), 1,
      anon_sym_AMP,
    ACTIONS(289), 4,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
    ACTIONS(287), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2161] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(313), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2189] = 2,
    ACTIONS(317), 1,
      sym_escape_sequence,
    ACTIONS(315), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2217] = 7,
    ACTIONS(279), 1,
      aux_sym_redirection_token1,
    ACTIONS(281), 1,
      aux_sym_redirection_token2,
    ACTIONS(283), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_AMP,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(277), 4,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
    ACTIONS(299), 13,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2255] = 2,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(321), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2283] = 2,
    ACTIONS(325), 1,
      sym_escape_sequence,
    ACTIONS(323), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2311] = 2,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(307), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2339] = 4,
    ACTIONS(279), 1,
      aux_sym_redirection_token1,
    ACTIONS(281), 1,
      aux_sym_redirection_token2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(303), 19,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2371] = 2,
    ACTIONS(311), 1,
      sym_escape_sequence,
    ACTIONS(313), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2399] = 2,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(323), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2427] = 2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(315), 21,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2455] = 2,
    ACTIONS(319), 1,
      sym_escape_sequence,
    ACTIONS(321), 22,
      anon_sym_PIPE_PIPE,
      aux_sym_conditional_execution_token1,
      anon_sym_AMP_AMP,
      aux_sym_conditional_execution_token2,
      aux_sym_redirection_token1,
      aux_sym_redirection_token2,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2483] = 11,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym_escape_sequence,
    STATE(130), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(138), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(327), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(132), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(126), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [2524] = 11,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym_escape_sequence,
    STATE(130), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(133), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(327), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(146), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(126), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [2565] = 11,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym_escape_sequence,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(136), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(327), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(152), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(126), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [2605] = 11,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym_escape_sequence,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(137), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(327), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(154), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(126), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [2645] = 10,
    ACTIONS(23), 1,
      sym_escape_sequence,
    ACTIONS(251), 1,
      anon_sym_DOLLAR,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(11), 2,
      sym_variable_name,
      sym_word,
    STATE(61), 2,
      sym_concatenation,
      sym__expression,
    STATE(21), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [2683] = 10,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(54), 2,
      sym_variable_name,
      sym_word,
    STATE(54), 2,
      sym_concatenation,
      sym__expression,
    STATE(23), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [2721] = 10,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      sym_escape_sequence,
    STATE(130), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(327), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(151), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(126), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [2759] = 9,
    ACTIONS(261), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(347), 1,
      sym_escape_sequence,
    STATE(134), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(345), 2,
      sym_variable_name,
      sym_word,
    STATE(31), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [2793] = 9,
    ACTIONS(251), 1,
      anon_sym_DOLLAR,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      sym_escape_sequence,
    STATE(140), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(349), 2,
      sym_variable_name,
      sym_word,
    STATE(28), 6,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_expression,
  [2827] = 2,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(355), 13,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2847] = 2,
    ACTIONS(353), 1,
      sym_escape_sequence,
    ACTIONS(355), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_begin,
      anon_sym_end,
      anon_sym_POUND,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [2867] = 8,
    ACTIONS(329), 1,
      anon_sym_DOLLAR,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    ACTIONS(359), 1,
      sym_escape_sequence,
    STATE(130), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(357), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(147), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [2897] = 8,
    ACTIONS(361), 1,
      anon_sym_DOLLAR,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(364), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(79), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [2925] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(88), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [2953] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(89), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [2981] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(79), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3009] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(79), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3037] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(82), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3065] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(79), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3093] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(83), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3121] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(85), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3149] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(79), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3177] = 8,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(79), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3205] = 3,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    STATE(90), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(192), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3221] = 3,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    STATE(92), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(181), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3237] = 3,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    STATE(90), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(183), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3253] = 6,
    ACTIONS(372), 1,
      anon_sym_DOLLAR,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_index,
    STATE(143), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(374), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(110), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [3274] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(407), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3292] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(411), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(107), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3310] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(415), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(99), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3328] = 5,
    ACTIONS(417), 1,
      anon_sym_DOLLAR,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(422), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3346] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(407), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3364] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(407), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3382] = 4,
    ACTIONS(181), 1,
      sym_escape_sequence,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    STATE(104), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(179), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [3398] = 1,
    ACTIONS(249), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3408] = 4,
    ACTIONS(192), 1,
      sym_escape_sequence,
    ACTIONS(431), 1,
      anon_sym_LBRACK,
    STATE(102), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(187), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [3424] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(436), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(94), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3442] = 4,
    ACTIONS(183), 1,
      sym_escape_sequence,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    STATE(102), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(185), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [3458] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(440), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(98), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3476] = 1,
    ACTIONS(273), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3486] = 5,
    ACTIONS(403), 1,
      anon_sym_DOLLAR,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(407), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(97), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3504] = 1,
    ACTIONS(237), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3513] = 2,
    ACTIONS(446), 1,
      anon_sym_DOT_DOT,
    ACTIONS(444), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3524] = 1,
    ACTIONS(448), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3533] = 1,
    ACTIONS(221), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3542] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    STATE(113), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(181), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3555] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACK,
    STATE(114), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(183), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3568] = 3,
    ACTIONS(450), 1,
      anon_sym_LBRACK,
    STATE(114), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(192), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3581] = 2,
    ACTIONS(249), 1,
      sym_escape_sequence,
    ACTIONS(247), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [3591] = 2,
    ACTIONS(273), 1,
      sym_escape_sequence,
    ACTIONS(271), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [3601] = 1,
    ACTIONS(453), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [3609] = 1,
    ACTIONS(273), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3616] = 3,
    ACTIONS(455), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(457), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [3627] = 3,
    ACTIONS(461), 1,
      sym__bracket_concat,
    STATE(124), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3638] = 1,
    ACTIONS(249), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3645] = 3,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(465), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [3656] = 3,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(470), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [3667] = 3,
    ACTIONS(474), 1,
      sym__bracket_concat,
    STATE(124), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3678] = 3,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(479), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [3689] = 3,
    ACTIONS(461), 1,
      sym__bracket_concat,
    STATE(120), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(481), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3700] = 3,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(470), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [3711] = 3,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(487), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [3722] = 3,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(470), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [3733] = 3,
    ACTIONS(491), 1,
      sym_variable_name,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      aux_sym_variable_expansion_repeat1,
  [3743] = 1,
    ACTIONS(237), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3749] = 2,
    STATE(139), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3757] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_bracket_expansion_repeat1,
  [3767] = 3,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(501), 1,
      sym_variable_name,
    STATE(141), 1,
      aux_sym_variable_expansion_repeat1,
  [3777] = 1,
    ACTIONS(239), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3783] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_bracket_expansion_repeat1,
  [3793] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_bracket_expansion_repeat1,
  [3803] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_bracket_expansion_repeat1,
  [3813] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_bracket_expansion_repeat1,
  [3823] = 3,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(511), 1,
      sym_variable_name,
    STATE(141), 1,
      aux_sym_variable_expansion_repeat1,
  [3833] = 3,
    ACTIONS(513), 1,
      sym_variable_name,
    ACTIONS(515), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      aux_sym_variable_expansion_repeat1,
  [3843] = 1,
    ACTIONS(221), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3849] = 3,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(518), 1,
      sym_variable_name,
    STATE(141), 1,
      aux_sym_variable_expansion_repeat1,
  [3859] = 3,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_bracket_expansion_repeat1,
  [3869] = 3,
    ACTIONS(493), 1,
      anon_sym_DOLLAR,
    ACTIONS(523), 1,
      sym_variable_name,
    STATE(141), 1,
      aux_sym_variable_expansion_repeat1,
  [3879] = 2,
    STATE(150), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3887] = 1,
    ACTIONS(472), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3893] = 1,
    ACTIONS(472), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3899] = 1,
    ACTIONS(233), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3905] = 3,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_bracket_expansion_repeat1,
  [3915] = 1,
    ACTIONS(495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3920] = 2,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_bracket_expansion_repeat1,
  [3927] = 2,
    ACTIONS(210), 1,
      sym__concat,
    STATE(26), 1,
      aux_sym_concatenation_repeat1,
  [3934] = 2,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_bracket_expansion_repeat1,
  [3941] = 2,
    ACTIONS(201), 1,
      sym__concat,
    STATE(24), 1,
      aux_sym_concatenation_repeat1,
  [3948] = 1,
    ACTIONS(527), 1,
      aux_sym_comment_token1,
  [3952] = 1,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
  [3956] = 1,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 407,
  [SMALL_STATE(10)] = 472,
  [SMALL_STATE(11)] = 537,
  [SMALL_STATE(12)] = 602,
  [SMALL_STATE(13)] = 667,
  [SMALL_STATE(14)] = 732,
  [SMALL_STATE(15)] = 797,
  [SMALL_STATE(16)] = 832,
  [SMALL_STATE(17)] = 867,
  [SMALL_STATE(18)] = 902,
  [SMALL_STATE(19)] = 937,
  [SMALL_STATE(20)] = 972,
  [SMALL_STATE(21)] = 1007,
  [SMALL_STATE(22)] = 1041,
  [SMALL_STATE(23)] = 1075,
  [SMALL_STATE(24)] = 1109,
  [SMALL_STATE(25)] = 1143,
  [SMALL_STATE(26)] = 1177,
  [SMALL_STATE(27)] = 1211,
  [SMALL_STATE(28)] = 1240,
  [SMALL_STATE(29)] = 1269,
  [SMALL_STATE(30)] = 1298,
  [SMALL_STATE(31)] = 1327,
  [SMALL_STATE(32)] = 1356,
  [SMALL_STATE(33)] = 1385,
  [SMALL_STATE(34)] = 1414,
  [SMALL_STATE(35)] = 1443,
  [SMALL_STATE(36)] = 1472,
  [SMALL_STATE(37)] = 1501,
  [SMALL_STATE(38)] = 1530,
  [SMALL_STATE(39)] = 1579,
  [SMALL_STATE(40)] = 1628,
  [SMALL_STATE(41)] = 1677,
  [SMALL_STATE(42)] = 1726,
  [SMALL_STATE(43)] = 1755,
  [SMALL_STATE(44)] = 1784,
  [SMALL_STATE(45)] = 1813,
  [SMALL_STATE(46)] = 1842,
  [SMALL_STATE(47)] = 1871,
  [SMALL_STATE(48)] = 1900,
  [SMALL_STATE(49)] = 1929,
  [SMALL_STATE(50)] = 1958,
  [SMALL_STATE(51)] = 1987,
  [SMALL_STATE(52)] = 2025,
  [SMALL_STATE(53)] = 2063,
  [SMALL_STATE(54)] = 2095,
  [SMALL_STATE(55)] = 2123,
  [SMALL_STATE(56)] = 2161,
  [SMALL_STATE(57)] = 2189,
  [SMALL_STATE(58)] = 2217,
  [SMALL_STATE(59)] = 2255,
  [SMALL_STATE(60)] = 2283,
  [SMALL_STATE(61)] = 2311,
  [SMALL_STATE(62)] = 2339,
  [SMALL_STATE(63)] = 2371,
  [SMALL_STATE(64)] = 2399,
  [SMALL_STATE(65)] = 2427,
  [SMALL_STATE(66)] = 2455,
  [SMALL_STATE(67)] = 2483,
  [SMALL_STATE(68)] = 2524,
  [SMALL_STATE(69)] = 2565,
  [SMALL_STATE(70)] = 2605,
  [SMALL_STATE(71)] = 2645,
  [SMALL_STATE(72)] = 2683,
  [SMALL_STATE(73)] = 2721,
  [SMALL_STATE(74)] = 2759,
  [SMALL_STATE(75)] = 2793,
  [SMALL_STATE(76)] = 2827,
  [SMALL_STATE(77)] = 2847,
  [SMALL_STATE(78)] = 2867,
  [SMALL_STATE(79)] = 2897,
  [SMALL_STATE(80)] = 2925,
  [SMALL_STATE(81)] = 2953,
  [SMALL_STATE(82)] = 2981,
  [SMALL_STATE(83)] = 3009,
  [SMALL_STATE(84)] = 3037,
  [SMALL_STATE(85)] = 3065,
  [SMALL_STATE(86)] = 3093,
  [SMALL_STATE(87)] = 3121,
  [SMALL_STATE(88)] = 3149,
  [SMALL_STATE(89)] = 3177,
  [SMALL_STATE(90)] = 3205,
  [SMALL_STATE(91)] = 3221,
  [SMALL_STATE(92)] = 3237,
  [SMALL_STATE(93)] = 3253,
  [SMALL_STATE(94)] = 3274,
  [SMALL_STATE(95)] = 3292,
  [SMALL_STATE(96)] = 3310,
  [SMALL_STATE(97)] = 3328,
  [SMALL_STATE(98)] = 3346,
  [SMALL_STATE(99)] = 3364,
  [SMALL_STATE(100)] = 3382,
  [SMALL_STATE(101)] = 3398,
  [SMALL_STATE(102)] = 3408,
  [SMALL_STATE(103)] = 3424,
  [SMALL_STATE(104)] = 3442,
  [SMALL_STATE(105)] = 3458,
  [SMALL_STATE(106)] = 3476,
  [SMALL_STATE(107)] = 3486,
  [SMALL_STATE(108)] = 3504,
  [SMALL_STATE(109)] = 3513,
  [SMALL_STATE(110)] = 3524,
  [SMALL_STATE(111)] = 3533,
  [SMALL_STATE(112)] = 3542,
  [SMALL_STATE(113)] = 3555,
  [SMALL_STATE(114)] = 3568,
  [SMALL_STATE(115)] = 3581,
  [SMALL_STATE(116)] = 3591,
  [SMALL_STATE(117)] = 3601,
  [SMALL_STATE(118)] = 3609,
  [SMALL_STATE(119)] = 3616,
  [SMALL_STATE(120)] = 3627,
  [SMALL_STATE(121)] = 3638,
  [SMALL_STATE(122)] = 3645,
  [SMALL_STATE(123)] = 3656,
  [SMALL_STATE(124)] = 3667,
  [SMALL_STATE(125)] = 3678,
  [SMALL_STATE(126)] = 3689,
  [SMALL_STATE(127)] = 3700,
  [SMALL_STATE(128)] = 3711,
  [SMALL_STATE(129)] = 3722,
  [SMALL_STATE(130)] = 3733,
  [SMALL_STATE(131)] = 3743,
  [SMALL_STATE(132)] = 3749,
  [SMALL_STATE(133)] = 3757,
  [SMALL_STATE(134)] = 3767,
  [SMALL_STATE(135)] = 3777,
  [SMALL_STATE(136)] = 3783,
  [SMALL_STATE(137)] = 3793,
  [SMALL_STATE(138)] = 3803,
  [SMALL_STATE(139)] = 3813,
  [SMALL_STATE(140)] = 3823,
  [SMALL_STATE(141)] = 3833,
  [SMALL_STATE(142)] = 3843,
  [SMALL_STATE(143)] = 3849,
  [SMALL_STATE(144)] = 3859,
  [SMALL_STATE(145)] = 3869,
  [SMALL_STATE(146)] = 3879,
  [SMALL_STATE(147)] = 3887,
  [SMALL_STATE(148)] = 3893,
  [SMALL_STATE(149)] = 3899,
  [SMALL_STATE(150)] = 3905,
  [SMALL_STATE(151)] = 3915,
  [SMALL_STATE(152)] = 3920,
  [SMALL_STATE(153)] = 3927,
  [SMALL_STATE(154)] = 3934,
  [SMALL_STATE(155)] = 3941,
  [SMALL_STATE(156)] = 3948,
  [SMALL_STATE(157)] = 3952,
  [SMALL_STATE(158)] = 3956,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(140),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(86),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(69),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(103),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(128),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(155),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(134),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(81),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(70),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(96),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(119),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(153),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(157),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(140),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(103),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(128),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(134),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(70),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(96),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(153),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(81),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(86),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(75),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(74),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_execution, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(143),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(110),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(95),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(84),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(145),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(97),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(87),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(80),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(122),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(78),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(141),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(73),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [531] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
