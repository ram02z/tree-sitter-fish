#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 41
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
  sym_word = 18,
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
  aux_sym__statements_repeat1 = 33,
  aux_sym_variable_expansion_repeat1 = 34,
  aux_sym_bracket_expansion_repeat1 = 35,
  aux_sym_double_quote_string_repeat1 = 36,
  aux_sym_single_quote_string_repeat1 = 37,
  aux_sym_command_repeat1 = 38,
  aux_sym_concatenation_repeat1 = 39,
  aux_sym_bracket_concatenation_repeat1 = 40,
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
  [sym_word] = "word",
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
  [sym_word] = sym_word,
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
      if (!sym_word_character_set_1(lookahead)) ADVANCE(39);
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
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(39);
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
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 13, .external_lex_state = 2},
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
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1, .external_lex_state = 3},
  [29] = {.lex_state = 1, .external_lex_state = 3},
  [30] = {.lex_state = 1, .external_lex_state = 3},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 1, .external_lex_state = 3},
  [33] = {.lex_state = 1, .external_lex_state = 3},
  [34] = {.lex_state = 1, .external_lex_state = 3},
  [35] = {.lex_state = 1, .external_lex_state = 3},
  [36] = {.lex_state = 1, .external_lex_state = 3},
  [37] = {.lex_state = 1, .external_lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 3},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 0},
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
    [sym_program] = STATE(83),
    [sym_comment] = STATE(50),
    [sym_variable_expansion] = STATE(2),
    [sym_bracket_expansion] = STATE(2),
    [sym_double_quote_string] = STATE(2),
    [sym_single_quote_string] = STATE(2),
    [sym_command] = STATE(50),
    [sym_concatenation] = STATE(5),
    [aux_sym__statements_repeat1] = STATE(7),
    [aux_sym_variable_expansion_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_variable_name] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [sym_escape_sequence] = ACTIONS(17),
    [sym_word] = ACTIONS(7),
  },
  [2] = {
    [sym_variable_expansion] = STATE(15),
    [sym_bracket_expansion] = STATE(15),
    [sym_double_quote_string] = STATE(15),
    [sym_single_quote_string] = STATE(15),
    [sym_concatenation] = STATE(3),
    [aux_sym_variable_expansion_repeat1] = STATE(70),
    [aux_sym_command_repeat1] = STATE(3),
    [aux_sym_concatenation_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__job_control_background] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [anon_sym_CR] = ACTIONS(21),
    [anon_sym_CR_LF] = ACTIONS(21),
    [sym_variable_name] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_escape_sequence] = ACTIONS(17),
    [sym_word] = ACTIONS(23),
    [sym__concat] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(17), 1,
      sym_escape_sequence,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(23), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    STATE(15), 4,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
    ACTIONS(37), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [43] = 11,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      sym_escape_sequence,
    STATE(70), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(43), 2,
      sym_variable_name,
      sym_word,
    STATE(4), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    STATE(15), 4,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
    ACTIONS(41), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [86] = 11,
    ACTIONS(17), 1,
      sym_escape_sequence,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(23), 2,
      sym_variable_name,
      sym_word,
    STATE(3), 2,
      sym_concatenation,
      aux_sym_command_repeat1,
    STATE(15), 4,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
    ACTIONS(21), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [129] = 12,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      sym_escape_sequence,
    STATE(5), 1,
      sym_concatenation,
    STATE(6), 1,
      aux_sym__statements_repeat1,
    STATE(70), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(64), 2,
      sym_variable_name,
      sym_word,
    STATE(51), 2,
      sym_comment,
      sym_command,
    STATE(2), 4,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [171] = 12,
    ACTIONS(5), 1,
      anon_sym_POUND,
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
    STATE(5), 1,
      sym_concatenation,
    STATE(6), 1,
      aux_sym__statements_repeat1,
    STATE(70), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(7), 2,
      sym_variable_name,
      sym_word,
    STATE(48), 2,
      sym_comment,
      sym_command,
    STATE(2), 4,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [213] = 10,
    ACTIONS(84), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(77), 1,
      aux_sym_bracket_expansion_repeat1,
    ACTIONS(82), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(79), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(52), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [250] = 10,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      sym_escape_sequence,
    STATE(66), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(94), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(30), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [287] = 10,
    ACTIONS(84), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      sym_escape_sequence,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_bracket_expansion_repeat1,
    STATE(72), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(82), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(80), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(52), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [323] = 9,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      sym_escape_sequence,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(94), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(30), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [357] = 9,
    ACTIONS(84), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(82), 2,
      sym_variable_name,
      sym_bracket_word,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(79), 2,
      sym_bracket_concatenation,
      sym__bracket_expression,
    STATE(52), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [391] = 4,
    ACTIONS(33), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(110), 11,
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
  [415] = 4,
    ACTIONS(116), 1,
      sym__concat,
    STATE(14), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(114), 11,
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
  [439] = 4,
    ACTIONS(33), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(121), 11,
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
  [463] = 2,
    ACTIONS(123), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(125), 11,
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
  [482] = 2,
    ACTIONS(112), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(114), 11,
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
  [501] = 2,
    ACTIONS(127), 3,
      sym__concat,
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
      sym_word,
  [520] = 2,
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
      sym_word,
  [539] = 2,
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
      sym_word,
  [558] = 2,
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
      sym_word,
  [577] = 2,
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
      sym_word,
  [596] = 2,
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
      sym_word,
  [615] = 2,
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
      sym_word,
  [634] = 8,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      sym_escape_sequence,
    STATE(70), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(155), 2,
      sym_variable_name,
      sym_word,
    STATE(17), 4,
      sym_variable_expansion,
      sym_bracket_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [663] = 7,
    ACTIONS(84), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(161), 1,
      sym_escape_sequence,
    STATE(72), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(159), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(71), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [689] = 7,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      sym_escape_sequence,
    STATE(78), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(163), 2,
      sym_variable_name,
      sym_bracket_word,
    STATE(35), 4,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym__base_bracket_expression,
  [715] = 4,
    ACTIONS(169), 1,
      sym_escape_sequence,
    ACTIONS(171), 1,
      sym__bracket_concat,
    STATE(29), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(167), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [734] = 4,
    ACTIONS(175), 1,
      sym_escape_sequence,
    ACTIONS(177), 1,
      sym__bracket_concat,
    STATE(29), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(173), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [753] = 4,
    ACTIONS(171), 1,
      sym__bracket_concat,
    ACTIONS(182), 1,
      sym_escape_sequence,
    STATE(28), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(180), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [772] = 3,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(186), 6,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [788] = 2,
    ACTIONS(135), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(137), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [802] = 2,
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
  [816] = 2,
    ACTIONS(131), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(133), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [830] = 2,
    ACTIONS(175), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(173), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [844] = 2,
    ACTIONS(139), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(141), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [858] = 2,
    ACTIONS(175), 2,
      sym__bracket_concat,
      sym_escape_sequence,
    ACTIONS(173), 7,
      sym_variable_name,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_bracket_word,
  [872] = 2,
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
  [886] = 3,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(186), 6,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [902] = 2,
    ACTIONS(188), 2,
      sym_variable_name,
      sym_word,
    ACTIONS(186), 6,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [915] = 5,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(196), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(43), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [933] = 5,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(196), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(43), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [951] = 5,
    ACTIONS(200), 1,
      anon_sym_DOLLAR,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(205), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(43), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [969] = 5,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(210), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(45), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [987] = 5,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(196), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(43), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1005] = 5,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(216), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(41), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1023] = 5,
    ACTIONS(192), 1,
      anon_sym_DOLLAR,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(220), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(42), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [1041] = 2,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1052] = 2,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1063] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1074] = 1,
    ACTIONS(232), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1082] = 3,
    ACTIONS(234), 1,
      sym__bracket_concat,
    STATE(53), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1093] = 3,
    ACTIONS(234), 1,
      sym__bracket_concat,
    STATE(60), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1104] = 3,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(238), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1115] = 3,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(242), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1126] = 3,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(246), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1137] = 3,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(251), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1148] = 3,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(238), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1159] = 3,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(257), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1170] = 3,
    ACTIONS(259), 1,
      sym__bracket_concat,
    STATE(60), 1,
      aux_sym_bracket_concatenation_repeat1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1181] = 3,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(238), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [1192] = 2,
    ACTIONS(151), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    ACTIONS(153), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [1201] = 1,
    ACTIONS(175), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1207] = 1,
    ACTIONS(139), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1213] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_bracket_expansion_repeat1,
  [1223] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_bracket_expansion_repeat1,
  [1233] = 3,
    ACTIONS(273), 1,
      sym_variable_name,
    ACTIONS(275), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      aux_sym_variable_expansion_repeat1,
  [1243] = 1,
    ACTIONS(131), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1249] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_bracket_expansion_repeat1,
  [1259] = 3,
    ACTIONS(280), 1,
      sym_variable_name,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    STATE(67), 1,
      aux_sym_variable_expansion_repeat1,
  [1269] = 1,
    ACTIONS(175), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1275] = 3,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(284), 1,
      sym_variable_name,
    STATE(67), 1,
      aux_sym_variable_expansion_repeat1,
  [1285] = 1,
    ACTIONS(151), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1291] = 1,
    ACTIONS(143), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1297] = 3,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(286), 1,
      sym_variable_name,
    STATE(67), 1,
      aux_sym_variable_expansion_repeat1,
  [1307] = 1,
    ACTIONS(135), 3,
      sym__bracket_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1313] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_bracket_expansion_repeat1,
  [1323] = 3,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      sym_variable_name,
    STATE(67), 1,
      aux_sym_variable_expansion_repeat1,
  [1333] = 1,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1338] = 2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_bracket_expansion_repeat1,
  [1345] = 2,
    ACTIONS(33), 1,
      sym__concat,
    STATE(13), 1,
      aux_sym_concatenation_repeat1,
  [1352] = 1,
    ACTIONS(294), 1,
      aux_sym_comment_token1,
  [1356] = 1,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 323,
  [SMALL_STATE(12)] = 357,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 415,
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 463,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 501,
  [SMALL_STATE(19)] = 520,
  [SMALL_STATE(20)] = 539,
  [SMALL_STATE(21)] = 558,
  [SMALL_STATE(22)] = 577,
  [SMALL_STATE(23)] = 596,
  [SMALL_STATE(24)] = 615,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 663,
  [SMALL_STATE(27)] = 689,
  [SMALL_STATE(28)] = 715,
  [SMALL_STATE(29)] = 734,
  [SMALL_STATE(30)] = 753,
  [SMALL_STATE(31)] = 772,
  [SMALL_STATE(32)] = 788,
  [SMALL_STATE(33)] = 802,
  [SMALL_STATE(34)] = 816,
  [SMALL_STATE(35)] = 830,
  [SMALL_STATE(36)] = 844,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 872,
  [SMALL_STATE(39)] = 886,
  [SMALL_STATE(40)] = 902,
  [SMALL_STATE(41)] = 915,
  [SMALL_STATE(42)] = 933,
  [SMALL_STATE(43)] = 951,
  [SMALL_STATE(44)] = 969,
  [SMALL_STATE(45)] = 987,
  [SMALL_STATE(46)] = 1005,
  [SMALL_STATE(47)] = 1023,
  [SMALL_STATE(48)] = 1041,
  [SMALL_STATE(49)] = 1052,
  [SMALL_STATE(50)] = 1063,
  [SMALL_STATE(51)] = 1074,
  [SMALL_STATE(52)] = 1082,
  [SMALL_STATE(53)] = 1093,
  [SMALL_STATE(54)] = 1104,
  [SMALL_STATE(55)] = 1115,
  [SMALL_STATE(56)] = 1126,
  [SMALL_STATE(57)] = 1137,
  [SMALL_STATE(58)] = 1148,
  [SMALL_STATE(59)] = 1159,
  [SMALL_STATE(60)] = 1170,
  [SMALL_STATE(61)] = 1181,
  [SMALL_STATE(62)] = 1192,
  [SMALL_STATE(63)] = 1201,
  [SMALL_STATE(64)] = 1207,
  [SMALL_STATE(65)] = 1213,
  [SMALL_STATE(66)] = 1223,
  [SMALL_STATE(67)] = 1233,
  [SMALL_STATE(68)] = 1243,
  [SMALL_STATE(69)] = 1249,
  [SMALL_STATE(70)] = 1259,
  [SMALL_STATE(71)] = 1269,
  [SMALL_STATE(72)] = 1275,
  [SMALL_STATE(73)] = 1285,
  [SMALL_STATE(74)] = 1291,
  [SMALL_STATE(75)] = 1297,
  [SMALL_STATE(76)] = 1307,
  [SMALL_STATE(77)] = 1313,
  [SMALL_STATE(78)] = 1323,
  [SMALL_STATE(79)] = 1333,
  [SMALL_STATE(80)] = 1338,
  [SMALL_STATE(81)] = 1345,
  [SMALL_STATE(82)] = 1352,
  [SMALL_STATE(83)] = 1356,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(70),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(47),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(55),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(81),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(82),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(70),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(10),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(47),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(55),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(81),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_expansion_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(25),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expansion, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expansion, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_concatenation, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_concatenation, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(27),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_expression, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_expression, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(75),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(43),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(56),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_concatenation_repeat1, 2), SHIFT_REPEAT(26),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2), SHIFT_REPEAT(11),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(67),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracket_expansion_repeat1, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
