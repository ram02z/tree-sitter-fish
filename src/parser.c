#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  sym_variable_name = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_double_quote_string_token1 = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_single_quote_string_token1 = 13,
  sym_escape_sequence = 14,
  sym__concat = 15,
  sym_program = 16,
  sym_comment = 17,
  sym_variable_expansion = 18,
  sym_double_quote_string = 19,
  sym_single_quote_string = 20,
  sym_command = 21,
  sym_concatenation = 22,
  aux_sym__statements_repeat1 = 23,
  aux_sym_variable_expansion_repeat1 = 24,
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
  [sym_variable_name] = "variable_name",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__concat] = "_concat",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_variable_expansion] = "variable_expansion",
  [sym_double_quote_string] = "double_quote_string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_command] = "command",
  [sym_concatenation] = "concatenation",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_variable_expansion_repeat1] = "variable_expansion_repeat1",
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
  [sym_variable_name] = sym_variable_name,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_token1] = aux_sym_double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__concat] = sym__concat,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_variable_expansion] = sym_variable_expansion,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_command] = sym_command,
  [sym_concatenation] = sym_concatenation,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_variable_expansion_repeat1] = aux_sym_variable_expansion_repeat1,
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
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
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
  [aux_sym_variable_expansion_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 10:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__job_control_background);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\r') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10, .external_lex_state = 1},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 10, .external_lex_state = 1},
  [9] = {.lex_state = 10, .external_lex_state = 1},
  [10] = {.lex_state = 10, .external_lex_state = 1},
  [11] = {.lex_state = 10, .external_lex_state = 1},
  [12] = {.lex_state = 10, .external_lex_state = 1},
  [13] = {.lex_state = 10, .external_lex_state = 1},
  [14] = {.lex_state = 10, .external_lex_state = 1},
  [15] = {.lex_state = 10, .external_lex_state = 1},
  [16] = {.lex_state = 10, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 0},
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
    [sym_variable_name] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__concat] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(37),
    [sym_comment] = STATE(21),
    [sym_variable_expansion] = STATE(2),
    [sym_double_quote_string] = STATE(2),
    [sym_single_quote_string] = STATE(2),
    [sym_command] = STATE(21),
    [sym_concatenation] = STATE(5),
    [aux_sym__statements_repeat1] = STATE(7),
    [aux_sym_variable_expansion_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_escape_sequence] = ACTIONS(13),
  },
  [2] = {
    [sym_variable_expansion] = STATE(10),
    [sym_double_quote_string] = STATE(10),
    [sym_single_quote_string] = STATE(10),
    [sym_concatenation] = STATE(4),
    [aux_sym_variable_expansion_repeat1] = STATE(33),
    [aux_sym_command_repeat1] = STATE(4),
    [aux_sym_concatenation_repeat1] = STATE(8),
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
    [sym_variable_expansion] = STATE(10),
    [sym_double_quote_string] = STATE(10),
    [sym_single_quote_string] = STATE(10),
    [sym_concatenation] = STATE(3),
    [aux_sym_variable_expansion_repeat1] = STATE(33),
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
    [sym_variable_expansion] = STATE(10),
    [sym_double_quote_string] = STATE(10),
    [sym_single_quote_string] = STATE(10),
    [sym_concatenation] = STATE(3),
    [aux_sym_variable_expansion_repeat1] = STATE(33),
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
    [sym_variable_expansion] = STATE(10),
    [sym_double_quote_string] = STATE(10),
    [sym_single_quote_string] = STATE(10),
    [sym_concatenation] = STATE(4),
    [aux_sym_variable_expansion_repeat1] = STATE(33),
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
  [0] = 10,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(50), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      sym_escape_sequence,
    STATE(5), 1,
      sym_concatenation,
    STATE(6), 1,
      aux_sym__statements_repeat1,
    STATE(33), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(27), 2,
      sym_comment,
      sym_command,
    STATE(2), 3,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [34] = 10,
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
    STATE(6), 1,
      aux_sym__statements_repeat1,
    STATE(33), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(25), 2,
      sym_comment,
      sym_command,
    STATE(2), 3,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [68] = 4,
    ACTIONS(25), 1,
      sym__concat,
    STATE(9), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(64), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [89] = 4,
    ACTIONS(70), 1,
      sym__concat,
    STATE(9), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(68), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [110] = 4,
    ACTIONS(25), 1,
      sym__concat,
    STATE(8), 1,
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
  [131] = 2,
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
  [147] = 2,
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
  [163] = 2,
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
  [179] = 2,
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
  [195] = 2,
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
  [211] = 2,
    ACTIONS(66), 3,
      sym__concat,
      ts_builtin_sym_end,
      sym_escape_sequence,
    ACTIONS(68), 8,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [227] = 6,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym_escape_sequence,
    STATE(33), 1,
      aux_sym_variable_expansion_repeat1,
    STATE(16), 3,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [248] = 5,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(103), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(20), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [266] = 5,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(107), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(18), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [284] = 5,
    ACTIONS(109), 1,
      anon_sym_DOLLAR,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(114), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(20), 2,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [302] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [313] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [324] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 5,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [335] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 5,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [346] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [357] = 1,
    ACTIONS(127), 5,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
  [365] = 1,
    ACTIONS(133), 5,
      sym__job_control_background,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [373] = 3,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(137), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [384] = 3,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(141), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [395] = 3,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      aux_sym_single_quote_string_repeat1,
    ACTIONS(146), 2,
      aux_sym_single_quote_string_token1,
      sym_escape_sequence,
  [406] = 2,
    ACTIONS(85), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    ACTIONS(87), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
  [415] = 3,
    ACTIONS(148), 1,
      sym_variable_name,
    ACTIONS(150), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym_variable_expansion_repeat1,
  [425] = 3,
    ACTIONS(153), 1,
      sym_variable_name,
    ACTIONS(155), 1,
      anon_sym_DOLLAR,
    STATE(32), 1,
      aux_sym_variable_expansion_repeat1,
  [435] = 3,
    ACTIONS(155), 1,
      anon_sym_DOLLAR,
    ACTIONS(157), 1,
      sym_variable_name,
    STATE(32), 1,
      aux_sym_variable_expansion_repeat1,
  [445] = 2,
    ACTIONS(25), 1,
      sym__concat,
    STATE(8), 1,
      aux_sym_concatenation_repeat1,
  [452] = 1,
    ACTIONS(159), 1,
      aux_sym_comment_token1,
  [456] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 227,
  [SMALL_STATE(18)] = 248,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 284,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 335,
  [SMALL_STATE(25)] = 346,
  [SMALL_STATE(26)] = 357,
  [SMALL_STATE(27)] = 365,
  [SMALL_STATE(28)] = 373,
  [SMALL_STATE(29)] = 384,
  [SMALL_STATE(30)] = 395,
  [SMALL_STATE(31)] = 406,
  [SMALL_STATE(32)] = 415,
  [SMALL_STATE(33)] = 425,
  [SMALL_STATE(34)] = 435,
  [SMALL_STATE(35)] = 445,
  [SMALL_STATE(36)] = 452,
  [SMALL_STATE(37)] = 456,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(35),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(36),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(33),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(19),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(30),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(35),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(34),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(29),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
