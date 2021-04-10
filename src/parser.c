#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_LBRACE = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACE = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_double_quote_string_token1 = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_single_quote_string_token1 = 16,
  sym_escape_sequence = 17,
  aux_sym_word_token1 = 18,
  sym_bracket_word = 19,
  sym__concat = 20,
  sym__bracket_concat = 21,
  sym_program = 22,
  sym_comment = 23,
  sym_variable_expansion = 24,
  sym_bracket_expansion = 25,
  sym_double_quote_string = 26,
  sym_single_quote_string = 27,
  sym_command = 28,
  sym_concatenation = 29,
  sym_bracket_concatenation = 30,
  sym__bracket_expression = 31,
  sym__base_bracket_expression = 32,
  sym_word = 33,
  aux_sym__statements_repeat1 = 34,
  aux_sym_variable_expansion_repeat1 = 35,
  aux_sym_bracket_expansion_repeat1 = 36,
  aux_sym_double_quote_string_repeat1 = 37,
  aux_sym_single_quote_string_repeat1 = 38,
  aux_sym_command_repeat1 = 39,
  aux_sym_concatenation_repeat1 = 40,
  aux_sym_bracket_concatenation_repeat1 = 41,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_word_token1] = "word_token1",
  [sym_bracket_word] = "word",
  [sym__concat] = "_concat",
  [sym__bracket_concat] = "_bracket_concat",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_variable_expansion] = "variable_expansion",
  [sym_bracket_expansion] = "bracket_expansion",
  [sym_double_quote_string] = "double_quote_string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_command] = "command",
  [sym_concatenation] = "concatenation",
  [sym_bracket_concatenation] = "concatenation",
  [sym__bracket_expression] = "_bracket_expression",
  [sym__base_bracket_expression] = "_base_bracket_expression",
  [sym_word] = "word",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_variable_expansion_repeat1] = "variable_expansion_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_token1] = aux_sym_double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [sym_bracket_word] = sym_word,
  [sym__concat] = sym__concat,
  [sym__bracket_concat] = sym__bracket_concat,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_variable_expansion] = sym_variable_expansion,
  [sym_bracket_expansion] = sym_bracket_expansion,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_command] = sym_command,
  [sym_concatenation] = sym_concatenation,
  [sym_bracket_concatenation] = sym_concatenation,
  [sym__bracket_expression] = sym__bracket_expression,
  [sym__base_bracket_expression] = sym__base_bracket_expression,
  [sym_word] = sym_word,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_variable_expansion_repeat1] = aux_sym_variable_expansion_repeat1,
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
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
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
  [sym_word] = {
    .visible = true,
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

static inline bool aux_sym_word_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{') ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 13:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '[' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(39);
      END_STATE();
    case 14:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '[' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(39);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '[' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(39);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '&' || '*' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '[' || '^' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(39);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__job_control_background);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      if (!aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (!aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_bracket_word);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 1, .external_lex_state = 3},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 1, .external_lex_state = 3},
  [40] = {.lex_state = 1, .external_lex_state = 3},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 0},
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
    [sym_program] = STATE(84),
    [sym_comment] = STATE(49),
    [sym_variable_expansion] = STATE(2),
    [sym_bracket_expansion] = STATE(2),
    [sym_double_quote_string] = STATE(2),
    [sym_single_quote_string] = STATE(2),
    [sym_command] = STATE(49),
    [sym_concatenation] = STATE(5),
    [sym_word] = STATE(2),
    [aux_sym__statements_repeat1] = STATE(7),
    [aux_sym_variable_expansion_repeat1] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_variable_name] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym_escape_sequence] = ACTIONS(17),
    [aux_sym_word_token1] = ACTIONS(19),
  },
  [2] = {
    [sym_variable_expansion] = STATE(10),
    [sym_bracket_expansion] = STATE(10),
    [sym_double_quote_string] = STATE(10),
    [sym_single_quote_string] = STATE(10),
    [sym_concatenation] = STATE(4),
    [sym_word] = STATE(10),
    [aux_sym_variable_expansion_repeat1] = STATE(77),
    [aux_sym_command_repeat1] = STATE(4),
    [aux_sym_concatenation_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__job_control_background] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_CR] = ACTIONS(23),
    [anon_sym_CR_LF] = ACTIONS(23),
    [sym_variable_name] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_escape_sequence] = ACTIONS(17),
    [aux_sym_word_token1] = ACTIONS(19),
    [sym__concat] = ACTIONS(35),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_variable_name,
    ACTIONS(44), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      sym_escape_sequence,
    ACTIONS(59), 1,
      aux_sym_word_token1,
    STATE(77), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(3), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    ACTIONS(39), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(10), 5,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_word,
  [46] = 12,
    ACTIONS(17), 1,
      sym_escape_sequence,
    ACTIONS(19), 1,
      aux_sym_word_token1,
    ACTIONS(25), 1,
      sym_variable_name,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(3), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    ACTIONS(64), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(10), 5,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_word,
  [92] = 12,
    ACTIONS(17), 1,
      sym_escape_sequence,
    ACTIONS(19), 1,
      aux_sym_word_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_variable_name,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(4), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    ACTIONS(23), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(10), 5,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_word,
  [138] = 13,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      sym_variable_name,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_escape_sequence,
    ACTIONS(87), 1,
      aux_sym_word_token1,
    STATE(5), 1,
      sym_concatenation,
    STATE(6), 1,
      aux_sym__statements_repeat1,
    STATE(77), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(52), 2,
      sym_comment,
      sym_command,
    STATE(2), 5,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_word,
  [183] = 13,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_variable_name,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      sym_escape_sequence,
    ACTIONS(19), 1,
      aux_sym_word_token1,
    STATE(5), 1,
      sym_concatenation,
    STATE(6), 1,
      aux_sym__statements_repeat1,
    STATE(77), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(50), 2,
      sym_comment,
      sym_command,
    STATE(2), 5,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_word,
  [228] = 10,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_escape_sequence,
    STATE(70), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(74), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(90), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(63), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [265] = 10,
    ACTIONS(104), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(79), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(102), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(29), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [302] = 4,
    ACTIONS(35), 1,
      sym__concat,
    STATE(15), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(116), 11,
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
      aux_sym_word_token1,
  [326] = 9,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_escape_sequence,
    STATE(74), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(90), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(80), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(63), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [360] = 10,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_escape_sequence,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(74), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(90), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(81), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(63), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [396] = 9,
    ACTIONS(104), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(102), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(29), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [430] = 4,
    ACTIONS(124), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(120), 2,
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
      aux_sym_word_token1,
  [454] = 4,
    ACTIONS(35), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(129), 11,
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
      aux_sym_word_token1,
  [478] = 2,
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
      aux_sym_word_token1,
  [497] = 2,
    ACTIONS(131), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(133), 11,
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
      aux_sym_word_token1,
  [516] = 2,
    ACTIONS(135), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(137), 11,
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
      aux_sym_word_token1,
  [535] = 2,
    ACTIONS(139), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(141), 11,
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
      aux_sym_word_token1,
  [554] = 2,
    ACTIONS(143), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(145), 11,
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
      aux_sym_word_token1,
  [573] = 2,
    ACTIONS(147), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(149), 11,
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
      aux_sym_word_token1,
  [592] = 2,
    ACTIONS(151), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(153), 11,
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
      aux_sym_word_token1,
  [611] = 2,
    ACTIONS(155), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(157), 11,
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
      aux_sym_word_token1,
  [630] = 2,
    ACTIONS(159), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(161), 11,
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
      aux_sym_word_token1,
  [649] = 2,
    ACTIONS(163), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(165), 11,
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
      aux_sym_word_token1,
  [668] = 9,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_word_token1,
    ACTIONS(167), 1,
      sym_variable_name,
    ACTIONS(169), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(16), 5,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_word,
  [700] = 7,
    ACTIONS(104), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(171), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(34), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [726] = 7,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym_escape_sequence,
    STATE(74), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(175), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(66), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [752] = 4,
    ACTIONS(181), 1,
      sym_escape_sequence,
    ACTIONS(183), 1,
      sym__bracket_concat,
    STATE(30), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(179), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [771] = 4,
    ACTIONS(183), 1,
      sym__bracket_concat,
    ACTIONS(187), 1,
      sym_escape_sequence,
    STATE(31), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(185), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [790] = 4,
    ACTIONS(191), 1,
      sym_escape_sequence,
    ACTIONS(193), 1,
      sym__bracket_concat,
    STATE(31), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(189), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [809] = 2,
    ACTIONS(151), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(153), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [823] = 2,
    ACTIONS(163), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(165), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [837] = 2,
    ACTIONS(191), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(189), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [851] = 2,
    ACTIONS(191), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(189), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [865] = 2,
    ACTIONS(143), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(145), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [879] = 3,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 2,
      sym_variable_name,
      aux_sym_word_token1,
    ACTIONS(198), 6,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [895] = 3,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 2,
      sym_variable_name,
      aux_sym_word_token1,
    ACTIONS(198), 6,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [911] = 2,
    ACTIONS(155), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(157), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [925] = 2,
    ACTIONS(147), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(149), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [939] = 2,
    ACTIONS(200), 2,
      sym_variable_name,
      aux_sym_word_token1,
    ACTIONS(198), 6,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [952] = 5,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(208), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [970] = 5,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(208), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [988] = 5,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(214), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(43), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1006] = 5,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(218), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(42), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1024] = 5,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(225), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1042] = 5,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(230), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(48), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1060] = 5,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(208), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1078] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1089] = 2,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1100] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1111] = 1,
    ACTIONS(244), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1119] = 3,
    ACTIONS(246), 1,
      sym__bracket_concat,
    STATE(54), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1130] = 3,
    ACTIONS(248), 1,
      sym__bracket_concat,
    STATE(54), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1141] = 3,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(253), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1152] = 3,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(258), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1163] = 3,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(262), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1174] = 3,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(266), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1185] = 3,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(270), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1196] = 3,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(258), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1207] = 2,
    ACTIONS(163), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    ACTIONS(165), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [1216] = 3,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(258), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1227] = 3,
    ACTIONS(246), 1,
      sym__bracket_concat,
    STATE(53), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1238] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_bracket_expansion_repeat1,
  [1248] = 1,
    ACTIONS(191), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1254] = 1,
    ACTIONS(191), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1260] = 1,
    ACTIONS(143), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1266] = 1,
    ACTIONS(151), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1272] = 1,
    ACTIONS(163), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1278] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_bracket_expansion_repeat1,
  [1288] = 1,
    ACTIONS(155), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1294] = 1,
    ACTIONS(147), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1300] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_bracket_expansion_repeat1,
  [1310] = 3,
    ACTIONS(287), 1,
      sym_variable_name,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      aux_sym_variable_expansion_repeat1,
  [1320] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_bracket_expansion_repeat1,
  [1330] = 3,
    ACTIONS(293), 1,
      sym_variable_name,
    ACTIONS(295), 1,
      anon_sym_DOLLAR,
    STATE(76), 1,
      aux_sym_variable_expansion_repeat1,
  [1340] = 3,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_variable_name,
    STATE(76), 1,
      aux_sym_variable_expansion_repeat1,
  [1350] = 3,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(300), 1,
      sym_variable_name,
    STATE(76), 1,
      aux_sym_variable_expansion_repeat1,
  [1360] = 3,
    ACTIONS(289), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      sym_variable_name,
    STATE(76), 1,
      aux_sym_variable_expansion_repeat1,
  [1370] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1375] = 2,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_bracket_expansion_repeat1,
  [1382] = 2,
    ACTIONS(35), 1,
      sym__concat,
    STATE(15), 1,
      aux_sym_concatenation_repeat1,
  [1389] = 1,
    ACTIONS(306), 1,
      aux_sym_comment_token1,
  [1393] = 1,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 454,
  [SMALL_STATE(16)] = 478,
  [SMALL_STATE(17)] = 497,
  [SMALL_STATE(18)] = 516,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 554,
  [SMALL_STATE(21)] = 573,
  [SMALL_STATE(22)] = 592,
  [SMALL_STATE(23)] = 611,
  [SMALL_STATE(24)] = 630,
  [SMALL_STATE(25)] = 649,
  [SMALL_STATE(26)] = 668,
  [SMALL_STATE(27)] = 700,
  [SMALL_STATE(28)] = 726,
  [SMALL_STATE(29)] = 752,
  [SMALL_STATE(30)] = 771,
  [SMALL_STATE(31)] = 790,
  [SMALL_STATE(32)] = 809,
  [SMALL_STATE(33)] = 823,
  [SMALL_STATE(34)] = 837,
  [SMALL_STATE(35)] = 851,
  [SMALL_STATE(36)] = 865,
  [SMALL_STATE(37)] = 879,
  [SMALL_STATE(38)] = 895,
  [SMALL_STATE(39)] = 911,
  [SMALL_STATE(40)] = 925,
  [SMALL_STATE(41)] = 939,
  [SMALL_STATE(42)] = 952,
  [SMALL_STATE(43)] = 970,
  [SMALL_STATE(44)] = 988,
  [SMALL_STATE(45)] = 1006,
  [SMALL_STATE(46)] = 1024,
  [SMALL_STATE(47)] = 1042,
  [SMALL_STATE(48)] = 1060,
  [SMALL_STATE(49)] = 1078,
  [SMALL_STATE(50)] = 1089,
  [SMALL_STATE(51)] = 1100,
  [SMALL_STATE(52)] = 1111,
  [SMALL_STATE(53)] = 1119,
  [SMALL_STATE(54)] = 1130,
  [SMALL_STATE(55)] = 1141,
  [SMALL_STATE(56)] = 1152,
  [SMALL_STATE(57)] = 1163,
  [SMALL_STATE(58)] = 1174,
  [SMALL_STATE(59)] = 1185,
  [SMALL_STATE(60)] = 1196,
  [SMALL_STATE(61)] = 1207,
  [SMALL_STATE(62)] = 1216,
  [SMALL_STATE(63)] = 1227,
  [SMALL_STATE(64)] = 1238,
  [SMALL_STATE(65)] = 1248,
  [SMALL_STATE(66)] = 1254,
  [SMALL_STATE(67)] = 1260,
  [SMALL_STATE(68)] = 1266,
  [SMALL_STATE(69)] = 1272,
  [SMALL_STATE(70)] = 1278,
  [SMALL_STATE(71)] = 1288,
  [SMALL_STATE(72)] = 1294,
  [SMALL_STATE(73)] = 1300,
  [SMALL_STATE(74)] = 1310,
  [SMALL_STATE(75)] = 1320,
  [SMALL_STATE(76)] = 1330,
  [SMALL_STATE(77)] = 1340,
  [SMALL_STATE(78)] = 1350,
  [SMALL_STATE(79)] = 1360,
  [SMALL_STATE(80)] = 1370,
  [SMALL_STATE(81)] = 1375,
  [SMALL_STATE(82)] = 1382,
  [SMALL_STATE(83)] = 1389,
  [SMALL_STATE(84)] = 1393,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(77),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(47),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(82),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(83),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(77),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(47),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(58),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(82),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(17),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_expression, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_concatenation, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(27),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(78),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(46),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(28),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(55),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(13),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(76),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [308] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
