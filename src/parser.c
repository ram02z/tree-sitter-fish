#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  sym__job_control_background = 1,
  anon_sym_SEMI = 2,
  anon_sym_LF = 3,
  anon_sym_CR = 4,
  anon_sym_CR_LF = 5,
  anon_sym_POUND = 6,
  aux_sym_comment_token1 = 7,
  anon_sym_DOLLAR = 8,
  aux_sym_variable_expansion_token1 = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_double_quote_string_token1 = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_single_quote_string_token1 = 13,
  sym_escape_sequence = 14,
  aux_sym_word_token1 = 15,
  sym__concat = 16,
  sym_program = 17,
  sym_comment = 18,
  sym_variable_expansion = 19,
  sym_double_quote_string = 20,
  sym_single_quote_string = 21,
  sym_command = 22,
  sym_concatenation = 23,
  aux_sym__statements_repeat1 = 24,
  aux_sym_double_quote_string_repeat1 = 25,
  aux_sym_single_quote_string_repeat1 = 26,
  aux_sym_command_repeat1 = 27,
  aux_sym_concatenation_repeat1 = 28,
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
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_expansion_token1] = "variable_expansion_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_word_token1] = "word_token1",
  [sym__concat] = "_concat",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_variable_expansion] = "variable_expansion",
  [sym_double_quote_string] = "double_quote_string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_command] = "command",
  [sym_concatenation] = "concatenation",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_double_quote_string_repeat1] = "double_quote_string_repeat1",
  [aux_sym_single_quote_string_repeat1] = "single_quote_string_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_expansion_token1] = aux_sym_variable_expansion_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_token1] = aux_sym_double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [sym__concat] = sym__concat,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_variable_expansion] = sym_variable_expansion,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_command] = sym_command,
  [sym_concatenation] = sym_concatenation,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_double_quote_string_repeat1] = aux_sym_double_quote_string_repeat1,
  [aux_sym_single_quote_string_repeat1] = aux_sym_single_quote_string_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_expansion_token1] = {
    .visible = false,
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
  [sym__concat] = {
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
  [aux_sym__statements_repeat1] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '[' || '^' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '<' &&
          lookahead != '>' &&
          (lookahead < '[' || '^' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(31);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__job_control_background);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_variable_expansion_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (!aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 11, .external_lex_state = 1},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 11, .external_lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 11, .external_lex_state = 1},
  [10] = {.lex_state = 11, .external_lex_state = 1},
  [11] = {.lex_state = 11, .external_lex_state = 1},
  [12] = {.lex_state = 11, .external_lex_state = 1},
  [13] = {.lex_state = 11, .external_lex_state = 1},
  [14] = {.lex_state = 11, .external_lex_state = 1},
  [15] = {.lex_state = 11, .external_lex_state = 1},
  [16] = {.lex_state = 11, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
};

enum {
  ts_external_token__concat = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__concat] = sym__concat,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__concat] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__job_control_background] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [sym__concat] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(34),
    [sym_comment] = STATE(20),
    [sym_variable_expansion] = STATE(2),
    [sym_double_quote_string] = STATE(2),
    [sym_single_quote_string] = STATE(2),
    [sym_command] = STATE(20),
    [sym_concatenation] = STATE(5),
    [aux_sym__statements_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_escape_sequence] = ACTIONS(13),
  },
  [2] = {
    [sym_variable_expansion] = STATE(9),
    [sym_double_quote_string] = STATE(9),
    [sym_single_quote_string] = STATE(9),
    [sym_concatenation] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [aux_sym_concatenation_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__job_control_background] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(13),
    [sym__concat] = ACTIONS(25),
  },
  [3] = {
    [sym_variable_expansion] = STATE(9),
    [sym_double_quote_string] = STATE(9),
    [sym_single_quote_string] = STATE(9),
    [sym_concatenation] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__job_control_background] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CR_LF] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_escape_sequence] = ACTIONS(40),
  },
  [4] = {
    [sym_variable_expansion] = STATE(9),
    [sym_double_quote_string] = STATE(9),
    [sym_single_quote_string] = STATE(9),
    [sym_concatenation] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__job_control_background] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_CR_LF] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(13),
  },
  [5] = {
    [sym_variable_expansion] = STATE(9),
    [sym_double_quote_string] = STATE(9),
    [sym_single_quote_string] = STATE(9),
    [sym_concatenation] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__job_control_background] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      sym_escape_sequence,
    STATE(5), 1,
      sym_concatenation,
    STATE(8), 1,
      aux_sym__statements_repeat1,
    STATE(21), 2,
      sym_comment,
      sym_command,
    STATE(2), 3,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [31] = 4,
    ACTIONS(51), 1,
      sym__concat,
    STATE(7), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(49), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [52] = 9,
    ACTIONS(54), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    STATE(5), 1,
      sym_concatenation,
    STATE(8), 1,
      aux_sym__statements_repeat1,
    STATE(26), 2,
      sym_comment,
      sym_command,
    STATE(2), 3,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [83] = 4,
    ACTIONS(25), 1,
      sym__concat,
    STATE(10), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(71), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [104] = 4,
    ACTIONS(25), 1,
      sym__concat,
    STATE(7), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(75), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [125] = 2,
    ACTIONS(77), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(79), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [141] = 2,
    ACTIONS(81), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(83), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [157] = 2,
    ACTIONS(85), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(87), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [173] = 2,
    ACTIONS(47), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(49), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [189] = 2,
    ACTIONS(89), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(91), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [205] = 2,
    ACTIONS(93), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(95), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [221] = 5,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym_escape_sequence,
    STATE(14), 3,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [239] = 4,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(22), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [254] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 5,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [265] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [276] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [287] = 4,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(23), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [302] = 4,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(23), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [317] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [328] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 5,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [339] = 1,
    ACTIONS(133), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [347] = 1,
    ACTIONS(107), 5,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [355] = 3,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(137), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [366] = 3,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(141), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [377] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(146), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [388] = 2,
    ACTIONS(81), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    ACTIONS(83), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [397] = 2,
    ACTIONS(25), 1,
      sym__concat,
    STATE(10), 1,
      aux_sym_concatenation_repeat1,
  [404] = 1,
    ACTIONS(148), 1,
      aux_sym_comment_token1,
  [408] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [412] = 1,
    ACTIONS(152), 1,
      aux_sym_variable_expansion_token1,
  [416] = 1,
    ACTIONS(154), 1,
      aux_sym_variable_expansion_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 31,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 254,
  [SMALL_STATE(20)] = 265,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 287,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 328,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 347,
  [SMALL_STATE(28)] = 355,
  [SMALL_STATE(29)] = 366,
  [SMALL_STATE(30)] = 377,
  [SMALL_STATE(31)] = 388,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 404,
  [SMALL_STATE(34)] = 408,
  [SMALL_STATE(35)] = 412,
  [SMALL_STATE(36)] = 416,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(35),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(17),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(33),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(35),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(18),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(28),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(36),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(29),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
