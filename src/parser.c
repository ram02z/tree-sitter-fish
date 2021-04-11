#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_DOT_DOT = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LBRACE = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACE = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_double_quote_string_token1 = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_single_quote_string_token1 = 20,
  sym_escape_sequence = 21,
  sym_word = 22,
  sym_bracket_word = 23,
  sym__concat = 24,
  sym__bracket_concat = 25,
  sym_program = 26,
  sym_comment = 27,
  sym_variable_expansion = 28,
  sym_index = 29,
  sym_range = 30,
  sym_list_element_access = 31,
  sym_bracket_expansion = 32,
  sym_double_quote_string = 33,
  sym_single_quote_string = 34,
  sym_command = 35,
  sym_concatenation = 36,
  sym_bracket_concatenation = 37,
  sym__bracket_expression = 38,
  sym__base_bracket_expression = 39,
  aux_sym__statements_repeat1 = 40,
  aux_sym_variable_expansion_repeat1 = 41,
  aux_sym_variable_expansion_repeat2 = 42,
  aux_sym_list_element_access_repeat1 = 43,
  aux_sym_bracket_expansion_repeat1 = 44,
  aux_sym_double_quote_string_repeat1 = 45,
  aux_sym_single_quote_string_repeat1 = 46,
  aux_sym_command_repeat1 = 47,
  aux_sym_concatenation_repeat1 = 48,
  aux_sym_bracket_concatenation_repeat1 = 49,
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
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 16:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(50);
      END_STATE();
    case 17:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(25);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(50);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '^' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(50);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '\\' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(50);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__job_control_background);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(52);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 16, .external_lex_state = 2},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 16, .external_lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 16, .external_lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 16, .external_lex_state = 2},
  [16] = {.lex_state = 16, .external_lex_state = 2},
  [17] = {.lex_state = 16, .external_lex_state = 2},
  [18] = {.lex_state = 16, .external_lex_state = 2},
  [19] = {.lex_state = 16, .external_lex_state = 2},
  [20] = {.lex_state = 16, .external_lex_state = 2},
  [21] = {.lex_state = 16, .external_lex_state = 2},
  [22] = {.lex_state = 16, .external_lex_state = 2},
  [23] = {.lex_state = 16, .external_lex_state = 2},
  [24] = {.lex_state = 16, .external_lex_state = 2},
  [25] = {.lex_state = 16, .external_lex_state = 2},
  [26] = {.lex_state = 16, .external_lex_state = 2},
  [27] = {.lex_state = 16, .external_lex_state = 2},
  [28] = {.lex_state = 16, .external_lex_state = 2},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 1, .external_lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 3},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 1, .external_lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 1, .external_lex_state = 3},
  [45] = {.lex_state = 1, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 27},
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
    [sym_program] = STATE(119),
    [sym_comment] = STATE(75),
    [sym_variable_expansion] = STATE(2),
    [sym_list_element_access] = STATE(2),
    [sym_bracket_expansion] = STATE(2),
    [sym_double_quote_string] = STATE(2),
    [sym_single_quote_string] = STATE(2),
    [sym_command] = STATE(75),
    [sym_concatenation] = STATE(3),
    [aux_sym__statements_repeat1] = STATE(6),
    [aux_sym_variable_expansion_repeat1] = STATE(113),
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
    STATE(113), 1,
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
    STATE(113), 1,
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
  [100] = 12,
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
    STATE(113), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(43), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
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
    STATE(113), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(25), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
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
    STATE(3), 1,
      sym_concatenation,
    STATE(7), 1,
      aux_sym__statements_repeat1,
    STATE(113), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(7), 2,
      sym_variable_name,
      sym_word,
    STATE(77), 2,
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
    STATE(3), 1,
      sym_concatenation,
    STATE(7), 1,
      aux_sym__statements_repeat1,
    STATE(113), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(71), 2,
      sym_variable_name,
      sym_word,
    STATE(80), 2,
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
    STATE(103), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(107), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(92), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(37), 5,
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
    STATE(105), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(111), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(106), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(118), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(95), 5,
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
    STATE(111), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(106), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(118), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(95), 5,
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
    STATE(99), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(111), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(106), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(116), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(95), 5,
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
    STATE(103), 1,
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
    STATE(37), 5,
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
  [657] = 2,
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
  [677] = 2,
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
  [697] = 2,
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
  [717] = 2,
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
  [737] = 2,
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
  [757] = 2,
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
  [777] = 2,
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
  [797] = 2,
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
    STATE(113), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(188), 2,
      sym_variable_name,
      sym_word,
    STATE(19), 5,
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
    STATE(103), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(192), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(39), 5,
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
    STATE(111), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(196), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(110), 5,
      sym_variable_expansion,
      sym_list_element_access,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [930] = 4,
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
  [951] = 4,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    STATE(32), 2,
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
  [993] = 4,
    ACTIONS(205), 1,
      sym_escape_sequence,
    ACTIONS(207), 1,
      sym__bracket_concat,
    STATE(35), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(203), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1013] = 4,
    ACTIONS(212), 1,
      sym_escape_sequence,
    ACTIONS(214), 1,
      sym__bracket_concat,
    STATE(35), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(210), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1033] = 4,
    ACTIONS(214), 1,
      sym__bracket_concat,
    ACTIONS(218), 1,
      sym_escape_sequence,
    STATE(36), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(216), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1053] = 2,
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
  [1068] = 2,
    ACTIONS(205), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(203), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1083] = 2,
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
  [1098] = 2,
    ACTIONS(205), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(203), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1113] = 2,
    ACTIONS(172), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(174), 8,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [1128] = 3,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(222), 7,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [1145] = 2,
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
  [1160] = 2,
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
  [1175] = 2,
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
  [1190] = 3,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(222), 7,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [1207] = 2,
    ACTIONS(224), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(222), 7,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [1221] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(54), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1244] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(57), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1267] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(58), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1290] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(59), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1313] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(56), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1336] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(58), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1359] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(51), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1382] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(58), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1405] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(58), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1428] = 7,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(253), 1,
      aux_sym_index_token1,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(58), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1451] = 7,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(91), 1,
      sym_index,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(58), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
  [1474] = 5,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(264), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(66), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1492] = 5,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(268), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(62), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1510] = 5,
    ACTIONS(270), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(275), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(62), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1528] = 5,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(268), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(62), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1546] = 4,
    ACTIONS(129), 1,
      sym_escape_sequence,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    STATE(67), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(131), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1562] = 3,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    STATE(68), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(133), 4,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [1576] = 5,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(268), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(62), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1594] = 4,
    ACTIONS(120), 1,
      sym_escape_sequence,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(67), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(122), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1610] = 3,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    STATE(72), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(129), 4,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [1624] = 5,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(291), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(63), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1642] = 5,
    ACTIONS(260), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(295), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(61), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1660] = 4,
    ACTIONS(133), 1,
      sym_escape_sequence,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    STATE(64), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(135), 3,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1676] = 3,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(72), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(120), 4,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [1690] = 3,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    STATE(73), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(120), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1703] = 3,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    STATE(78), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(133), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1716] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1727] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1738] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1749] = 3,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    STATE(73), 2,
      sym_list_element_access,
      aux_sym_variable_expansion_repeat2,
    ACTIONS(129), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1762] = 2,
    ACTIONS(152), 1,
      sym_escape_sequence,
    ACTIONS(154), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1772] = 1,
    ACTIONS(315), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1780] = 2,
    ACTIONS(184), 1,
      sym_escape_sequence,
    ACTIONS(186), 4,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
  [1790] = 5,
    ACTIONS(228), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 1,
      aux_sym_index_token1,
    STATE(89), 1,
      sym_variable_expansion,
    STATE(104), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(114), 1,
      sym_index,
  [1806] = 1,
    ACTIONS(184), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1814] = 1,
    ACTIONS(152), 5,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1822] = 3,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(319), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1833] = 3,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(323), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1844] = 3,
    ACTIONS(325), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(327), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1855] = 3,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(323), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1866] = 1,
    ACTIONS(331), 4,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [1873] = 3,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(335), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1884] = 2,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(338), 3,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_RBRACK,
  [1893] = 3,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    STATE(90), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(323), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1904] = 3,
    ACTIONS(344), 1,
      sym__bracket_concat,
    STATE(93), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1915] = 3,
    ACTIONS(347), 1,
      sym__bracket_concat,
    STATE(93), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1926] = 3,
    ACTIONS(347), 1,
      sym__bracket_concat,
    STATE(94), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1937] = 1,
    ACTIONS(152), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1944] = 1,
    ACTIONS(184), 4,
      sym__bracket_concat,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1951] = 3,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(351), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1962] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_bracket_expansion_repeat1,
  [1972] = 1,
    ACTIONS(172), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1978] = 3,
    ACTIONS(357), 1,
      sym_variable_name,
    ACTIONS(359), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
  [1988] = 1,
    ACTIONS(168), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1994] = 3,
    ACTIONS(362), 1,
      sym_variable_name,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
  [2004] = 3,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(366), 1,
      sym_variable_name,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
  [2014] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_bracket_expansion_repeat1,
  [2024] = 3,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(370), 1,
      sym_variable_name,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
  [2034] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_bracket_expansion_repeat1,
  [2044] = 3,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_bracket_expansion_repeat1,
  [2054] = 1,
    ACTIONS(180), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2060] = 1,
    ACTIONS(205), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2066] = 3,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(379), 1,
      sym_variable_name,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
  [2076] = 1,
    ACTIONS(205), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2082] = 3,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    ACTIONS(381), 1,
      sym_variable_name,
    STATE(101), 1,
      aux_sym_variable_expansion_repeat1,
  [2092] = 1,
    ACTIONS(383), 3,
      anon_sym_DOLLAR,
      aux_sym_index_token1,
      anon_sym_RBRACK,
  [2098] = 1,
    ACTIONS(164), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2104] = 2,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_bracket_expansion_repeat1,
  [2111] = 2,
    ACTIONS(37), 1,
      sym__concat,
    STATE(18), 1,
      aux_sym_concatenation_repeat1,
  [2118] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2123] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [2127] = 1,
    ACTIONS(389), 1,
      aux_sym_comment_token1,
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
  [SMALL_STATE(36)] = 1013,
  [SMALL_STATE(37)] = 1033,
  [SMALL_STATE(38)] = 1053,
  [SMALL_STATE(39)] = 1068,
  [SMALL_STATE(40)] = 1083,
  [SMALL_STATE(41)] = 1098,
  [SMALL_STATE(42)] = 1113,
  [SMALL_STATE(43)] = 1128,
  [SMALL_STATE(44)] = 1145,
  [SMALL_STATE(45)] = 1160,
  [SMALL_STATE(46)] = 1175,
  [SMALL_STATE(47)] = 1190,
  [SMALL_STATE(48)] = 1207,
  [SMALL_STATE(49)] = 1221,
  [SMALL_STATE(50)] = 1244,
  [SMALL_STATE(51)] = 1267,
  [SMALL_STATE(52)] = 1290,
  [SMALL_STATE(53)] = 1313,
  [SMALL_STATE(54)] = 1336,
  [SMALL_STATE(55)] = 1359,
  [SMALL_STATE(56)] = 1382,
  [SMALL_STATE(57)] = 1405,
  [SMALL_STATE(58)] = 1428,
  [SMALL_STATE(59)] = 1451,
  [SMALL_STATE(60)] = 1474,
  [SMALL_STATE(61)] = 1492,
  [SMALL_STATE(62)] = 1510,
  [SMALL_STATE(63)] = 1528,
  [SMALL_STATE(64)] = 1546,
  [SMALL_STATE(65)] = 1562,
  [SMALL_STATE(66)] = 1576,
  [SMALL_STATE(67)] = 1594,
  [SMALL_STATE(68)] = 1610,
  [SMALL_STATE(69)] = 1624,
  [SMALL_STATE(70)] = 1642,
  [SMALL_STATE(71)] = 1660,
  [SMALL_STATE(72)] = 1676,
  [SMALL_STATE(73)] = 1690,
  [SMALL_STATE(74)] = 1703,
  [SMALL_STATE(75)] = 1716,
  [SMALL_STATE(76)] = 1727,
  [SMALL_STATE(77)] = 1738,
  [SMALL_STATE(78)] = 1749,
  [SMALL_STATE(79)] = 1762,
  [SMALL_STATE(80)] = 1772,
  [SMALL_STATE(81)] = 1780,
  [SMALL_STATE(82)] = 1790,
  [SMALL_STATE(83)] = 1806,
  [SMALL_STATE(84)] = 1814,
  [SMALL_STATE(85)] = 1822,
  [SMALL_STATE(86)] = 1833,
  [SMALL_STATE(87)] = 1844,
  [SMALL_STATE(88)] = 1855,
  [SMALL_STATE(89)] = 1866,
  [SMALL_STATE(90)] = 1873,
  [SMALL_STATE(91)] = 1884,
  [SMALL_STATE(92)] = 1893,
  [SMALL_STATE(93)] = 1904,
  [SMALL_STATE(94)] = 1915,
  [SMALL_STATE(95)] = 1926,
  [SMALL_STATE(96)] = 1937,
  [SMALL_STATE(97)] = 1944,
  [SMALL_STATE(98)] = 1951,
  [SMALL_STATE(99)] = 1962,
  [SMALL_STATE(100)] = 1972,
  [SMALL_STATE(101)] = 1978,
  [SMALL_STATE(102)] = 1988,
  [SMALL_STATE(103)] = 1994,
  [SMALL_STATE(104)] = 2004,
  [SMALL_STATE(105)] = 2014,
  [SMALL_STATE(106)] = 2024,
  [SMALL_STATE(107)] = 2034,
  [SMALL_STATE(108)] = 2044,
  [SMALL_STATE(109)] = 2054,
  [SMALL_STATE(110)] = 2060,
  [SMALL_STATE(111)] = 2066,
  [SMALL_STATE(112)] = 2076,
  [SMALL_STATE(113)] = 2082,
  [SMALL_STATE(114)] = 2092,
  [SMALL_STATE(115)] = 2098,
  [SMALL_STATE(116)] = 2104,
  [SMALL_STATE(117)] = 2111,
  [SMALL_STATE(118)] = 2118,
  [SMALL_STATE(119)] = 2123,
  [SMALL_STATE(120)] = 2127,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(113),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(50),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(69),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(87),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(117),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(120),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(113),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(50),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(69),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(87),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(117),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(50),
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
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(53),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(30),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_concatenation, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_expression, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(104),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(89),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(106),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(62),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(55),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(49),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat2, 2), SHIFT_REPEAT(52),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(90),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(31),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(101),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(14),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
