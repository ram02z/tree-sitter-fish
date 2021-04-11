#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym__job_control_background = 1,
  anon_sym_SEMI = 2,
  anon_sym_LF = 3,
  anon_sym_CR = 4,
  anon_sym_CR_LF = 5,
  anon_sym_POUND = 6,
  aux_sym_comment_token1 = 7,
  sym_variable_name = 8,
  anon_sym_DOLLAR = 9,
  aux_sym_index_token1 = 10,
  aux_sym_index_token2 = 11,
  anon_sym_DOT_DOT = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LBRACE = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACE = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_double_quote_string_token1 = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_single_quote_string_token1 = 21,
  sym_escape_sequence = 22,
  sym_word = 23,
  sym_bracket_word = 24,
  sym__concat = 25,
  sym__bracket_concat = 26,
  sym_program = 27,
  sym_comment = 28,
  sym_variable_expansion = 29,
  sym_index = 30,
  sym_range = 31,
  sym_list_element_access = 32,
  sym_bracket_expansion = 33,
  sym_double_quote_string = 34,
  sym_single_quote_string = 35,
  sym_command = 36,
  sym_concatenation = 37,
  sym_bracket_concatenation = 38,
  sym__bracket_expression = 39,
  sym__base_bracket_expression = 40,
  aux_sym__statements_repeat1 = 41,
  aux_sym_variable_expansion_repeat1 = 42,
  aux_sym_variable_expansion_repeat2 = 43,
  aux_sym_list_element_access_repeat1 = 44,
  aux_sym_bracket_expansion_repeat1 = 45,
  aux_sym_double_quote_string_repeat1 = 46,
  aux_sym_single_quote_string_repeat1 = 47,
  aux_sym_command_repeat1 = 48,
  aux_sym_concatenation_repeat1 = 49,
  aux_sym_bracket_concatenation_repeat1 = 50,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__job_control_background] = "_job_control_background",
  [anon_sym_SEMI] = ";",
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
  [sym_bracket_concatenation] = "concatenation",
  [sym__bracket_expression] = "_bracket_expression",
  [sym__base_bracket_expression] = "_base_bracket_expression",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
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
  [sym__job_control_background] = sym__job_control_background,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_bracket_concatenation] = sym_concatenation,
  [sym__bracket_expression] = sym__bracket_expression,
  [sym__base_bracket_expression] = sym__base_bracket_expression,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
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
  [sym__job_control_background] = {
    .visible = false,
    .named = true,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 19:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(54);
      END_STATE();
    case 20:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(54);
      END_STATE();
    case 21:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '&') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(54);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(54);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__job_control_background);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_index_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 19, .external_lex_state = 2},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 19, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 19, .external_lex_state = 2},
  [26] = {.lex_state = 19, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 3},
  [50] = {.lex_state = 1, .external_lex_state = 3},
  [51] = {.lex_state = 1, .external_lex_state = 3},
  [52] = {.lex_state = 1, .external_lex_state = 3},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 1, .external_lex_state = 3},
  [56] = {.lex_state = 1, .external_lex_state = 3},
  [57] = {.lex_state = 1, .external_lex_state = 3},
  [58] = {.lex_state = 1, .external_lex_state = 3},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 0},
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
    [sym__job_control_background] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_program] = STATE(124),
    [sym_comment] = STATE(79),
    [sym_variable_expansion] = STATE(2),
    [sym_list_element_access] = STATE(2),
    [sym_bracket_expansion] = STATE(2),
    [sym_double_quote_string] = STATE(2),
    [sym_single_quote_string] = STATE(2),
    [sym_command] = STATE(79),
    [sym_concatenation] = STATE(4),
    [aux_sym__statements_repeat1] = STATE(6),
    [aux_sym_variable_expansion_repeat1] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_variable_name] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_escape_sequence] = ACTIONS(19),
    [sym_word] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(19), 1,
      sym_escape_sequence,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_concatenation_repeat1,
    STATE(115), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(25), 2,
      sym_variable_name,
      sym_word,
    STATE(5), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    ACTIONS(23), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(17), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [53] = 12,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      sym_escape_sequence,
    STATE(115), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(43), 2,
      sym_variable_name,
      sym_word,
    STATE(3), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    ACTIONS(41), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(17), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [100] = 12,
    ACTIONS(19), 1,
      sym_escape_sequence,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(115), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(25), 2,
      sym_variable_name,
      sym_word,
    STATE(5), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    ACTIONS(23), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(17), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [147] = 12,
    ACTIONS(19), 1,
      sym_escape_sequence,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(25), 2,
      sym_variable_name,
      sym_word,
    STATE(3), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    ACTIONS(66), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(17), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [194] = 13,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_escape_sequence,
    STATE(4), 1,
      sym_concatenation,
    STATE(7), 1,
      aux_sym__statements_repeat1,
    STATE(115), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(7), 2,
      sym_variable_name,
      sym_word,
    STATE(78), 2,
      sym_comment,
      sym_command,
    STATE(2), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [240] = 13,
    ACTIONS(68), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      sym_escape_sequence,
    STATE(4), 1,
      sym_concatenation,
    STATE(7), 1,
      aux_sym__statements_repeat1,
    STATE(115), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(71), 2,
      sym_variable_name,
      sym_word,
    STATE(91), 2,
      sym_comment,
      sym_command,
    STATE(2), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [286] = 11,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      sym_escape_sequence,
    STATE(105), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(118), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(92), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(41), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [327] = 11,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      sym_escape_sequence,
    STATE(109), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(110), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(106), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(97), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [368] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    STATE(10), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(120), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(122), 11,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [394] = 10,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(106), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(97), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [432] = 11,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(118), 1,
      sym_escape_sequence,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(110), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(106), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(121), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(97), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [472] = 4,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(10), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(129), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(131), 11,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [498] = 10,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      sym_escape_sequence,
    STATE(118), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(92), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(41), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [536] = 4,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(133), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(135), 11,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [562] = 4,
    ACTIONS(141), 1,
      sym__concat,
    STATE(16), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(139), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [587] = 4,
    ACTIONS(37), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(146), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [612] = 4,
    ACTIONS(37), 1,
      sym__concat,
    STATE(16), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(150), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [637] = 2,
    ACTIONS(152), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(154), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [657] = 2,
    ACTIONS(156), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(158), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [677] = 2,
    ACTIONS(160), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(162), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [697] = 2,
    ACTIONS(164), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(166), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [717] = 2,
    ACTIONS(168), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(170), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [737] = 2,
    ACTIONS(172), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(174), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [757] = 2,
    ACTIONS(176), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(178), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [777] = 2,
    ACTIONS(180), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(182), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [797] = 2,
    ACTIONS(137), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(139), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [817] = 2,
    ACTIONS(184), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(186), 12,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_word,
  [837] = 9,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      sym_escape_sequence,
    STATE(115), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(188), 2,
      sym_variable_name,
      sym_word,
    STATE(27), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [870] = 8,
    ACTIONS(94), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      sym_escape_sequence,
    STATE(118), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(192), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(55), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [900] = 8,
    ACTIONS(108), 1,
      anon_sym_DOLLAR,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(196), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(119), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [930] = 4,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    STATE(33), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(135), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [951] = 4,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    STATE(34), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(131), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [972] = 4,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    STATE(34), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(122), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [993] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(48), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1021] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(45), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1049] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1077] = 4,
    ACTIONS(217), 1,
      sym_escape_sequence,
    ACTIONS(219), 1,
      sym__bracket_concat,
    STATE(38), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(215), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1097] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(43), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1125] = 4,
    ACTIONS(226), 1,
      sym_escape_sequence,
    ACTIONS(228), 1,
      sym__bracket_concat,
    STATE(38), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(224), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1145] = 4,
    ACTIONS(228), 1,
      sym__bracket_concat,
    ACTIONS(232), 1,
      sym_escape_sequence,
    STATE(40), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(230), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1165] = 8,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(237), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1193] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1221] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(46), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1249] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1277] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1305] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(37), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1333] = 8,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(42), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1361] = 2,
    ACTIONS(168), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(170), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1376] = 2,
    ACTIONS(184), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(186), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1391] = 2,
    ACTIONS(180), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(182), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1406] = 2,
    ACTIONS(152), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(154), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1421] = 3,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(259), 7,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [1438] = 3,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(259), 7,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [1455] = 2,
    ACTIONS(217), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(215), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1470] = 2,
    ACTIONS(217), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(215), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1485] = 2,
    ACTIONS(176), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(178), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1500] = 2,
    ACTIONS(164), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(166), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1515] = 3,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(61), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(133), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1531] = 3,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    STATE(60), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(120), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1547] = 3,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(60), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(129), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1563] = 2,
    ACTIONS(261), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(259), 7,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [1577] = 6,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_index,
    STATE(107), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_index_token1,
      aux_sym_index_token2,
    STATE(83), 2,
      sym_variable_expansion,
      sym_double_quote_string,
  [1598] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(274), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(74), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1616] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(278), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(70), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1634] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(282), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(77), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1652] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(286), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1670] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(282), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(77), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1688] = 1,
    ACTIONS(152), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1698] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(282), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(77), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1716] = 4,
    ACTIONS(133), 1,
      sym_escape_sequence,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    STATE(75), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(135), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1732] = 1,
    ACTIONS(184), 7,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1742] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(296), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(66), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1760] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(282), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(77), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1778] = 4,
    ACTIONS(129), 1,
      sym_escape_sequence,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    STATE(76), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(131), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1794] = 4,
    ACTIONS(120), 1,
      sym_escape_sequence,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    STATE(76), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(122), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1810] = 5,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(308), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(77), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1828] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1839] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1850] = 1,
    ACTIONS(176), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1859] = 1,
    ACTIONS(168), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1868] = 2,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1879] = 1,
    ACTIONS(321), 6,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1888] = 3,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    STATE(86), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(133), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1901] = 2,
    ACTIONS(327), 1,
      anon_sym_DOT_DOT,
    ACTIONS(325), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1912] = 3,
    ACTIONS(323), 1,
      anon_sym_LBRACK,
    STATE(87), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(129), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1925] = 3,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    STATE(87), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(120), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1938] = 2,
    ACTIONS(152), 1,
      sym_escape_sequence,
    ACTIONS(154), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1948] = 2,
    ACTIONS(184), 1,
      sym_escape_sequence,
    ACTIONS(186), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1958] = 1,
    ACTIONS(332), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      aux_sym_index_token2,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1966] = 1,
    ACTIONS(334), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1974] = 3,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    STATE(95), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(338), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1985] = 3,
    ACTIONS(340), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(342), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1996] = 3,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(346), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2007] = 3,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(342), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2018] = 1,
    ACTIONS(184), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2025] = 3,
    ACTIONS(350), 1,
      sym__bracket_concat,
    STATE(102), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2036] = 3,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(342), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2047] = 3,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(356), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2058] = 3,
    ACTIONS(359), 1,
      sym__bracket_concat,
    STATE(100), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2069] = 1,
    ACTIONS(152), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2076] = 3,
    ACTIONS(350), 1,
      sym__bracket_concat,
    STATE(100), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2087] = 3,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(364), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [2098] = 3,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_bracket_expansion_repeat1,
  [2108] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_bracket_expansion_repeat1,
  [2118] = 3,
    ACTIONS(375), 1,
      sym_variable_name,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
  [2128] = 3,
    ACTIONS(380), 1,
      sym_variable_name,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
  [2138] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_bracket_expansion_repeat1,
  [2148] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_bracket_expansion_repeat1,
  [2158] = 3,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(388), 1,
      sym_variable_name,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
  [2168] = 1,
    ACTIONS(168), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2174] = 1,
    ACTIONS(180), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2180] = 1,
    ACTIONS(217), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2186] = 1,
    ACTIONS(164), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2192] = 3,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(390), 1,
      sym_variable_name,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
  [2202] = 3,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(392), 1,
      sym_variable_name,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
  [2212] = 1,
    ACTIONS(176), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2218] = 3,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(394), 1,
      sym_variable_name,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
  [2228] = 1,
    ACTIONS(217), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2234] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2239] = 2,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_bracket_expansion_repeat1,
  [2246] = 2,
    ACTIONS(37), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_concatenation_repeat1,
  [2253] = 1,
    ACTIONS(398), 1,
      aux_sym_comment_token1,
  [2257] = 1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 286,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 394,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 498,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 587,
  [SMALL_STATE(18)] = 612,
  [SMALL_STATE(19)] = 637,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 677,
  [SMALL_STATE(22)] = 697,
  [SMALL_STATE(23)] = 717,
  [SMALL_STATE(24)] = 737,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 797,
  [SMALL_STATE(28)] = 817,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 870,
  [SMALL_STATE(31)] = 900,
  [SMALL_STATE(32)] = 930,
  [SMALL_STATE(33)] = 951,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 993,
  [SMALL_STATE(36)] = 1021,
  [SMALL_STATE(37)] = 1049,
  [SMALL_STATE(38)] = 1077,
  [SMALL_STATE(39)] = 1097,
  [SMALL_STATE(40)] = 1125,
  [SMALL_STATE(41)] = 1145,
  [SMALL_STATE(42)] = 1165,
  [SMALL_STATE(43)] = 1193,
  [SMALL_STATE(44)] = 1221,
  [SMALL_STATE(45)] = 1249,
  [SMALL_STATE(46)] = 1277,
  [SMALL_STATE(47)] = 1305,
  [SMALL_STATE(48)] = 1333,
  [SMALL_STATE(49)] = 1361,
  [SMALL_STATE(50)] = 1376,
  [SMALL_STATE(51)] = 1391,
  [SMALL_STATE(52)] = 1406,
  [SMALL_STATE(53)] = 1421,
  [SMALL_STATE(54)] = 1438,
  [SMALL_STATE(55)] = 1455,
  [SMALL_STATE(56)] = 1470,
  [SMALL_STATE(57)] = 1485,
  [SMALL_STATE(58)] = 1500,
  [SMALL_STATE(59)] = 1515,
  [SMALL_STATE(60)] = 1531,
  [SMALL_STATE(61)] = 1547,
  [SMALL_STATE(62)] = 1563,
  [SMALL_STATE(63)] = 1577,
  [SMALL_STATE(64)] = 1598,
  [SMALL_STATE(65)] = 1616,
  [SMALL_STATE(66)] = 1634,
  [SMALL_STATE(67)] = 1652,
  [SMALL_STATE(68)] = 1670,
  [SMALL_STATE(69)] = 1688,
  [SMALL_STATE(70)] = 1698,
  [SMALL_STATE(71)] = 1716,
  [SMALL_STATE(72)] = 1732,
  [SMALL_STATE(73)] = 1742,
  [SMALL_STATE(74)] = 1760,
  [SMALL_STATE(75)] = 1778,
  [SMALL_STATE(76)] = 1794,
  [SMALL_STATE(77)] = 1810,
  [SMALL_STATE(78)] = 1828,
  [SMALL_STATE(79)] = 1839,
  [SMALL_STATE(80)] = 1850,
  [SMALL_STATE(81)] = 1859,
  [SMALL_STATE(82)] = 1868,
  [SMALL_STATE(83)] = 1879,
  [SMALL_STATE(84)] = 1888,
  [SMALL_STATE(85)] = 1901,
  [SMALL_STATE(86)] = 1912,
  [SMALL_STATE(87)] = 1925,
  [SMALL_STATE(88)] = 1938,
  [SMALL_STATE(89)] = 1948,
  [SMALL_STATE(90)] = 1958,
  [SMALL_STATE(91)] = 1966,
  [SMALL_STATE(92)] = 1974,
  [SMALL_STATE(93)] = 1985,
  [SMALL_STATE(94)] = 1996,
  [SMALL_STATE(95)] = 2007,
  [SMALL_STATE(96)] = 2018,
  [SMALL_STATE(97)] = 2025,
  [SMALL_STATE(98)] = 2036,
  [SMALL_STATE(99)] = 2047,
  [SMALL_STATE(100)] = 2058,
  [SMALL_STATE(101)] = 2069,
  [SMALL_STATE(102)] = 2076,
  [SMALL_STATE(103)] = 2087,
  [SMALL_STATE(104)] = 2098,
  [SMALL_STATE(105)] = 2108,
  [SMALL_STATE(106)] = 2118,
  [SMALL_STATE(107)] = 2128,
  [SMALL_STATE(108)] = 2138,
  [SMALL_STATE(109)] = 2148,
  [SMALL_STATE(110)] = 2158,
  [SMALL_STATE(111)] = 2168,
  [SMALL_STATE(112)] = 2174,
  [SMALL_STATE(113)] = 2180,
  [SMALL_STATE(114)] = 2186,
  [SMALL_STATE(115)] = 2192,
  [SMALL_STATE(116)] = 2202,
  [SMALL_STATE(117)] = 2212,
  [SMALL_STATE(118)] = 2218,
  [SMALL_STATE(119)] = 2228,
  [SMALL_STATE(120)] = 2234,
  [SMALL_STATE(121)] = 2239,
  [SMALL_STATE(122)] = 2246,
  [SMALL_STATE(123)] = 2253,
  [SMALL_STATE(124)] = 2257,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(115),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(44),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(64),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(94),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(122),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(123),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(115),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(44),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(64),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(94),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(122),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(44),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(36),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(30),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_concatenation, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_expression, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(107),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(83),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(67),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(39),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(47),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(116),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(77),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(35),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(99),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(31),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(14),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(106),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [400] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
