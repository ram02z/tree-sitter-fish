#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 521
#define LARGE_STATE_COUNT 183
#define SYMBOL_COUNT 152
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_and = 1,
  anon_sym_or = 2,
  anon_sym_PIPE_PIPE = 3,
  anon_sym_AMP_AMP = 4,
  anon_sym_PIPE = 5,
  anon_sym_SEMI = 6,
  anon_sym_AMP = 7,
  anon_sym_LF = 8,
  anon_sym_CR = 9,
  anon_sym_CR_LF = 10,
  anon_sym_BANG = 11,
  anon_sym_not = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_function = 16,
  anon_sym_end = 17,
  sym_integer = 18,
  sym_float = 19,
  anon_sym_return = 20,
  anon_sym_switch = 21,
  anon_sym_case = 22,
  sym_break = 23,
  sym_continue = 24,
  anon_sym_for = 25,
  anon_sym_in = 26,
  anon_sym_while = 27,
  anon_sym_if = 28,
  anon_sym_else = 29,
  anon_sym_begin = 30,
  aux_sym_test_command_token1 = 31,
  aux_sym_test_command_token2 = 32,
  anon_sym_RBRACK = 33,
  sym_comment = 34,
  sym_variable_name = 35,
  anon_sym_DOT_DOT = 36,
  anon_sym_LBRACK = 37,
  anon_sym_LBRACE = 38,
  anon_sym_COMMA = 39,
  anon_sym_RBRACE = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_double_quote_string_token1 = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_single_quote_string_token1 = 44,
  sym_escape_sequence = 45,
  anon_sym_DOT = 46,
  anon_sym_COLON = 47,
  anon_sym__ = 48,
  anon_sym_argparse = 49,
  anon_sym_bg = 50,
  anon_sym_bind = 51,
  anon_sym_block = 52,
  anon_sym_breakpoint = 53,
  anon_sym_builtin = 54,
  anon_sym_cd = 55,
  anon_sym_command = 56,
  anon_sym_commandline = 57,
  anon_sym_complete = 58,
  anon_sym_contains = 59,
  anon_sym_count = 60,
  anon_sym_disown = 61,
  anon_sym_echo = 62,
  anon_sym_emit = 63,
  anon_sym_eval = 64,
  anon_sym_exec = 65,
  anon_sym_exit = 66,
  anon_sym_false = 67,
  anon_sym_fg = 68,
  anon_sym_functions = 69,
  anon_sym_history = 70,
  anon_sym_jobs = 71,
  anon_sym_math = 72,
  anon_sym_path = 73,
  anon_sym_printf = 74,
  anon_sym_pwd = 75,
  anon_sym_random = 76,
  anon_sym_read = 77,
  anon_sym_realpath = 78,
  anon_sym_set = 79,
  anon_sym_set_color = 80,
  anon_sym_source = 81,
  anon_sym_status = 82,
  anon_sym_string = 83,
  anon_sym_test = 84,
  anon_sym_time = 85,
  anon_sym_true = 86,
  anon_sym_type = 87,
  anon_sym_ulimit = 88,
  anon_sym_wait = 89,
  sym_stream_redirect = 90,
  sym_direction = 91,
  sym_home_dir_expansion = 92,
  sym_glob = 93,
  sym_word = 94,
  sym_brace_word = 95,
  sym__concat = 96,
  sym__concat_oct = 97,
  sym__brace_concat = 98,
  sym__concat_list = 99,
  sym_program = 100,
  sym_conditional_execution = 101,
  sym_pipe = 102,
  sym_redirect_statement = 103,
  sym__terminated_statement = 104,
  sym__terminated_opt_statement = 105,
  sym_negated_statement = 106,
  sym_command_substitution = 107,
  sym_function_definition = 108,
  sym_return = 109,
  sym_switch_statement = 110,
  sym_case_clause = 111,
  sym_for_statement = 112,
  sym_while_statement = 113,
  sym_if_statement = 114,
  sym_else_if_clause = 115,
  sym_else_clause = 116,
  sym_begin_statement = 117,
  sym_test_command = 118,
  sym_variable_expansion = 119,
  sym_index = 120,
  sym_range = 121,
  sym_list_element_access = 122,
  sym_brace_expansion = 123,
  sym_double_quote_string = 124,
  sym_single_quote_string = 125,
  sym_command = 126,
  sym_builtin = 127,
  sym_file_redirect = 128,
  sym__special_character = 129,
  sym_concatenation = 130,
  sym__expression = 131,
  sym_brace_concatenation = 132,
  sym__brace_expression = 133,
  sym__base_brace_expression = 134,
  aux_sym_program_repeat1 = 135,
  aux_sym_function_definition_repeat1 = 136,
  aux_sym_function_definition_repeat2 = 137,
  aux_sym_switch_statement_repeat1 = 138,
  aux_sym_case_clause_repeat1 = 139,
  aux_sym_for_statement_repeat1 = 140,
  aux_sym_while_statement_repeat1 = 141,
  aux_sym_if_statement_repeat1 = 142,
  aux_sym_test_command_repeat1 = 143,
  aux_sym_variable_expansion_repeat1 = 144,
  aux_sym_list_element_access_repeat1 = 145,
  aux_sym_brace_expansion_repeat1 = 146,
  aux_sym_double_quote_string_repeat1 = 147,
  aux_sym_single_quote_string_repeat1 = 148,
  aux_sym_command_repeat1 = 149,
  aux_sym_concatenation_repeat1 = 150,
  aux_sym_brace_concatenation_repeat1 = 151,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_AMP] = "&",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_BANG] = "!",
  [anon_sym_not] = "not",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_function] = "function",
  [anon_sym_end] = "end",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_return] = "return",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_begin] = "begin",
  [aux_sym_test_command_token1] = "[",
  [aux_sym_test_command_token2] = "test_command_token2",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_variable_name] = "variable_name",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym__] = "_",
  [anon_sym_argparse] = "argparse",
  [anon_sym_bg] = "bg",
  [anon_sym_bind] = "bind",
  [anon_sym_block] = "block",
  [anon_sym_breakpoint] = "breakpoint",
  [anon_sym_builtin] = "builtin",
  [anon_sym_cd] = "cd",
  [anon_sym_command] = "command",
  [anon_sym_commandline] = "commandline",
  [anon_sym_complete] = "complete",
  [anon_sym_contains] = "contains",
  [anon_sym_count] = "count",
  [anon_sym_disown] = "disown",
  [anon_sym_echo] = "echo",
  [anon_sym_emit] = "emit",
  [anon_sym_eval] = "eval",
  [anon_sym_exec] = "exec",
  [anon_sym_exit] = "exit",
  [anon_sym_false] = "false",
  [anon_sym_fg] = "fg",
  [anon_sym_functions] = "functions",
  [anon_sym_history] = "history",
  [anon_sym_jobs] = "jobs",
  [anon_sym_math] = "math",
  [anon_sym_path] = "path",
  [anon_sym_printf] = "printf",
  [anon_sym_pwd] = "pwd",
  [anon_sym_random] = "random",
  [anon_sym_read] = "read",
  [anon_sym_realpath] = "realpath",
  [anon_sym_set] = "set",
  [anon_sym_set_color] = "set_color",
  [anon_sym_source] = "source",
  [anon_sym_status] = "status",
  [anon_sym_string] = "string",
  [anon_sym_test] = "test",
  [anon_sym_time] = "time",
  [anon_sym_true] = "true",
  [anon_sym_type] = "type",
  [anon_sym_ulimit] = "ulimit",
  [anon_sym_wait] = "wait",
  [sym_stream_redirect] = "stream_redirect",
  [sym_direction] = "direction",
  [sym_home_dir_expansion] = "home_dir_expansion",
  [sym_glob] = "glob",
  [sym_word] = "word",
  [sym_brace_word] = "word",
  [sym__concat] = "_concat",
  [sym__concat_oct] = "_concat_oct",
  [sym__brace_concat] = "_brace_concat",
  [sym__concat_list] = "_concat_list",
  [sym_program] = "program",
  [sym_conditional_execution] = "conditional_execution",
  [sym_pipe] = "pipe",
  [sym_redirect_statement] = "redirect_statement",
  [sym__terminated_statement] = "_terminated_statement",
  [sym__terminated_opt_statement] = "_terminated_opt_statement",
  [sym_negated_statement] = "negated_statement",
  [sym_command_substitution] = "command_substitution",
  [sym_function_definition] = "function_definition",
  [sym_return] = "return",
  [sym_switch_statement] = "switch_statement",
  [sym_case_clause] = "case_clause",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_if_clause] = "else_if_clause",
  [sym_else_clause] = "else_clause",
  [sym_begin_statement] = "begin_statement",
  [sym_test_command] = "test_command",
  [sym_variable_expansion] = "variable_expansion",
  [sym_index] = "index",
  [sym_range] = "range",
  [sym_list_element_access] = "list_element_access",
  [sym_brace_expansion] = "brace_expansion",
  [sym_double_quote_string] = "double_quote_string",
  [sym_single_quote_string] = "single_quote_string",
  [sym_command] = "command",
  [sym_builtin] = "builtin",
  [sym_file_redirect] = "file_redirect",
  [sym__special_character] = "_special_character",
  [sym_concatenation] = "concatenation",
  [sym__expression] = "_expression",
  [sym_brace_concatenation] = "concatenation",
  [sym__brace_expression] = "_brace_expression",
  [sym__base_brace_expression] = "_base_brace_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_definition_repeat2] = "function_definition_repeat2",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_case_clause_repeat1] = "case_clause_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_while_statement_repeat1] = "while_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_test_command_repeat1] = "test_command_repeat1",
  [aux_sym_variable_expansion_repeat1] = "variable_expansion_repeat1",
  [aux_sym_list_element_access_repeat1] = "list_element_access_repeat1",
  [aux_sym_brace_expansion_repeat1] = "brace_expansion_repeat1",
  [aux_sym_double_quote_string_repeat1] = "double_quote_string_repeat1",
  [aux_sym_single_quote_string_repeat1] = "single_quote_string_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
  [aux_sym_brace_concatenation_repeat1] = "brace_concatenation_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_end] = anon_sym_end,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_begin] = anon_sym_begin,
  [aux_sym_test_command_token1] = anon_sym_LBRACK,
  [aux_sym_test_command_token2] = aux_sym_test_command_token2,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_token1] = aux_sym_double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quote_string_token1] = aux_sym_single_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__] = anon_sym__,
  [anon_sym_argparse] = anon_sym_argparse,
  [anon_sym_bg] = anon_sym_bg,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_breakpoint] = anon_sym_breakpoint,
  [anon_sym_builtin] = anon_sym_builtin,
  [anon_sym_cd] = anon_sym_cd,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_commandline] = anon_sym_commandline,
  [anon_sym_complete] = anon_sym_complete,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_disown] = anon_sym_disown,
  [anon_sym_echo] = anon_sym_echo,
  [anon_sym_emit] = anon_sym_emit,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_fg] = anon_sym_fg,
  [anon_sym_functions] = anon_sym_functions,
  [anon_sym_history] = anon_sym_history,
  [anon_sym_jobs] = anon_sym_jobs,
  [anon_sym_math] = anon_sym_math,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_printf] = anon_sym_printf,
  [anon_sym_pwd] = anon_sym_pwd,
  [anon_sym_random] = anon_sym_random,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_realpath] = anon_sym_realpath,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_set_color] = anon_sym_set_color,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_ulimit] = anon_sym_ulimit,
  [anon_sym_wait] = anon_sym_wait,
  [sym_stream_redirect] = sym_stream_redirect,
  [sym_direction] = sym_direction,
  [sym_home_dir_expansion] = sym_home_dir_expansion,
  [sym_glob] = sym_glob,
  [sym_word] = sym_word,
  [sym_brace_word] = sym_word,
  [sym__concat] = sym__concat,
  [sym__concat_oct] = sym__concat_oct,
  [sym__brace_concat] = sym__brace_concat,
  [sym__concat_list] = sym__concat_list,
  [sym_program] = sym_program,
  [sym_conditional_execution] = sym_conditional_execution,
  [sym_pipe] = sym_pipe,
  [sym_redirect_statement] = sym_redirect_statement,
  [sym__terminated_statement] = sym__terminated_statement,
  [sym__terminated_opt_statement] = sym__terminated_opt_statement,
  [sym_negated_statement] = sym_negated_statement,
  [sym_command_substitution] = sym_command_substitution,
  [sym_function_definition] = sym_function_definition,
  [sym_return] = sym_return,
  [sym_switch_statement] = sym_switch_statement,
  [sym_case_clause] = sym_case_clause,
  [sym_for_statement] = sym_for_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_if_clause] = sym_else_if_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_begin_statement] = sym_begin_statement,
  [sym_test_command] = sym_test_command,
  [sym_variable_expansion] = sym_variable_expansion,
  [sym_index] = sym_index,
  [sym_range] = sym_range,
  [sym_list_element_access] = sym_list_element_access,
  [sym_brace_expansion] = sym_brace_expansion,
  [sym_double_quote_string] = sym_double_quote_string,
  [sym_single_quote_string] = sym_single_quote_string,
  [sym_command] = sym_command,
  [sym_builtin] = sym_builtin,
  [sym_file_redirect] = sym_file_redirect,
  [sym__special_character] = sym__special_character,
  [sym_concatenation] = sym_concatenation,
  [sym__expression] = sym__expression,
  [sym_brace_concatenation] = sym_concatenation,
  [sym__brace_expression] = sym__brace_expression,
  [sym__base_brace_expression] = sym__base_brace_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_definition_repeat2] = aux_sym_function_definition_repeat2,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_case_clause_repeat1] = aux_sym_case_clause_repeat1,
  [aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
  [aux_sym_while_statement_repeat1] = aux_sym_while_statement_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_test_command_repeat1] = aux_sym_test_command_repeat1,
  [aux_sym_variable_expansion_repeat1] = aux_sym_variable_expansion_repeat1,
  [aux_sym_list_element_access_repeat1] = aux_sym_list_element_access_repeat1,
  [aux_sym_brace_expansion_repeat1] = aux_sym_brace_expansion_repeat1,
  [aux_sym_double_quote_string_repeat1] = aux_sym_double_quote_string_repeat1,
  [aux_sym_single_quote_string_repeat1] = aux_sym_single_quote_string_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1,
  [aux_sym_brace_concatenation_repeat1] = aux_sym_brace_concatenation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_test_command_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_test_command_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_argparse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_breakpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builtin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commandline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_functions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_history] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jobs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_math] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pwd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_random] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_realpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_color] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulimit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wait] = {
    .visible = true,
    .named = false,
  },
  [sym_stream_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_home_dir_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_glob] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_word] = {
    .visible = true,
    .named = true,
  },
  [sym__concat] = {
    .visible = false,
    .named = true,
  },
  [sym__concat_oct] = {
    .visible = false,
    .named = true,
  },
  [sym__brace_concat] = {
    .visible = false,
    .named = true,
  },
  [sym__concat_list] = {
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
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_redirect_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__terminated_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__terminated_opt_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_negated_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_test_command] = {
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
  [sym_brace_expansion] = {
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
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_file_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym__special_character] = {
    .visible = false,
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
  [sym_brace_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym__brace_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__base_brace_expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_expansion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_element_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_expansion_repeat1] = {
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
  [aux_sym_brace_concatenation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_condition = 2,
  field_destination = 3,
  field_name = 4,
  field_operator = 5,
  field_option = 6,
  field_redirect = 7,
  field_value = 8,
  field_variable = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_condition] = "condition",
  [field_destination] = "destination",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_option] = "option",
  [field_redirect] = "redirect",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 3},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 4},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 1},
  [20] = {.index = 29, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_redirect, 0},
  [2] =
    {field_argument, 0},
  [3] =
    {field_argument, 1, .inherited = true},
    {field_name, 0},
    {field_redirect, 1, .inherited = true},
  [6] =
    {field_option, 0},
  [7] =
    {field_destination, 1},
    {field_operator, 0},
  [9] =
    {field_condition, 1},
  [10] =
    {field_argument, 0},
    {field_argument, 1},
  [12] =
    {field_argument, 1, .inherited = true},
  [13] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [15] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
    {field_redirect, 0, .inherited = true},
    {field_redirect, 1, .inherited = true},
  [19] =
    {field_name, 1},
  [20] =
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [22] =
    {field_value, 1},
  [23] =
    {field_value, 0},
  [24] =
    {field_name, 1},
    {field_option, 2, .inherited = true},
  [26] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [28] =
    {field_condition, 2},
  [29] =
    {field_value, 3, .inherited = true},
    {field_variable, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_word,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__special_character, 2,
    sym__special_character,
    sym_word,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(199);
      if (lookahead == '!') ADVANCE(216);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(194);
      if (lookahead == ',') ADVANCE(268);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(296);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '>') ADVANCE(428);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '\\') SKIP(198)
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'j') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '}') ADVANCE(269);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '>') ADVANCE(428);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'b') ADVANCE(496);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(452);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '^' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'b') ADVANCE(496);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(452);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '>') ADVANCE(428);
      if (lookahead == '\\') SKIP(188)
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(214);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '\\') SKIP(191)
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(215);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '>') ADVANCE(428);
      if (lookahead == '\\') SKIP(190)
      if (lookahead == '|') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == 'b') ADVANCE(496);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(452);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '&' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == '\\') SKIP(189)
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(765);
      if (lookahead == ',') ADVANCE(268);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(674);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'h') ADVANCE(675);
      if (lookahead == 'j') ADVANCE(714);
      if (lookahead == 'm') ADVANCE(627);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == 's') ADVANCE(661);
      if (lookahead == 't') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(692);
      if (lookahead == 'w') ADVANCE(637);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '}') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(767);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '\\') SKIP(193)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\\') SKIP(192)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(264);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '>') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'X') ADVANCE(285);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'X') ADVANCE(285);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(291);
      if (lookahead == 'X') ADVANCE(285);
      if (lookahead == 'c') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(287);
      if (lookahead == 'x') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'g') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(308);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(252);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(377);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(239);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(311);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 185:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 187:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '2')) ADVANCE(425);
      END_STATE();
    case 188:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 189:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 190:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 191:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 192:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 193:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 197:
      if (eof) ADVANCE(199);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '!') ADVANCE(217);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == ')') ADVANCE(223);
      if (lookahead == '*') ADVANCE(433);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(434);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(575);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(528);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '~') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(197)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(624);
      END_STATE();
    case 198:
      if (eof) ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 199:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_and);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_or);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(204);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(205);
      if (lookahead == '<') ADVANCE(426);
      if (lookahead == '>') ADVANCE(430);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_not);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == 's') ADVANCE(363);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_end);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '>') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(623);
      if (lookahead == '<') ADVANCE(427);
      if (lookahead == '>') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(624);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_return);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_switch);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_case);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_break);
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_break);
      if (lookahead == 'p') ADVANCE(569);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_continue);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_for);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_while);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_if);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_else);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_begin);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_test_command_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_test_command_token2);
      if (lookahead == '\n') ADVANCE(212);
      if (lookahead == '\r') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_test_command_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym__);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_argparse);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_argparse);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_argparse);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_bg);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_bg);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_bind);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_block);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_breakpoint);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_breakpoint);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_breakpoint);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_builtin);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_builtin);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_builtin);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_cd);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_cd);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_cd);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == 'l') ADVANCE(518);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_commandline);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_commandline);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_commandline);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_complete);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_complete);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_complete);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_contains);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_count);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_disown);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_disown);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_disown);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_echo);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_echo);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_echo);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_emit);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_emit);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_emit);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_eval);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_eval);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_exec);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_exec);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_exit);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_exit);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_fg);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_fg);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_fg);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_functions);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_functions);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_functions);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_history);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_history);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_history);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_jobs);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_jobs);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_jobs);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_math);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_path);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_printf);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_printf);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_printf);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_pwd);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_pwd);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_pwd);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_random);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_random);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_random);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_read);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_realpath);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_realpath);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_realpath);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(461);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_set_color);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_set_color);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_set_color);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_source);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_source);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_status);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_status);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_status);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_string);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_test);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_time);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_type);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_ulimit);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_ulimit);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_ulimit);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_wait);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_wait);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_wait);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_stream_redirect);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_direction);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '&') ADVANCE(187);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '&') ADVANCE(187);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == '?') ADVANCE(426);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '&') ADVANCE(187);
      if (lookahead == '?') ADVANCE(426);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == '?') ADVANCE(426);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_direction);
      if (lookahead == '?') ADVANCE(426);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_home_dir_expansion);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_glob);
      if (lookahead == '*') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(604);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 't') ADVANCE(617);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(470);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == 'u') ADVANCE(547);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == 'g') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(557);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(524);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(525);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(526);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(581);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(511);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(435);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(436);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead == 'w') ADVANCE(468);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead == 'i') ADVANCE(556);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(516);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(549);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(607);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'h') ADVANCE(510);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(517);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(533);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(582);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(591);
      if (lookahead == 'm') ADVANCE(512);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == 'x') ADVANCE(487);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(512);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == 'x') ADVANCE(487);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == 'm') ADVANCE(512);
      if (lookahead == 'v') ADVANCE(441);
      if (lookahead == 'x') ADVANCE(487);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(523);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(351);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(502);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(565);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(479);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(611);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(614);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(533);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'o') ADVANCE(534);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(201);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(381);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(309);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(573);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(325);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(227);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(563);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(411);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(414);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(417);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(357);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(251);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(399);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(303);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(330);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(246);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(327);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(255);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(242);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 'g') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(508);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'i') ADVANCE(597);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(439);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == 'w') ADVANCE(514);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 't') ADVANCE(443);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(440);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(613);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(616);
      if (lookahead == 'y') ADVANCE(571);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(253);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(378);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 'u') ADVANCE(508);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(405);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(570);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(509);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(375);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(240);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(390);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(561);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(586);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(588);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(538);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(531);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(540);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(529);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(546);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(596);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(543);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(609);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(567);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(550);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(599);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(552);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(601);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(554);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(568);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(555);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(312);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(244);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(572);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(348);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(587);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(507);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(478);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(492);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(610);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(566);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(595);
      if (lookahead == 'u') ADVANCE(553);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == 'u') ADVANCE(553);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(384);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(474);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(449);
      if (lookahead == 'p') ADVANCE(530);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(519);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(467);
      if (lookahead == 'r') ADVANCE(498);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(257);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(339);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(238);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(318);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(225);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(469);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(497);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(463);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(473);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(471);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(584);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(585);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(483);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(600);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(603);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(602);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(619);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(464);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(454);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(458);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(620);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(342);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(593);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(535);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(577);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(532);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(578);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(544);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(551);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(522);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(442);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(476);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(569);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(450);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(498);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(248);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(621);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(396);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(462);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(542);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(589);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(402);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(333);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(363);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(560);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(477);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(608);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(480);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(598);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(484);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(485);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(219);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(393);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(447);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(345);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(354);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(408);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(423);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(336);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(420);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(315);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(495);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(500);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(501);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(618);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(503);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(564);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(460);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(513);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(515);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(448);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(481);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(521);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(579);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(475);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(580);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(583);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(482);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(541);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(366);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == '\n') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == '#') ADVANCE(625);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(765);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'b') ADVANCE(667);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'd') ADVANCE(674);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'h') ADVANCE(675);
      if (lookahead == 'j') ADVANCE(714);
      if (lookahead == 'm') ADVANCE(627);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == 's') ADVANCE(661);
      if (lookahead == 't') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(692);
      if (lookahead == 'w') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ',' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'g') ADVANCE(361);
      if (lookahead == 'u') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead == 'r') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(705);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(686);
      if (lookahead == 'w') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'b') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'c') ADVANCE(673);
      if (lookahead == 'm') ADVANCE(679);
      if (lookahead == 'v') ADVANCE(632);
      if (lookahead == 'x') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'c') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'c') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'c') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'c') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'd') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(760);
      if (lookahead == 't') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == 'i') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead == 'y') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(663);
      if (lookahead == 'u') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'g') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'g') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'h') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'h') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'h') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'h') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'k') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'k') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'l') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'l') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'l') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'l') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'l') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'm') ADVANCE(699);
      if (lookahead == 'n') ADVANCE(759);
      if (lookahead == 'u') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'm') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'm') ADVANCE(638);
      if (lookahead == 'p') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'p') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'p') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'p') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'r') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'r') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 't') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'u') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'u') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'u') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'w') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead == 'y') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_brace_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_brace_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_brace_word);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(767);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 197},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 197},
  [15] = {.lex_state = 197},
  [16] = {.lex_state = 197},
  [17] = {.lex_state = 197},
  [18] = {.lex_state = 197},
  [19] = {.lex_state = 197},
  [20] = {.lex_state = 197},
  [21] = {.lex_state = 197},
  [22] = {.lex_state = 197},
  [23] = {.lex_state = 197},
  [24] = {.lex_state = 197},
  [25] = {.lex_state = 197},
  [26] = {.lex_state = 197},
  [27] = {.lex_state = 197},
  [28] = {.lex_state = 197},
  [29] = {.lex_state = 197},
  [30] = {.lex_state = 197},
  [31] = {.lex_state = 197},
  [32] = {.lex_state = 197},
  [33] = {.lex_state = 197},
  [34] = {.lex_state = 197},
  [35] = {.lex_state = 197},
  [36] = {.lex_state = 197},
  [37] = {.lex_state = 197},
  [38] = {.lex_state = 197},
  [39] = {.lex_state = 197},
  [40] = {.lex_state = 197},
  [41] = {.lex_state = 197},
  [42] = {.lex_state = 197},
  [43] = {.lex_state = 197},
  [44] = {.lex_state = 197},
  [45] = {.lex_state = 197},
  [46] = {.lex_state = 197},
  [47] = {.lex_state = 197},
  [48] = {.lex_state = 197},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 197},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 197},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 3, .external_lex_state = 2},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 3, .external_lex_state = 2},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 3, .external_lex_state = 2},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 3, .external_lex_state = 2},
  [104] = {.lex_state = 3, .external_lex_state = 2},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 3, .external_lex_state = 2},
  [107] = {.lex_state = 3, .external_lex_state = 3},
  [108] = {.lex_state = 3, .external_lex_state = 3},
  [109] = {.lex_state = 3, .external_lex_state = 2},
  [110] = {.lex_state = 3, .external_lex_state = 3},
  [111] = {.lex_state = 3, .external_lex_state = 3},
  [112] = {.lex_state = 3, .external_lex_state = 2},
  [113] = {.lex_state = 3, .external_lex_state = 3},
  [114] = {.lex_state = 3, .external_lex_state = 3},
  [115] = {.lex_state = 3, .external_lex_state = 3},
  [116] = {.lex_state = 3, .external_lex_state = 3},
  [117] = {.lex_state = 3, .external_lex_state = 3},
  [118] = {.lex_state = 3, .external_lex_state = 3},
  [119] = {.lex_state = 3, .external_lex_state = 3},
  [120] = {.lex_state = 3, .external_lex_state = 3},
  [121] = {.lex_state = 3, .external_lex_state = 3},
  [122] = {.lex_state = 3, .external_lex_state = 3},
  [123] = {.lex_state = 3, .external_lex_state = 3},
  [124] = {.lex_state = 3, .external_lex_state = 3},
  [125] = {.lex_state = 3, .external_lex_state = 3},
  [126] = {.lex_state = 3, .external_lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 4, .external_lex_state = 2},
  [136] = {.lex_state = 4, .external_lex_state = 2},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 4, .external_lex_state = 2},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 4, .external_lex_state = 2},
  [148] = {.lex_state = 4, .external_lex_state = 2},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 4, .external_lex_state = 2},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 4, .external_lex_state = 3},
  [153] = {.lex_state = 4, .external_lex_state = 3},
  [154] = {.lex_state = 4, .external_lex_state = 3},
  [155] = {.lex_state = 4, .external_lex_state = 2},
  [156] = {.lex_state = 4, .external_lex_state = 2},
  [157] = {.lex_state = 4, .external_lex_state = 3},
  [158] = {.lex_state = 13},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 4, .external_lex_state = 3},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 4, .external_lex_state = 3},
  [167] = {.lex_state = 4, .external_lex_state = 3},
  [168] = {.lex_state = 4, .external_lex_state = 3},
  [169] = {.lex_state = 4, .external_lex_state = 3},
  [170] = {.lex_state = 4, .external_lex_state = 3},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 4, .external_lex_state = 3},
  [173] = {.lex_state = 4, .external_lex_state = 3},
  [174] = {.lex_state = 4, .external_lex_state = 3},
  [175] = {.lex_state = 4, .external_lex_state = 3},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 4, .external_lex_state = 3},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 4, .external_lex_state = 3},
  [181] = {.lex_state = 4, .external_lex_state = 3},
  [182] = {.lex_state = 4, .external_lex_state = 3},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 13},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 5, .external_lex_state = 2},
  [188] = {.lex_state = 5, .external_lex_state = 2},
  [189] = {.lex_state = 5, .external_lex_state = 2},
  [190] = {.lex_state = 5, .external_lex_state = 2},
  [191] = {.lex_state = 5, .external_lex_state = 2},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 5, .external_lex_state = 3},
  [194] = {.lex_state = 7, .external_lex_state = 3},
  [195] = {.lex_state = 7, .external_lex_state = 3},
  [196] = {.lex_state = 5, .external_lex_state = 2},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 5, .external_lex_state = 2},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 5, .external_lex_state = 2},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 5, .external_lex_state = 3},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 5, .external_lex_state = 3},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 5, .external_lex_state = 3},
  [218] = {.lex_state = 5, .external_lex_state = 3},
  [219] = {.lex_state = 5, .external_lex_state = 3},
  [220] = {.lex_state = 5, .external_lex_state = 3},
  [221] = {.lex_state = 5, .external_lex_state = 3},
  [222] = {.lex_state = 5, .external_lex_state = 3},
  [223] = {.lex_state = 5, .external_lex_state = 3},
  [224] = {.lex_state = 5, .external_lex_state = 3},
  [225] = {.lex_state = 5, .external_lex_state = 3},
  [226] = {.lex_state = 5, .external_lex_state = 3},
  [227] = {.lex_state = 5, .external_lex_state = 3},
  [228] = {.lex_state = 5, .external_lex_state = 3},
  [229] = {.lex_state = 5, .external_lex_state = 3},
  [230] = {.lex_state = 5, .external_lex_state = 3},
  [231] = {.lex_state = 5, .external_lex_state = 3},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 12},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 5},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 6, .external_lex_state = 2},
  [306] = {.lex_state = 12, .external_lex_state = 4},
  [307] = {.lex_state = 6, .external_lex_state = 2},
  [308] = {.lex_state = 6, .external_lex_state = 2},
  [309] = {.lex_state = 6, .external_lex_state = 2},
  [310] = {.lex_state = 12, .external_lex_state = 4},
  [311] = {.lex_state = 12, .external_lex_state = 4},
  [312] = {.lex_state = 6, .external_lex_state = 2},
  [313] = {.lex_state = 12, .external_lex_state = 4},
  [314] = {.lex_state = 12, .external_lex_state = 4},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 14},
  [319] = {.lex_state = 14},
  [320] = {.lex_state = 6, .external_lex_state = 3},
  [321] = {.lex_state = 6, .external_lex_state = 3},
  [322] = {.lex_state = 14},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 6, .external_lex_state = 3},
  [329] = {.lex_state = 6, .external_lex_state = 3},
  [330] = {.lex_state = 14},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 6, .external_lex_state = 2},
  [333] = {.lex_state = 6, .external_lex_state = 2},
  [334] = {.lex_state = 6, .external_lex_state = 2},
  [335] = {.lex_state = 12, .external_lex_state = 4},
  [336] = {.lex_state = 14},
  [337] = {.lex_state = 14},
  [338] = {.lex_state = 12, .external_lex_state = 4},
  [339] = {.lex_state = 12, .external_lex_state = 4},
  [340] = {.lex_state = 12},
  [341] = {.lex_state = 6, .external_lex_state = 3},
  [342] = {.lex_state = 12},
  [343] = {.lex_state = 12},
  [344] = {.lex_state = 14, .external_lex_state = 4},
  [345] = {.lex_state = 6, .external_lex_state = 3},
  [346] = {.lex_state = 6, .external_lex_state = 3},
  [347] = {.lex_state = 6, .external_lex_state = 3},
  [348] = {.lex_state = 14, .external_lex_state = 4},
  [349] = {.lex_state = 12},
  [350] = {.lex_state = 12},
  [351] = {.lex_state = 14, .external_lex_state = 4},
  [352] = {.lex_state = 12},
  [353] = {.lex_state = 12},
  [354] = {.lex_state = 12},
  [355] = {.lex_state = 12},
  [356] = {.lex_state = 6, .external_lex_state = 3},
  [357] = {.lex_state = 6, .external_lex_state = 3},
  [358] = {.lex_state = 6, .external_lex_state = 3},
  [359] = {.lex_state = 6, .external_lex_state = 3},
  [360] = {.lex_state = 6, .external_lex_state = 3},
  [361] = {.lex_state = 12},
  [362] = {.lex_state = 14, .external_lex_state = 4},
  [363] = {.lex_state = 14, .external_lex_state = 4},
  [364] = {.lex_state = 12},
  [365] = {.lex_state = 6, .external_lex_state = 3},
  [366] = {.lex_state = 6, .external_lex_state = 3},
  [367] = {.lex_state = 6, .external_lex_state = 3},
  [368] = {.lex_state = 12},
  [369] = {.lex_state = 6, .external_lex_state = 3},
  [370] = {.lex_state = 6, .external_lex_state = 3},
  [371] = {.lex_state = 14, .external_lex_state = 4},
  [372] = {.lex_state = 14, .external_lex_state = 4},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 14, .external_lex_state = 4},
  [375] = {.lex_state = 16, .external_lex_state = 2},
  [376] = {.lex_state = 14},
  [377] = {.lex_state = 16, .external_lex_state = 2},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 14},
  [380] = {.lex_state = 0, .external_lex_state = 5},
  [381] = {.lex_state = 16, .external_lex_state = 2},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0, .external_lex_state = 5},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 0, .external_lex_state = 5},
  [386] = {.lex_state = 0, .external_lex_state = 5},
  [387] = {.lex_state = 14},
  [388] = {.lex_state = 0, .external_lex_state = 5},
  [389] = {.lex_state = 16, .external_lex_state = 2},
  [390] = {.lex_state = 14},
  [391] = {.lex_state = 16, .external_lex_state = 2},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 17},
  [395] = {.lex_state = 17},
  [396] = {.lex_state = 0, .external_lex_state = 6},
  [397] = {.lex_state = 16, .external_lex_state = 3},
  [398] = {.lex_state = 17},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 17},
  [402] = {.lex_state = 17},
  [403] = {.lex_state = 17},
  [404] = {.lex_state = 15},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 17},
  [408] = {.lex_state = 0, .external_lex_state = 6},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 15},
  [413] = {.lex_state = 0, .external_lex_state = 5},
  [414] = {.lex_state = 17},
  [415] = {.lex_state = 17},
  [416] = {.lex_state = 15},
  [417] = {.lex_state = 0, .external_lex_state = 5},
  [418] = {.lex_state = 16, .external_lex_state = 3},
  [419] = {.lex_state = 16, .external_lex_state = 3},
  [420] = {.lex_state = 0, .external_lex_state = 5},
  [421] = {.lex_state = 17},
  [422] = {.lex_state = 16, .external_lex_state = 3},
  [423] = {.lex_state = 17},
  [424] = {.lex_state = 17},
  [425] = {.lex_state = 15},
  [426] = {.lex_state = 16, .external_lex_state = 2},
  [427] = {.lex_state = 17},
  [428] = {.lex_state = 16, .external_lex_state = 2},
  [429] = {.lex_state = 16, .external_lex_state = 2},
  [430] = {.lex_state = 17},
  [431] = {.lex_state = 15},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 16, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0, .external_lex_state = 6},
  [436] = {.lex_state = 0, .external_lex_state = 6},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 0, .external_lex_state = 6},
  [439] = {.lex_state = 0, .external_lex_state = 6},
  [440] = {.lex_state = 16, .external_lex_state = 3},
  [441] = {.lex_state = 0, .external_lex_state = 6},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 16, .external_lex_state = 3},
  [446] = {.lex_state = 16, .external_lex_state = 3},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 0, .external_lex_state = 6},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 16, .external_lex_state = 3},
  [453] = {.lex_state = 0, .external_lex_state = 6},
  [454] = {.lex_state = 16, .external_lex_state = 3},
  [455] = {.lex_state = 16, .external_lex_state = 3},
  [456] = {.lex_state = 0, .external_lex_state = 6},
  [457] = {.lex_state = 15},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 16, .external_lex_state = 3},
  [460] = {.lex_state = 16, .external_lex_state = 3},
  [461] = {.lex_state = 0, .external_lex_state = 6},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 16, .external_lex_state = 3},
  [464] = {.lex_state = 0, .external_lex_state = 6},
  [465] = {.lex_state = 16, .external_lex_state = 3},
  [466] = {.lex_state = 0, .external_lex_state = 6},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 16, .external_lex_state = 3},
  [470] = {.lex_state = 0, .external_lex_state = 6},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 16, .external_lex_state = 3},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 16, .external_lex_state = 3},
  [475] = {.lex_state = 15},
  [476] = {.lex_state = 0, .external_lex_state = 6},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0, .external_lex_state = 6},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0, .external_lex_state = 6},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0, .external_lex_state = 6},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0, .external_lex_state = 6},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 12},
  [499] = {.lex_state = 12},
  [500] = {.lex_state = 12},
  [501] = {.lex_state = 12},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 12},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 12},
  [508] = {.lex_state = 12},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 12},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 16},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 15},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
};

enum {
  ts_external_token__concat = 0,
  ts_external_token__concat_oct = 1,
  ts_external_token__brace_concat = 2,
  ts_external_token__concat_list = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__concat] = sym__concat,
  [ts_external_token__concat_oct] = sym__concat_oct,
  [ts_external_token__brace_concat] = sym__brace_concat,
  [ts_external_token__concat_list] = sym__concat_list,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__concat] = true,
    [ts_external_token__concat_oct] = true,
    [ts_external_token__brace_concat] = true,
    [ts_external_token__concat_list] = true,
  },
  [2] = {
    [ts_external_token__concat] = true,
    [ts_external_token__concat_oct] = true,
    [ts_external_token__concat_list] = true,
  },
  [3] = {
    [ts_external_token__concat] = true,
    [ts_external_token__concat_oct] = true,
  },
  [4] = {
    [ts_external_token__concat_list] = true,
  },
  [5] = {
    [ts_external_token__brace_concat] = true,
    [ts_external_token__concat_list] = true,
  },
  [6] = {
    [ts_external_token__brace_concat] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [aux_sym_test_command_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_argparse] = ACTIONS(1),
    [anon_sym_bg] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_breakpoint] = ACTIONS(1),
    [anon_sym_builtin] = ACTIONS(1),
    [anon_sym_cd] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_commandline] = ACTIONS(1),
    [anon_sym_complete] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_disown] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_emit] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_fg] = ACTIONS(1),
    [anon_sym_functions] = ACTIONS(1),
    [anon_sym_history] = ACTIONS(1),
    [anon_sym_jobs] = ACTIONS(1),
    [anon_sym_math] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_printf] = ACTIONS(1),
    [anon_sym_pwd] = ACTIONS(1),
    [anon_sym_random] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_realpath] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_set_color] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_ulimit] = ACTIONS(1),
    [anon_sym_wait] = ACTIONS(1),
    [sym_stream_redirect] = ACTIONS(1),
    [sym_direction] = ACTIONS(1),
    [sym_home_dir_expansion] = ACTIONS(1),
    [sym_glob] = ACTIONS(1),
    [sym__concat] = ACTIONS(1),
    [sym__concat_oct] = ACTIONS(1),
    [sym__brace_concat] = ACTIONS(1),
    [sym__concat_list] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(515),
    [sym_conditional_execution] = STATE(287),
    [sym_pipe] = STATE(287),
    [sym_redirect_statement] = STATE(287),
    [sym_negated_statement] = STATE(287),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(287),
    [sym_return] = STATE(287),
    [sym_switch_statement] = STATE(287),
    [sym_for_statement] = STATE(287),
    [sym_while_statement] = STATE(287),
    [sym_if_statement] = STATE(287),
    [sym_begin_statement] = STATE(287),
    [sym_test_command] = STATE(287),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(287),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(9),
    [anon_sym_CR_LF] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(25),
    [sym_continue] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [2] = {
    [sym_conditional_execution] = STATE(267),
    [sym_pipe] = STATE(267),
    [sym_redirect_statement] = STATE(267),
    [sym__terminated_opt_statement] = STATE(4),
    [sym_negated_statement] = STATE(267),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(267),
    [sym_return] = STATE(267),
    [sym_switch_statement] = STATE(267),
    [sym_for_statement] = STATE(267),
    [sym_while_statement] = STATE(267),
    [sym_if_statement] = STATE(267),
    [sym_else_if_clause] = STATE(382),
    [sym_else_clause] = STATE(513),
    [sym_begin_statement] = STATE(267),
    [sym_test_command] = STATE(267),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(267),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(4),
    [aux_sym_if_statement_repeat1] = STATE(382),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(51),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(53),
    [sym_continue] = ACTIONS(53),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_else] = ACTIONS(55),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [3] = {
    [sym_conditional_execution] = STATE(267),
    [sym_pipe] = STATE(267),
    [sym_redirect_statement] = STATE(267),
    [sym__terminated_opt_statement] = STATE(2),
    [sym_negated_statement] = STATE(267),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(267),
    [sym_return] = STATE(267),
    [sym_switch_statement] = STATE(267),
    [sym_for_statement] = STATE(267),
    [sym_while_statement] = STATE(267),
    [sym_if_statement] = STATE(267),
    [sym_else_if_clause] = STATE(378),
    [sym_else_clause] = STATE(517),
    [sym_begin_statement] = STATE(267),
    [sym_test_command] = STATE(267),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(267),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(2),
    [aux_sym_if_statement_repeat1] = STATE(378),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_AMP] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(57),
    [anon_sym_CR] = ACTIONS(57),
    [anon_sym_CR_LF] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(59),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(53),
    [sym_continue] = ACTIONS(53),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_else] = ACTIONS(55),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [4] = {
    [sym_conditional_execution] = STATE(267),
    [sym_pipe] = STATE(267),
    [sym_redirect_statement] = STATE(267),
    [sym__terminated_opt_statement] = STATE(4),
    [sym_negated_statement] = STATE(267),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(267),
    [sym_return] = STATE(267),
    [sym_switch_statement] = STATE(267),
    [sym_for_statement] = STATE(267),
    [sym_while_statement] = STATE(267),
    [sym_if_statement] = STATE(267),
    [sym_begin_statement] = STATE(267),
    [sym_test_command] = STATE(267),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(267),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(4),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(64),
    [anon_sym_CR] = ACTIONS(64),
    [anon_sym_CR_LF] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_not] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_function] = ACTIONS(76),
    [anon_sym_end] = ACTIONS(79),
    [sym_integer] = ACTIONS(81),
    [sym_float] = ACTIONS(81),
    [anon_sym_return] = ACTIONS(84),
    [anon_sym_switch] = ACTIONS(87),
    [sym_break] = ACTIONS(90),
    [sym_continue] = ACTIONS(90),
    [anon_sym_for] = ACTIONS(93),
    [anon_sym_while] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_else] = ACTIONS(79),
    [anon_sym_begin] = ACTIONS(102),
    [aux_sym_test_command_token1] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(108),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [sym_escape_sequence] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_argparse] = ACTIONS(120),
    [anon_sym_bg] = ACTIONS(120),
    [anon_sym_bind] = ACTIONS(120),
    [anon_sym_block] = ACTIONS(120),
    [anon_sym_breakpoint] = ACTIONS(120),
    [anon_sym_builtin] = ACTIONS(120),
    [anon_sym_cd] = ACTIONS(120),
    [anon_sym_command] = ACTIONS(120),
    [anon_sym_commandline] = ACTIONS(120),
    [anon_sym_complete] = ACTIONS(120),
    [anon_sym_contains] = ACTIONS(120),
    [anon_sym_count] = ACTIONS(120),
    [anon_sym_disown] = ACTIONS(120),
    [anon_sym_echo] = ACTIONS(120),
    [anon_sym_emit] = ACTIONS(120),
    [anon_sym_eval] = ACTIONS(120),
    [anon_sym_exec] = ACTIONS(120),
    [anon_sym_exit] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [anon_sym_fg] = ACTIONS(120),
    [anon_sym_functions] = ACTIONS(120),
    [anon_sym_history] = ACTIONS(120),
    [anon_sym_jobs] = ACTIONS(120),
    [anon_sym_math] = ACTIONS(120),
    [anon_sym_path] = ACTIONS(120),
    [anon_sym_printf] = ACTIONS(120),
    [anon_sym_pwd] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_read] = ACTIONS(120),
    [anon_sym_realpath] = ACTIONS(120),
    [anon_sym_set] = ACTIONS(120),
    [anon_sym_set_color] = ACTIONS(120),
    [anon_sym_source] = ACTIONS(120),
    [anon_sym_status] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [anon_sym_test] = ACTIONS(120),
    [anon_sym_time] = ACTIONS(120),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_ulimit] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [sym_home_dir_expansion] = ACTIONS(81),
    [sym_glob] = ACTIONS(81),
    [sym_word] = ACTIONS(81),
  },
  [5] = {
    [sym_conditional_execution] = STATE(267),
    [sym_pipe] = STATE(267),
    [sym_redirect_statement] = STATE(267),
    [sym__terminated_opt_statement] = STATE(4),
    [sym_negated_statement] = STATE(267),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(267),
    [sym_return] = STATE(267),
    [sym_switch_statement] = STATE(267),
    [sym_for_statement] = STATE(267),
    [sym_while_statement] = STATE(267),
    [sym_if_statement] = STATE(267),
    [sym_begin_statement] = STATE(267),
    [sym_test_command] = STATE(267),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(267),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(4),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_CR_LF] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(123),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(53),
    [sym_continue] = ACTIONS(53),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_else] = ACTIONS(123),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [6] = {
    [sym_conditional_execution] = STATE(267),
    [sym_pipe] = STATE(267),
    [sym_redirect_statement] = STATE(267),
    [sym__terminated_opt_statement] = STATE(5),
    [sym_negated_statement] = STATE(267),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(267),
    [sym_return] = STATE(267),
    [sym_switch_statement] = STATE(267),
    [sym_for_statement] = STATE(267),
    [sym_while_statement] = STATE(267),
    [sym_if_statement] = STATE(267),
    [sym_begin_statement] = STATE(267),
    [sym_test_command] = STATE(267),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(267),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(5),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(125),
    [anon_sym_CR_LF] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(127),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(53),
    [sym_continue] = ACTIONS(53),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_else] = ACTIONS(127),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [7] = {
    [sym_conditional_execution] = STATE(276),
    [sym_pipe] = STATE(276),
    [sym_redirect_statement] = STATE(276),
    [sym__terminated_opt_statement] = STATE(11),
    [sym_negated_statement] = STATE(276),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(276),
    [sym_return] = STATE(276),
    [sym_switch_statement] = STATE(276),
    [sym_for_statement] = STATE(276),
    [sym_while_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym_begin_statement] = STATE(276),
    [sym_test_command] = STATE(276),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(276),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(11),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_AMP] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_CR] = ACTIONS(129),
    [anon_sym_CR_LF] = ACTIONS(129),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(131),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(133),
    [sym_continue] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [8] = {
    [sym_conditional_execution] = STATE(276),
    [sym_pipe] = STATE(276),
    [sym_redirect_statement] = STATE(276),
    [sym__terminated_opt_statement] = STATE(8),
    [sym_negated_statement] = STATE(276),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(276),
    [sym_return] = STATE(276),
    [sym_switch_statement] = STATE(276),
    [sym_for_statement] = STATE(276),
    [sym_while_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym_begin_statement] = STATE(276),
    [sym_test_command] = STATE(276),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(276),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(8),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_AMP] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_CR] = ACTIONS(135),
    [anon_sym_CR_LF] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_not] = ACTIONS(67),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_function] = ACTIONS(76),
    [anon_sym_end] = ACTIONS(79),
    [sym_integer] = ACTIONS(81),
    [sym_float] = ACTIONS(81),
    [anon_sym_return] = ACTIONS(84),
    [anon_sym_switch] = ACTIONS(87),
    [sym_break] = ACTIONS(138),
    [sym_continue] = ACTIONS(138),
    [anon_sym_for] = ACTIONS(93),
    [anon_sym_while] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_begin] = ACTIONS(102),
    [aux_sym_test_command_token1] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(108),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [sym_escape_sequence] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_argparse] = ACTIONS(120),
    [anon_sym_bg] = ACTIONS(120),
    [anon_sym_bind] = ACTIONS(120),
    [anon_sym_block] = ACTIONS(120),
    [anon_sym_breakpoint] = ACTIONS(120),
    [anon_sym_builtin] = ACTIONS(120),
    [anon_sym_cd] = ACTIONS(120),
    [anon_sym_command] = ACTIONS(120),
    [anon_sym_commandline] = ACTIONS(120),
    [anon_sym_complete] = ACTIONS(120),
    [anon_sym_contains] = ACTIONS(120),
    [anon_sym_count] = ACTIONS(120),
    [anon_sym_disown] = ACTIONS(120),
    [anon_sym_echo] = ACTIONS(120),
    [anon_sym_emit] = ACTIONS(120),
    [anon_sym_eval] = ACTIONS(120),
    [anon_sym_exec] = ACTIONS(120),
    [anon_sym_exit] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [anon_sym_fg] = ACTIONS(120),
    [anon_sym_functions] = ACTIONS(120),
    [anon_sym_history] = ACTIONS(120),
    [anon_sym_jobs] = ACTIONS(120),
    [anon_sym_math] = ACTIONS(120),
    [anon_sym_path] = ACTIONS(120),
    [anon_sym_printf] = ACTIONS(120),
    [anon_sym_pwd] = ACTIONS(120),
    [anon_sym_random] = ACTIONS(120),
    [anon_sym_read] = ACTIONS(120),
    [anon_sym_realpath] = ACTIONS(120),
    [anon_sym_set] = ACTIONS(120),
    [anon_sym_set_color] = ACTIONS(120),
    [anon_sym_source] = ACTIONS(120),
    [anon_sym_status] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [anon_sym_test] = ACTIONS(120),
    [anon_sym_time] = ACTIONS(120),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [anon_sym_ulimit] = ACTIONS(120),
    [anon_sym_wait] = ACTIONS(120),
    [sym_home_dir_expansion] = ACTIONS(81),
    [sym_glob] = ACTIONS(81),
    [sym_word] = ACTIONS(81),
  },
  [9] = {
    [sym_conditional_execution] = STATE(276),
    [sym_pipe] = STATE(276),
    [sym_redirect_statement] = STATE(276),
    [sym__terminated_opt_statement] = STATE(8),
    [sym_negated_statement] = STATE(276),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(276),
    [sym_return] = STATE(276),
    [sym_switch_statement] = STATE(276),
    [sym_for_statement] = STATE(276),
    [sym_while_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym_begin_statement] = STATE(276),
    [sym_test_command] = STATE(276),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(276),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(8),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_CR] = ACTIONS(141),
    [anon_sym_CR_LF] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(143),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(133),
    [sym_continue] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [10] = {
    [sym_conditional_execution] = STATE(276),
    [sym_pipe] = STATE(276),
    [sym_redirect_statement] = STATE(276),
    [sym__terminated_opt_statement] = STATE(13),
    [sym_negated_statement] = STATE(276),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(276),
    [sym_return] = STATE(276),
    [sym_switch_statement] = STATE(276),
    [sym_for_statement] = STATE(276),
    [sym_while_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym_begin_statement] = STATE(276),
    [sym_test_command] = STATE(276),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(276),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(13),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_AMP] = ACTIONS(145),
    [anon_sym_LF] = ACTIONS(145),
    [anon_sym_CR] = ACTIONS(145),
    [anon_sym_CR_LF] = ACTIONS(145),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(147),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(133),
    [sym_continue] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [11] = {
    [sym_conditional_execution] = STATE(276),
    [sym_pipe] = STATE(276),
    [sym_redirect_statement] = STATE(276),
    [sym__terminated_opt_statement] = STATE(8),
    [sym_negated_statement] = STATE(276),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(276),
    [sym_return] = STATE(276),
    [sym_switch_statement] = STATE(276),
    [sym_for_statement] = STATE(276),
    [sym_while_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym_begin_statement] = STATE(276),
    [sym_test_command] = STATE(276),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(276),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(8),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_CR] = ACTIONS(141),
    [anon_sym_CR_LF] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(149),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(133),
    [sym_continue] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [12] = {
    [sym_conditional_execution] = STATE(276),
    [sym_pipe] = STATE(276),
    [sym_redirect_statement] = STATE(276),
    [sym__terminated_opt_statement] = STATE(9),
    [sym_negated_statement] = STATE(276),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(276),
    [sym_return] = STATE(276),
    [sym_switch_statement] = STATE(276),
    [sym_for_statement] = STATE(276),
    [sym_while_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym_begin_statement] = STATE(276),
    [sym_test_command] = STATE(276),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(276),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(9),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_AMP] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_CR] = ACTIONS(151),
    [anon_sym_CR_LF] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(153),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(133),
    [sym_continue] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [13] = {
    [sym_conditional_execution] = STATE(276),
    [sym_pipe] = STATE(276),
    [sym_redirect_statement] = STATE(276),
    [sym__terminated_opt_statement] = STATE(8),
    [sym_negated_statement] = STATE(276),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(276),
    [sym_return] = STATE(276),
    [sym_switch_statement] = STATE(276),
    [sym_for_statement] = STATE(276),
    [sym_while_statement] = STATE(276),
    [sym_if_statement] = STATE(276),
    [sym_begin_statement] = STATE(276),
    [sym_test_command] = STATE(276),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(276),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_while_statement_repeat1] = STATE(8),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_CR] = ACTIONS(141),
    [anon_sym_CR_LF] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(155),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(133),
    [sym_continue] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [14] = {
    [sym_conditional_execution] = STATE(287),
    [sym_pipe] = STATE(287),
    [sym_redirect_statement] = STATE(287),
    [sym_negated_statement] = STATE(287),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(287),
    [sym_return] = STATE(287),
    [sym_switch_statement] = STATE(287),
    [sym_for_statement] = STATE(287),
    [sym_while_statement] = STATE(287),
    [sym_if_statement] = STATE(287),
    [sym_begin_statement] = STATE(287),
    [sym_test_command] = STATE(287),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(287),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(159),
    [anon_sym_CR] = ACTIONS(159),
    [anon_sym_CR_LF] = ACTIONS(159),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(25),
    [sym_continue] = ACTIONS(25),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [15] = {
    [sym_conditional_execution] = STATE(249),
    [sym_pipe] = STATE(249),
    [sym_redirect_statement] = STATE(249),
    [sym_negated_statement] = STATE(249),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(249),
    [sym_return] = STATE(249),
    [sym_switch_statement] = STATE(249),
    [sym_for_statement] = STATE(249),
    [sym_while_statement] = STATE(249),
    [sym_if_statement] = STATE(249),
    [sym_begin_statement] = STATE(249),
    [sym_test_command] = STATE(249),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(249),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(165),
    [sym_continue] = ACTIONS(165),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [16] = {
    [sym_conditional_execution] = STATE(237),
    [sym_pipe] = STATE(237),
    [sym_redirect_statement] = STATE(237),
    [sym_negated_statement] = STATE(237),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(237),
    [sym_return] = STATE(237),
    [sym_switch_statement] = STATE(237),
    [sym_for_statement] = STATE(237),
    [sym_while_statement] = STATE(237),
    [sym_if_statement] = STATE(237),
    [sym_begin_statement] = STATE(237),
    [sym_test_command] = STATE(237),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(237),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(29),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(167),
    [anon_sym_AMP] = ACTIONS(167),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_CR_LF] = ACTIONS(167),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(171),
    [sym_continue] = ACTIONS(171),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [17] = {
    [sym_conditional_execution] = STATE(244),
    [sym_pipe] = STATE(244),
    [sym_redirect_statement] = STATE(244),
    [sym_negated_statement] = STATE(244),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(244),
    [sym_return] = STATE(244),
    [sym_switch_statement] = STATE(244),
    [sym_for_statement] = STATE(244),
    [sym_while_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym_begin_statement] = STATE(244),
    [sym_test_command] = STATE(244),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(244),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(32),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_CR] = ACTIONS(173),
    [anon_sym_CR_LF] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(177),
    [sym_continue] = ACTIONS(177),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [18] = {
    [sym_conditional_execution] = STATE(275),
    [sym_pipe] = STATE(275),
    [sym_redirect_statement] = STATE(275),
    [sym_negated_statement] = STATE(275),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(275),
    [sym_return] = STATE(275),
    [sym_switch_statement] = STATE(275),
    [sym_for_statement] = STATE(275),
    [sym_while_statement] = STATE(275),
    [sym_if_statement] = STATE(275),
    [sym_begin_statement] = STATE(275),
    [sym_test_command] = STATE(275),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(275),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(182),
    [anon_sym_CR] = ACTIONS(182),
    [anon_sym_CR_LF] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_not] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_function] = ACTIONS(196),
    [sym_integer] = ACTIONS(199),
    [sym_float] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(202),
    [anon_sym_switch] = ACTIONS(205),
    [sym_break] = ACTIONS(208),
    [sym_continue] = ACTIONS(208),
    [anon_sym_for] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(217),
    [anon_sym_begin] = ACTIONS(220),
    [aux_sym_test_command_token1] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(226),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_escape_sequence] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [anon_sym_argparse] = ACTIONS(238),
    [anon_sym_bg] = ACTIONS(238),
    [anon_sym_bind] = ACTIONS(238),
    [anon_sym_block] = ACTIONS(238),
    [anon_sym_breakpoint] = ACTIONS(238),
    [anon_sym_builtin] = ACTIONS(238),
    [anon_sym_cd] = ACTIONS(238),
    [anon_sym_command] = ACTIONS(238),
    [anon_sym_commandline] = ACTIONS(238),
    [anon_sym_complete] = ACTIONS(238),
    [anon_sym_contains] = ACTIONS(238),
    [anon_sym_count] = ACTIONS(238),
    [anon_sym_disown] = ACTIONS(238),
    [anon_sym_echo] = ACTIONS(238),
    [anon_sym_emit] = ACTIONS(238),
    [anon_sym_eval] = ACTIONS(238),
    [anon_sym_exec] = ACTIONS(238),
    [anon_sym_exit] = ACTIONS(238),
    [anon_sym_false] = ACTIONS(238),
    [anon_sym_fg] = ACTIONS(238),
    [anon_sym_functions] = ACTIONS(238),
    [anon_sym_history] = ACTIONS(238),
    [anon_sym_jobs] = ACTIONS(238),
    [anon_sym_math] = ACTIONS(238),
    [anon_sym_path] = ACTIONS(238),
    [anon_sym_printf] = ACTIONS(238),
    [anon_sym_pwd] = ACTIONS(238),
    [anon_sym_random] = ACTIONS(238),
    [anon_sym_read] = ACTIONS(238),
    [anon_sym_realpath] = ACTIONS(238),
    [anon_sym_set] = ACTIONS(238),
    [anon_sym_set_color] = ACTIONS(238),
    [anon_sym_source] = ACTIONS(238),
    [anon_sym_status] = ACTIONS(238),
    [anon_sym_string] = ACTIONS(238),
    [anon_sym_test] = ACTIONS(238),
    [anon_sym_time] = ACTIONS(238),
    [anon_sym_true] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(238),
    [anon_sym_ulimit] = ACTIONS(238),
    [anon_sym_wait] = ACTIONS(238),
    [sym_home_dir_expansion] = ACTIONS(199),
    [sym_glob] = ACTIONS(199),
    [sym_word] = ACTIONS(199),
  },
  [19] = {
    [sym_conditional_execution] = STATE(234),
    [sym_pipe] = STATE(234),
    [sym_redirect_statement] = STATE(234),
    [sym_negated_statement] = STATE(234),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(234),
    [sym_return] = STATE(234),
    [sym_switch_statement] = STATE(234),
    [sym_for_statement] = STATE(234),
    [sym_while_statement] = STATE(234),
    [sym_if_statement] = STATE(234),
    [sym_begin_statement] = STATE(234),
    [sym_test_command] = STATE(234),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(234),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(31),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_CR] = ACTIONS(241),
    [anon_sym_CR_LF] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(245),
    [sym_continue] = ACTIONS(245),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [20] = {
    [sym_conditional_execution] = STATE(252),
    [sym_pipe] = STATE(252),
    [sym_redirect_statement] = STATE(252),
    [sym_negated_statement] = STATE(252),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(252),
    [sym_return] = STATE(252),
    [sym_switch_statement] = STATE(252),
    [sym_for_statement] = STATE(252),
    [sym_while_statement] = STATE(252),
    [sym_if_statement] = STATE(252),
    [sym_begin_statement] = STATE(252),
    [sym_test_command] = STATE(252),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(252),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(249),
    [sym_continue] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [21] = {
    [sym_conditional_execution] = STATE(236),
    [sym_pipe] = STATE(236),
    [sym_redirect_statement] = STATE(236),
    [sym_negated_statement] = STATE(236),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(236),
    [sym_return] = STATE(236),
    [sym_switch_statement] = STATE(236),
    [sym_for_statement] = STATE(236),
    [sym_while_statement] = STATE(236),
    [sym_if_statement] = STATE(236),
    [sym_begin_statement] = STATE(236),
    [sym_test_command] = STATE(236),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(236),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(253),
    [sym_continue] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [22] = {
    [sym_conditional_execution] = STATE(254),
    [sym_pipe] = STATE(254),
    [sym_redirect_statement] = STATE(254),
    [sym_negated_statement] = STATE(254),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(254),
    [sym_return] = STATE(254),
    [sym_switch_statement] = STATE(254),
    [sym_for_statement] = STATE(254),
    [sym_while_statement] = STATE(254),
    [sym_if_statement] = STATE(254),
    [sym_begin_statement] = STATE(254),
    [sym_test_command] = STATE(254),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(254),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(34),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_CR] = ACTIONS(255),
    [anon_sym_CR_LF] = ACTIONS(255),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(259),
    [sym_continue] = ACTIONS(259),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [23] = {
    [sym_conditional_execution] = STATE(236),
    [sym_pipe] = STATE(236),
    [sym_redirect_statement] = STATE(236),
    [sym_negated_statement] = STATE(236),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(236),
    [sym_return] = STATE(236),
    [sym_switch_statement] = STATE(236),
    [sym_for_statement] = STATE(236),
    [sym_while_statement] = STATE(236),
    [sym_if_statement] = STATE(236),
    [sym_begin_statement] = STATE(236),
    [sym_test_command] = STATE(236),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(236),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(20),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_AMP] = ACTIONS(261),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_CR] = ACTIONS(261),
    [anon_sym_CR_LF] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(253),
    [sym_continue] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [24] = {
    [sym_conditional_execution] = STATE(249),
    [sym_pipe] = STATE(249),
    [sym_redirect_statement] = STATE(249),
    [sym_negated_statement] = STATE(249),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(249),
    [sym_return] = STATE(249),
    [sym_switch_statement] = STATE(249),
    [sym_for_statement] = STATE(249),
    [sym_while_statement] = STATE(249),
    [sym_if_statement] = STATE(249),
    [sym_begin_statement] = STATE(249),
    [sym_test_command] = STATE(249),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(249),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(42),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(263),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_CR] = ACTIONS(263),
    [anon_sym_CR_LF] = ACTIONS(263),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(165),
    [sym_continue] = ACTIONS(165),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [25] = {
    [sym_conditional_execution] = STATE(235),
    [sym_pipe] = STATE(235),
    [sym_redirect_statement] = STATE(235),
    [sym_negated_statement] = STATE(235),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(235),
    [sym_return] = STATE(235),
    [sym_switch_statement] = STATE(235),
    [sym_for_statement] = STATE(235),
    [sym_while_statement] = STATE(235),
    [sym_if_statement] = STATE(235),
    [sym_begin_statement] = STATE(235),
    [sym_test_command] = STATE(235),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(235),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(26),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_CR] = ACTIONS(265),
    [anon_sym_CR_LF] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(269),
    [sym_continue] = ACTIONS(269),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [26] = {
    [sym_conditional_execution] = STATE(234),
    [sym_pipe] = STATE(234),
    [sym_redirect_statement] = STATE(234),
    [sym_negated_statement] = STATE(234),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(234),
    [sym_return] = STATE(234),
    [sym_switch_statement] = STATE(234),
    [sym_for_statement] = STATE(234),
    [sym_while_statement] = STATE(234),
    [sym_if_statement] = STATE(234),
    [sym_begin_statement] = STATE(234),
    [sym_test_command] = STATE(234),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(234),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(245),
    [sym_continue] = ACTIONS(245),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [27] = {
    [sym_conditional_execution] = STATE(233),
    [sym_pipe] = STATE(233),
    [sym_redirect_statement] = STATE(233),
    [sym_negated_statement] = STATE(233),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(233),
    [sym_return] = STATE(233),
    [sym_switch_statement] = STATE(233),
    [sym_for_statement] = STATE(233),
    [sym_while_statement] = STATE(233),
    [sym_if_statement] = STATE(233),
    [sym_begin_statement] = STATE(233),
    [sym_test_command] = STATE(233),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(233),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(46),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_AMP] = ACTIONS(271),
    [anon_sym_LF] = ACTIONS(271),
    [anon_sym_CR] = ACTIONS(271),
    [anon_sym_CR_LF] = ACTIONS(271),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(275),
    [sym_continue] = ACTIONS(275),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [28] = {
    [sym_conditional_execution] = STATE(243),
    [sym_pipe] = STATE(243),
    [sym_redirect_statement] = STATE(243),
    [sym_negated_statement] = STATE(243),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(243),
    [sym_return] = STATE(243),
    [sym_switch_statement] = STATE(243),
    [sym_for_statement] = STATE(243),
    [sym_while_statement] = STATE(243),
    [sym_if_statement] = STATE(243),
    [sym_begin_statement] = STATE(243),
    [sym_test_command] = STATE(243),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(243),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(21),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_CR] = ACTIONS(277),
    [anon_sym_CR_LF] = ACTIONS(277),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(281),
    [sym_continue] = ACTIONS(281),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [29] = {
    [sym_conditional_execution] = STATE(244),
    [sym_pipe] = STATE(244),
    [sym_redirect_statement] = STATE(244),
    [sym_negated_statement] = STATE(244),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(244),
    [sym_return] = STATE(244),
    [sym_switch_statement] = STATE(244),
    [sym_for_statement] = STATE(244),
    [sym_while_statement] = STATE(244),
    [sym_if_statement] = STATE(244),
    [sym_begin_statement] = STATE(244),
    [sym_test_command] = STATE(244),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(244),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(177),
    [sym_continue] = ACTIONS(177),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [30] = {
    [sym_conditional_execution] = STATE(256),
    [sym_pipe] = STATE(256),
    [sym_redirect_statement] = STATE(256),
    [sym_negated_statement] = STATE(256),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(256),
    [sym_return] = STATE(256),
    [sym_switch_statement] = STATE(256),
    [sym_for_statement] = STATE(256),
    [sym_while_statement] = STATE(256),
    [sym_if_statement] = STATE(256),
    [sym_begin_statement] = STATE(256),
    [sym_test_command] = STATE(256),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(256),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(35),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_CR_LF] = ACTIONS(283),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(287),
    [sym_continue] = ACTIONS(287),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [31] = {
    [sym_conditional_execution] = STATE(255),
    [sym_pipe] = STATE(255),
    [sym_redirect_statement] = STATE(255),
    [sym_negated_statement] = STATE(255),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(255),
    [sym_return] = STATE(255),
    [sym_switch_statement] = STATE(255),
    [sym_for_statement] = STATE(255),
    [sym_while_statement] = STATE(255),
    [sym_if_statement] = STATE(255),
    [sym_begin_statement] = STATE(255),
    [sym_test_command] = STATE(255),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(255),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(291),
    [sym_continue] = ACTIONS(291),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [32] = {
    [sym_conditional_execution] = STATE(245),
    [sym_pipe] = STATE(245),
    [sym_redirect_statement] = STATE(245),
    [sym_negated_statement] = STATE(245),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(245),
    [sym_return] = STATE(245),
    [sym_switch_statement] = STATE(245),
    [sym_for_statement] = STATE(245),
    [sym_while_statement] = STATE(245),
    [sym_if_statement] = STATE(245),
    [sym_begin_statement] = STATE(245),
    [sym_test_command] = STATE(245),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(245),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(295),
    [sym_continue] = ACTIONS(295),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [33] = {
    [sym_conditional_execution] = STATE(233),
    [sym_pipe] = STATE(233),
    [sym_redirect_statement] = STATE(233),
    [sym_negated_statement] = STATE(233),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(233),
    [sym_return] = STATE(233),
    [sym_switch_statement] = STATE(233),
    [sym_for_statement] = STATE(233),
    [sym_while_statement] = STATE(233),
    [sym_if_statement] = STATE(233),
    [sym_begin_statement] = STATE(233),
    [sym_test_command] = STATE(233),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(233),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(275),
    [sym_continue] = ACTIONS(275),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [34] = {
    [sym_conditional_execution] = STATE(256),
    [sym_pipe] = STATE(256),
    [sym_redirect_statement] = STATE(256),
    [sym_negated_statement] = STATE(256),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(256),
    [sym_return] = STATE(256),
    [sym_switch_statement] = STATE(256),
    [sym_for_statement] = STATE(256),
    [sym_while_statement] = STATE(256),
    [sym_if_statement] = STATE(256),
    [sym_begin_statement] = STATE(256),
    [sym_test_command] = STATE(256),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(256),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(287),
    [sym_continue] = ACTIONS(287),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [35] = {
    [sym_conditional_execution] = STATE(239),
    [sym_pipe] = STATE(239),
    [sym_redirect_statement] = STATE(239),
    [sym_negated_statement] = STATE(239),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(239),
    [sym_return] = STATE(239),
    [sym_switch_statement] = STATE(239),
    [sym_for_statement] = STATE(239),
    [sym_while_statement] = STATE(239),
    [sym_if_statement] = STATE(239),
    [sym_begin_statement] = STATE(239),
    [sym_test_command] = STATE(239),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(239),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(299),
    [sym_continue] = ACTIONS(299),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [36] = {
    [sym_conditional_execution] = STATE(287),
    [sym_pipe] = STATE(287),
    [sym_redirect_statement] = STATE(287),
    [sym_negated_statement] = STATE(287),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(287),
    [sym_return] = STATE(287),
    [sym_switch_statement] = STATE(287),
    [sym_for_statement] = STATE(287),
    [sym_while_statement] = STATE(287),
    [sym_if_statement] = STATE(287),
    [sym_begin_statement] = STATE(287),
    [sym_test_command] = STATE(287),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(287),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_LF] = ACTIONS(303),
    [anon_sym_CR] = ACTIONS(303),
    [anon_sym_CR_LF] = ACTIONS(303),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_not] = ACTIONS(185),
    [anon_sym_DOLLAR] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_function] = ACTIONS(196),
    [sym_integer] = ACTIONS(199),
    [sym_float] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(202),
    [anon_sym_switch] = ACTIONS(205),
    [sym_break] = ACTIONS(306),
    [sym_continue] = ACTIONS(306),
    [anon_sym_for] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(217),
    [anon_sym_begin] = ACTIONS(220),
    [aux_sym_test_command_token1] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(226),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym_escape_sequence] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [anon_sym_argparse] = ACTIONS(238),
    [anon_sym_bg] = ACTIONS(238),
    [anon_sym_bind] = ACTIONS(238),
    [anon_sym_block] = ACTIONS(238),
    [anon_sym_breakpoint] = ACTIONS(238),
    [anon_sym_builtin] = ACTIONS(238),
    [anon_sym_cd] = ACTIONS(238),
    [anon_sym_command] = ACTIONS(238),
    [anon_sym_commandline] = ACTIONS(238),
    [anon_sym_complete] = ACTIONS(238),
    [anon_sym_contains] = ACTIONS(238),
    [anon_sym_count] = ACTIONS(238),
    [anon_sym_disown] = ACTIONS(238),
    [anon_sym_echo] = ACTIONS(238),
    [anon_sym_emit] = ACTIONS(238),
    [anon_sym_eval] = ACTIONS(238),
    [anon_sym_exec] = ACTIONS(238),
    [anon_sym_exit] = ACTIONS(238),
    [anon_sym_false] = ACTIONS(238),
    [anon_sym_fg] = ACTIONS(238),
    [anon_sym_functions] = ACTIONS(238),
    [anon_sym_history] = ACTIONS(238),
    [anon_sym_jobs] = ACTIONS(238),
    [anon_sym_math] = ACTIONS(238),
    [anon_sym_path] = ACTIONS(238),
    [anon_sym_printf] = ACTIONS(238),
    [anon_sym_pwd] = ACTIONS(238),
    [anon_sym_random] = ACTIONS(238),
    [anon_sym_read] = ACTIONS(238),
    [anon_sym_realpath] = ACTIONS(238),
    [anon_sym_set] = ACTIONS(238),
    [anon_sym_set_color] = ACTIONS(238),
    [anon_sym_source] = ACTIONS(238),
    [anon_sym_status] = ACTIONS(238),
    [anon_sym_string] = ACTIONS(238),
    [anon_sym_test] = ACTIONS(238),
    [anon_sym_time] = ACTIONS(238),
    [anon_sym_true] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(238),
    [anon_sym_ulimit] = ACTIONS(238),
    [anon_sym_wait] = ACTIONS(238),
    [sym_home_dir_expansion] = ACTIONS(199),
    [sym_glob] = ACTIONS(199),
    [sym_word] = ACTIONS(199),
  },
  [37] = {
    [sym_conditional_execution] = STATE(232),
    [sym_pipe] = STATE(232),
    [sym_redirect_statement] = STATE(232),
    [sym_negated_statement] = STATE(232),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(232),
    [sym_return] = STATE(232),
    [sym_switch_statement] = STATE(232),
    [sym_for_statement] = STATE(232),
    [sym_while_statement] = STATE(232),
    [sym_if_statement] = STATE(232),
    [sym_begin_statement] = STATE(232),
    [sym_test_command] = STATE(232),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(232),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(41),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_CR] = ACTIONS(309),
    [anon_sym_CR_LF] = ACTIONS(309),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(313),
    [sym_continue] = ACTIONS(313),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [38] = {
    [sym_conditional_execution] = STATE(260),
    [sym_pipe] = STATE(260),
    [sym_redirect_statement] = STATE(260),
    [sym_negated_statement] = STATE(260),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(260),
    [sym_return] = STATE(260),
    [sym_switch_statement] = STATE(260),
    [sym_for_statement] = STATE(260),
    [sym_while_statement] = STATE(260),
    [sym_if_statement] = STATE(260),
    [sym_begin_statement] = STATE(260),
    [sym_test_command] = STATE(260),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(260),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(317),
    [sym_continue] = ACTIONS(317),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [39] = {
    [sym_conditional_execution] = STATE(258),
    [sym_pipe] = STATE(258),
    [sym_redirect_statement] = STATE(258),
    [sym_negated_statement] = STATE(258),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(258),
    [sym_return] = STATE(258),
    [sym_switch_statement] = STATE(258),
    [sym_for_statement] = STATE(258),
    [sym_while_statement] = STATE(258),
    [sym_if_statement] = STATE(258),
    [sym_begin_statement] = STATE(258),
    [sym_test_command] = STATE(258),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(258),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(321),
    [sym_continue] = ACTIONS(321),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [40] = {
    [sym_conditional_execution] = STATE(248),
    [sym_pipe] = STATE(248),
    [sym_redirect_statement] = STATE(248),
    [sym_negated_statement] = STATE(248),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(248),
    [sym_return] = STATE(248),
    [sym_switch_statement] = STATE(248),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(248),
    [sym_begin_statement] = STATE(248),
    [sym_test_command] = STATE(248),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(248),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(44),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_CR] = ACTIONS(323),
    [anon_sym_CR_LF] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(327),
    [sym_continue] = ACTIONS(327),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [41] = {
    [sym_conditional_execution] = STATE(248),
    [sym_pipe] = STATE(248),
    [sym_redirect_statement] = STATE(248),
    [sym_negated_statement] = STATE(248),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(248),
    [sym_return] = STATE(248),
    [sym_switch_statement] = STATE(248),
    [sym_for_statement] = STATE(248),
    [sym_while_statement] = STATE(248),
    [sym_if_statement] = STATE(248),
    [sym_begin_statement] = STATE(248),
    [sym_test_command] = STATE(248),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(248),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(327),
    [sym_continue] = ACTIONS(327),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [42] = {
    [sym_conditional_execution] = STATE(246),
    [sym_pipe] = STATE(246),
    [sym_redirect_statement] = STATE(246),
    [sym_negated_statement] = STATE(246),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(246),
    [sym_return] = STATE(246),
    [sym_switch_statement] = STATE(246),
    [sym_for_statement] = STATE(246),
    [sym_while_statement] = STATE(246),
    [sym_if_statement] = STATE(246),
    [sym_begin_statement] = STATE(246),
    [sym_test_command] = STATE(246),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(246),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(331),
    [sym_continue] = ACTIONS(331),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [43] = {
    [sym_conditional_execution] = STATE(258),
    [sym_pipe] = STATE(258),
    [sym_redirect_statement] = STATE(258),
    [sym_negated_statement] = STATE(258),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(258),
    [sym_return] = STATE(258),
    [sym_switch_statement] = STATE(258),
    [sym_for_statement] = STATE(258),
    [sym_while_statement] = STATE(258),
    [sym_if_statement] = STATE(258),
    [sym_begin_statement] = STATE(258),
    [sym_test_command] = STATE(258),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(258),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(38),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_CR] = ACTIONS(333),
    [anon_sym_CR_LF] = ACTIONS(333),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(321),
    [sym_continue] = ACTIONS(321),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [44] = {
    [sym_conditional_execution] = STATE(251),
    [sym_pipe] = STATE(251),
    [sym_redirect_statement] = STATE(251),
    [sym_negated_statement] = STATE(251),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(251),
    [sym_return] = STATE(251),
    [sym_switch_statement] = STATE(251),
    [sym_for_statement] = STATE(251),
    [sym_while_statement] = STATE(251),
    [sym_if_statement] = STATE(251),
    [sym_begin_statement] = STATE(251),
    [sym_test_command] = STATE(251),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(251),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(337),
    [sym_continue] = ACTIONS(337),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [45] = {
    [sym_conditional_execution] = STATE(261),
    [sym_pipe] = STATE(261),
    [sym_redirect_statement] = STATE(261),
    [sym_negated_statement] = STATE(261),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(261),
    [sym_return] = STATE(261),
    [sym_switch_statement] = STATE(261),
    [sym_for_statement] = STATE(261),
    [sym_while_statement] = STATE(261),
    [sym_if_statement] = STATE(261),
    [sym_begin_statement] = STATE(261),
    [sym_test_command] = STATE(261),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(261),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(33),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_AMP] = ACTIONS(339),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_CR] = ACTIONS(339),
    [anon_sym_CR_LF] = ACTIONS(339),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(343),
    [sym_continue] = ACTIONS(343),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [46] = {
    [sym_conditional_execution] = STATE(257),
    [sym_pipe] = STATE(257),
    [sym_redirect_statement] = STATE(257),
    [sym_negated_statement] = STATE(257),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(257),
    [sym_return] = STATE(257),
    [sym_switch_statement] = STATE(257),
    [sym_for_statement] = STATE(257),
    [sym_while_statement] = STATE(257),
    [sym_if_statement] = STATE(257),
    [sym_begin_statement] = STATE(257),
    [sym_test_command] = STATE(257),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(257),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(18),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_CR_LF] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(347),
    [sym_continue] = ACTIONS(347),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [47] = {
    [sym_conditional_execution] = STATE(259),
    [sym_pipe] = STATE(259),
    [sym_redirect_statement] = STATE(259),
    [sym_negated_statement] = STATE(259),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(259),
    [sym_return] = STATE(259),
    [sym_switch_statement] = STATE(259),
    [sym_for_statement] = STATE(259),
    [sym_while_statement] = STATE(259),
    [sym_if_statement] = STATE(259),
    [sym_begin_statement] = STATE(259),
    [sym_test_command] = STATE(259),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(259),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(39),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_CR] = ACTIONS(349),
    [anon_sym_CR_LF] = ACTIONS(349),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(353),
    [sym_continue] = ACTIONS(353),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [48] = {
    [sym_conditional_execution] = STATE(238),
    [sym_pipe] = STATE(238),
    [sym_redirect_statement] = STATE(238),
    [sym_negated_statement] = STATE(238),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(238),
    [sym_return] = STATE(238),
    [sym_switch_statement] = STATE(238),
    [sym_for_statement] = STATE(238),
    [sym_while_statement] = STATE(238),
    [sym_if_statement] = STATE(238),
    [sym_begin_statement] = STATE(238),
    [sym_test_command] = STATE(238),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(238),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_program_repeat1] = STATE(15),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_AMP] = ACTIONS(355),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_CR] = ACTIONS(355),
    [anon_sym_CR_LF] = ACTIONS(355),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(359),
    [sym_continue] = ACTIONS(359),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [49] = {
    [sym_conditional_execution] = STATE(282),
    [sym_pipe] = STATE(282),
    [sym_redirect_statement] = STATE(282),
    [sym__terminated_statement] = STATE(51),
    [sym_negated_statement] = STATE(282),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(282),
    [sym_return] = STATE(282),
    [sym_switch_statement] = STATE(282),
    [sym_for_statement] = STATE(282),
    [sym_while_statement] = STATE(282),
    [sym_if_statement] = STATE(282),
    [sym_begin_statement] = STATE(282),
    [sym_test_command] = STATE(282),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(282),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(51),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(361),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(361),
    [sym_break] = ACTIONS(363),
    [sym_continue] = ACTIONS(363),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [50] = {
    [sym_conditional_execution] = STATE(282),
    [sym_pipe] = STATE(282),
    [sym_redirect_statement] = STATE(282),
    [sym__terminated_statement] = STATE(49),
    [sym_negated_statement] = STATE(282),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(282),
    [sym_return] = STATE(282),
    [sym_switch_statement] = STATE(282),
    [sym_for_statement] = STATE(282),
    [sym_while_statement] = STATE(282),
    [sym_if_statement] = STATE(282),
    [sym_begin_statement] = STATE(282),
    [sym_test_command] = STATE(282),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(282),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(49),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(367),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(367),
    [sym_break] = ACTIONS(363),
    [sym_continue] = ACTIONS(363),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [51] = {
    [sym_conditional_execution] = STATE(282),
    [sym_pipe] = STATE(282),
    [sym_redirect_statement] = STATE(282),
    [sym__terminated_statement] = STATE(51),
    [sym_negated_statement] = STATE(282),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(282),
    [sym_return] = STATE(282),
    [sym_switch_statement] = STATE(282),
    [sym_for_statement] = STATE(282),
    [sym_while_statement] = STATE(282),
    [sym_if_statement] = STATE(282),
    [sym_begin_statement] = STATE(282),
    [sym_test_command] = STATE(282),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(282),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(51),
    [anon_sym_and] = ACTIONS(369),
    [anon_sym_or] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_not] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_function] = ACTIONS(381),
    [anon_sym_end] = ACTIONS(384),
    [sym_integer] = ACTIONS(386),
    [sym_float] = ACTIONS(386),
    [anon_sym_return] = ACTIONS(389),
    [anon_sym_switch] = ACTIONS(392),
    [anon_sym_case] = ACTIONS(384),
    [sym_break] = ACTIONS(395),
    [sym_continue] = ACTIONS(395),
    [anon_sym_for] = ACTIONS(398),
    [anon_sym_while] = ACTIONS(401),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_begin] = ACTIONS(407),
    [aux_sym_test_command_token1] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(422),
    [sym_escape_sequence] = ACTIONS(425),
    [anon_sym_DOT] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym__] = ACTIONS(428),
    [anon_sym_argparse] = ACTIONS(428),
    [anon_sym_bg] = ACTIONS(428),
    [anon_sym_bind] = ACTIONS(428),
    [anon_sym_block] = ACTIONS(428),
    [anon_sym_breakpoint] = ACTIONS(428),
    [anon_sym_builtin] = ACTIONS(428),
    [anon_sym_cd] = ACTIONS(428),
    [anon_sym_command] = ACTIONS(428),
    [anon_sym_commandline] = ACTIONS(428),
    [anon_sym_complete] = ACTIONS(428),
    [anon_sym_contains] = ACTIONS(428),
    [anon_sym_count] = ACTIONS(428),
    [anon_sym_disown] = ACTIONS(428),
    [anon_sym_echo] = ACTIONS(428),
    [anon_sym_emit] = ACTIONS(428),
    [anon_sym_eval] = ACTIONS(428),
    [anon_sym_exec] = ACTIONS(428),
    [anon_sym_exit] = ACTIONS(428),
    [anon_sym_false] = ACTIONS(428),
    [anon_sym_fg] = ACTIONS(428),
    [anon_sym_functions] = ACTIONS(428),
    [anon_sym_history] = ACTIONS(428),
    [anon_sym_jobs] = ACTIONS(428),
    [anon_sym_math] = ACTIONS(428),
    [anon_sym_path] = ACTIONS(428),
    [anon_sym_printf] = ACTIONS(428),
    [anon_sym_pwd] = ACTIONS(428),
    [anon_sym_random] = ACTIONS(428),
    [anon_sym_read] = ACTIONS(428),
    [anon_sym_realpath] = ACTIONS(428),
    [anon_sym_set] = ACTIONS(428),
    [anon_sym_set_color] = ACTIONS(428),
    [anon_sym_source] = ACTIONS(428),
    [anon_sym_status] = ACTIONS(428),
    [anon_sym_string] = ACTIONS(428),
    [anon_sym_test] = ACTIONS(428),
    [anon_sym_time] = ACTIONS(428),
    [anon_sym_true] = ACTIONS(428),
    [anon_sym_type] = ACTIONS(428),
    [anon_sym_ulimit] = ACTIONS(428),
    [anon_sym_wait] = ACTIONS(428),
    [sym_home_dir_expansion] = ACTIONS(386),
    [sym_glob] = ACTIONS(386),
    [sym_word] = ACTIONS(386),
  },
  [52] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(66),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(66),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(431),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [53] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(57),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(57),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(435),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [54] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(437),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [55] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(439),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [56] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(441),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [57] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(443),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [58] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(445),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [59] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(447),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [60] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(449),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [61] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(451),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [62] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(61),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(61),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(453),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [63] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(55),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(55),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(455),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [64] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(369),
    [anon_sym_or] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_not] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_function] = ACTIONS(381),
    [anon_sym_end] = ACTIONS(384),
    [sym_integer] = ACTIONS(386),
    [sym_float] = ACTIONS(386),
    [anon_sym_return] = ACTIONS(389),
    [anon_sym_switch] = ACTIONS(392),
    [sym_break] = ACTIONS(457),
    [sym_continue] = ACTIONS(457),
    [anon_sym_for] = ACTIONS(398),
    [anon_sym_while] = ACTIONS(401),
    [anon_sym_if] = ACTIONS(404),
    [anon_sym_begin] = ACTIONS(407),
    [aux_sym_test_command_token1] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(422),
    [sym_escape_sequence] = ACTIONS(425),
    [anon_sym_DOT] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(428),
    [anon_sym__] = ACTIONS(428),
    [anon_sym_argparse] = ACTIONS(428),
    [anon_sym_bg] = ACTIONS(428),
    [anon_sym_bind] = ACTIONS(428),
    [anon_sym_block] = ACTIONS(428),
    [anon_sym_breakpoint] = ACTIONS(428),
    [anon_sym_builtin] = ACTIONS(428),
    [anon_sym_cd] = ACTIONS(428),
    [anon_sym_command] = ACTIONS(428),
    [anon_sym_commandline] = ACTIONS(428),
    [anon_sym_complete] = ACTIONS(428),
    [anon_sym_contains] = ACTIONS(428),
    [anon_sym_count] = ACTIONS(428),
    [anon_sym_disown] = ACTIONS(428),
    [anon_sym_echo] = ACTIONS(428),
    [anon_sym_emit] = ACTIONS(428),
    [anon_sym_eval] = ACTIONS(428),
    [anon_sym_exec] = ACTIONS(428),
    [anon_sym_exit] = ACTIONS(428),
    [anon_sym_false] = ACTIONS(428),
    [anon_sym_fg] = ACTIONS(428),
    [anon_sym_functions] = ACTIONS(428),
    [anon_sym_history] = ACTIONS(428),
    [anon_sym_jobs] = ACTIONS(428),
    [anon_sym_math] = ACTIONS(428),
    [anon_sym_path] = ACTIONS(428),
    [anon_sym_printf] = ACTIONS(428),
    [anon_sym_pwd] = ACTIONS(428),
    [anon_sym_random] = ACTIONS(428),
    [anon_sym_read] = ACTIONS(428),
    [anon_sym_realpath] = ACTIONS(428),
    [anon_sym_set] = ACTIONS(428),
    [anon_sym_set_color] = ACTIONS(428),
    [anon_sym_source] = ACTIONS(428),
    [anon_sym_status] = ACTIONS(428),
    [anon_sym_string] = ACTIONS(428),
    [anon_sym_test] = ACTIONS(428),
    [anon_sym_time] = ACTIONS(428),
    [anon_sym_true] = ACTIONS(428),
    [anon_sym_type] = ACTIONS(428),
    [anon_sym_ulimit] = ACTIONS(428),
    [anon_sym_wait] = ACTIONS(428),
    [sym_home_dir_expansion] = ACTIONS(386),
    [sym_glob] = ACTIONS(386),
    [sym_word] = ACTIONS(386),
  },
  [65] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(60),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(60),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(460),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [66] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(462),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [67] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(71),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(71),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(464),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [68] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(59),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(59),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(466),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [69] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(56),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(56),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(468),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [70] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(470),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [71] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(64),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(64),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(472),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [72] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(54),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(54),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(474),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [73] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(70),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(70),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(476),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [74] = {
    [sym_conditional_execution] = STATE(266),
    [sym_pipe] = STATE(266),
    [sym_redirect_statement] = STATE(266),
    [sym__terminated_statement] = STATE(58),
    [sym_negated_statement] = STATE(266),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(266),
    [sym_return] = STATE(266),
    [sym_switch_statement] = STATE(266),
    [sym_for_statement] = STATE(266),
    [sym_while_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym_begin_statement] = STATE(266),
    [sym_test_command] = STATE(266),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(266),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [aux_sym_function_definition_repeat2] = STATE(58),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(478),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(433),
    [sym_continue] = ACTIONS(433),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [75] = {
    [sym_conditional_execution] = STATE(268),
    [sym_pipe] = STATE(268),
    [sym_redirect_statement] = STATE(268),
    [sym__terminated_statement] = STATE(6),
    [sym_negated_statement] = STATE(268),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(268),
    [sym_return] = STATE(268),
    [sym_switch_statement] = STATE(268),
    [sym_for_statement] = STATE(268),
    [sym_while_statement] = STATE(268),
    [sym_if_statement] = STATE(268),
    [sym_begin_statement] = STATE(268),
    [sym_test_command] = STATE(268),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(268),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(480),
    [sym_continue] = ACTIONS(480),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [76] = {
    [sym_conditional_execution] = STATE(268),
    [sym_pipe] = STATE(268),
    [sym_redirect_statement] = STATE(268),
    [sym__terminated_statement] = STATE(3),
    [sym_negated_statement] = STATE(268),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(268),
    [sym_return] = STATE(268),
    [sym_switch_statement] = STATE(268),
    [sym_for_statement] = STATE(268),
    [sym_while_statement] = STATE(268),
    [sym_if_statement] = STATE(268),
    [sym_begin_statement] = STATE(268),
    [sym_test_command] = STATE(268),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(268),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(480),
    [sym_continue] = ACTIONS(480),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [77] = {
    [sym_conditional_execution] = STATE(271),
    [sym_pipe] = STATE(271),
    [sym_redirect_statement] = STATE(271),
    [sym__terminated_statement] = STATE(12),
    [sym_negated_statement] = STATE(271),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(271),
    [sym_return] = STATE(271),
    [sym_switch_statement] = STATE(271),
    [sym_for_statement] = STATE(271),
    [sym_while_statement] = STATE(271),
    [sym_if_statement] = STATE(271),
    [sym_begin_statement] = STATE(271),
    [sym_test_command] = STATE(271),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(271),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(482),
    [sym_continue] = ACTIONS(482),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [78] = {
    [sym_conditional_execution] = STATE(240),
    [sym_pipe] = STATE(240),
    [sym_redirect_statement] = STATE(240),
    [sym_negated_statement] = STATE(240),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(240),
    [sym_return] = STATE(240),
    [sym_switch_statement] = STATE(240),
    [sym_for_statement] = STATE(240),
    [sym_while_statement] = STATE(240),
    [sym_if_statement] = STATE(240),
    [sym_begin_statement] = STATE(240),
    [sym_test_command] = STATE(240),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(240),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(484),
    [sym_continue] = ACTIONS(484),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [79] = {
    [sym_conditional_execution] = STATE(250),
    [sym_pipe] = STATE(250),
    [sym_redirect_statement] = STATE(250),
    [sym_negated_statement] = STATE(250),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(250),
    [sym_return] = STATE(250),
    [sym_switch_statement] = STATE(250),
    [sym_for_statement] = STATE(250),
    [sym_while_statement] = STATE(250),
    [sym_if_statement] = STATE(250),
    [sym_begin_statement] = STATE(250),
    [sym_test_command] = STATE(250),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(250),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(486),
    [sym_continue] = ACTIONS(486),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [80] = {
    [sym_conditional_execution] = STATE(247),
    [sym_pipe] = STATE(247),
    [sym_redirect_statement] = STATE(247),
    [sym_negated_statement] = STATE(247),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(247),
    [sym_return] = STATE(247),
    [sym_switch_statement] = STATE(247),
    [sym_for_statement] = STATE(247),
    [sym_while_statement] = STATE(247),
    [sym_if_statement] = STATE(247),
    [sym_begin_statement] = STATE(247),
    [sym_test_command] = STATE(247),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(247),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(488),
    [sym_continue] = ACTIONS(488),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [81] = {
    [sym_conditional_execution] = STATE(241),
    [sym_pipe] = STATE(241),
    [sym_redirect_statement] = STATE(241),
    [sym_negated_statement] = STATE(241),
    [sym_command_substitution] = STATE(107),
    [sym_function_definition] = STATE(241),
    [sym_return] = STATE(241),
    [sym_switch_statement] = STATE(241),
    [sym_for_statement] = STATE(241),
    [sym_while_statement] = STATE(241),
    [sym_if_statement] = STATE(241),
    [sym_begin_statement] = STATE(241),
    [sym_test_command] = STATE(241),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_command] = STATE(241),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(83),
    [sym__expression] = STATE(83),
    [anon_sym_and] = ACTIONS(7),
    [anon_sym_or] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(23),
    [sym_break] = ACTIONS(490),
    [sym_continue] = ACTIONS(490),
    [anon_sym_for] = ACTIONS(27),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [aux_sym_test_command_token1] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [82] = {
    [sym_command_substitution] = STATE(107),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_builtin] = STATE(107),
    [sym_file_redirect] = STATE(129),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(127),
    [sym__expression] = STATE(127),
    [aux_sym_command_repeat1] = STATE(82),
    [anon_sym_PIPE_PIPE] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [anon_sym_AMP] = ACTIONS(492),
    [anon_sym_LF] = ACTIONS(492),
    [anon_sym_CR] = ACTIONS(492),
    [anon_sym_CR_LF] = ACTIONS(492),
    [anon_sym_DOLLAR] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(492),
    [sym_integer] = ACTIONS(500),
    [sym_float] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(503),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(506),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(512),
    [sym_escape_sequence] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(515),
    [anon_sym__] = ACTIONS(515),
    [anon_sym_argparse] = ACTIONS(515),
    [anon_sym_bg] = ACTIONS(515),
    [anon_sym_bind] = ACTIONS(515),
    [anon_sym_block] = ACTIONS(515),
    [anon_sym_breakpoint] = ACTIONS(515),
    [anon_sym_builtin] = ACTIONS(515),
    [anon_sym_cd] = ACTIONS(515),
    [anon_sym_command] = ACTIONS(515),
    [anon_sym_commandline] = ACTIONS(515),
    [anon_sym_complete] = ACTIONS(515),
    [anon_sym_contains] = ACTIONS(515),
    [anon_sym_count] = ACTIONS(515),
    [anon_sym_disown] = ACTIONS(515),
    [anon_sym_echo] = ACTIONS(515),
    [anon_sym_emit] = ACTIONS(515),
    [anon_sym_eval] = ACTIONS(515),
    [anon_sym_exec] = ACTIONS(515),
    [anon_sym_exit] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_fg] = ACTIONS(515),
    [anon_sym_functions] = ACTIONS(515),
    [anon_sym_history] = ACTIONS(515),
    [anon_sym_jobs] = ACTIONS(515),
    [anon_sym_math] = ACTIONS(515),
    [anon_sym_path] = ACTIONS(515),
    [anon_sym_printf] = ACTIONS(515),
    [anon_sym_pwd] = ACTIONS(515),
    [anon_sym_random] = ACTIONS(515),
    [anon_sym_read] = ACTIONS(515),
    [anon_sym_realpath] = ACTIONS(515),
    [anon_sym_set] = ACTIONS(515),
    [anon_sym_set_color] = ACTIONS(515),
    [anon_sym_source] = ACTIONS(515),
    [anon_sym_status] = ACTIONS(515),
    [anon_sym_string] = ACTIONS(515),
    [anon_sym_test] = ACTIONS(515),
    [anon_sym_time] = ACTIONS(515),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_type] = ACTIONS(515),
    [anon_sym_ulimit] = ACTIONS(515),
    [anon_sym_wait] = ACTIONS(515),
    [sym_stream_redirect] = ACTIONS(518),
    [sym_direction] = ACTIONS(521),
    [sym_home_dir_expansion] = ACTIONS(500),
    [sym_glob] = ACTIONS(500),
    [sym_word] = ACTIONS(500),
  },
  [83] = {
    [sym_command_substitution] = STATE(107),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_builtin] = STATE(107),
    [sym_file_redirect] = STATE(129),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(127),
    [sym__expression] = STATE(127),
    [aux_sym_command_repeat1] = STATE(84),
    [anon_sym_PIPE_PIPE] = ACTIONS(524),
    [anon_sym_AMP_AMP] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_SEMI] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(524),
    [anon_sym_LF] = ACTIONS(524),
    [anon_sym_CR] = ACTIONS(524),
    [anon_sym_CR_LF] = ACTIONS(524),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(524),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_stream_redirect] = ACTIONS(526),
    [sym_direction] = ACTIONS(528),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [84] = {
    [sym_command_substitution] = STATE(107),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_builtin] = STATE(107),
    [sym_file_redirect] = STATE(129),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(127),
    [sym__expression] = STATE(127),
    [aux_sym_command_repeat1] = STATE(82),
    [anon_sym_PIPE_PIPE] = ACTIONS(530),
    [anon_sym_AMP_AMP] = ACTIONS(530),
    [anon_sym_PIPE] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_AMP] = ACTIONS(530),
    [anon_sym_LF] = ACTIONS(530),
    [anon_sym_CR] = ACTIONS(530),
    [anon_sym_CR_LF] = ACTIONS(530),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(530),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_stream_redirect] = ACTIONS(526),
    [sym_direction] = ACTIONS(528),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [85] = {
    [anon_sym_and] = ACTIONS(532),
    [anon_sym_or] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_AMP] = ACTIONS(532),
    [anon_sym_LF] = ACTIONS(532),
    [anon_sym_CR] = ACTIONS(532),
    [anon_sym_CR_LF] = ACTIONS(532),
    [anon_sym_BANG] = ACTIONS(532),
    [anon_sym_not] = ACTIONS(532),
    [anon_sym_DOLLAR] = ACTIONS(532),
    [anon_sym_LPAREN] = ACTIONS(532),
    [anon_sym_function] = ACTIONS(532),
    [anon_sym_end] = ACTIONS(532),
    [sym_integer] = ACTIONS(532),
    [sym_float] = ACTIONS(532),
    [anon_sym_return] = ACTIONS(532),
    [anon_sym_switch] = ACTIONS(532),
    [sym_break] = ACTIONS(532),
    [sym_continue] = ACTIONS(532),
    [anon_sym_for] = ACTIONS(532),
    [anon_sym_while] = ACTIONS(532),
    [anon_sym_if] = ACTIONS(532),
    [anon_sym_else] = ACTIONS(532),
    [anon_sym_begin] = ACTIONS(532),
    [aux_sym_test_command_token1] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(532),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_SQUOTE] = ACTIONS(532),
    [sym_escape_sequence] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [anon_sym_COLON] = ACTIONS(532),
    [anon_sym__] = ACTIONS(532),
    [anon_sym_argparse] = ACTIONS(532),
    [anon_sym_bg] = ACTIONS(532),
    [anon_sym_bind] = ACTIONS(532),
    [anon_sym_block] = ACTIONS(532),
    [anon_sym_breakpoint] = ACTIONS(532),
    [anon_sym_builtin] = ACTIONS(532),
    [anon_sym_cd] = ACTIONS(532),
    [anon_sym_command] = ACTIONS(532),
    [anon_sym_commandline] = ACTIONS(532),
    [anon_sym_complete] = ACTIONS(532),
    [anon_sym_contains] = ACTIONS(532),
    [anon_sym_count] = ACTIONS(532),
    [anon_sym_disown] = ACTIONS(532),
    [anon_sym_echo] = ACTIONS(532),
    [anon_sym_emit] = ACTIONS(532),
    [anon_sym_eval] = ACTIONS(532),
    [anon_sym_exec] = ACTIONS(532),
    [anon_sym_exit] = ACTIONS(532),
    [anon_sym_false] = ACTIONS(532),
    [anon_sym_fg] = ACTIONS(532),
    [anon_sym_functions] = ACTIONS(532),
    [anon_sym_history] = ACTIONS(532),
    [anon_sym_jobs] = ACTIONS(532),
    [anon_sym_math] = ACTIONS(532),
    [anon_sym_path] = ACTIONS(532),
    [anon_sym_printf] = ACTIONS(532),
    [anon_sym_pwd] = ACTIONS(532),
    [anon_sym_random] = ACTIONS(532),
    [anon_sym_read] = ACTIONS(532),
    [anon_sym_realpath] = ACTIONS(532),
    [anon_sym_set] = ACTIONS(532),
    [anon_sym_set_color] = ACTIONS(532),
    [anon_sym_source] = ACTIONS(532),
    [anon_sym_status] = ACTIONS(532),
    [anon_sym_string] = ACTIONS(532),
    [anon_sym_test] = ACTIONS(532),
    [anon_sym_time] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(532),
    [anon_sym_type] = ACTIONS(532),
    [anon_sym_ulimit] = ACTIONS(532),
    [anon_sym_wait] = ACTIONS(532),
    [sym_home_dir_expansion] = ACTIONS(532),
    [sym_glob] = ACTIONS(532),
    [sym_word] = ACTIONS(532),
  },
  [86] = {
    [anon_sym_and] = ACTIONS(534),
    [anon_sym_or] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_AMP] = ACTIONS(534),
    [anon_sym_LF] = ACTIONS(534),
    [anon_sym_CR] = ACTIONS(534),
    [anon_sym_CR_LF] = ACTIONS(534),
    [anon_sym_BANG] = ACTIONS(534),
    [anon_sym_not] = ACTIONS(534),
    [anon_sym_DOLLAR] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(534),
    [anon_sym_function] = ACTIONS(534),
    [anon_sym_end] = ACTIONS(534),
    [sym_integer] = ACTIONS(534),
    [sym_float] = ACTIONS(534),
    [anon_sym_return] = ACTIONS(534),
    [anon_sym_switch] = ACTIONS(534),
    [sym_break] = ACTIONS(534),
    [sym_continue] = ACTIONS(534),
    [anon_sym_for] = ACTIONS(534),
    [anon_sym_while] = ACTIONS(534),
    [anon_sym_if] = ACTIONS(534),
    [anon_sym_else] = ACTIONS(534),
    [anon_sym_begin] = ACTIONS(534),
    [aux_sym_test_command_token1] = ACTIONS(534),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [sym_escape_sequence] = ACTIONS(534),
    [anon_sym_DOT] = ACTIONS(534),
    [anon_sym_COLON] = ACTIONS(534),
    [anon_sym__] = ACTIONS(534),
    [anon_sym_argparse] = ACTIONS(534),
    [anon_sym_bg] = ACTIONS(534),
    [anon_sym_bind] = ACTIONS(534),
    [anon_sym_block] = ACTIONS(534),
    [anon_sym_breakpoint] = ACTIONS(534),
    [anon_sym_builtin] = ACTIONS(534),
    [anon_sym_cd] = ACTIONS(534),
    [anon_sym_command] = ACTIONS(534),
    [anon_sym_commandline] = ACTIONS(534),
    [anon_sym_complete] = ACTIONS(534),
    [anon_sym_contains] = ACTIONS(534),
    [anon_sym_count] = ACTIONS(534),
    [anon_sym_disown] = ACTIONS(534),
    [anon_sym_echo] = ACTIONS(534),
    [anon_sym_emit] = ACTIONS(534),
    [anon_sym_eval] = ACTIONS(534),
    [anon_sym_exec] = ACTIONS(534),
    [anon_sym_exit] = ACTIONS(534),
    [anon_sym_false] = ACTIONS(534),
    [anon_sym_fg] = ACTIONS(534),
    [anon_sym_functions] = ACTIONS(534),
    [anon_sym_history] = ACTIONS(534),
    [anon_sym_jobs] = ACTIONS(534),
    [anon_sym_math] = ACTIONS(534),
    [anon_sym_path] = ACTIONS(534),
    [anon_sym_printf] = ACTIONS(534),
    [anon_sym_pwd] = ACTIONS(534),
    [anon_sym_random] = ACTIONS(534),
    [anon_sym_read] = ACTIONS(534),
    [anon_sym_realpath] = ACTIONS(534),
    [anon_sym_set] = ACTIONS(534),
    [anon_sym_set_color] = ACTIONS(534),
    [anon_sym_source] = ACTIONS(534),
    [anon_sym_status] = ACTIONS(534),
    [anon_sym_string] = ACTIONS(534),
    [anon_sym_test] = ACTIONS(534),
    [anon_sym_time] = ACTIONS(534),
    [anon_sym_true] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(534),
    [anon_sym_ulimit] = ACTIONS(534),
    [anon_sym_wait] = ACTIONS(534),
    [sym_home_dir_expansion] = ACTIONS(534),
    [sym_glob] = ACTIONS(534),
    [sym_word] = ACTIONS(534),
  },
  [87] = {
    [anon_sym_and] = ACTIONS(194),
    [anon_sym_or] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_LF] = ACTIONS(194),
    [anon_sym_CR] = ACTIONS(194),
    [anon_sym_CR_LF] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_not] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_function] = ACTIONS(194),
    [sym_integer] = ACTIONS(194),
    [sym_float] = ACTIONS(194),
    [anon_sym_return] = ACTIONS(194),
    [anon_sym_switch] = ACTIONS(194),
    [sym_break] = ACTIONS(194),
    [sym_continue] = ACTIONS(194),
    [anon_sym_for] = ACTIONS(194),
    [anon_sym_while] = ACTIONS(194),
    [anon_sym_if] = ACTIONS(194),
    [anon_sym_begin] = ACTIONS(194),
    [aux_sym_test_command_token1] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [sym_escape_sequence] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [anon_sym_argparse] = ACTIONS(194),
    [anon_sym_bg] = ACTIONS(194),
    [anon_sym_bind] = ACTIONS(194),
    [anon_sym_block] = ACTIONS(194),
    [anon_sym_breakpoint] = ACTIONS(194),
    [anon_sym_builtin] = ACTIONS(194),
    [anon_sym_cd] = ACTIONS(194),
    [anon_sym_command] = ACTIONS(194),
    [anon_sym_commandline] = ACTIONS(194),
    [anon_sym_complete] = ACTIONS(194),
    [anon_sym_contains] = ACTIONS(194),
    [anon_sym_count] = ACTIONS(194),
    [anon_sym_disown] = ACTIONS(194),
    [anon_sym_echo] = ACTIONS(194),
    [anon_sym_emit] = ACTIONS(194),
    [anon_sym_eval] = ACTIONS(194),
    [anon_sym_exec] = ACTIONS(194),
    [anon_sym_exit] = ACTIONS(194),
    [anon_sym_false] = ACTIONS(194),
    [anon_sym_fg] = ACTIONS(194),
    [anon_sym_functions] = ACTIONS(194),
    [anon_sym_history] = ACTIONS(194),
    [anon_sym_jobs] = ACTIONS(194),
    [anon_sym_math] = ACTIONS(194),
    [anon_sym_path] = ACTIONS(194),
    [anon_sym_printf] = ACTIONS(194),
    [anon_sym_pwd] = ACTIONS(194),
    [anon_sym_random] = ACTIONS(194),
    [anon_sym_read] = ACTIONS(194),
    [anon_sym_realpath] = ACTIONS(194),
    [anon_sym_set] = ACTIONS(194),
    [anon_sym_set_color] = ACTIONS(194),
    [anon_sym_source] = ACTIONS(194),
    [anon_sym_status] = ACTIONS(194),
    [anon_sym_string] = ACTIONS(194),
    [anon_sym_test] = ACTIONS(194),
    [anon_sym_time] = ACTIONS(194),
    [anon_sym_true] = ACTIONS(194),
    [anon_sym_type] = ACTIONS(194),
    [anon_sym_ulimit] = ACTIONS(194),
    [anon_sym_wait] = ACTIONS(194),
    [sym_home_dir_expansion] = ACTIONS(194),
    [sym_glob] = ACTIONS(194),
    [sym_word] = ACTIONS(194),
  },
  [88] = {
    [anon_sym_and] = ACTIONS(534),
    [anon_sym_or] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(534),
    [anon_sym_AMP] = ACTIONS(534),
    [anon_sym_LF] = ACTIONS(534),
    [anon_sym_CR] = ACTIONS(534),
    [anon_sym_CR_LF] = ACTIONS(534),
    [anon_sym_BANG] = ACTIONS(534),
    [anon_sym_not] = ACTIONS(534),
    [anon_sym_DOLLAR] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(534),
    [anon_sym_function] = ACTIONS(534),
    [anon_sym_end] = ACTIONS(534),
    [sym_integer] = ACTIONS(534),
    [sym_float] = ACTIONS(534),
    [anon_sym_return] = ACTIONS(534),
    [anon_sym_switch] = ACTIONS(534),
    [sym_break] = ACTIONS(534),
    [sym_continue] = ACTIONS(534),
    [anon_sym_for] = ACTIONS(534),
    [anon_sym_while] = ACTIONS(534),
    [anon_sym_if] = ACTIONS(534),
    [anon_sym_begin] = ACTIONS(534),
    [aux_sym_test_command_token1] = ACTIONS(534),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [sym_escape_sequence] = ACTIONS(534),
    [anon_sym_DOT] = ACTIONS(534),
    [anon_sym_COLON] = ACTIONS(534),
    [anon_sym__] = ACTIONS(534),
    [anon_sym_argparse] = ACTIONS(534),
    [anon_sym_bg] = ACTIONS(534),
    [anon_sym_bind] = ACTIONS(534),
    [anon_sym_block] = ACTIONS(534),
    [anon_sym_breakpoint] = ACTIONS(534),
    [anon_sym_builtin] = ACTIONS(534),
    [anon_sym_cd] = ACTIONS(534),
    [anon_sym_command] = ACTIONS(534),
    [anon_sym_commandline] = ACTIONS(534),
    [anon_sym_complete] = ACTIONS(534),
    [anon_sym_contains] = ACTIONS(534),
    [anon_sym_count] = ACTIONS(534),
    [anon_sym_disown] = ACTIONS(534),
    [anon_sym_echo] = ACTIONS(534),
    [anon_sym_emit] = ACTIONS(534),
    [anon_sym_eval] = ACTIONS(534),
    [anon_sym_exec] = ACTIONS(534),
    [anon_sym_exit] = ACTIONS(534),
    [anon_sym_false] = ACTIONS(534),
    [anon_sym_fg] = ACTIONS(534),
    [anon_sym_functions] = ACTIONS(534),
    [anon_sym_history] = ACTIONS(534),
    [anon_sym_jobs] = ACTIONS(534),
    [anon_sym_math] = ACTIONS(534),
    [anon_sym_path] = ACTIONS(534),
    [anon_sym_printf] = ACTIONS(534),
    [anon_sym_pwd] = ACTIONS(534),
    [anon_sym_random] = ACTIONS(534),
    [anon_sym_read] = ACTIONS(534),
    [anon_sym_realpath] = ACTIONS(534),
    [anon_sym_set] = ACTIONS(534),
    [anon_sym_set_color] = ACTIONS(534),
    [anon_sym_source] = ACTIONS(534),
    [anon_sym_status] = ACTIONS(534),
    [anon_sym_string] = ACTIONS(534),
    [anon_sym_test] = ACTIONS(534),
    [anon_sym_time] = ACTIONS(534),
    [anon_sym_true] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(534),
    [anon_sym_ulimit] = ACTIONS(534),
    [anon_sym_wait] = ACTIONS(534),
    [sym_home_dir_expansion] = ACTIONS(534),
    [sym_glob] = ACTIONS(534),
    [sym_word] = ACTIONS(534),
  },
  [89] = {
    [sym_command_substitution] = STATE(193),
    [sym_variable_expansion] = STATE(193),
    [sym_brace_expansion] = STATE(193),
    [sym_double_quote_string] = STATE(193),
    [sym_single_quote_string] = STATE(193),
    [sym_builtin] = STATE(193),
    [sym__special_character] = STATE(217),
    [sym_concatenation] = STATE(265),
    [sym__expression] = STATE(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(536),
    [anon_sym_AMP_AMP] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(536),
    [anon_sym_AMP] = ACTIONS(536),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_CR] = ACTIONS(536),
    [anon_sym_CR_LF] = ACTIONS(536),
    [anon_sym_DOLLAR] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym_integer] = ACTIONS(542),
    [sym_float] = ACTIONS(542),
    [anon_sym_RBRACK] = ACTIONS(544),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(544),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_DQUOTE] = ACTIONS(548),
    [anon_sym_SQUOTE] = ACTIONS(550),
    [sym_escape_sequence] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_COLON] = ACTIONS(552),
    [anon_sym__] = ACTIONS(552),
    [anon_sym_argparse] = ACTIONS(552),
    [anon_sym_bg] = ACTIONS(552),
    [anon_sym_bind] = ACTIONS(552),
    [anon_sym_block] = ACTIONS(552),
    [anon_sym_breakpoint] = ACTIONS(552),
    [anon_sym_builtin] = ACTIONS(552),
    [anon_sym_cd] = ACTIONS(552),
    [anon_sym_command] = ACTIONS(552),
    [anon_sym_commandline] = ACTIONS(552),
    [anon_sym_complete] = ACTIONS(552),
    [anon_sym_contains] = ACTIONS(552),
    [anon_sym_count] = ACTIONS(552),
    [anon_sym_disown] = ACTIONS(552),
    [anon_sym_echo] = ACTIONS(552),
    [anon_sym_emit] = ACTIONS(552),
    [anon_sym_eval] = ACTIONS(552),
    [anon_sym_exec] = ACTIONS(552),
    [anon_sym_exit] = ACTIONS(552),
    [anon_sym_false] = ACTIONS(552),
    [anon_sym_fg] = ACTIONS(552),
    [anon_sym_functions] = ACTIONS(552),
    [anon_sym_history] = ACTIONS(552),
    [anon_sym_jobs] = ACTIONS(552),
    [anon_sym_math] = ACTIONS(552),
    [anon_sym_path] = ACTIONS(552),
    [anon_sym_printf] = ACTIONS(552),
    [anon_sym_pwd] = ACTIONS(552),
    [anon_sym_random] = ACTIONS(552),
    [anon_sym_read] = ACTIONS(552),
    [anon_sym_realpath] = ACTIONS(552),
    [anon_sym_set] = ACTIONS(552),
    [anon_sym_set_color] = ACTIONS(552),
    [anon_sym_source] = ACTIONS(552),
    [anon_sym_status] = ACTIONS(552),
    [anon_sym_string] = ACTIONS(552),
    [anon_sym_test] = ACTIONS(552),
    [anon_sym_time] = ACTIONS(552),
    [anon_sym_true] = ACTIONS(552),
    [anon_sym_type] = ACTIONS(552),
    [anon_sym_ulimit] = ACTIONS(552),
    [anon_sym_wait] = ACTIONS(552),
    [sym_stream_redirect] = ACTIONS(536),
    [sym_direction] = ACTIONS(536),
    [sym_home_dir_expansion] = ACTIONS(542),
    [sym_glob] = ACTIONS(542),
    [sym_word] = ACTIONS(542),
  },
  [90] = {
    [anon_sym_and] = ACTIONS(532),
    [anon_sym_or] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_AMP] = ACTIONS(532),
    [anon_sym_LF] = ACTIONS(532),
    [anon_sym_CR] = ACTIONS(532),
    [anon_sym_CR_LF] = ACTIONS(532),
    [anon_sym_BANG] = ACTIONS(532),
    [anon_sym_not] = ACTIONS(532),
    [anon_sym_DOLLAR] = ACTIONS(532),
    [anon_sym_LPAREN] = ACTIONS(532),
    [anon_sym_function] = ACTIONS(532),
    [anon_sym_end] = ACTIONS(532),
    [sym_integer] = ACTIONS(532),
    [sym_float] = ACTIONS(532),
    [anon_sym_return] = ACTIONS(532),
    [anon_sym_switch] = ACTIONS(532),
    [sym_break] = ACTIONS(532),
    [sym_continue] = ACTIONS(532),
    [anon_sym_for] = ACTIONS(532),
    [anon_sym_while] = ACTIONS(532),
    [anon_sym_if] = ACTIONS(532),
    [anon_sym_begin] = ACTIONS(532),
    [aux_sym_test_command_token1] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(532),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_DQUOTE] = ACTIONS(532),
    [anon_sym_SQUOTE] = ACTIONS(532),
    [sym_escape_sequence] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(532),
    [anon_sym_COLON] = ACTIONS(532),
    [anon_sym__] = ACTIONS(532),
    [anon_sym_argparse] = ACTIONS(532),
    [anon_sym_bg] = ACTIONS(532),
    [anon_sym_bind] = ACTIONS(532),
    [anon_sym_block] = ACTIONS(532),
    [anon_sym_breakpoint] = ACTIONS(532),
    [anon_sym_builtin] = ACTIONS(532),
    [anon_sym_cd] = ACTIONS(532),
    [anon_sym_command] = ACTIONS(532),
    [anon_sym_commandline] = ACTIONS(532),
    [anon_sym_complete] = ACTIONS(532),
    [anon_sym_contains] = ACTIONS(532),
    [anon_sym_count] = ACTIONS(532),
    [anon_sym_disown] = ACTIONS(532),
    [anon_sym_echo] = ACTIONS(532),
    [anon_sym_emit] = ACTIONS(532),
    [anon_sym_eval] = ACTIONS(532),
    [anon_sym_exec] = ACTIONS(532),
    [anon_sym_exit] = ACTIONS(532),
    [anon_sym_false] = ACTIONS(532),
    [anon_sym_fg] = ACTIONS(532),
    [anon_sym_functions] = ACTIONS(532),
    [anon_sym_history] = ACTIONS(532),
    [anon_sym_jobs] = ACTIONS(532),
    [anon_sym_math] = ACTIONS(532),
    [anon_sym_path] = ACTIONS(532),
    [anon_sym_printf] = ACTIONS(532),
    [anon_sym_pwd] = ACTIONS(532),
    [anon_sym_random] = ACTIONS(532),
    [anon_sym_read] = ACTIONS(532),
    [anon_sym_realpath] = ACTIONS(532),
    [anon_sym_set] = ACTIONS(532),
    [anon_sym_set_color] = ACTIONS(532),
    [anon_sym_source] = ACTIONS(532),
    [anon_sym_status] = ACTIONS(532),
    [anon_sym_string] = ACTIONS(532),
    [anon_sym_test] = ACTIONS(532),
    [anon_sym_time] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(532),
    [anon_sym_type] = ACTIONS(532),
    [anon_sym_ulimit] = ACTIONS(532),
    [anon_sym_wait] = ACTIONS(532),
    [sym_home_dir_expansion] = ACTIONS(532),
    [sym_glob] = ACTIONS(532),
    [sym_word] = ACTIONS(532),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_and] = ACTIONS(194),
    [anon_sym_or] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_LF] = ACTIONS(194),
    [anon_sym_CR] = ACTIONS(194),
    [anon_sym_CR_LF] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_not] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_function] = ACTIONS(194),
    [sym_integer] = ACTIONS(194),
    [sym_float] = ACTIONS(194),
    [anon_sym_return] = ACTIONS(194),
    [anon_sym_switch] = ACTIONS(194),
    [sym_break] = ACTIONS(194),
    [sym_continue] = ACTIONS(194),
    [anon_sym_for] = ACTIONS(194),
    [anon_sym_while] = ACTIONS(194),
    [anon_sym_if] = ACTIONS(194),
    [anon_sym_begin] = ACTIONS(194),
    [aux_sym_test_command_token1] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [sym_escape_sequence] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [anon_sym_argparse] = ACTIONS(194),
    [anon_sym_bg] = ACTIONS(194),
    [anon_sym_bind] = ACTIONS(194),
    [anon_sym_block] = ACTIONS(194),
    [anon_sym_breakpoint] = ACTIONS(194),
    [anon_sym_builtin] = ACTIONS(194),
    [anon_sym_cd] = ACTIONS(194),
    [anon_sym_command] = ACTIONS(194),
    [anon_sym_commandline] = ACTIONS(194),
    [anon_sym_complete] = ACTIONS(194),
    [anon_sym_contains] = ACTIONS(194),
    [anon_sym_count] = ACTIONS(194),
    [anon_sym_disown] = ACTIONS(194),
    [anon_sym_echo] = ACTIONS(194),
    [anon_sym_emit] = ACTIONS(194),
    [anon_sym_eval] = ACTIONS(194),
    [anon_sym_exec] = ACTIONS(194),
    [anon_sym_exit] = ACTIONS(194),
    [anon_sym_false] = ACTIONS(194),
    [anon_sym_fg] = ACTIONS(194),
    [anon_sym_functions] = ACTIONS(194),
    [anon_sym_history] = ACTIONS(194),
    [anon_sym_jobs] = ACTIONS(194),
    [anon_sym_math] = ACTIONS(194),
    [anon_sym_path] = ACTIONS(194),
    [anon_sym_printf] = ACTIONS(194),
    [anon_sym_pwd] = ACTIONS(194),
    [anon_sym_random] = ACTIONS(194),
    [anon_sym_read] = ACTIONS(194),
    [anon_sym_realpath] = ACTIONS(194),
    [anon_sym_set] = ACTIONS(194),
    [anon_sym_set_color] = ACTIONS(194),
    [anon_sym_source] = ACTIONS(194),
    [anon_sym_status] = ACTIONS(194),
    [anon_sym_string] = ACTIONS(194),
    [anon_sym_test] = ACTIONS(194),
    [anon_sym_time] = ACTIONS(194),
    [anon_sym_true] = ACTIONS(194),
    [anon_sym_type] = ACTIONS(194),
    [anon_sym_ulimit] = ACTIONS(194),
    [anon_sym_wait] = ACTIONS(194),
    [sym_home_dir_expansion] = ACTIONS(194),
    [sym_glob] = ACTIONS(194),
    [sym_word] = ACTIONS(194),
  },
  [92] = {
    [anon_sym_and] = ACTIONS(534),
    [anon_sym_or] = ACTIONS(534),
    [anon_sym_BANG] = ACTIONS(534),
    [anon_sym_not] = ACTIONS(534),
    [anon_sym_DOLLAR] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(534),
    [anon_sym_function] = ACTIONS(534),
    [anon_sym_end] = ACTIONS(534),
    [sym_integer] = ACTIONS(534),
    [sym_float] = ACTIONS(534),
    [anon_sym_return] = ACTIONS(534),
    [anon_sym_switch] = ACTIONS(534),
    [anon_sym_case] = ACTIONS(534),
    [sym_break] = ACTIONS(534),
    [sym_continue] = ACTIONS(534),
    [anon_sym_for] = ACTIONS(534),
    [anon_sym_while] = ACTIONS(534),
    [anon_sym_if] = ACTIONS(534),
    [anon_sym_begin] = ACTIONS(534),
    [aux_sym_test_command_token1] = ACTIONS(534),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [sym_escape_sequence] = ACTIONS(554),
    [anon_sym_DOT] = ACTIONS(534),
    [anon_sym_COLON] = ACTIONS(534),
    [anon_sym__] = ACTIONS(534),
    [anon_sym_argparse] = ACTIONS(534),
    [anon_sym_bg] = ACTIONS(534),
    [anon_sym_bind] = ACTIONS(534),
    [anon_sym_block] = ACTIONS(534),
    [anon_sym_breakpoint] = ACTIONS(534),
    [anon_sym_builtin] = ACTIONS(534),
    [anon_sym_cd] = ACTIONS(534),
    [anon_sym_command] = ACTIONS(534),
    [anon_sym_commandline] = ACTIONS(534),
    [anon_sym_complete] = ACTIONS(534),
    [anon_sym_contains] = ACTIONS(534),
    [anon_sym_count] = ACTIONS(534),
    [anon_sym_disown] = ACTIONS(534),
    [anon_sym_echo] = ACTIONS(534),
    [anon_sym_emit] = ACTIONS(534),
    [anon_sym_eval] = ACTIONS(534),
    [anon_sym_exec] = ACTIONS(534),
    [anon_sym_exit] = ACTIONS(534),
    [anon_sym_false] = ACTIONS(534),
    [anon_sym_fg] = ACTIONS(534),
    [anon_sym_functions] = ACTIONS(534),
    [anon_sym_history] = ACTIONS(534),
    [anon_sym_jobs] = ACTIONS(534),
    [anon_sym_math] = ACTIONS(534),
    [anon_sym_path] = ACTIONS(534),
    [anon_sym_printf] = ACTIONS(534),
    [anon_sym_pwd] = ACTIONS(534),
    [anon_sym_random] = ACTIONS(534),
    [anon_sym_read] = ACTIONS(534),
    [anon_sym_realpath] = ACTIONS(534),
    [anon_sym_set] = ACTIONS(534),
    [anon_sym_set_color] = ACTIONS(534),
    [anon_sym_source] = ACTIONS(534),
    [anon_sym_status] = ACTIONS(534),
    [anon_sym_string] = ACTIONS(534),
    [anon_sym_test] = ACTIONS(534),
    [anon_sym_time] = ACTIONS(534),
    [anon_sym_true] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(534),
    [anon_sym_ulimit] = ACTIONS(534),
    [anon_sym_wait] = ACTIONS(534),
    [sym_home_dir_expansion] = ACTIONS(534),
    [sym_glob] = ACTIONS(534),
    [sym_word] = ACTIONS(534),
  },
  [93] = {
    [anon_sym_and] = ACTIONS(534),
    [anon_sym_or] = ACTIONS(534),
    [anon_sym_BANG] = ACTIONS(534),
    [anon_sym_not] = ACTIONS(534),
    [anon_sym_DOLLAR] = ACTIONS(534),
    [anon_sym_LPAREN] = ACTIONS(534),
    [anon_sym_function] = ACTIONS(534),
    [anon_sym_end] = ACTIONS(534),
    [sym_integer] = ACTIONS(534),
    [sym_float] = ACTIONS(534),
    [anon_sym_return] = ACTIONS(534),
    [anon_sym_switch] = ACTIONS(534),
    [sym_break] = ACTIONS(534),
    [sym_continue] = ACTIONS(534),
    [anon_sym_for] = ACTIONS(534),
    [anon_sym_while] = ACTIONS(534),
    [anon_sym_if] = ACTIONS(534),
    [anon_sym_begin] = ACTIONS(534),
    [aux_sym_test_command_token1] = ACTIONS(534),
    [anon_sym_RBRACK] = ACTIONS(534),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(534),
    [anon_sym_LBRACE] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [sym_escape_sequence] = ACTIONS(554),
    [anon_sym_DOT] = ACTIONS(534),
    [anon_sym_COLON] = ACTIONS(534),
    [anon_sym__] = ACTIONS(534),
    [anon_sym_argparse] = ACTIONS(534),
    [anon_sym_bg] = ACTIONS(534),
    [anon_sym_bind] = ACTIONS(534),
    [anon_sym_block] = ACTIONS(534),
    [anon_sym_breakpoint] = ACTIONS(534),
    [anon_sym_builtin] = ACTIONS(534),
    [anon_sym_cd] = ACTIONS(534),
    [anon_sym_command] = ACTIONS(534),
    [anon_sym_commandline] = ACTIONS(534),
    [anon_sym_complete] = ACTIONS(534),
    [anon_sym_contains] = ACTIONS(534),
    [anon_sym_count] = ACTIONS(534),
    [anon_sym_disown] = ACTIONS(534),
    [anon_sym_echo] = ACTIONS(534),
    [anon_sym_emit] = ACTIONS(534),
    [anon_sym_eval] = ACTIONS(534),
    [anon_sym_exec] = ACTIONS(534),
    [anon_sym_exit] = ACTIONS(534),
    [anon_sym_false] = ACTIONS(534),
    [anon_sym_fg] = ACTIONS(534),
    [anon_sym_functions] = ACTIONS(534),
    [anon_sym_history] = ACTIONS(534),
    [anon_sym_jobs] = ACTIONS(534),
    [anon_sym_math] = ACTIONS(534),
    [anon_sym_path] = ACTIONS(534),
    [anon_sym_printf] = ACTIONS(534),
    [anon_sym_pwd] = ACTIONS(534),
    [anon_sym_random] = ACTIONS(534),
    [anon_sym_read] = ACTIONS(534),
    [anon_sym_realpath] = ACTIONS(534),
    [anon_sym_set] = ACTIONS(534),
    [anon_sym_set_color] = ACTIONS(534),
    [anon_sym_source] = ACTIONS(534),
    [anon_sym_status] = ACTIONS(534),
    [anon_sym_string] = ACTIONS(534),
    [anon_sym_test] = ACTIONS(534),
    [anon_sym_time] = ACTIONS(534),
    [anon_sym_true] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(534),
    [anon_sym_ulimit] = ACTIONS(534),
    [anon_sym_wait] = ACTIONS(534),
    [sym_home_dir_expansion] = ACTIONS(534),
    [sym_glob] = ACTIONS(534),
    [sym_word] = ACTIONS(534),
  },
  [94] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(101),
    [sym__expression] = STATE(101),
    [aux_sym_case_clause_repeat1] = STATE(101),
    [anon_sym_SEMI] = ACTIONS(556),
    [anon_sym_AMP] = ACTIONS(556),
    [anon_sym_LF] = ACTIONS(556),
    [anon_sym_CR] = ACTIONS(556),
    [anon_sym_CR_LF] = ACTIONS(556),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(562),
    [sym_float] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(562),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(562),
    [sym_glob] = ACTIONS(562),
    [sym_word] = ACTIONS(562),
  },
  [95] = {
    [aux_sym_variable_expansion_repeat1] = STATE(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(574),
    [anon_sym_AMP_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_LF] = ACTIONS(574),
    [anon_sym_CR] = ACTIONS(574),
    [anon_sym_CR_LF] = ACTIONS(574),
    [anon_sym_DOLLAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [sym_integer] = ACTIONS(574),
    [sym_float] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [sym_escape_sequence] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym__] = ACTIONS(574),
    [anon_sym_argparse] = ACTIONS(574),
    [anon_sym_bg] = ACTIONS(574),
    [anon_sym_bind] = ACTIONS(574),
    [anon_sym_block] = ACTIONS(574),
    [anon_sym_breakpoint] = ACTIONS(574),
    [anon_sym_builtin] = ACTIONS(574),
    [anon_sym_cd] = ACTIONS(574),
    [anon_sym_command] = ACTIONS(574),
    [anon_sym_commandline] = ACTIONS(574),
    [anon_sym_complete] = ACTIONS(574),
    [anon_sym_contains] = ACTIONS(574),
    [anon_sym_count] = ACTIONS(574),
    [anon_sym_disown] = ACTIONS(574),
    [anon_sym_echo] = ACTIONS(574),
    [anon_sym_emit] = ACTIONS(574),
    [anon_sym_eval] = ACTIONS(574),
    [anon_sym_exec] = ACTIONS(574),
    [anon_sym_exit] = ACTIONS(574),
    [anon_sym_false] = ACTIONS(574),
    [anon_sym_fg] = ACTIONS(574),
    [anon_sym_functions] = ACTIONS(574),
    [anon_sym_history] = ACTIONS(574),
    [anon_sym_jobs] = ACTIONS(574),
    [anon_sym_math] = ACTIONS(574),
    [anon_sym_path] = ACTIONS(574),
    [anon_sym_printf] = ACTIONS(574),
    [anon_sym_pwd] = ACTIONS(574),
    [anon_sym_random] = ACTIONS(574),
    [anon_sym_read] = ACTIONS(574),
    [anon_sym_realpath] = ACTIONS(574),
    [anon_sym_set] = ACTIONS(574),
    [anon_sym_set_color] = ACTIONS(574),
    [anon_sym_source] = ACTIONS(574),
    [anon_sym_status] = ACTIONS(574),
    [anon_sym_string] = ACTIONS(574),
    [anon_sym_test] = ACTIONS(574),
    [anon_sym_time] = ACTIONS(574),
    [anon_sym_true] = ACTIONS(574),
    [anon_sym_type] = ACTIONS(574),
    [anon_sym_ulimit] = ACTIONS(574),
    [anon_sym_wait] = ACTIONS(574),
    [sym_stream_redirect] = ACTIONS(574),
    [sym_direction] = ACTIONS(574),
    [sym_home_dir_expansion] = ACTIONS(574),
    [sym_glob] = ACTIONS(574),
    [sym_word] = ACTIONS(574),
    [sym__concat] = ACTIONS(576),
    [sym__concat_oct] = ACTIONS(576),
    [sym__concat_list] = ACTIONS(576),
  },
  [96] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(184),
    [sym__expression] = STATE(184),
    [aux_sym_function_definition_repeat1] = STATE(105),
    [anon_sym_SEMI] = ACTIONS(578),
    [anon_sym_AMP] = ACTIONS(578),
    [anon_sym_LF] = ACTIONS(578),
    [anon_sym_CR] = ACTIONS(578),
    [anon_sym_CR_LF] = ACTIONS(578),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(562),
    [sym_float] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(562),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(562),
    [sym_glob] = ACTIONS(562),
    [sym_word] = ACTIONS(562),
  },
  [97] = {
    [aux_sym_variable_expansion_repeat1] = STATE(95),
    [anon_sym_PIPE_PIPE] = ACTIONS(580),
    [anon_sym_AMP_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(580),
    [anon_sym_SEMI] = ACTIONS(580),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_LF] = ACTIONS(580),
    [anon_sym_CR] = ACTIONS(580),
    [anon_sym_CR_LF] = ACTIONS(580),
    [anon_sym_DOLLAR] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(580),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_integer] = ACTIONS(580),
    [sym_float] = ACTIONS(580),
    [anon_sym_RBRACK] = ACTIONS(580),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_LBRACE] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [sym_escape_sequence] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym__] = ACTIONS(580),
    [anon_sym_argparse] = ACTIONS(580),
    [anon_sym_bg] = ACTIONS(580),
    [anon_sym_bind] = ACTIONS(580),
    [anon_sym_block] = ACTIONS(580),
    [anon_sym_breakpoint] = ACTIONS(580),
    [anon_sym_builtin] = ACTIONS(580),
    [anon_sym_cd] = ACTIONS(580),
    [anon_sym_command] = ACTIONS(580),
    [anon_sym_commandline] = ACTIONS(580),
    [anon_sym_complete] = ACTIONS(580),
    [anon_sym_contains] = ACTIONS(580),
    [anon_sym_count] = ACTIONS(580),
    [anon_sym_disown] = ACTIONS(580),
    [anon_sym_echo] = ACTIONS(580),
    [anon_sym_emit] = ACTIONS(580),
    [anon_sym_eval] = ACTIONS(580),
    [anon_sym_exec] = ACTIONS(580),
    [anon_sym_exit] = ACTIONS(580),
    [anon_sym_false] = ACTIONS(580),
    [anon_sym_fg] = ACTIONS(580),
    [anon_sym_functions] = ACTIONS(580),
    [anon_sym_history] = ACTIONS(580),
    [anon_sym_jobs] = ACTIONS(580),
    [anon_sym_math] = ACTIONS(580),
    [anon_sym_path] = ACTIONS(580),
    [anon_sym_printf] = ACTIONS(580),
    [anon_sym_pwd] = ACTIONS(580),
    [anon_sym_random] = ACTIONS(580),
    [anon_sym_read] = ACTIONS(580),
    [anon_sym_realpath] = ACTIONS(580),
    [anon_sym_set] = ACTIONS(580),
    [anon_sym_set_color] = ACTIONS(580),
    [anon_sym_source] = ACTIONS(580),
    [anon_sym_status] = ACTIONS(580),
    [anon_sym_string] = ACTIONS(580),
    [anon_sym_test] = ACTIONS(580),
    [anon_sym_time] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(580),
    [anon_sym_type] = ACTIONS(580),
    [anon_sym_ulimit] = ACTIONS(580),
    [anon_sym_wait] = ACTIONS(580),
    [sym_stream_redirect] = ACTIONS(580),
    [sym_direction] = ACTIONS(580),
    [sym_home_dir_expansion] = ACTIONS(580),
    [sym_glob] = ACTIONS(580),
    [sym_word] = ACTIONS(580),
    [sym__concat] = ACTIONS(582),
    [sym__concat_oct] = ACTIONS(582),
    [sym__concat_list] = ACTIONS(582),
  },
  [98] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(183),
    [sym__expression] = STATE(183),
    [aux_sym_for_statement_repeat1] = STATE(100),
    [anon_sym_SEMI] = ACTIONS(584),
    [anon_sym_AMP] = ACTIONS(586),
    [anon_sym_LF] = ACTIONS(588),
    [anon_sym_CR] = ACTIONS(590),
    [anon_sym_CR_LF] = ACTIONS(592),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(562),
    [sym_float] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(562),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(562),
    [sym_glob] = ACTIONS(562),
    [sym_word] = ACTIONS(562),
  },
  [99] = {
    [aux_sym_variable_expansion_repeat1] = STATE(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(580),
    [anon_sym_AMP_AMP] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(580),
    [anon_sym_SEMI] = ACTIONS(580),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_LF] = ACTIONS(580),
    [anon_sym_CR] = ACTIONS(580),
    [anon_sym_CR_LF] = ACTIONS(580),
    [anon_sym_DOLLAR] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(580),
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym_integer] = ACTIONS(580),
    [sym_float] = ACTIONS(580),
    [anon_sym_RBRACK] = ACTIONS(580),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_LBRACE] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [sym_escape_sequence] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym__] = ACTIONS(580),
    [anon_sym_argparse] = ACTIONS(580),
    [anon_sym_bg] = ACTIONS(580),
    [anon_sym_bind] = ACTIONS(580),
    [anon_sym_block] = ACTIONS(580),
    [anon_sym_breakpoint] = ACTIONS(580),
    [anon_sym_builtin] = ACTIONS(580),
    [anon_sym_cd] = ACTIONS(580),
    [anon_sym_command] = ACTIONS(580),
    [anon_sym_commandline] = ACTIONS(580),
    [anon_sym_complete] = ACTIONS(580),
    [anon_sym_contains] = ACTIONS(580),
    [anon_sym_count] = ACTIONS(580),
    [anon_sym_disown] = ACTIONS(580),
    [anon_sym_echo] = ACTIONS(580),
    [anon_sym_emit] = ACTIONS(580),
    [anon_sym_eval] = ACTIONS(580),
    [anon_sym_exec] = ACTIONS(580),
    [anon_sym_exit] = ACTIONS(580),
    [anon_sym_false] = ACTIONS(580),
    [anon_sym_fg] = ACTIONS(580),
    [anon_sym_functions] = ACTIONS(580),
    [anon_sym_history] = ACTIONS(580),
    [anon_sym_jobs] = ACTIONS(580),
    [anon_sym_math] = ACTIONS(580),
    [anon_sym_path] = ACTIONS(580),
    [anon_sym_printf] = ACTIONS(580),
    [anon_sym_pwd] = ACTIONS(580),
    [anon_sym_random] = ACTIONS(580),
    [anon_sym_read] = ACTIONS(580),
    [anon_sym_realpath] = ACTIONS(580),
    [anon_sym_set] = ACTIONS(580),
    [anon_sym_set_color] = ACTIONS(580),
    [anon_sym_source] = ACTIONS(580),
    [anon_sym_status] = ACTIONS(580),
    [anon_sym_string] = ACTIONS(580),
    [anon_sym_test] = ACTIONS(580),
    [anon_sym_time] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(580),
    [anon_sym_type] = ACTIONS(580),
    [anon_sym_ulimit] = ACTIONS(580),
    [anon_sym_wait] = ACTIONS(580),
    [sym_stream_redirect] = ACTIONS(580),
    [sym_direction] = ACTIONS(580),
    [sym_home_dir_expansion] = ACTIONS(580),
    [sym_glob] = ACTIONS(580),
    [sym_word] = ACTIONS(580),
    [sym__concat] = ACTIONS(582),
    [sym__concat_oct] = ACTIONS(582),
    [sym__concat_list] = ACTIONS(594),
  },
  [100] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(183),
    [sym__expression] = STATE(183),
    [aux_sym_for_statement_repeat1] = STATE(100),
    [anon_sym_SEMI] = ACTIONS(596),
    [anon_sym_AMP] = ACTIONS(596),
    [anon_sym_LF] = ACTIONS(596),
    [anon_sym_CR] = ACTIONS(596),
    [anon_sym_CR_LF] = ACTIONS(596),
    [anon_sym_DOLLAR] = ACTIONS(598),
    [anon_sym_LPAREN] = ACTIONS(601),
    [sym_integer] = ACTIONS(604),
    [sym_float] = ACTIONS(604),
    [anon_sym_RBRACK] = ACTIONS(607),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(613),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [sym_escape_sequence] = ACTIONS(604),
    [anon_sym_DOT] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym__] = ACTIONS(619),
    [anon_sym_argparse] = ACTIONS(619),
    [anon_sym_bg] = ACTIONS(619),
    [anon_sym_bind] = ACTIONS(619),
    [anon_sym_block] = ACTIONS(619),
    [anon_sym_breakpoint] = ACTIONS(619),
    [anon_sym_builtin] = ACTIONS(619),
    [anon_sym_cd] = ACTIONS(619),
    [anon_sym_command] = ACTIONS(619),
    [anon_sym_commandline] = ACTIONS(619),
    [anon_sym_complete] = ACTIONS(619),
    [anon_sym_contains] = ACTIONS(619),
    [anon_sym_count] = ACTIONS(619),
    [anon_sym_disown] = ACTIONS(619),
    [anon_sym_echo] = ACTIONS(619),
    [anon_sym_emit] = ACTIONS(619),
    [anon_sym_eval] = ACTIONS(619),
    [anon_sym_exec] = ACTIONS(619),
    [anon_sym_exit] = ACTIONS(619),
    [anon_sym_false] = ACTIONS(619),
    [anon_sym_fg] = ACTIONS(619),
    [anon_sym_functions] = ACTIONS(619),
    [anon_sym_history] = ACTIONS(619),
    [anon_sym_jobs] = ACTIONS(619),
    [anon_sym_math] = ACTIONS(619),
    [anon_sym_path] = ACTIONS(619),
    [anon_sym_printf] = ACTIONS(619),
    [anon_sym_pwd] = ACTIONS(619),
    [anon_sym_random] = ACTIONS(619),
    [anon_sym_read] = ACTIONS(619),
    [anon_sym_realpath] = ACTIONS(619),
    [anon_sym_set] = ACTIONS(619),
    [anon_sym_set_color] = ACTIONS(619),
    [anon_sym_source] = ACTIONS(619),
    [anon_sym_status] = ACTIONS(619),
    [anon_sym_string] = ACTIONS(619),
    [anon_sym_test] = ACTIONS(619),
    [anon_sym_time] = ACTIONS(619),
    [anon_sym_true] = ACTIONS(619),
    [anon_sym_type] = ACTIONS(619),
    [anon_sym_ulimit] = ACTIONS(619),
    [anon_sym_wait] = ACTIONS(619),
    [sym_home_dir_expansion] = ACTIONS(604),
    [sym_glob] = ACTIONS(604),
    [sym_word] = ACTIONS(604),
  },
  [101] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(101),
    [sym__expression] = STATE(101),
    [aux_sym_case_clause_repeat1] = STATE(101),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_AMP] = ACTIONS(622),
    [anon_sym_LF] = ACTIONS(622),
    [anon_sym_CR] = ACTIONS(622),
    [anon_sym_CR_LF] = ACTIONS(622),
    [anon_sym_DOLLAR] = ACTIONS(624),
    [anon_sym_LPAREN] = ACTIONS(627),
    [sym_integer] = ACTIONS(630),
    [sym_float] = ACTIONS(630),
    [anon_sym_RBRACK] = ACTIONS(633),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(633),
    [anon_sym_LBRACE] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [sym_escape_sequence] = ACTIONS(630),
    [anon_sym_DOT] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [anon_sym__] = ACTIONS(645),
    [anon_sym_argparse] = ACTIONS(645),
    [anon_sym_bg] = ACTIONS(645),
    [anon_sym_bind] = ACTIONS(645),
    [anon_sym_block] = ACTIONS(645),
    [anon_sym_breakpoint] = ACTIONS(645),
    [anon_sym_builtin] = ACTIONS(645),
    [anon_sym_cd] = ACTIONS(645),
    [anon_sym_command] = ACTIONS(645),
    [anon_sym_commandline] = ACTIONS(645),
    [anon_sym_complete] = ACTIONS(645),
    [anon_sym_contains] = ACTIONS(645),
    [anon_sym_count] = ACTIONS(645),
    [anon_sym_disown] = ACTIONS(645),
    [anon_sym_echo] = ACTIONS(645),
    [anon_sym_emit] = ACTIONS(645),
    [anon_sym_eval] = ACTIONS(645),
    [anon_sym_exec] = ACTIONS(645),
    [anon_sym_exit] = ACTIONS(645),
    [anon_sym_false] = ACTIONS(645),
    [anon_sym_fg] = ACTIONS(645),
    [anon_sym_functions] = ACTIONS(645),
    [anon_sym_history] = ACTIONS(645),
    [anon_sym_jobs] = ACTIONS(645),
    [anon_sym_math] = ACTIONS(645),
    [anon_sym_path] = ACTIONS(645),
    [anon_sym_printf] = ACTIONS(645),
    [anon_sym_pwd] = ACTIONS(645),
    [anon_sym_random] = ACTIONS(645),
    [anon_sym_read] = ACTIONS(645),
    [anon_sym_realpath] = ACTIONS(645),
    [anon_sym_set] = ACTIONS(645),
    [anon_sym_set_color] = ACTIONS(645),
    [anon_sym_source] = ACTIONS(645),
    [anon_sym_status] = ACTIONS(645),
    [anon_sym_string] = ACTIONS(645),
    [anon_sym_test] = ACTIONS(645),
    [anon_sym_time] = ACTIONS(645),
    [anon_sym_true] = ACTIONS(645),
    [anon_sym_type] = ACTIONS(645),
    [anon_sym_ulimit] = ACTIONS(645),
    [anon_sym_wait] = ACTIONS(645),
    [sym_home_dir_expansion] = ACTIONS(630),
    [sym_glob] = ACTIONS(630),
    [sym_word] = ACTIONS(630),
  },
  [102] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(184),
    [sym__expression] = STATE(184),
    [aux_sym_function_definition_repeat1] = STATE(102),
    [anon_sym_SEMI] = ACTIONS(648),
    [anon_sym_AMP] = ACTIONS(648),
    [anon_sym_LF] = ACTIONS(648),
    [anon_sym_CR] = ACTIONS(648),
    [anon_sym_CR_LF] = ACTIONS(648),
    [anon_sym_DOLLAR] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(653),
    [sym_integer] = ACTIONS(656),
    [sym_float] = ACTIONS(656),
    [anon_sym_RBRACK] = ACTIONS(659),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_LBRACE] = ACTIONS(662),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(668),
    [sym_escape_sequence] = ACTIONS(656),
    [anon_sym_DOT] = ACTIONS(671),
    [anon_sym_COLON] = ACTIONS(671),
    [anon_sym__] = ACTIONS(671),
    [anon_sym_argparse] = ACTIONS(671),
    [anon_sym_bg] = ACTIONS(671),
    [anon_sym_bind] = ACTIONS(671),
    [anon_sym_block] = ACTIONS(671),
    [anon_sym_breakpoint] = ACTIONS(671),
    [anon_sym_builtin] = ACTIONS(671),
    [anon_sym_cd] = ACTIONS(671),
    [anon_sym_command] = ACTIONS(671),
    [anon_sym_commandline] = ACTIONS(671),
    [anon_sym_complete] = ACTIONS(671),
    [anon_sym_contains] = ACTIONS(671),
    [anon_sym_count] = ACTIONS(671),
    [anon_sym_disown] = ACTIONS(671),
    [anon_sym_echo] = ACTIONS(671),
    [anon_sym_emit] = ACTIONS(671),
    [anon_sym_eval] = ACTIONS(671),
    [anon_sym_exec] = ACTIONS(671),
    [anon_sym_exit] = ACTIONS(671),
    [anon_sym_false] = ACTIONS(671),
    [anon_sym_fg] = ACTIONS(671),
    [anon_sym_functions] = ACTIONS(671),
    [anon_sym_history] = ACTIONS(671),
    [anon_sym_jobs] = ACTIONS(671),
    [anon_sym_math] = ACTIONS(671),
    [anon_sym_path] = ACTIONS(671),
    [anon_sym_printf] = ACTIONS(671),
    [anon_sym_pwd] = ACTIONS(671),
    [anon_sym_random] = ACTIONS(671),
    [anon_sym_read] = ACTIONS(671),
    [anon_sym_realpath] = ACTIONS(671),
    [anon_sym_set] = ACTIONS(671),
    [anon_sym_set_color] = ACTIONS(671),
    [anon_sym_source] = ACTIONS(671),
    [anon_sym_status] = ACTIONS(671),
    [anon_sym_string] = ACTIONS(671),
    [anon_sym_test] = ACTIONS(671),
    [anon_sym_time] = ACTIONS(671),
    [anon_sym_true] = ACTIONS(671),
    [anon_sym_type] = ACTIONS(671),
    [anon_sym_ulimit] = ACTIONS(671),
    [anon_sym_wait] = ACTIONS(671),
    [sym_home_dir_expansion] = ACTIONS(656),
    [sym_glob] = ACTIONS(656),
    [sym_word] = ACTIONS(656),
  },
  [103] = {
    [aux_sym_variable_expansion_repeat1] = STATE(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(574),
    [anon_sym_AMP_AMP] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_LF] = ACTIONS(574),
    [anon_sym_CR] = ACTIONS(574),
    [anon_sym_CR_LF] = ACTIONS(574),
    [anon_sym_DOLLAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [sym_integer] = ACTIONS(574),
    [sym_float] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [sym_escape_sequence] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym__] = ACTIONS(574),
    [anon_sym_argparse] = ACTIONS(574),
    [anon_sym_bg] = ACTIONS(574),
    [anon_sym_bind] = ACTIONS(574),
    [anon_sym_block] = ACTIONS(574),
    [anon_sym_breakpoint] = ACTIONS(574),
    [anon_sym_builtin] = ACTIONS(574),
    [anon_sym_cd] = ACTIONS(574),
    [anon_sym_command] = ACTIONS(574),
    [anon_sym_commandline] = ACTIONS(574),
    [anon_sym_complete] = ACTIONS(574),
    [anon_sym_contains] = ACTIONS(574),
    [anon_sym_count] = ACTIONS(574),
    [anon_sym_disown] = ACTIONS(574),
    [anon_sym_echo] = ACTIONS(574),
    [anon_sym_emit] = ACTIONS(574),
    [anon_sym_eval] = ACTIONS(574),
    [anon_sym_exec] = ACTIONS(574),
    [anon_sym_exit] = ACTIONS(574),
    [anon_sym_false] = ACTIONS(574),
    [anon_sym_fg] = ACTIONS(574),
    [anon_sym_functions] = ACTIONS(574),
    [anon_sym_history] = ACTIONS(574),
    [anon_sym_jobs] = ACTIONS(574),
    [anon_sym_math] = ACTIONS(574),
    [anon_sym_path] = ACTIONS(574),
    [anon_sym_printf] = ACTIONS(574),
    [anon_sym_pwd] = ACTIONS(574),
    [anon_sym_random] = ACTIONS(574),
    [anon_sym_read] = ACTIONS(574),
    [anon_sym_realpath] = ACTIONS(574),
    [anon_sym_set] = ACTIONS(574),
    [anon_sym_set_color] = ACTIONS(574),
    [anon_sym_source] = ACTIONS(574),
    [anon_sym_status] = ACTIONS(574),
    [anon_sym_string] = ACTIONS(574),
    [anon_sym_test] = ACTIONS(574),
    [anon_sym_time] = ACTIONS(574),
    [anon_sym_true] = ACTIONS(574),
    [anon_sym_type] = ACTIONS(574),
    [anon_sym_ulimit] = ACTIONS(574),
    [anon_sym_wait] = ACTIONS(574),
    [sym_stream_redirect] = ACTIONS(574),
    [sym_direction] = ACTIONS(574),
    [sym_home_dir_expansion] = ACTIONS(574),
    [sym_glob] = ACTIONS(574),
    [sym_word] = ACTIONS(574),
    [sym__concat] = ACTIONS(576),
    [sym__concat_oct] = ACTIONS(576),
    [sym__concat_list] = ACTIONS(594),
  },
  [104] = {
    [aux_sym_variable_expansion_repeat1] = STATE(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(674),
    [anon_sym_AMP_AMP] = ACTIONS(674),
    [anon_sym_PIPE] = ACTIONS(674),
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_AMP] = ACTIONS(674),
    [anon_sym_LF] = ACTIONS(674),
    [anon_sym_CR] = ACTIONS(674),
    [anon_sym_CR_LF] = ACTIONS(674),
    [anon_sym_DOLLAR] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_integer] = ACTIONS(674),
    [sym_float] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [sym_escape_sequence] = ACTIONS(674),
    [anon_sym_DOT] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(674),
    [anon_sym__] = ACTIONS(674),
    [anon_sym_argparse] = ACTIONS(674),
    [anon_sym_bg] = ACTIONS(674),
    [anon_sym_bind] = ACTIONS(674),
    [anon_sym_block] = ACTIONS(674),
    [anon_sym_breakpoint] = ACTIONS(674),
    [anon_sym_builtin] = ACTIONS(674),
    [anon_sym_cd] = ACTIONS(674),
    [anon_sym_command] = ACTIONS(674),
    [anon_sym_commandline] = ACTIONS(674),
    [anon_sym_complete] = ACTIONS(674),
    [anon_sym_contains] = ACTIONS(674),
    [anon_sym_count] = ACTIONS(674),
    [anon_sym_disown] = ACTIONS(674),
    [anon_sym_echo] = ACTIONS(674),
    [anon_sym_emit] = ACTIONS(674),
    [anon_sym_eval] = ACTIONS(674),
    [anon_sym_exec] = ACTIONS(674),
    [anon_sym_exit] = ACTIONS(674),
    [anon_sym_false] = ACTIONS(674),
    [anon_sym_fg] = ACTIONS(674),
    [anon_sym_functions] = ACTIONS(674),
    [anon_sym_history] = ACTIONS(674),
    [anon_sym_jobs] = ACTIONS(674),
    [anon_sym_math] = ACTIONS(674),
    [anon_sym_path] = ACTIONS(674),
    [anon_sym_printf] = ACTIONS(674),
    [anon_sym_pwd] = ACTIONS(674),
    [anon_sym_random] = ACTIONS(674),
    [anon_sym_read] = ACTIONS(674),
    [anon_sym_realpath] = ACTIONS(674),
    [anon_sym_set] = ACTIONS(674),
    [anon_sym_set_color] = ACTIONS(674),
    [anon_sym_source] = ACTIONS(674),
    [anon_sym_status] = ACTIONS(674),
    [anon_sym_string] = ACTIONS(674),
    [anon_sym_test] = ACTIONS(674),
    [anon_sym_time] = ACTIONS(674),
    [anon_sym_true] = ACTIONS(674),
    [anon_sym_type] = ACTIONS(674),
    [anon_sym_ulimit] = ACTIONS(674),
    [anon_sym_wait] = ACTIONS(674),
    [sym_stream_redirect] = ACTIONS(674),
    [sym_direction] = ACTIONS(674),
    [sym_home_dir_expansion] = ACTIONS(674),
    [sym_glob] = ACTIONS(674),
    [sym_word] = ACTIONS(674),
    [sym__concat] = ACTIONS(676),
    [sym__concat_oct] = ACTIONS(676),
    [sym__concat_list] = ACTIONS(678),
  },
  [105] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(184),
    [sym__expression] = STATE(184),
    [aux_sym_function_definition_repeat1] = STATE(102),
    [anon_sym_SEMI] = ACTIONS(681),
    [anon_sym_AMP] = ACTIONS(683),
    [anon_sym_LF] = ACTIONS(685),
    [anon_sym_CR] = ACTIONS(687),
    [anon_sym_CR_LF] = ACTIONS(689),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(562),
    [sym_float] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(562),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(562),
    [sym_glob] = ACTIONS(562),
    [sym_word] = ACTIONS(562),
  },
  [106] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(691),
    [anon_sym_AMP_AMP] = ACTIONS(691),
    [anon_sym_PIPE] = ACTIONS(691),
    [anon_sym_SEMI] = ACTIONS(691),
    [anon_sym_AMP] = ACTIONS(691),
    [anon_sym_LF] = ACTIONS(691),
    [anon_sym_CR] = ACTIONS(691),
    [anon_sym_CR_LF] = ACTIONS(691),
    [anon_sym_DOLLAR] = ACTIONS(691),
    [anon_sym_LPAREN] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [sym_integer] = ACTIONS(691),
    [sym_float] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(691),
    [anon_sym_SQUOTE] = ACTIONS(691),
    [sym_escape_sequence] = ACTIONS(691),
    [anon_sym_DOT] = ACTIONS(691),
    [anon_sym_COLON] = ACTIONS(691),
    [anon_sym__] = ACTIONS(691),
    [anon_sym_argparse] = ACTIONS(691),
    [anon_sym_bg] = ACTIONS(691),
    [anon_sym_bind] = ACTIONS(691),
    [anon_sym_block] = ACTIONS(691),
    [anon_sym_breakpoint] = ACTIONS(691),
    [anon_sym_builtin] = ACTIONS(691),
    [anon_sym_cd] = ACTIONS(691),
    [anon_sym_command] = ACTIONS(691),
    [anon_sym_commandline] = ACTIONS(691),
    [anon_sym_complete] = ACTIONS(691),
    [anon_sym_contains] = ACTIONS(691),
    [anon_sym_count] = ACTIONS(691),
    [anon_sym_disown] = ACTIONS(691),
    [anon_sym_echo] = ACTIONS(691),
    [anon_sym_emit] = ACTIONS(691),
    [anon_sym_eval] = ACTIONS(691),
    [anon_sym_exec] = ACTIONS(691),
    [anon_sym_exit] = ACTIONS(691),
    [anon_sym_false] = ACTIONS(691),
    [anon_sym_fg] = ACTIONS(691),
    [anon_sym_functions] = ACTIONS(691),
    [anon_sym_history] = ACTIONS(691),
    [anon_sym_jobs] = ACTIONS(691),
    [anon_sym_math] = ACTIONS(691),
    [anon_sym_path] = ACTIONS(691),
    [anon_sym_printf] = ACTIONS(691),
    [anon_sym_pwd] = ACTIONS(691),
    [anon_sym_random] = ACTIONS(691),
    [anon_sym_read] = ACTIONS(691),
    [anon_sym_realpath] = ACTIONS(691),
    [anon_sym_set] = ACTIONS(691),
    [anon_sym_set_color] = ACTIONS(691),
    [anon_sym_source] = ACTIONS(691),
    [anon_sym_status] = ACTIONS(691),
    [anon_sym_string] = ACTIONS(691),
    [anon_sym_test] = ACTIONS(691),
    [anon_sym_time] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(691),
    [anon_sym_type] = ACTIONS(691),
    [anon_sym_ulimit] = ACTIONS(691),
    [anon_sym_wait] = ACTIONS(691),
    [sym_stream_redirect] = ACTIONS(691),
    [sym_direction] = ACTIONS(691),
    [sym_home_dir_expansion] = ACTIONS(691),
    [sym_glob] = ACTIONS(691),
    [sym_word] = ACTIONS(691),
    [sym__concat] = ACTIONS(693),
    [sym__concat_oct] = ACTIONS(693),
    [sym__concat_list] = ACTIONS(693),
  },
  [107] = {
    [aux_sym_concatenation_repeat1] = STATE(108),
    [anon_sym_PIPE_PIPE] = ACTIONS(695),
    [anon_sym_AMP_AMP] = ACTIONS(695),
    [anon_sym_PIPE] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_AMP] = ACTIONS(695),
    [anon_sym_LF] = ACTIONS(695),
    [anon_sym_CR] = ACTIONS(695),
    [anon_sym_CR_LF] = ACTIONS(695),
    [anon_sym_DOLLAR] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_integer] = ACTIONS(695),
    [sym_float] = ACTIONS(695),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [anon_sym_DQUOTE] = ACTIONS(695),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [sym_escape_sequence] = ACTIONS(695),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_COLON] = ACTIONS(695),
    [anon_sym__] = ACTIONS(695),
    [anon_sym_argparse] = ACTIONS(695),
    [anon_sym_bg] = ACTIONS(695),
    [anon_sym_bind] = ACTIONS(695),
    [anon_sym_block] = ACTIONS(695),
    [anon_sym_breakpoint] = ACTIONS(695),
    [anon_sym_builtin] = ACTIONS(695),
    [anon_sym_cd] = ACTIONS(695),
    [anon_sym_command] = ACTIONS(695),
    [anon_sym_commandline] = ACTIONS(695),
    [anon_sym_complete] = ACTIONS(695),
    [anon_sym_contains] = ACTIONS(695),
    [anon_sym_count] = ACTIONS(695),
    [anon_sym_disown] = ACTIONS(695),
    [anon_sym_echo] = ACTIONS(695),
    [anon_sym_emit] = ACTIONS(695),
    [anon_sym_eval] = ACTIONS(695),
    [anon_sym_exec] = ACTIONS(695),
    [anon_sym_exit] = ACTIONS(695),
    [anon_sym_false] = ACTIONS(695),
    [anon_sym_fg] = ACTIONS(695),
    [anon_sym_functions] = ACTIONS(695),
    [anon_sym_history] = ACTIONS(695),
    [anon_sym_jobs] = ACTIONS(695),
    [anon_sym_math] = ACTIONS(695),
    [anon_sym_path] = ACTIONS(695),
    [anon_sym_printf] = ACTIONS(695),
    [anon_sym_pwd] = ACTIONS(695),
    [anon_sym_random] = ACTIONS(695),
    [anon_sym_read] = ACTIONS(695),
    [anon_sym_realpath] = ACTIONS(695),
    [anon_sym_set] = ACTIONS(695),
    [anon_sym_set_color] = ACTIONS(695),
    [anon_sym_source] = ACTIONS(695),
    [anon_sym_status] = ACTIONS(695),
    [anon_sym_string] = ACTIONS(695),
    [anon_sym_test] = ACTIONS(695),
    [anon_sym_time] = ACTIONS(695),
    [anon_sym_true] = ACTIONS(695),
    [anon_sym_type] = ACTIONS(695),
    [anon_sym_ulimit] = ACTIONS(695),
    [anon_sym_wait] = ACTIONS(695),
    [sym_stream_redirect] = ACTIONS(695),
    [sym_direction] = ACTIONS(695),
    [sym_home_dir_expansion] = ACTIONS(695),
    [sym_glob] = ACTIONS(695),
    [sym_word] = ACTIONS(695),
    [sym__concat] = ACTIONS(697),
    [sym__concat_oct] = ACTIONS(699),
  },
  [108] = {
    [aux_sym_concatenation_repeat1] = STATE(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(701),
    [anon_sym_AMP_AMP] = ACTIONS(701),
    [anon_sym_PIPE] = ACTIONS(701),
    [anon_sym_SEMI] = ACTIONS(701),
    [anon_sym_AMP] = ACTIONS(701),
    [anon_sym_LF] = ACTIONS(701),
    [anon_sym_CR] = ACTIONS(701),
    [anon_sym_CR_LF] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(701),
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_integer] = ACTIONS(701),
    [sym_float] = ACTIONS(701),
    [anon_sym_RBRACK] = ACTIONS(701),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [sym_escape_sequence] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(701),
    [anon_sym__] = ACTIONS(701),
    [anon_sym_argparse] = ACTIONS(701),
    [anon_sym_bg] = ACTIONS(701),
    [anon_sym_bind] = ACTIONS(701),
    [anon_sym_block] = ACTIONS(701),
    [anon_sym_breakpoint] = ACTIONS(701),
    [anon_sym_builtin] = ACTIONS(701),
    [anon_sym_cd] = ACTIONS(701),
    [anon_sym_command] = ACTIONS(701),
    [anon_sym_commandline] = ACTIONS(701),
    [anon_sym_complete] = ACTIONS(701),
    [anon_sym_contains] = ACTIONS(701),
    [anon_sym_count] = ACTIONS(701),
    [anon_sym_disown] = ACTIONS(701),
    [anon_sym_echo] = ACTIONS(701),
    [anon_sym_emit] = ACTIONS(701),
    [anon_sym_eval] = ACTIONS(701),
    [anon_sym_exec] = ACTIONS(701),
    [anon_sym_exit] = ACTIONS(701),
    [anon_sym_false] = ACTIONS(701),
    [anon_sym_fg] = ACTIONS(701),
    [anon_sym_functions] = ACTIONS(701),
    [anon_sym_history] = ACTIONS(701),
    [anon_sym_jobs] = ACTIONS(701),
    [anon_sym_math] = ACTIONS(701),
    [anon_sym_path] = ACTIONS(701),
    [anon_sym_printf] = ACTIONS(701),
    [anon_sym_pwd] = ACTIONS(701),
    [anon_sym_random] = ACTIONS(701),
    [anon_sym_read] = ACTIONS(701),
    [anon_sym_realpath] = ACTIONS(701),
    [anon_sym_set] = ACTIONS(701),
    [anon_sym_set_color] = ACTIONS(701),
    [anon_sym_source] = ACTIONS(701),
    [anon_sym_status] = ACTIONS(701),
    [anon_sym_string] = ACTIONS(701),
    [anon_sym_test] = ACTIONS(701),
    [anon_sym_time] = ACTIONS(701),
    [anon_sym_true] = ACTIONS(701),
    [anon_sym_type] = ACTIONS(701),
    [anon_sym_ulimit] = ACTIONS(701),
    [anon_sym_wait] = ACTIONS(701),
    [sym_stream_redirect] = ACTIONS(701),
    [sym_direction] = ACTIONS(701),
    [sym_home_dir_expansion] = ACTIONS(701),
    [sym_glob] = ACTIONS(701),
    [sym_word] = ACTIONS(701),
    [sym__concat] = ACTIONS(697),
    [sym__concat_oct] = ACTIONS(703),
  },
  [109] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(705),
    [anon_sym_AMP_AMP] = ACTIONS(705),
    [anon_sym_PIPE] = ACTIONS(705),
    [anon_sym_SEMI] = ACTIONS(705),
    [anon_sym_AMP] = ACTIONS(705),
    [anon_sym_LF] = ACTIONS(705),
    [anon_sym_CR] = ACTIONS(705),
    [anon_sym_CR_LF] = ACTIONS(705),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(705),
    [sym_integer] = ACTIONS(705),
    [sym_float] = ACTIONS(705),
    [anon_sym_RBRACK] = ACTIONS(705),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(705),
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_SQUOTE] = ACTIONS(705),
    [sym_escape_sequence] = ACTIONS(705),
    [anon_sym_DOT] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(705),
    [anon_sym__] = ACTIONS(705),
    [anon_sym_argparse] = ACTIONS(705),
    [anon_sym_bg] = ACTIONS(705),
    [anon_sym_bind] = ACTIONS(705),
    [anon_sym_block] = ACTIONS(705),
    [anon_sym_breakpoint] = ACTIONS(705),
    [anon_sym_builtin] = ACTIONS(705),
    [anon_sym_cd] = ACTIONS(705),
    [anon_sym_command] = ACTIONS(705),
    [anon_sym_commandline] = ACTIONS(705),
    [anon_sym_complete] = ACTIONS(705),
    [anon_sym_contains] = ACTIONS(705),
    [anon_sym_count] = ACTIONS(705),
    [anon_sym_disown] = ACTIONS(705),
    [anon_sym_echo] = ACTIONS(705),
    [anon_sym_emit] = ACTIONS(705),
    [anon_sym_eval] = ACTIONS(705),
    [anon_sym_exec] = ACTIONS(705),
    [anon_sym_exit] = ACTIONS(705),
    [anon_sym_false] = ACTIONS(705),
    [anon_sym_fg] = ACTIONS(705),
    [anon_sym_functions] = ACTIONS(705),
    [anon_sym_history] = ACTIONS(705),
    [anon_sym_jobs] = ACTIONS(705),
    [anon_sym_math] = ACTIONS(705),
    [anon_sym_path] = ACTIONS(705),
    [anon_sym_printf] = ACTIONS(705),
    [anon_sym_pwd] = ACTIONS(705),
    [anon_sym_random] = ACTIONS(705),
    [anon_sym_read] = ACTIONS(705),
    [anon_sym_realpath] = ACTIONS(705),
    [anon_sym_set] = ACTIONS(705),
    [anon_sym_set_color] = ACTIONS(705),
    [anon_sym_source] = ACTIONS(705),
    [anon_sym_status] = ACTIONS(705),
    [anon_sym_string] = ACTIONS(705),
    [anon_sym_test] = ACTIONS(705),
    [anon_sym_time] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(705),
    [anon_sym_type] = ACTIONS(705),
    [anon_sym_ulimit] = ACTIONS(705),
    [anon_sym_wait] = ACTIONS(705),
    [sym_stream_redirect] = ACTIONS(705),
    [sym_direction] = ACTIONS(705),
    [sym_home_dir_expansion] = ACTIONS(705),
    [sym_glob] = ACTIONS(705),
    [sym_word] = ACTIONS(705),
    [sym__concat] = ACTIONS(707),
    [sym__concat_oct] = ACTIONS(707),
    [sym__concat_list] = ACTIONS(707),
  },
  [110] = {
    [aux_sym_concatenation_repeat1] = STATE(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_PIPE] = ACTIONS(709),
    [anon_sym_SEMI] = ACTIONS(709),
    [anon_sym_AMP] = ACTIONS(709),
    [anon_sym_LF] = ACTIONS(709),
    [anon_sym_CR] = ACTIONS(709),
    [anon_sym_CR_LF] = ACTIONS(709),
    [anon_sym_DOLLAR] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(709),
    [anon_sym_RPAREN] = ACTIONS(709),
    [sym_integer] = ACTIONS(709),
    [sym_float] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(709),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_escape_sequence] = ACTIONS(709),
    [anon_sym_DOT] = ACTIONS(709),
    [anon_sym_COLON] = ACTIONS(709),
    [anon_sym__] = ACTIONS(709),
    [anon_sym_argparse] = ACTIONS(709),
    [anon_sym_bg] = ACTIONS(709),
    [anon_sym_bind] = ACTIONS(709),
    [anon_sym_block] = ACTIONS(709),
    [anon_sym_breakpoint] = ACTIONS(709),
    [anon_sym_builtin] = ACTIONS(709),
    [anon_sym_cd] = ACTIONS(709),
    [anon_sym_command] = ACTIONS(709),
    [anon_sym_commandline] = ACTIONS(709),
    [anon_sym_complete] = ACTIONS(709),
    [anon_sym_contains] = ACTIONS(709),
    [anon_sym_count] = ACTIONS(709),
    [anon_sym_disown] = ACTIONS(709),
    [anon_sym_echo] = ACTIONS(709),
    [anon_sym_emit] = ACTIONS(709),
    [anon_sym_eval] = ACTIONS(709),
    [anon_sym_exec] = ACTIONS(709),
    [anon_sym_exit] = ACTIONS(709),
    [anon_sym_false] = ACTIONS(709),
    [anon_sym_fg] = ACTIONS(709),
    [anon_sym_functions] = ACTIONS(709),
    [anon_sym_history] = ACTIONS(709),
    [anon_sym_jobs] = ACTIONS(709),
    [anon_sym_math] = ACTIONS(709),
    [anon_sym_path] = ACTIONS(709),
    [anon_sym_printf] = ACTIONS(709),
    [anon_sym_pwd] = ACTIONS(709),
    [anon_sym_random] = ACTIONS(709),
    [anon_sym_read] = ACTIONS(709),
    [anon_sym_realpath] = ACTIONS(709),
    [anon_sym_set] = ACTIONS(709),
    [anon_sym_set_color] = ACTIONS(709),
    [anon_sym_source] = ACTIONS(709),
    [anon_sym_status] = ACTIONS(709),
    [anon_sym_string] = ACTIONS(709),
    [anon_sym_test] = ACTIONS(709),
    [anon_sym_time] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_type] = ACTIONS(709),
    [anon_sym_ulimit] = ACTIONS(709),
    [anon_sym_wait] = ACTIONS(709),
    [sym_stream_redirect] = ACTIONS(709),
    [sym_direction] = ACTIONS(709),
    [sym_home_dir_expansion] = ACTIONS(709),
    [sym_glob] = ACTIONS(709),
    [sym_word] = ACTIONS(709),
    [sym__concat] = ACTIONS(711),
    [sym__concat_oct] = ACTIONS(714),
  },
  [111] = {
    [aux_sym_concatenation_repeat1] = STATE(108),
    [anon_sym_PIPE_PIPE] = ACTIONS(717),
    [anon_sym_AMP_AMP] = ACTIONS(717),
    [anon_sym_PIPE] = ACTIONS(717),
    [anon_sym_SEMI] = ACTIONS(717),
    [anon_sym_AMP] = ACTIONS(717),
    [anon_sym_LF] = ACTIONS(717),
    [anon_sym_CR] = ACTIONS(717),
    [anon_sym_CR_LF] = ACTIONS(717),
    [anon_sym_DOLLAR] = ACTIONS(717),
    [anon_sym_LPAREN] = ACTIONS(717),
    [anon_sym_RPAREN] = ACTIONS(717),
    [sym_integer] = ACTIONS(717),
    [sym_float] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_LBRACE] = ACTIONS(717),
    [anon_sym_DQUOTE] = ACTIONS(717),
    [anon_sym_SQUOTE] = ACTIONS(717),
    [sym_escape_sequence] = ACTIONS(717),
    [anon_sym_DOT] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(717),
    [anon_sym__] = ACTIONS(717),
    [anon_sym_argparse] = ACTIONS(717),
    [anon_sym_bg] = ACTIONS(717),
    [anon_sym_bind] = ACTIONS(717),
    [anon_sym_block] = ACTIONS(717),
    [anon_sym_breakpoint] = ACTIONS(717),
    [anon_sym_builtin] = ACTIONS(717),
    [anon_sym_cd] = ACTIONS(717),
    [anon_sym_command] = ACTIONS(717),
    [anon_sym_commandline] = ACTIONS(717),
    [anon_sym_complete] = ACTIONS(717),
    [anon_sym_contains] = ACTIONS(717),
    [anon_sym_count] = ACTIONS(717),
    [anon_sym_disown] = ACTIONS(717),
    [anon_sym_echo] = ACTIONS(717),
    [anon_sym_emit] = ACTIONS(717),
    [anon_sym_eval] = ACTIONS(717),
    [anon_sym_exec] = ACTIONS(717),
    [anon_sym_exit] = ACTIONS(717),
    [anon_sym_false] = ACTIONS(717),
    [anon_sym_fg] = ACTIONS(717),
    [anon_sym_functions] = ACTIONS(717),
    [anon_sym_history] = ACTIONS(717),
    [anon_sym_jobs] = ACTIONS(717),
    [anon_sym_math] = ACTIONS(717),
    [anon_sym_path] = ACTIONS(717),
    [anon_sym_printf] = ACTIONS(717),
    [anon_sym_pwd] = ACTIONS(717),
    [anon_sym_random] = ACTIONS(717),
    [anon_sym_read] = ACTIONS(717),
    [anon_sym_realpath] = ACTIONS(717),
    [anon_sym_set] = ACTIONS(717),
    [anon_sym_set_color] = ACTIONS(717),
    [anon_sym_source] = ACTIONS(717),
    [anon_sym_status] = ACTIONS(717),
    [anon_sym_string] = ACTIONS(717),
    [anon_sym_test] = ACTIONS(717),
    [anon_sym_time] = ACTIONS(717),
    [anon_sym_true] = ACTIONS(717),
    [anon_sym_type] = ACTIONS(717),
    [anon_sym_ulimit] = ACTIONS(717),
    [anon_sym_wait] = ACTIONS(717),
    [sym_stream_redirect] = ACTIONS(717),
    [sym_direction] = ACTIONS(717),
    [sym_home_dir_expansion] = ACTIONS(717),
    [sym_glob] = ACTIONS(717),
    [sym_word] = ACTIONS(717),
    [sym__concat] = ACTIONS(697),
    [sym__concat_oct] = ACTIONS(699),
  },
  [112] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(674),
    [anon_sym_AMP_AMP] = ACTIONS(674),
    [anon_sym_PIPE] = ACTIONS(674),
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_AMP] = ACTIONS(674),
    [anon_sym_LF] = ACTIONS(674),
    [anon_sym_CR] = ACTIONS(674),
    [anon_sym_CR_LF] = ACTIONS(674),
    [anon_sym_DOLLAR] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [sym_integer] = ACTIONS(674),
    [sym_float] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [sym_escape_sequence] = ACTIONS(674),
    [anon_sym_DOT] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(674),
    [anon_sym__] = ACTIONS(674),
    [anon_sym_argparse] = ACTIONS(674),
    [anon_sym_bg] = ACTIONS(674),
    [anon_sym_bind] = ACTIONS(674),
    [anon_sym_block] = ACTIONS(674),
    [anon_sym_breakpoint] = ACTIONS(674),
    [anon_sym_builtin] = ACTIONS(674),
    [anon_sym_cd] = ACTIONS(674),
    [anon_sym_command] = ACTIONS(674),
    [anon_sym_commandline] = ACTIONS(674),
    [anon_sym_complete] = ACTIONS(674),
    [anon_sym_contains] = ACTIONS(674),
    [anon_sym_count] = ACTIONS(674),
    [anon_sym_disown] = ACTIONS(674),
    [anon_sym_echo] = ACTIONS(674),
    [anon_sym_emit] = ACTIONS(674),
    [anon_sym_eval] = ACTIONS(674),
    [anon_sym_exec] = ACTIONS(674),
    [anon_sym_exit] = ACTIONS(674),
    [anon_sym_false] = ACTIONS(674),
    [anon_sym_fg] = ACTIONS(674),
    [anon_sym_functions] = ACTIONS(674),
    [anon_sym_history] = ACTIONS(674),
    [anon_sym_jobs] = ACTIONS(674),
    [anon_sym_math] = ACTIONS(674),
    [anon_sym_path] = ACTIONS(674),
    [anon_sym_printf] = ACTIONS(674),
    [anon_sym_pwd] = ACTIONS(674),
    [anon_sym_random] = ACTIONS(674),
    [anon_sym_read] = ACTIONS(674),
    [anon_sym_realpath] = ACTIONS(674),
    [anon_sym_set] = ACTIONS(674),
    [anon_sym_set_color] = ACTIONS(674),
    [anon_sym_source] = ACTIONS(674),
    [anon_sym_status] = ACTIONS(674),
    [anon_sym_string] = ACTIONS(674),
    [anon_sym_test] = ACTIONS(674),
    [anon_sym_time] = ACTIONS(674),
    [anon_sym_true] = ACTIONS(674),
    [anon_sym_type] = ACTIONS(674),
    [anon_sym_ulimit] = ACTIONS(674),
    [anon_sym_wait] = ACTIONS(674),
    [sym_stream_redirect] = ACTIONS(674),
    [sym_direction] = ACTIONS(674),
    [sym_home_dir_expansion] = ACTIONS(674),
    [sym_glob] = ACTIONS(674),
    [sym_word] = ACTIONS(674),
    [sym__concat] = ACTIONS(676),
    [sym__concat_oct] = ACTIONS(676),
    [sym__concat_list] = ACTIONS(676),
  },
  [113] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_CR] = ACTIONS(719),
    [anon_sym_CR_LF] = ACTIONS(719),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [sym_integer] = ACTIONS(719),
    [sym_float] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_LBRACE] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [anon_sym_SQUOTE] = ACTIONS(719),
    [sym_escape_sequence] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_COLON] = ACTIONS(719),
    [anon_sym__] = ACTIONS(719),
    [anon_sym_argparse] = ACTIONS(719),
    [anon_sym_bg] = ACTIONS(719),
    [anon_sym_bind] = ACTIONS(719),
    [anon_sym_block] = ACTIONS(719),
    [anon_sym_breakpoint] = ACTIONS(719),
    [anon_sym_builtin] = ACTIONS(719),
    [anon_sym_cd] = ACTIONS(719),
    [anon_sym_command] = ACTIONS(719),
    [anon_sym_commandline] = ACTIONS(719),
    [anon_sym_complete] = ACTIONS(719),
    [anon_sym_contains] = ACTIONS(719),
    [anon_sym_count] = ACTIONS(719),
    [anon_sym_disown] = ACTIONS(719),
    [anon_sym_echo] = ACTIONS(719),
    [anon_sym_emit] = ACTIONS(719),
    [anon_sym_eval] = ACTIONS(719),
    [anon_sym_exec] = ACTIONS(719),
    [anon_sym_exit] = ACTIONS(719),
    [anon_sym_false] = ACTIONS(719),
    [anon_sym_fg] = ACTIONS(719),
    [anon_sym_functions] = ACTIONS(719),
    [anon_sym_history] = ACTIONS(719),
    [anon_sym_jobs] = ACTIONS(719),
    [anon_sym_math] = ACTIONS(719),
    [anon_sym_path] = ACTIONS(719),
    [anon_sym_printf] = ACTIONS(719),
    [anon_sym_pwd] = ACTIONS(719),
    [anon_sym_random] = ACTIONS(719),
    [anon_sym_read] = ACTIONS(719),
    [anon_sym_realpath] = ACTIONS(719),
    [anon_sym_set] = ACTIONS(719),
    [anon_sym_set_color] = ACTIONS(719),
    [anon_sym_source] = ACTIONS(719),
    [anon_sym_status] = ACTIONS(719),
    [anon_sym_string] = ACTIONS(719),
    [anon_sym_test] = ACTIONS(719),
    [anon_sym_time] = ACTIONS(719),
    [anon_sym_true] = ACTIONS(719),
    [anon_sym_type] = ACTIONS(719),
    [anon_sym_ulimit] = ACTIONS(719),
    [anon_sym_wait] = ACTIONS(719),
    [sym_stream_redirect] = ACTIONS(719),
    [sym_direction] = ACTIONS(719),
    [sym_home_dir_expansion] = ACTIONS(719),
    [sym_glob] = ACTIONS(719),
    [sym_word] = ACTIONS(719),
    [sym__concat] = ACTIONS(721),
    [sym__concat_oct] = ACTIONS(721),
  },
  [114] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_PIPE] = ACTIONS(709),
    [anon_sym_SEMI] = ACTIONS(709),
    [anon_sym_AMP] = ACTIONS(709),
    [anon_sym_LF] = ACTIONS(709),
    [anon_sym_CR] = ACTIONS(709),
    [anon_sym_CR_LF] = ACTIONS(709),
    [anon_sym_DOLLAR] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(709),
    [anon_sym_RPAREN] = ACTIONS(709),
    [sym_integer] = ACTIONS(709),
    [sym_float] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(709),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_escape_sequence] = ACTIONS(709),
    [anon_sym_DOT] = ACTIONS(709),
    [anon_sym_COLON] = ACTIONS(709),
    [anon_sym__] = ACTIONS(709),
    [anon_sym_argparse] = ACTIONS(709),
    [anon_sym_bg] = ACTIONS(709),
    [anon_sym_bind] = ACTIONS(709),
    [anon_sym_block] = ACTIONS(709),
    [anon_sym_breakpoint] = ACTIONS(709),
    [anon_sym_builtin] = ACTIONS(709),
    [anon_sym_cd] = ACTIONS(709),
    [anon_sym_command] = ACTIONS(709),
    [anon_sym_commandline] = ACTIONS(709),
    [anon_sym_complete] = ACTIONS(709),
    [anon_sym_contains] = ACTIONS(709),
    [anon_sym_count] = ACTIONS(709),
    [anon_sym_disown] = ACTIONS(709),
    [anon_sym_echo] = ACTIONS(709),
    [anon_sym_emit] = ACTIONS(709),
    [anon_sym_eval] = ACTIONS(709),
    [anon_sym_exec] = ACTIONS(709),
    [anon_sym_exit] = ACTIONS(709),
    [anon_sym_false] = ACTIONS(709),
    [anon_sym_fg] = ACTIONS(709),
    [anon_sym_functions] = ACTIONS(709),
    [anon_sym_history] = ACTIONS(709),
    [anon_sym_jobs] = ACTIONS(709),
    [anon_sym_math] = ACTIONS(709),
    [anon_sym_path] = ACTIONS(709),
    [anon_sym_printf] = ACTIONS(709),
    [anon_sym_pwd] = ACTIONS(709),
    [anon_sym_random] = ACTIONS(709),
    [anon_sym_read] = ACTIONS(709),
    [anon_sym_realpath] = ACTIONS(709),
    [anon_sym_set] = ACTIONS(709),
    [anon_sym_set_color] = ACTIONS(709),
    [anon_sym_source] = ACTIONS(709),
    [anon_sym_status] = ACTIONS(709),
    [anon_sym_string] = ACTIONS(709),
    [anon_sym_test] = ACTIONS(709),
    [anon_sym_time] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_type] = ACTIONS(709),
    [anon_sym_ulimit] = ACTIONS(709),
    [anon_sym_wait] = ACTIONS(709),
    [sym_stream_redirect] = ACTIONS(709),
    [sym_direction] = ACTIONS(709),
    [sym_home_dir_expansion] = ACTIONS(709),
    [sym_glob] = ACTIONS(709),
    [sym_word] = ACTIONS(709),
    [sym__concat] = ACTIONS(723),
    [sym__concat_oct] = ACTIONS(723),
  },
  [115] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(725),
    [anon_sym_PIPE] = ACTIONS(725),
    [anon_sym_SEMI] = ACTIONS(725),
    [anon_sym_AMP] = ACTIONS(725),
    [anon_sym_LF] = ACTIONS(725),
    [anon_sym_CR] = ACTIONS(725),
    [anon_sym_CR_LF] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [anon_sym_LPAREN] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(725),
    [sym_integer] = ACTIONS(725),
    [sym_float] = ACTIONS(725),
    [anon_sym_RBRACK] = ACTIONS(725),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_LBRACE] = ACTIONS(725),
    [anon_sym_DQUOTE] = ACTIONS(725),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [sym_escape_sequence] = ACTIONS(725),
    [anon_sym_DOT] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(725),
    [anon_sym__] = ACTIONS(725),
    [anon_sym_argparse] = ACTIONS(725),
    [anon_sym_bg] = ACTIONS(725),
    [anon_sym_bind] = ACTIONS(725),
    [anon_sym_block] = ACTIONS(725),
    [anon_sym_breakpoint] = ACTIONS(725),
    [anon_sym_builtin] = ACTIONS(725),
    [anon_sym_cd] = ACTIONS(725),
    [anon_sym_command] = ACTIONS(725),
    [anon_sym_commandline] = ACTIONS(725),
    [anon_sym_complete] = ACTIONS(725),
    [anon_sym_contains] = ACTIONS(725),
    [anon_sym_count] = ACTIONS(725),
    [anon_sym_disown] = ACTIONS(725),
    [anon_sym_echo] = ACTIONS(725),
    [anon_sym_emit] = ACTIONS(725),
    [anon_sym_eval] = ACTIONS(725),
    [anon_sym_exec] = ACTIONS(725),
    [anon_sym_exit] = ACTIONS(725),
    [anon_sym_false] = ACTIONS(725),
    [anon_sym_fg] = ACTIONS(725),
    [anon_sym_functions] = ACTIONS(725),
    [anon_sym_history] = ACTIONS(725),
    [anon_sym_jobs] = ACTIONS(725),
    [anon_sym_math] = ACTIONS(725),
    [anon_sym_path] = ACTIONS(725),
    [anon_sym_printf] = ACTIONS(725),
    [anon_sym_pwd] = ACTIONS(725),
    [anon_sym_random] = ACTIONS(725),
    [anon_sym_read] = ACTIONS(725),
    [anon_sym_realpath] = ACTIONS(725),
    [anon_sym_set] = ACTIONS(725),
    [anon_sym_set_color] = ACTIONS(725),
    [anon_sym_source] = ACTIONS(725),
    [anon_sym_status] = ACTIONS(725),
    [anon_sym_string] = ACTIONS(725),
    [anon_sym_test] = ACTIONS(725),
    [anon_sym_time] = ACTIONS(725),
    [anon_sym_true] = ACTIONS(725),
    [anon_sym_type] = ACTIONS(725),
    [anon_sym_ulimit] = ACTIONS(725),
    [anon_sym_wait] = ACTIONS(725),
    [sym_stream_redirect] = ACTIONS(725),
    [sym_direction] = ACTIONS(725),
    [sym_home_dir_expansion] = ACTIONS(725),
    [sym_glob] = ACTIONS(725),
    [sym_word] = ACTIONS(725),
    [sym__concat] = ACTIONS(727),
    [sym__concat_oct] = ACTIONS(727),
  },
  [116] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(729),
    [anon_sym_AMP_AMP] = ACTIONS(729),
    [anon_sym_PIPE] = ACTIONS(729),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_AMP] = ACTIONS(729),
    [anon_sym_LF] = ACTIONS(729),
    [anon_sym_CR] = ACTIONS(729),
    [anon_sym_CR_LF] = ACTIONS(729),
    [anon_sym_DOLLAR] = ACTIONS(729),
    [anon_sym_LPAREN] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(729),
    [sym_integer] = ACTIONS(729),
    [sym_float] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_LBRACE] = ACTIONS(729),
    [anon_sym_DQUOTE] = ACTIONS(729),
    [anon_sym_SQUOTE] = ACTIONS(729),
    [sym_escape_sequence] = ACTIONS(729),
    [anon_sym_DOT] = ACTIONS(729),
    [anon_sym_COLON] = ACTIONS(729),
    [anon_sym__] = ACTIONS(729),
    [anon_sym_argparse] = ACTIONS(729),
    [anon_sym_bg] = ACTIONS(729),
    [anon_sym_bind] = ACTIONS(729),
    [anon_sym_block] = ACTIONS(729),
    [anon_sym_breakpoint] = ACTIONS(729),
    [anon_sym_builtin] = ACTIONS(729),
    [anon_sym_cd] = ACTIONS(729),
    [anon_sym_command] = ACTIONS(729),
    [anon_sym_commandline] = ACTIONS(729),
    [anon_sym_complete] = ACTIONS(729),
    [anon_sym_contains] = ACTIONS(729),
    [anon_sym_count] = ACTIONS(729),
    [anon_sym_disown] = ACTIONS(729),
    [anon_sym_echo] = ACTIONS(729),
    [anon_sym_emit] = ACTIONS(729),
    [anon_sym_eval] = ACTIONS(729),
    [anon_sym_exec] = ACTIONS(729),
    [anon_sym_exit] = ACTIONS(729),
    [anon_sym_false] = ACTIONS(729),
    [anon_sym_fg] = ACTIONS(729),
    [anon_sym_functions] = ACTIONS(729),
    [anon_sym_history] = ACTIONS(729),
    [anon_sym_jobs] = ACTIONS(729),
    [anon_sym_math] = ACTIONS(729),
    [anon_sym_path] = ACTIONS(729),
    [anon_sym_printf] = ACTIONS(729),
    [anon_sym_pwd] = ACTIONS(729),
    [anon_sym_random] = ACTIONS(729),
    [anon_sym_read] = ACTIONS(729),
    [anon_sym_realpath] = ACTIONS(729),
    [anon_sym_set] = ACTIONS(729),
    [anon_sym_set_color] = ACTIONS(729),
    [anon_sym_source] = ACTIONS(729),
    [anon_sym_status] = ACTIONS(729),
    [anon_sym_string] = ACTIONS(729),
    [anon_sym_test] = ACTIONS(729),
    [anon_sym_time] = ACTIONS(729),
    [anon_sym_true] = ACTIONS(729),
    [anon_sym_type] = ACTIONS(729),
    [anon_sym_ulimit] = ACTIONS(729),
    [anon_sym_wait] = ACTIONS(729),
    [sym_stream_redirect] = ACTIONS(729),
    [sym_direction] = ACTIONS(729),
    [sym_home_dir_expansion] = ACTIONS(729),
    [sym_glob] = ACTIONS(729),
    [sym_word] = ACTIONS(729),
    [sym__concat] = ACTIONS(731),
    [sym__concat_oct] = ACTIONS(731),
  },
  [117] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(733),
    [anon_sym_AMP_AMP] = ACTIONS(733),
    [anon_sym_PIPE] = ACTIONS(733),
    [anon_sym_SEMI] = ACTIONS(733),
    [anon_sym_AMP] = ACTIONS(733),
    [anon_sym_LF] = ACTIONS(733),
    [anon_sym_CR] = ACTIONS(733),
    [anon_sym_CR_LF] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_integer] = ACTIONS(733),
    [sym_float] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(733),
    [anon_sym_SQUOTE] = ACTIONS(733),
    [sym_escape_sequence] = ACTIONS(733),
    [anon_sym_DOT] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(733),
    [anon_sym__] = ACTIONS(733),
    [anon_sym_argparse] = ACTIONS(733),
    [anon_sym_bg] = ACTIONS(733),
    [anon_sym_bind] = ACTIONS(733),
    [anon_sym_block] = ACTIONS(733),
    [anon_sym_breakpoint] = ACTIONS(733),
    [anon_sym_builtin] = ACTIONS(733),
    [anon_sym_cd] = ACTIONS(733),
    [anon_sym_command] = ACTIONS(733),
    [anon_sym_commandline] = ACTIONS(733),
    [anon_sym_complete] = ACTIONS(733),
    [anon_sym_contains] = ACTIONS(733),
    [anon_sym_count] = ACTIONS(733),
    [anon_sym_disown] = ACTIONS(733),
    [anon_sym_echo] = ACTIONS(733),
    [anon_sym_emit] = ACTIONS(733),
    [anon_sym_eval] = ACTIONS(733),
    [anon_sym_exec] = ACTIONS(733),
    [anon_sym_exit] = ACTIONS(733),
    [anon_sym_false] = ACTIONS(733),
    [anon_sym_fg] = ACTIONS(733),
    [anon_sym_functions] = ACTIONS(733),
    [anon_sym_history] = ACTIONS(733),
    [anon_sym_jobs] = ACTIONS(733),
    [anon_sym_math] = ACTIONS(733),
    [anon_sym_path] = ACTIONS(733),
    [anon_sym_printf] = ACTIONS(733),
    [anon_sym_pwd] = ACTIONS(733),
    [anon_sym_random] = ACTIONS(733),
    [anon_sym_read] = ACTIONS(733),
    [anon_sym_realpath] = ACTIONS(733),
    [anon_sym_set] = ACTIONS(733),
    [anon_sym_set_color] = ACTIONS(733),
    [anon_sym_source] = ACTIONS(733),
    [anon_sym_status] = ACTIONS(733),
    [anon_sym_string] = ACTIONS(733),
    [anon_sym_test] = ACTIONS(733),
    [anon_sym_time] = ACTIONS(733),
    [anon_sym_true] = ACTIONS(733),
    [anon_sym_type] = ACTIONS(733),
    [anon_sym_ulimit] = ACTIONS(733),
    [anon_sym_wait] = ACTIONS(733),
    [sym_stream_redirect] = ACTIONS(733),
    [sym_direction] = ACTIONS(733),
    [sym_home_dir_expansion] = ACTIONS(733),
    [sym_glob] = ACTIONS(733),
    [sym_word] = ACTIONS(733),
    [sym__concat] = ACTIONS(735),
    [sym__concat_oct] = ACTIONS(735),
  },
  [118] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(737),
    [anon_sym_AMP_AMP] = ACTIONS(737),
    [anon_sym_PIPE] = ACTIONS(737),
    [anon_sym_SEMI] = ACTIONS(737),
    [anon_sym_AMP] = ACTIONS(737),
    [anon_sym_LF] = ACTIONS(737),
    [anon_sym_CR] = ACTIONS(737),
    [anon_sym_CR_LF] = ACTIONS(737),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [anon_sym_LPAREN] = ACTIONS(737),
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym_integer] = ACTIONS(737),
    [sym_float] = ACTIONS(737),
    [anon_sym_RBRACK] = ACTIONS(737),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(737),
    [anon_sym_LBRACE] = ACTIONS(737),
    [anon_sym_DQUOTE] = ACTIONS(737),
    [anon_sym_SQUOTE] = ACTIONS(737),
    [sym_escape_sequence] = ACTIONS(737),
    [anon_sym_DOT] = ACTIONS(737),
    [anon_sym_COLON] = ACTIONS(737),
    [anon_sym__] = ACTIONS(737),
    [anon_sym_argparse] = ACTIONS(737),
    [anon_sym_bg] = ACTIONS(737),
    [anon_sym_bind] = ACTIONS(737),
    [anon_sym_block] = ACTIONS(737),
    [anon_sym_breakpoint] = ACTIONS(737),
    [anon_sym_builtin] = ACTIONS(737),
    [anon_sym_cd] = ACTIONS(737),
    [anon_sym_command] = ACTIONS(737),
    [anon_sym_commandline] = ACTIONS(737),
    [anon_sym_complete] = ACTIONS(737),
    [anon_sym_contains] = ACTIONS(737),
    [anon_sym_count] = ACTIONS(737),
    [anon_sym_disown] = ACTIONS(737),
    [anon_sym_echo] = ACTIONS(737),
    [anon_sym_emit] = ACTIONS(737),
    [anon_sym_eval] = ACTIONS(737),
    [anon_sym_exec] = ACTIONS(737),
    [anon_sym_exit] = ACTIONS(737),
    [anon_sym_false] = ACTIONS(737),
    [anon_sym_fg] = ACTIONS(737),
    [anon_sym_functions] = ACTIONS(737),
    [anon_sym_history] = ACTIONS(737),
    [anon_sym_jobs] = ACTIONS(737),
    [anon_sym_math] = ACTIONS(737),
    [anon_sym_path] = ACTIONS(737),
    [anon_sym_printf] = ACTIONS(737),
    [anon_sym_pwd] = ACTIONS(737),
    [anon_sym_random] = ACTIONS(737),
    [anon_sym_read] = ACTIONS(737),
    [anon_sym_realpath] = ACTIONS(737),
    [anon_sym_set] = ACTIONS(737),
    [anon_sym_set_color] = ACTIONS(737),
    [anon_sym_source] = ACTIONS(737),
    [anon_sym_status] = ACTIONS(737),
    [anon_sym_string] = ACTIONS(737),
    [anon_sym_test] = ACTIONS(737),
    [anon_sym_time] = ACTIONS(737),
    [anon_sym_true] = ACTIONS(737),
    [anon_sym_type] = ACTIONS(737),
    [anon_sym_ulimit] = ACTIONS(737),
    [anon_sym_wait] = ACTIONS(737),
    [sym_stream_redirect] = ACTIONS(737),
    [sym_direction] = ACTIONS(737),
    [sym_home_dir_expansion] = ACTIONS(737),
    [sym_glob] = ACTIONS(737),
    [sym_word] = ACTIONS(737),
    [sym__concat] = ACTIONS(739),
    [sym__concat_oct] = ACTIONS(739),
  },
  [119] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(741),
    [anon_sym_AMP_AMP] = ACTIONS(741),
    [anon_sym_PIPE] = ACTIONS(741),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_AMP] = ACTIONS(741),
    [anon_sym_LF] = ACTIONS(741),
    [anon_sym_CR] = ACTIONS(741),
    [anon_sym_CR_LF] = ACTIONS(741),
    [anon_sym_DOLLAR] = ACTIONS(741),
    [anon_sym_LPAREN] = ACTIONS(741),
    [anon_sym_RPAREN] = ACTIONS(741),
    [sym_integer] = ACTIONS(741),
    [sym_float] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_LBRACE] = ACTIONS(741),
    [anon_sym_DQUOTE] = ACTIONS(741),
    [anon_sym_SQUOTE] = ACTIONS(741),
    [sym_escape_sequence] = ACTIONS(741),
    [anon_sym_DOT] = ACTIONS(741),
    [anon_sym_COLON] = ACTIONS(741),
    [anon_sym__] = ACTIONS(741),
    [anon_sym_argparse] = ACTIONS(741),
    [anon_sym_bg] = ACTIONS(741),
    [anon_sym_bind] = ACTIONS(741),
    [anon_sym_block] = ACTIONS(741),
    [anon_sym_breakpoint] = ACTIONS(741),
    [anon_sym_builtin] = ACTIONS(741),
    [anon_sym_cd] = ACTIONS(741),
    [anon_sym_command] = ACTIONS(741),
    [anon_sym_commandline] = ACTIONS(741),
    [anon_sym_complete] = ACTIONS(741),
    [anon_sym_contains] = ACTIONS(741),
    [anon_sym_count] = ACTIONS(741),
    [anon_sym_disown] = ACTIONS(741),
    [anon_sym_echo] = ACTIONS(741),
    [anon_sym_emit] = ACTIONS(741),
    [anon_sym_eval] = ACTIONS(741),
    [anon_sym_exec] = ACTIONS(741),
    [anon_sym_exit] = ACTIONS(741),
    [anon_sym_false] = ACTIONS(741),
    [anon_sym_fg] = ACTIONS(741),
    [anon_sym_functions] = ACTIONS(741),
    [anon_sym_history] = ACTIONS(741),
    [anon_sym_jobs] = ACTIONS(741),
    [anon_sym_math] = ACTIONS(741),
    [anon_sym_path] = ACTIONS(741),
    [anon_sym_printf] = ACTIONS(741),
    [anon_sym_pwd] = ACTIONS(741),
    [anon_sym_random] = ACTIONS(741),
    [anon_sym_read] = ACTIONS(741),
    [anon_sym_realpath] = ACTIONS(741),
    [anon_sym_set] = ACTIONS(741),
    [anon_sym_set_color] = ACTIONS(741),
    [anon_sym_source] = ACTIONS(741),
    [anon_sym_status] = ACTIONS(741),
    [anon_sym_string] = ACTIONS(741),
    [anon_sym_test] = ACTIONS(741),
    [anon_sym_time] = ACTIONS(741),
    [anon_sym_true] = ACTIONS(741),
    [anon_sym_type] = ACTIONS(741),
    [anon_sym_ulimit] = ACTIONS(741),
    [anon_sym_wait] = ACTIONS(741),
    [sym_stream_redirect] = ACTIONS(741),
    [sym_direction] = ACTIONS(741),
    [sym_home_dir_expansion] = ACTIONS(741),
    [sym_glob] = ACTIONS(741),
    [sym_word] = ACTIONS(741),
    [sym__concat] = ACTIONS(743),
    [sym__concat_oct] = ACTIONS(743),
  },
  [120] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(745),
    [anon_sym_AMP_AMP] = ACTIONS(745),
    [anon_sym_PIPE] = ACTIONS(745),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_AMP] = ACTIONS(745),
    [anon_sym_LF] = ACTIONS(745),
    [anon_sym_CR] = ACTIONS(745),
    [anon_sym_CR_LF] = ACTIONS(745),
    [anon_sym_DOLLAR] = ACTIONS(745),
    [anon_sym_LPAREN] = ACTIONS(745),
    [anon_sym_RPAREN] = ACTIONS(745),
    [sym_integer] = ACTIONS(745),
    [sym_float] = ACTIONS(745),
    [anon_sym_RBRACK] = ACTIONS(745),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_LBRACE] = ACTIONS(745),
    [anon_sym_DQUOTE] = ACTIONS(745),
    [anon_sym_SQUOTE] = ACTIONS(745),
    [sym_escape_sequence] = ACTIONS(745),
    [anon_sym_DOT] = ACTIONS(745),
    [anon_sym_COLON] = ACTIONS(745),
    [anon_sym__] = ACTIONS(745),
    [anon_sym_argparse] = ACTIONS(745),
    [anon_sym_bg] = ACTIONS(745),
    [anon_sym_bind] = ACTIONS(745),
    [anon_sym_block] = ACTIONS(745),
    [anon_sym_breakpoint] = ACTIONS(745),
    [anon_sym_builtin] = ACTIONS(745),
    [anon_sym_cd] = ACTIONS(745),
    [anon_sym_command] = ACTIONS(745),
    [anon_sym_commandline] = ACTIONS(745),
    [anon_sym_complete] = ACTIONS(745),
    [anon_sym_contains] = ACTIONS(745),
    [anon_sym_count] = ACTIONS(745),
    [anon_sym_disown] = ACTIONS(745),
    [anon_sym_echo] = ACTIONS(745),
    [anon_sym_emit] = ACTIONS(745),
    [anon_sym_eval] = ACTIONS(745),
    [anon_sym_exec] = ACTIONS(745),
    [anon_sym_exit] = ACTIONS(745),
    [anon_sym_false] = ACTIONS(745),
    [anon_sym_fg] = ACTIONS(745),
    [anon_sym_functions] = ACTIONS(745),
    [anon_sym_history] = ACTIONS(745),
    [anon_sym_jobs] = ACTIONS(745),
    [anon_sym_math] = ACTIONS(745),
    [anon_sym_path] = ACTIONS(745),
    [anon_sym_printf] = ACTIONS(745),
    [anon_sym_pwd] = ACTIONS(745),
    [anon_sym_random] = ACTIONS(745),
    [anon_sym_read] = ACTIONS(745),
    [anon_sym_realpath] = ACTIONS(745),
    [anon_sym_set] = ACTIONS(745),
    [anon_sym_set_color] = ACTIONS(745),
    [anon_sym_source] = ACTIONS(745),
    [anon_sym_status] = ACTIONS(745),
    [anon_sym_string] = ACTIONS(745),
    [anon_sym_test] = ACTIONS(745),
    [anon_sym_time] = ACTIONS(745),
    [anon_sym_true] = ACTIONS(745),
    [anon_sym_type] = ACTIONS(745),
    [anon_sym_ulimit] = ACTIONS(745),
    [anon_sym_wait] = ACTIONS(745),
    [sym_stream_redirect] = ACTIONS(745),
    [sym_direction] = ACTIONS(745),
    [sym_home_dir_expansion] = ACTIONS(745),
    [sym_glob] = ACTIONS(745),
    [sym_word] = ACTIONS(745),
    [sym__concat] = ACTIONS(747),
    [sym__concat_oct] = ACTIONS(747),
  },
  [121] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(749),
    [anon_sym_AMP_AMP] = ACTIONS(749),
    [anon_sym_PIPE] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(749),
    [anon_sym_AMP] = ACTIONS(749),
    [anon_sym_LF] = ACTIONS(749),
    [anon_sym_CR] = ACTIONS(749),
    [anon_sym_CR_LF] = ACTIONS(749),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_LPAREN] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(749),
    [sym_integer] = ACTIONS(749),
    [sym_float] = ACTIONS(749),
    [anon_sym_RBRACK] = ACTIONS(749),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_LBRACE] = ACTIONS(749),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [anon_sym_SQUOTE] = ACTIONS(749),
    [sym_escape_sequence] = ACTIONS(749),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_COLON] = ACTIONS(749),
    [anon_sym__] = ACTIONS(749),
    [anon_sym_argparse] = ACTIONS(749),
    [anon_sym_bg] = ACTIONS(749),
    [anon_sym_bind] = ACTIONS(749),
    [anon_sym_block] = ACTIONS(749),
    [anon_sym_breakpoint] = ACTIONS(749),
    [anon_sym_builtin] = ACTIONS(749),
    [anon_sym_cd] = ACTIONS(749),
    [anon_sym_command] = ACTIONS(749),
    [anon_sym_commandline] = ACTIONS(749),
    [anon_sym_complete] = ACTIONS(749),
    [anon_sym_contains] = ACTIONS(749),
    [anon_sym_count] = ACTIONS(749),
    [anon_sym_disown] = ACTIONS(749),
    [anon_sym_echo] = ACTIONS(749),
    [anon_sym_emit] = ACTIONS(749),
    [anon_sym_eval] = ACTIONS(749),
    [anon_sym_exec] = ACTIONS(749),
    [anon_sym_exit] = ACTIONS(749),
    [anon_sym_false] = ACTIONS(749),
    [anon_sym_fg] = ACTIONS(749),
    [anon_sym_functions] = ACTIONS(749),
    [anon_sym_history] = ACTIONS(749),
    [anon_sym_jobs] = ACTIONS(749),
    [anon_sym_math] = ACTIONS(749),
    [anon_sym_path] = ACTIONS(749),
    [anon_sym_printf] = ACTIONS(749),
    [anon_sym_pwd] = ACTIONS(749),
    [anon_sym_random] = ACTIONS(749),
    [anon_sym_read] = ACTIONS(749),
    [anon_sym_realpath] = ACTIONS(749),
    [anon_sym_set] = ACTIONS(749),
    [anon_sym_set_color] = ACTIONS(749),
    [anon_sym_source] = ACTIONS(749),
    [anon_sym_status] = ACTIONS(749),
    [anon_sym_string] = ACTIONS(749),
    [anon_sym_test] = ACTIONS(749),
    [anon_sym_time] = ACTIONS(749),
    [anon_sym_true] = ACTIONS(749),
    [anon_sym_type] = ACTIONS(749),
    [anon_sym_ulimit] = ACTIONS(749),
    [anon_sym_wait] = ACTIONS(749),
    [sym_stream_redirect] = ACTIONS(749),
    [sym_direction] = ACTIONS(749),
    [sym_home_dir_expansion] = ACTIONS(749),
    [sym_glob] = ACTIONS(749),
    [sym_word] = ACTIONS(749),
    [sym__concat] = ACTIONS(751),
    [sym__concat_oct] = ACTIONS(751),
  },
  [122] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE] = ACTIONS(753),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_AMP] = ACTIONS(753),
    [anon_sym_LF] = ACTIONS(753),
    [anon_sym_CR] = ACTIONS(753),
    [anon_sym_CR_LF] = ACTIONS(753),
    [anon_sym_DOLLAR] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(753),
    [anon_sym_RPAREN] = ACTIONS(753),
    [sym_integer] = ACTIONS(753),
    [sym_float] = ACTIONS(753),
    [anon_sym_RBRACK] = ACTIONS(753),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(753),
    [anon_sym_LBRACE] = ACTIONS(753),
    [anon_sym_DQUOTE] = ACTIONS(753),
    [anon_sym_SQUOTE] = ACTIONS(753),
    [sym_escape_sequence] = ACTIONS(753),
    [anon_sym_DOT] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [anon_sym_argparse] = ACTIONS(753),
    [anon_sym_bg] = ACTIONS(753),
    [anon_sym_bind] = ACTIONS(753),
    [anon_sym_block] = ACTIONS(753),
    [anon_sym_breakpoint] = ACTIONS(753),
    [anon_sym_builtin] = ACTIONS(753),
    [anon_sym_cd] = ACTIONS(753),
    [anon_sym_command] = ACTIONS(753),
    [anon_sym_commandline] = ACTIONS(753),
    [anon_sym_complete] = ACTIONS(753),
    [anon_sym_contains] = ACTIONS(753),
    [anon_sym_count] = ACTIONS(753),
    [anon_sym_disown] = ACTIONS(753),
    [anon_sym_echo] = ACTIONS(753),
    [anon_sym_emit] = ACTIONS(753),
    [anon_sym_eval] = ACTIONS(753),
    [anon_sym_exec] = ACTIONS(753),
    [anon_sym_exit] = ACTIONS(753),
    [anon_sym_false] = ACTIONS(753),
    [anon_sym_fg] = ACTIONS(753),
    [anon_sym_functions] = ACTIONS(753),
    [anon_sym_history] = ACTIONS(753),
    [anon_sym_jobs] = ACTIONS(753),
    [anon_sym_math] = ACTIONS(753),
    [anon_sym_path] = ACTIONS(753),
    [anon_sym_printf] = ACTIONS(753),
    [anon_sym_pwd] = ACTIONS(753),
    [anon_sym_random] = ACTIONS(753),
    [anon_sym_read] = ACTIONS(753),
    [anon_sym_realpath] = ACTIONS(753),
    [anon_sym_set] = ACTIONS(753),
    [anon_sym_set_color] = ACTIONS(753),
    [anon_sym_source] = ACTIONS(753),
    [anon_sym_status] = ACTIONS(753),
    [anon_sym_string] = ACTIONS(753),
    [anon_sym_test] = ACTIONS(753),
    [anon_sym_time] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(753),
    [anon_sym_type] = ACTIONS(753),
    [anon_sym_ulimit] = ACTIONS(753),
    [anon_sym_wait] = ACTIONS(753),
    [sym_stream_redirect] = ACTIONS(753),
    [sym_direction] = ACTIONS(753),
    [sym_home_dir_expansion] = ACTIONS(753),
    [sym_glob] = ACTIONS(753),
    [sym_word] = ACTIONS(753),
    [sym__concat] = ACTIONS(755),
    [sym__concat_oct] = ACTIONS(755),
  },
  [123] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(757),
    [anon_sym_AMP_AMP] = ACTIONS(757),
    [anon_sym_PIPE] = ACTIONS(757),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_CR] = ACTIONS(757),
    [anon_sym_CR_LF] = ACTIONS(757),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [anon_sym_LPAREN] = ACTIONS(757),
    [anon_sym_RPAREN] = ACTIONS(757),
    [sym_integer] = ACTIONS(757),
    [sym_float] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(757),
    [sym_escape_sequence] = ACTIONS(757),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(757),
    [anon_sym__] = ACTIONS(757),
    [anon_sym_argparse] = ACTIONS(757),
    [anon_sym_bg] = ACTIONS(757),
    [anon_sym_bind] = ACTIONS(757),
    [anon_sym_block] = ACTIONS(757),
    [anon_sym_breakpoint] = ACTIONS(757),
    [anon_sym_builtin] = ACTIONS(757),
    [anon_sym_cd] = ACTIONS(757),
    [anon_sym_command] = ACTIONS(757),
    [anon_sym_commandline] = ACTIONS(757),
    [anon_sym_complete] = ACTIONS(757),
    [anon_sym_contains] = ACTIONS(757),
    [anon_sym_count] = ACTIONS(757),
    [anon_sym_disown] = ACTIONS(757),
    [anon_sym_echo] = ACTIONS(757),
    [anon_sym_emit] = ACTIONS(757),
    [anon_sym_eval] = ACTIONS(757),
    [anon_sym_exec] = ACTIONS(757),
    [anon_sym_exit] = ACTIONS(757),
    [anon_sym_false] = ACTIONS(757),
    [anon_sym_fg] = ACTIONS(757),
    [anon_sym_functions] = ACTIONS(757),
    [anon_sym_history] = ACTIONS(757),
    [anon_sym_jobs] = ACTIONS(757),
    [anon_sym_math] = ACTIONS(757),
    [anon_sym_path] = ACTIONS(757),
    [anon_sym_printf] = ACTIONS(757),
    [anon_sym_pwd] = ACTIONS(757),
    [anon_sym_random] = ACTIONS(757),
    [anon_sym_read] = ACTIONS(757),
    [anon_sym_realpath] = ACTIONS(757),
    [anon_sym_set] = ACTIONS(757),
    [anon_sym_set_color] = ACTIONS(757),
    [anon_sym_source] = ACTIONS(757),
    [anon_sym_status] = ACTIONS(757),
    [anon_sym_string] = ACTIONS(757),
    [anon_sym_test] = ACTIONS(757),
    [anon_sym_time] = ACTIONS(757),
    [anon_sym_true] = ACTIONS(757),
    [anon_sym_type] = ACTIONS(757),
    [anon_sym_ulimit] = ACTIONS(757),
    [anon_sym_wait] = ACTIONS(757),
    [sym_stream_redirect] = ACTIONS(757),
    [sym_direction] = ACTIONS(757),
    [sym_home_dir_expansion] = ACTIONS(757),
    [sym_glob] = ACTIONS(757),
    [sym_word] = ACTIONS(757),
    [sym__concat] = ACTIONS(759),
    [sym__concat_oct] = ACTIONS(759),
  },
  [124] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_CR] = ACTIONS(761),
    [anon_sym_CR_LF] = ACTIONS(761),
    [anon_sym_DOLLAR] = ACTIONS(761),
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_RPAREN] = ACTIONS(761),
    [sym_integer] = ACTIONS(761),
    [sym_float] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [anon_sym_SQUOTE] = ACTIONS(761),
    [sym_escape_sequence] = ACTIONS(761),
    [anon_sym_DOT] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym__] = ACTIONS(761),
    [anon_sym_argparse] = ACTIONS(761),
    [anon_sym_bg] = ACTIONS(761),
    [anon_sym_bind] = ACTIONS(761),
    [anon_sym_block] = ACTIONS(761),
    [anon_sym_breakpoint] = ACTIONS(761),
    [anon_sym_builtin] = ACTIONS(761),
    [anon_sym_cd] = ACTIONS(761),
    [anon_sym_command] = ACTIONS(761),
    [anon_sym_commandline] = ACTIONS(761),
    [anon_sym_complete] = ACTIONS(761),
    [anon_sym_contains] = ACTIONS(761),
    [anon_sym_count] = ACTIONS(761),
    [anon_sym_disown] = ACTIONS(761),
    [anon_sym_echo] = ACTIONS(761),
    [anon_sym_emit] = ACTIONS(761),
    [anon_sym_eval] = ACTIONS(761),
    [anon_sym_exec] = ACTIONS(761),
    [anon_sym_exit] = ACTIONS(761),
    [anon_sym_false] = ACTIONS(761),
    [anon_sym_fg] = ACTIONS(761),
    [anon_sym_functions] = ACTIONS(761),
    [anon_sym_history] = ACTIONS(761),
    [anon_sym_jobs] = ACTIONS(761),
    [anon_sym_math] = ACTIONS(761),
    [anon_sym_path] = ACTIONS(761),
    [anon_sym_printf] = ACTIONS(761),
    [anon_sym_pwd] = ACTIONS(761),
    [anon_sym_random] = ACTIONS(761),
    [anon_sym_read] = ACTIONS(761),
    [anon_sym_realpath] = ACTIONS(761),
    [anon_sym_set] = ACTIONS(761),
    [anon_sym_set_color] = ACTIONS(761),
    [anon_sym_source] = ACTIONS(761),
    [anon_sym_status] = ACTIONS(761),
    [anon_sym_string] = ACTIONS(761),
    [anon_sym_test] = ACTIONS(761),
    [anon_sym_time] = ACTIONS(761),
    [anon_sym_true] = ACTIONS(761),
    [anon_sym_type] = ACTIONS(761),
    [anon_sym_ulimit] = ACTIONS(761),
    [anon_sym_wait] = ACTIONS(761),
    [sym_stream_redirect] = ACTIONS(761),
    [sym_direction] = ACTIONS(761),
    [sym_home_dir_expansion] = ACTIONS(761),
    [sym_glob] = ACTIONS(761),
    [sym_word] = ACTIONS(761),
    [sym__concat] = ACTIONS(763),
    [sym__concat_oct] = ACTIONS(763),
  },
  [125] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(765),
    [anon_sym_AMP_AMP] = ACTIONS(765),
    [anon_sym_PIPE] = ACTIONS(765),
    [anon_sym_SEMI] = ACTIONS(765),
    [anon_sym_AMP] = ACTIONS(765),
    [anon_sym_LF] = ACTIONS(765),
    [anon_sym_CR] = ACTIONS(765),
    [anon_sym_CR_LF] = ACTIONS(765),
    [anon_sym_DOLLAR] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(765),
    [anon_sym_RPAREN] = ACTIONS(765),
    [sym_integer] = ACTIONS(765),
    [sym_float] = ACTIONS(765),
    [anon_sym_RBRACK] = ACTIONS(765),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_LBRACE] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(765),
    [anon_sym_SQUOTE] = ACTIONS(765),
    [sym_escape_sequence] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(765),
    [anon_sym_COLON] = ACTIONS(765),
    [anon_sym__] = ACTIONS(765),
    [anon_sym_argparse] = ACTIONS(765),
    [anon_sym_bg] = ACTIONS(765),
    [anon_sym_bind] = ACTIONS(765),
    [anon_sym_block] = ACTIONS(765),
    [anon_sym_breakpoint] = ACTIONS(765),
    [anon_sym_builtin] = ACTIONS(765),
    [anon_sym_cd] = ACTIONS(765),
    [anon_sym_command] = ACTIONS(765),
    [anon_sym_commandline] = ACTIONS(765),
    [anon_sym_complete] = ACTIONS(765),
    [anon_sym_contains] = ACTIONS(765),
    [anon_sym_count] = ACTIONS(765),
    [anon_sym_disown] = ACTIONS(765),
    [anon_sym_echo] = ACTIONS(765),
    [anon_sym_emit] = ACTIONS(765),
    [anon_sym_eval] = ACTIONS(765),
    [anon_sym_exec] = ACTIONS(765),
    [anon_sym_exit] = ACTIONS(765),
    [anon_sym_false] = ACTIONS(765),
    [anon_sym_fg] = ACTIONS(765),
    [anon_sym_functions] = ACTIONS(765),
    [anon_sym_history] = ACTIONS(765),
    [anon_sym_jobs] = ACTIONS(765),
    [anon_sym_math] = ACTIONS(765),
    [anon_sym_path] = ACTIONS(765),
    [anon_sym_printf] = ACTIONS(765),
    [anon_sym_pwd] = ACTIONS(765),
    [anon_sym_random] = ACTIONS(765),
    [anon_sym_read] = ACTIONS(765),
    [anon_sym_realpath] = ACTIONS(765),
    [anon_sym_set] = ACTIONS(765),
    [anon_sym_set_color] = ACTIONS(765),
    [anon_sym_source] = ACTIONS(765),
    [anon_sym_status] = ACTIONS(765),
    [anon_sym_string] = ACTIONS(765),
    [anon_sym_test] = ACTIONS(765),
    [anon_sym_time] = ACTIONS(765),
    [anon_sym_true] = ACTIONS(765),
    [anon_sym_type] = ACTIONS(765),
    [anon_sym_ulimit] = ACTIONS(765),
    [anon_sym_wait] = ACTIONS(765),
    [sym_stream_redirect] = ACTIONS(765),
    [sym_direction] = ACTIONS(765),
    [sym_home_dir_expansion] = ACTIONS(765),
    [sym_glob] = ACTIONS(765),
    [sym_word] = ACTIONS(765),
    [sym__concat] = ACTIONS(767),
    [sym__concat_oct] = ACTIONS(767),
  },
  [126] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(769),
    [anon_sym_AMP_AMP] = ACTIONS(769),
    [anon_sym_PIPE] = ACTIONS(769),
    [anon_sym_SEMI] = ACTIONS(769),
    [anon_sym_AMP] = ACTIONS(769),
    [anon_sym_LF] = ACTIONS(769),
    [anon_sym_CR] = ACTIONS(769),
    [anon_sym_CR_LF] = ACTIONS(769),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [anon_sym_LPAREN] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(769),
    [sym_integer] = ACTIONS(769),
    [sym_float] = ACTIONS(769),
    [anon_sym_RBRACK] = ACTIONS(769),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [anon_sym_SQUOTE] = ACTIONS(769),
    [sym_escape_sequence] = ACTIONS(769),
    [anon_sym_DOT] = ACTIONS(769),
    [anon_sym_COLON] = ACTIONS(769),
    [anon_sym__] = ACTIONS(769),
    [anon_sym_argparse] = ACTIONS(769),
    [anon_sym_bg] = ACTIONS(769),
    [anon_sym_bind] = ACTIONS(769),
    [anon_sym_block] = ACTIONS(769),
    [anon_sym_breakpoint] = ACTIONS(769),
    [anon_sym_builtin] = ACTIONS(769),
    [anon_sym_cd] = ACTIONS(769),
    [anon_sym_command] = ACTIONS(769),
    [anon_sym_commandline] = ACTIONS(769),
    [anon_sym_complete] = ACTIONS(769),
    [anon_sym_contains] = ACTIONS(769),
    [anon_sym_count] = ACTIONS(769),
    [anon_sym_disown] = ACTIONS(769),
    [anon_sym_echo] = ACTIONS(769),
    [anon_sym_emit] = ACTIONS(769),
    [anon_sym_eval] = ACTIONS(769),
    [anon_sym_exec] = ACTIONS(769),
    [anon_sym_exit] = ACTIONS(769),
    [anon_sym_false] = ACTIONS(769),
    [anon_sym_fg] = ACTIONS(769),
    [anon_sym_functions] = ACTIONS(769),
    [anon_sym_history] = ACTIONS(769),
    [anon_sym_jobs] = ACTIONS(769),
    [anon_sym_math] = ACTIONS(769),
    [anon_sym_path] = ACTIONS(769),
    [anon_sym_printf] = ACTIONS(769),
    [anon_sym_pwd] = ACTIONS(769),
    [anon_sym_random] = ACTIONS(769),
    [anon_sym_read] = ACTIONS(769),
    [anon_sym_realpath] = ACTIONS(769),
    [anon_sym_set] = ACTIONS(769),
    [anon_sym_set_color] = ACTIONS(769),
    [anon_sym_source] = ACTIONS(769),
    [anon_sym_status] = ACTIONS(769),
    [anon_sym_string] = ACTIONS(769),
    [anon_sym_test] = ACTIONS(769),
    [anon_sym_time] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(769),
    [anon_sym_type] = ACTIONS(769),
    [anon_sym_ulimit] = ACTIONS(769),
    [anon_sym_wait] = ACTIONS(769),
    [sym_stream_redirect] = ACTIONS(769),
    [sym_direction] = ACTIONS(769),
    [sym_home_dir_expansion] = ACTIONS(769),
    [sym_glob] = ACTIONS(769),
    [sym_word] = ACTIONS(769),
    [sym__concat] = ACTIONS(771),
    [sym__concat_oct] = ACTIONS(771),
  },
  [127] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(773),
    [anon_sym_AMP_AMP] = ACTIONS(773),
    [anon_sym_PIPE] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_AMP] = ACTIONS(773),
    [anon_sym_LF] = ACTIONS(773),
    [anon_sym_CR] = ACTIONS(773),
    [anon_sym_CR_LF] = ACTIONS(773),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_RPAREN] = ACTIONS(773),
    [sym_integer] = ACTIONS(773),
    [sym_float] = ACTIONS(773),
    [anon_sym_RBRACK] = ACTIONS(773),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_LBRACE] = ACTIONS(773),
    [anon_sym_DQUOTE] = ACTIONS(773),
    [anon_sym_SQUOTE] = ACTIONS(773),
    [sym_escape_sequence] = ACTIONS(773),
    [anon_sym_DOT] = ACTIONS(773),
    [anon_sym_COLON] = ACTIONS(773),
    [anon_sym__] = ACTIONS(773),
    [anon_sym_argparse] = ACTIONS(773),
    [anon_sym_bg] = ACTIONS(773),
    [anon_sym_bind] = ACTIONS(773),
    [anon_sym_block] = ACTIONS(773),
    [anon_sym_breakpoint] = ACTIONS(773),
    [anon_sym_builtin] = ACTIONS(773),
    [anon_sym_cd] = ACTIONS(773),
    [anon_sym_command] = ACTIONS(773),
    [anon_sym_commandline] = ACTIONS(773),
    [anon_sym_complete] = ACTIONS(773),
    [anon_sym_contains] = ACTIONS(773),
    [anon_sym_count] = ACTIONS(773),
    [anon_sym_disown] = ACTIONS(773),
    [anon_sym_echo] = ACTIONS(773),
    [anon_sym_emit] = ACTIONS(773),
    [anon_sym_eval] = ACTIONS(773),
    [anon_sym_exec] = ACTIONS(773),
    [anon_sym_exit] = ACTIONS(773),
    [anon_sym_false] = ACTIONS(773),
    [anon_sym_fg] = ACTIONS(773),
    [anon_sym_functions] = ACTIONS(773),
    [anon_sym_history] = ACTIONS(773),
    [anon_sym_jobs] = ACTIONS(773),
    [anon_sym_math] = ACTIONS(773),
    [anon_sym_path] = ACTIONS(773),
    [anon_sym_printf] = ACTIONS(773),
    [anon_sym_pwd] = ACTIONS(773),
    [anon_sym_random] = ACTIONS(773),
    [anon_sym_read] = ACTIONS(773),
    [anon_sym_realpath] = ACTIONS(773),
    [anon_sym_set] = ACTIONS(773),
    [anon_sym_set_color] = ACTIONS(773),
    [anon_sym_source] = ACTIONS(773),
    [anon_sym_status] = ACTIONS(773),
    [anon_sym_string] = ACTIONS(773),
    [anon_sym_test] = ACTIONS(773),
    [anon_sym_time] = ACTIONS(773),
    [anon_sym_true] = ACTIONS(773),
    [anon_sym_type] = ACTIONS(773),
    [anon_sym_ulimit] = ACTIONS(773),
    [anon_sym_wait] = ACTIONS(773),
    [sym_stream_redirect] = ACTIONS(773),
    [sym_direction] = ACTIONS(773),
    [sym_home_dir_expansion] = ACTIONS(773),
    [sym_glob] = ACTIONS(773),
    [sym_word] = ACTIONS(773),
  },
  [128] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(775),
    [anon_sym_AMP_AMP] = ACTIONS(775),
    [anon_sym_PIPE] = ACTIONS(775),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_AMP] = ACTIONS(775),
    [anon_sym_LF] = ACTIONS(775),
    [anon_sym_CR] = ACTIONS(775),
    [anon_sym_CR_LF] = ACTIONS(775),
    [anon_sym_DOLLAR] = ACTIONS(775),
    [anon_sym_LPAREN] = ACTIONS(775),
    [anon_sym_RPAREN] = ACTIONS(775),
    [sym_integer] = ACTIONS(775),
    [sym_float] = ACTIONS(775),
    [anon_sym_RBRACK] = ACTIONS(775),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(775),
    [anon_sym_DQUOTE] = ACTIONS(775),
    [anon_sym_SQUOTE] = ACTIONS(775),
    [sym_escape_sequence] = ACTIONS(775),
    [anon_sym_DOT] = ACTIONS(775),
    [anon_sym_COLON] = ACTIONS(775),
    [anon_sym__] = ACTIONS(775),
    [anon_sym_argparse] = ACTIONS(775),
    [anon_sym_bg] = ACTIONS(775),
    [anon_sym_bind] = ACTIONS(775),
    [anon_sym_block] = ACTIONS(775),
    [anon_sym_breakpoint] = ACTIONS(775),
    [anon_sym_builtin] = ACTIONS(775),
    [anon_sym_cd] = ACTIONS(775),
    [anon_sym_command] = ACTIONS(775),
    [anon_sym_commandline] = ACTIONS(775),
    [anon_sym_complete] = ACTIONS(775),
    [anon_sym_contains] = ACTIONS(775),
    [anon_sym_count] = ACTIONS(775),
    [anon_sym_disown] = ACTIONS(775),
    [anon_sym_echo] = ACTIONS(775),
    [anon_sym_emit] = ACTIONS(775),
    [anon_sym_eval] = ACTIONS(775),
    [anon_sym_exec] = ACTIONS(775),
    [anon_sym_exit] = ACTIONS(775),
    [anon_sym_false] = ACTIONS(775),
    [anon_sym_fg] = ACTIONS(775),
    [anon_sym_functions] = ACTIONS(775),
    [anon_sym_history] = ACTIONS(775),
    [anon_sym_jobs] = ACTIONS(775),
    [anon_sym_math] = ACTIONS(775),
    [anon_sym_path] = ACTIONS(775),
    [anon_sym_printf] = ACTIONS(775),
    [anon_sym_pwd] = ACTIONS(775),
    [anon_sym_random] = ACTIONS(775),
    [anon_sym_read] = ACTIONS(775),
    [anon_sym_realpath] = ACTIONS(775),
    [anon_sym_set] = ACTIONS(775),
    [anon_sym_set_color] = ACTIONS(775),
    [anon_sym_source] = ACTIONS(775),
    [anon_sym_status] = ACTIONS(775),
    [anon_sym_string] = ACTIONS(775),
    [anon_sym_test] = ACTIONS(775),
    [anon_sym_time] = ACTIONS(775),
    [anon_sym_true] = ACTIONS(775),
    [anon_sym_type] = ACTIONS(775),
    [anon_sym_ulimit] = ACTIONS(775),
    [anon_sym_wait] = ACTIONS(775),
    [sym_stream_redirect] = ACTIONS(775),
    [sym_direction] = ACTIONS(775),
    [sym_home_dir_expansion] = ACTIONS(775),
    [sym_glob] = ACTIONS(775),
    [sym_word] = ACTIONS(775),
  },
  [129] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(777),
    [anon_sym_AMP_AMP] = ACTIONS(777),
    [anon_sym_PIPE] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_AMP] = ACTIONS(777),
    [anon_sym_LF] = ACTIONS(777),
    [anon_sym_CR] = ACTIONS(777),
    [anon_sym_CR_LF] = ACTIONS(777),
    [anon_sym_DOLLAR] = ACTIONS(777),
    [anon_sym_LPAREN] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
    [sym_integer] = ACTIONS(777),
    [sym_float] = ACTIONS(777),
    [anon_sym_RBRACK] = ACTIONS(777),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [anon_sym_SQUOTE] = ACTIONS(777),
    [sym_escape_sequence] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_argparse] = ACTIONS(777),
    [anon_sym_bg] = ACTIONS(777),
    [anon_sym_bind] = ACTIONS(777),
    [anon_sym_block] = ACTIONS(777),
    [anon_sym_breakpoint] = ACTIONS(777),
    [anon_sym_builtin] = ACTIONS(777),
    [anon_sym_cd] = ACTIONS(777),
    [anon_sym_command] = ACTIONS(777),
    [anon_sym_commandline] = ACTIONS(777),
    [anon_sym_complete] = ACTIONS(777),
    [anon_sym_contains] = ACTIONS(777),
    [anon_sym_count] = ACTIONS(777),
    [anon_sym_disown] = ACTIONS(777),
    [anon_sym_echo] = ACTIONS(777),
    [anon_sym_emit] = ACTIONS(777),
    [anon_sym_eval] = ACTIONS(777),
    [anon_sym_exec] = ACTIONS(777),
    [anon_sym_exit] = ACTIONS(777),
    [anon_sym_false] = ACTIONS(777),
    [anon_sym_fg] = ACTIONS(777),
    [anon_sym_functions] = ACTIONS(777),
    [anon_sym_history] = ACTIONS(777),
    [anon_sym_jobs] = ACTIONS(777),
    [anon_sym_math] = ACTIONS(777),
    [anon_sym_path] = ACTIONS(777),
    [anon_sym_printf] = ACTIONS(777),
    [anon_sym_pwd] = ACTIONS(777),
    [anon_sym_random] = ACTIONS(777),
    [anon_sym_read] = ACTIONS(777),
    [anon_sym_realpath] = ACTIONS(777),
    [anon_sym_set] = ACTIONS(777),
    [anon_sym_set_color] = ACTIONS(777),
    [anon_sym_source] = ACTIONS(777),
    [anon_sym_status] = ACTIONS(777),
    [anon_sym_string] = ACTIONS(777),
    [anon_sym_test] = ACTIONS(777),
    [anon_sym_time] = ACTIONS(777),
    [anon_sym_true] = ACTIONS(777),
    [anon_sym_type] = ACTIONS(777),
    [anon_sym_ulimit] = ACTIONS(777),
    [anon_sym_wait] = ACTIONS(777),
    [sym_stream_redirect] = ACTIONS(777),
    [sym_direction] = ACTIONS(777),
    [sym_home_dir_expansion] = ACTIONS(777),
    [sym_glob] = ACTIONS(777),
    [sym_word] = ACTIONS(777),
  },
  [130] = {
    [sym_command_substitution] = STATE(397),
    [sym_variable_expansion] = STATE(397),
    [sym_brace_expansion] = STATE(397),
    [sym_double_quote_string] = STATE(397),
    [sym_single_quote_string] = STATE(397),
    [sym_builtin] = STATE(397),
    [sym__special_character] = STATE(418),
    [sym_concatenation] = STATE(516),
    [sym__expression] = STATE(516),
    [aux_sym_test_command_repeat1] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(782),
    [sym_integer] = ACTIONS(785),
    [sym_float] = ACTIONS(785),
    [anon_sym_RBRACK] = ACTIONS(788),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(788),
    [anon_sym_LBRACE] = ACTIONS(791),
    [anon_sym_DQUOTE] = ACTIONS(794),
    [anon_sym_SQUOTE] = ACTIONS(797),
    [sym_escape_sequence] = ACTIONS(800),
    [anon_sym_DOT] = ACTIONS(803),
    [anon_sym_COLON] = ACTIONS(803),
    [anon_sym__] = ACTIONS(803),
    [anon_sym_argparse] = ACTIONS(803),
    [anon_sym_bg] = ACTIONS(803),
    [anon_sym_bind] = ACTIONS(803),
    [anon_sym_block] = ACTIONS(803),
    [anon_sym_breakpoint] = ACTIONS(803),
    [anon_sym_builtin] = ACTIONS(803),
    [anon_sym_cd] = ACTIONS(803),
    [anon_sym_command] = ACTIONS(803),
    [anon_sym_commandline] = ACTIONS(803),
    [anon_sym_complete] = ACTIONS(803),
    [anon_sym_contains] = ACTIONS(803),
    [anon_sym_count] = ACTIONS(803),
    [anon_sym_disown] = ACTIONS(803),
    [anon_sym_echo] = ACTIONS(803),
    [anon_sym_emit] = ACTIONS(803),
    [anon_sym_eval] = ACTIONS(803),
    [anon_sym_exec] = ACTIONS(803),
    [anon_sym_exit] = ACTIONS(803),
    [anon_sym_false] = ACTIONS(803),
    [anon_sym_fg] = ACTIONS(803),
    [anon_sym_functions] = ACTIONS(803),
    [anon_sym_history] = ACTIONS(803),
    [anon_sym_jobs] = ACTIONS(803),
    [anon_sym_math] = ACTIONS(803),
    [anon_sym_path] = ACTIONS(803),
    [anon_sym_printf] = ACTIONS(803),
    [anon_sym_pwd] = ACTIONS(803),
    [anon_sym_random] = ACTIONS(803),
    [anon_sym_read] = ACTIONS(803),
    [anon_sym_realpath] = ACTIONS(803),
    [anon_sym_set] = ACTIONS(803),
    [anon_sym_set_color] = ACTIONS(803),
    [anon_sym_source] = ACTIONS(803),
    [anon_sym_status] = ACTIONS(803),
    [anon_sym_string] = ACTIONS(803),
    [anon_sym_test] = ACTIONS(803),
    [anon_sym_time] = ACTIONS(803),
    [anon_sym_true] = ACTIONS(803),
    [anon_sym_type] = ACTIONS(803),
    [anon_sym_ulimit] = ACTIONS(803),
    [anon_sym_wait] = ACTIONS(803),
    [sym_home_dir_expansion] = ACTIONS(785),
    [sym_glob] = ACTIONS(785),
    [sym_word] = ACTIONS(785),
  },
  [131] = {
    [sym_command_substitution] = STATE(397),
    [sym_variable_expansion] = STATE(397),
    [sym_brace_expansion] = STATE(397),
    [sym_double_quote_string] = STATE(397),
    [sym_single_quote_string] = STATE(397),
    [sym_builtin] = STATE(397),
    [sym__special_character] = STATE(418),
    [sym_concatenation] = STATE(516),
    [sym__expression] = STATE(516),
    [aux_sym_test_command_repeat1] = STATE(132),
    [anon_sym_DOLLAR] = ACTIONS(806),
    [anon_sym_LPAREN] = ACTIONS(808),
    [sym_integer] = ACTIONS(810),
    [sym_float] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(812),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(814),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(818),
    [anon_sym_SQUOTE] = ACTIONS(820),
    [sym_escape_sequence] = ACTIONS(822),
    [anon_sym_DOT] = ACTIONS(824),
    [anon_sym_COLON] = ACTIONS(824),
    [anon_sym__] = ACTIONS(824),
    [anon_sym_argparse] = ACTIONS(824),
    [anon_sym_bg] = ACTIONS(824),
    [anon_sym_bind] = ACTIONS(824),
    [anon_sym_block] = ACTIONS(824),
    [anon_sym_breakpoint] = ACTIONS(824),
    [anon_sym_builtin] = ACTIONS(824),
    [anon_sym_cd] = ACTIONS(824),
    [anon_sym_command] = ACTIONS(824),
    [anon_sym_commandline] = ACTIONS(824),
    [anon_sym_complete] = ACTIONS(824),
    [anon_sym_contains] = ACTIONS(824),
    [anon_sym_count] = ACTIONS(824),
    [anon_sym_disown] = ACTIONS(824),
    [anon_sym_echo] = ACTIONS(824),
    [anon_sym_emit] = ACTIONS(824),
    [anon_sym_eval] = ACTIONS(824),
    [anon_sym_exec] = ACTIONS(824),
    [anon_sym_exit] = ACTIONS(824),
    [anon_sym_false] = ACTIONS(824),
    [anon_sym_fg] = ACTIONS(824),
    [anon_sym_functions] = ACTIONS(824),
    [anon_sym_history] = ACTIONS(824),
    [anon_sym_jobs] = ACTIONS(824),
    [anon_sym_math] = ACTIONS(824),
    [anon_sym_path] = ACTIONS(824),
    [anon_sym_printf] = ACTIONS(824),
    [anon_sym_pwd] = ACTIONS(824),
    [anon_sym_random] = ACTIONS(824),
    [anon_sym_read] = ACTIONS(824),
    [anon_sym_realpath] = ACTIONS(824),
    [anon_sym_set] = ACTIONS(824),
    [anon_sym_set_color] = ACTIONS(824),
    [anon_sym_source] = ACTIONS(824),
    [anon_sym_status] = ACTIONS(824),
    [anon_sym_string] = ACTIONS(824),
    [anon_sym_test] = ACTIONS(824),
    [anon_sym_time] = ACTIONS(824),
    [anon_sym_true] = ACTIONS(824),
    [anon_sym_type] = ACTIONS(824),
    [anon_sym_ulimit] = ACTIONS(824),
    [anon_sym_wait] = ACTIONS(824),
    [sym_home_dir_expansion] = ACTIONS(810),
    [sym_glob] = ACTIONS(810),
    [sym_word] = ACTIONS(810),
  },
  [132] = {
    [sym_command_substitution] = STATE(397),
    [sym_variable_expansion] = STATE(397),
    [sym_brace_expansion] = STATE(397),
    [sym_double_quote_string] = STATE(397),
    [sym_single_quote_string] = STATE(397),
    [sym_builtin] = STATE(397),
    [sym__special_character] = STATE(418),
    [sym_concatenation] = STATE(516),
    [sym__expression] = STATE(516),
    [aux_sym_test_command_repeat1] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(806),
    [anon_sym_LPAREN] = ACTIONS(808),
    [sym_integer] = ACTIONS(810),
    [sym_float] = ACTIONS(810),
    [anon_sym_RBRACK] = ACTIONS(826),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(814),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(818),
    [anon_sym_SQUOTE] = ACTIONS(820),
    [sym_escape_sequence] = ACTIONS(822),
    [anon_sym_DOT] = ACTIONS(824),
    [anon_sym_COLON] = ACTIONS(824),
    [anon_sym__] = ACTIONS(824),
    [anon_sym_argparse] = ACTIONS(824),
    [anon_sym_bg] = ACTIONS(824),
    [anon_sym_bind] = ACTIONS(824),
    [anon_sym_block] = ACTIONS(824),
    [anon_sym_breakpoint] = ACTIONS(824),
    [anon_sym_builtin] = ACTIONS(824),
    [anon_sym_cd] = ACTIONS(824),
    [anon_sym_command] = ACTIONS(824),
    [anon_sym_commandline] = ACTIONS(824),
    [anon_sym_complete] = ACTIONS(824),
    [anon_sym_contains] = ACTIONS(824),
    [anon_sym_count] = ACTIONS(824),
    [anon_sym_disown] = ACTIONS(824),
    [anon_sym_echo] = ACTIONS(824),
    [anon_sym_emit] = ACTIONS(824),
    [anon_sym_eval] = ACTIONS(824),
    [anon_sym_exec] = ACTIONS(824),
    [anon_sym_exit] = ACTIONS(824),
    [anon_sym_false] = ACTIONS(824),
    [anon_sym_fg] = ACTIONS(824),
    [anon_sym_functions] = ACTIONS(824),
    [anon_sym_history] = ACTIONS(824),
    [anon_sym_jobs] = ACTIONS(824),
    [anon_sym_math] = ACTIONS(824),
    [anon_sym_path] = ACTIONS(824),
    [anon_sym_printf] = ACTIONS(824),
    [anon_sym_pwd] = ACTIONS(824),
    [anon_sym_random] = ACTIONS(824),
    [anon_sym_read] = ACTIONS(824),
    [anon_sym_realpath] = ACTIONS(824),
    [anon_sym_set] = ACTIONS(824),
    [anon_sym_set_color] = ACTIONS(824),
    [anon_sym_source] = ACTIONS(824),
    [anon_sym_status] = ACTIONS(824),
    [anon_sym_string] = ACTIONS(824),
    [anon_sym_test] = ACTIONS(824),
    [anon_sym_time] = ACTIONS(824),
    [anon_sym_true] = ACTIONS(824),
    [anon_sym_type] = ACTIONS(824),
    [anon_sym_ulimit] = ACTIONS(824),
    [anon_sym_wait] = ACTIONS(824),
    [sym_home_dir_expansion] = ACTIONS(810),
    [sym_glob] = ACTIONS(810),
    [sym_word] = ACTIONS(810),
  },
  [133] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(94),
    [sym__expression] = STATE(94),
    [aux_sym_case_clause_repeat1] = STATE(94),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(562),
    [sym_float] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(828),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(562),
    [sym_glob] = ACTIONS(562),
    [sym_word] = ACTIONS(562),
  },
  [134] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(183),
    [sym__expression] = STATE(183),
    [aux_sym_for_statement_repeat1] = STATE(98),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(562),
    [sym_float] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(828),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(562),
    [sym_glob] = ACTIONS(562),
    [sym_word] = ACTIONS(562),
  },
  [135] = {
    [aux_sym_variable_expansion_repeat1] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_LF] = ACTIONS(574),
    [anon_sym_CR] = ACTIONS(574),
    [anon_sym_CR_LF] = ACTIONS(574),
    [anon_sym_DOLLAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [sym_integer] = ACTIONS(574),
    [sym_float] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [sym_escape_sequence] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym__] = ACTIONS(574),
    [anon_sym_argparse] = ACTIONS(574),
    [anon_sym_bg] = ACTIONS(574),
    [anon_sym_bind] = ACTIONS(574),
    [anon_sym_block] = ACTIONS(574),
    [anon_sym_breakpoint] = ACTIONS(574),
    [anon_sym_builtin] = ACTIONS(574),
    [anon_sym_cd] = ACTIONS(574),
    [anon_sym_command] = ACTIONS(574),
    [anon_sym_commandline] = ACTIONS(574),
    [anon_sym_complete] = ACTIONS(574),
    [anon_sym_contains] = ACTIONS(574),
    [anon_sym_count] = ACTIONS(574),
    [anon_sym_disown] = ACTIONS(574),
    [anon_sym_echo] = ACTIONS(574),
    [anon_sym_emit] = ACTIONS(574),
    [anon_sym_eval] = ACTIONS(574),
    [anon_sym_exec] = ACTIONS(574),
    [anon_sym_exit] = ACTIONS(574),
    [anon_sym_false] = ACTIONS(574),
    [anon_sym_fg] = ACTIONS(574),
    [anon_sym_functions] = ACTIONS(574),
    [anon_sym_history] = ACTIONS(574),
    [anon_sym_jobs] = ACTIONS(574),
    [anon_sym_math] = ACTIONS(574),
    [anon_sym_path] = ACTIONS(574),
    [anon_sym_printf] = ACTIONS(574),
    [anon_sym_pwd] = ACTIONS(574),
    [anon_sym_random] = ACTIONS(574),
    [anon_sym_read] = ACTIONS(574),
    [anon_sym_realpath] = ACTIONS(574),
    [anon_sym_set] = ACTIONS(574),
    [anon_sym_set_color] = ACTIONS(574),
    [anon_sym_source] = ACTIONS(574),
    [anon_sym_status] = ACTIONS(574),
    [anon_sym_string] = ACTIONS(574),
    [anon_sym_test] = ACTIONS(574),
    [anon_sym_time] = ACTIONS(574),
    [anon_sym_true] = ACTIONS(574),
    [anon_sym_type] = ACTIONS(574),
    [anon_sym_ulimit] = ACTIONS(574),
    [anon_sym_wait] = ACTIONS(574),
    [sym_home_dir_expansion] = ACTIONS(574),
    [sym_glob] = ACTIONS(574),
    [sym_word] = ACTIONS(574),
    [sym__concat] = ACTIONS(576),
    [sym__concat_oct] = ACTIONS(576),
    [sym__concat_list] = ACTIONS(576),
  },
  [136] = {
    [aux_sym_variable_expansion_repeat1] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_AMP] = ACTIONS(674),
    [anon_sym_LF] = ACTIONS(674),
    [anon_sym_CR] = ACTIONS(674),
    [anon_sym_CR_LF] = ACTIONS(674),
    [anon_sym_DOLLAR] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(674),
    [sym_integer] = ACTIONS(674),
    [sym_float] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [sym_escape_sequence] = ACTIONS(674),
    [anon_sym_DOT] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(674),
    [anon_sym__] = ACTIONS(674),
    [anon_sym_argparse] = ACTIONS(674),
    [anon_sym_bg] = ACTIONS(674),
    [anon_sym_bind] = ACTIONS(674),
    [anon_sym_block] = ACTIONS(674),
    [anon_sym_breakpoint] = ACTIONS(674),
    [anon_sym_builtin] = ACTIONS(674),
    [anon_sym_cd] = ACTIONS(674),
    [anon_sym_command] = ACTIONS(674),
    [anon_sym_commandline] = ACTIONS(674),
    [anon_sym_complete] = ACTIONS(674),
    [anon_sym_contains] = ACTIONS(674),
    [anon_sym_count] = ACTIONS(674),
    [anon_sym_disown] = ACTIONS(674),
    [anon_sym_echo] = ACTIONS(674),
    [anon_sym_emit] = ACTIONS(674),
    [anon_sym_eval] = ACTIONS(674),
    [anon_sym_exec] = ACTIONS(674),
    [anon_sym_exit] = ACTIONS(674),
    [anon_sym_false] = ACTIONS(674),
    [anon_sym_fg] = ACTIONS(674),
    [anon_sym_functions] = ACTIONS(674),
    [anon_sym_history] = ACTIONS(674),
    [anon_sym_jobs] = ACTIONS(674),
    [anon_sym_math] = ACTIONS(674),
    [anon_sym_path] = ACTIONS(674),
    [anon_sym_printf] = ACTIONS(674),
    [anon_sym_pwd] = ACTIONS(674),
    [anon_sym_random] = ACTIONS(674),
    [anon_sym_read] = ACTIONS(674),
    [anon_sym_realpath] = ACTIONS(674),
    [anon_sym_set] = ACTIONS(674),
    [anon_sym_set_color] = ACTIONS(674),
    [anon_sym_source] = ACTIONS(674),
    [anon_sym_status] = ACTIONS(674),
    [anon_sym_string] = ACTIONS(674),
    [anon_sym_test] = ACTIONS(674),
    [anon_sym_time] = ACTIONS(674),
    [anon_sym_true] = ACTIONS(674),
    [anon_sym_type] = ACTIONS(674),
    [anon_sym_ulimit] = ACTIONS(674),
    [anon_sym_wait] = ACTIONS(674),
    [sym_home_dir_expansion] = ACTIONS(674),
    [sym_glob] = ACTIONS(674),
    [sym_word] = ACTIONS(674),
    [sym__concat] = ACTIONS(676),
    [sym__concat_oct] = ACTIONS(676),
    [sym__concat_list] = ACTIONS(830),
  },
  [137] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(396),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(487),
    [sym__brace_expression] = STATE(487),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(497),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [138] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(396),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(444),
    [sym__brace_expression] = STATE(444),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(468),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [139] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(396),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(495),
    [sym__brace_expression] = STATE(495),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(494),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [140] = {
    [sym_command_substitution] = STATE(154),
    [sym_variable_expansion] = STATE(154),
    [sym_brace_expansion] = STATE(154),
    [sym_double_quote_string] = STATE(154),
    [sym_single_quote_string] = STATE(154),
    [sym_builtin] = STATE(154),
    [sym__special_character] = STATE(153),
    [sym_concatenation] = STATE(96),
    [sym__expression] = STATE(96),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(562),
    [sym_float] = ACTIONS(562),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(828),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(562),
    [sym_glob] = ACTIONS(562),
    [sym_word] = ACTIONS(562),
  },
  [141] = {
    [sym_command_substitution] = STATE(107),
    [sym_variable_expansion] = STATE(107),
    [sym_brace_expansion] = STATE(107),
    [sym_double_quote_string] = STATE(107),
    [sym_single_quote_string] = STATE(107),
    [sym_builtin] = STATE(107),
    [sym__special_character] = STATE(111),
    [sym_concatenation] = STATE(128),
    [sym__expression] = STATE(128),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(19),
    [sym_float] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(19),
    [sym_glob] = ACTIONS(19),
    [sym_word] = ACTIONS(19),
  },
  [142] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(396),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(479),
    [sym__brace_expression] = STATE(479),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(482),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [143] = {
    [sym_command_substitution] = STATE(320),
    [sym_variable_expansion] = STATE(320),
    [sym_brace_expansion] = STATE(320),
    [sym_double_quote_string] = STATE(320),
    [sym_single_quote_string] = STATE(320),
    [sym_builtin] = STATE(320),
    [sym__special_character] = STATE(321),
    [sym_concatenation] = STATE(384),
    [sym__expression] = STATE(384),
    [anon_sym_DOLLAR] = ACTIONS(851),
    [anon_sym_LPAREN] = ACTIONS(853),
    [sym_integer] = ACTIONS(855),
    [sym_float] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(859),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [sym_escape_sequence] = ACTIONS(865),
    [anon_sym_DOT] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(867),
    [anon_sym__] = ACTIONS(867),
    [anon_sym_argparse] = ACTIONS(867),
    [anon_sym_bg] = ACTIONS(867),
    [anon_sym_bind] = ACTIONS(867),
    [anon_sym_block] = ACTIONS(867),
    [anon_sym_breakpoint] = ACTIONS(867),
    [anon_sym_builtin] = ACTIONS(867),
    [anon_sym_cd] = ACTIONS(867),
    [anon_sym_command] = ACTIONS(867),
    [anon_sym_commandline] = ACTIONS(867),
    [anon_sym_complete] = ACTIONS(867),
    [anon_sym_contains] = ACTIONS(867),
    [anon_sym_count] = ACTIONS(867),
    [anon_sym_disown] = ACTIONS(867),
    [anon_sym_echo] = ACTIONS(867),
    [anon_sym_emit] = ACTIONS(867),
    [anon_sym_eval] = ACTIONS(867),
    [anon_sym_exec] = ACTIONS(867),
    [anon_sym_exit] = ACTIONS(867),
    [anon_sym_false] = ACTIONS(867),
    [anon_sym_fg] = ACTIONS(867),
    [anon_sym_functions] = ACTIONS(867),
    [anon_sym_history] = ACTIONS(867),
    [anon_sym_jobs] = ACTIONS(867),
    [anon_sym_math] = ACTIONS(867),
    [anon_sym_path] = ACTIONS(867),
    [anon_sym_printf] = ACTIONS(867),
    [anon_sym_pwd] = ACTIONS(867),
    [anon_sym_random] = ACTIONS(867),
    [anon_sym_read] = ACTIONS(867),
    [anon_sym_realpath] = ACTIONS(867),
    [anon_sym_set] = ACTIONS(867),
    [anon_sym_set_color] = ACTIONS(867),
    [anon_sym_source] = ACTIONS(867),
    [anon_sym_status] = ACTIONS(867),
    [anon_sym_string] = ACTIONS(867),
    [anon_sym_test] = ACTIONS(867),
    [anon_sym_time] = ACTIONS(867),
    [anon_sym_true] = ACTIONS(867),
    [anon_sym_type] = ACTIONS(867),
    [anon_sym_ulimit] = ACTIONS(867),
    [anon_sym_wait] = ACTIONS(867),
    [sym_home_dir_expansion] = ACTIONS(855),
    [sym_glob] = ACTIONS(855),
    [sym_word] = ACTIONS(855),
  },
  [144] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(396),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(467),
    [sym__brace_expression] = STATE(467),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(448),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [145] = {
    [aux_sym_variable_expansion_repeat1] = STATE(135),
    [anon_sym_SEMI] = ACTIONS(580),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_LF] = ACTIONS(580),
    [anon_sym_CR] = ACTIONS(580),
    [anon_sym_CR_LF] = ACTIONS(580),
    [anon_sym_DOLLAR] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(580),
    [sym_integer] = ACTIONS(580),
    [sym_float] = ACTIONS(580),
    [anon_sym_RBRACK] = ACTIONS(580),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_LBRACE] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [sym_escape_sequence] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym__] = ACTIONS(580),
    [anon_sym_argparse] = ACTIONS(580),
    [anon_sym_bg] = ACTIONS(580),
    [anon_sym_bind] = ACTIONS(580),
    [anon_sym_block] = ACTIONS(580),
    [anon_sym_breakpoint] = ACTIONS(580),
    [anon_sym_builtin] = ACTIONS(580),
    [anon_sym_cd] = ACTIONS(580),
    [anon_sym_command] = ACTIONS(580),
    [anon_sym_commandline] = ACTIONS(580),
    [anon_sym_complete] = ACTIONS(580),
    [anon_sym_contains] = ACTIONS(580),
    [anon_sym_count] = ACTIONS(580),
    [anon_sym_disown] = ACTIONS(580),
    [anon_sym_echo] = ACTIONS(580),
    [anon_sym_emit] = ACTIONS(580),
    [anon_sym_eval] = ACTIONS(580),
    [anon_sym_exec] = ACTIONS(580),
    [anon_sym_exit] = ACTIONS(580),
    [anon_sym_false] = ACTIONS(580),
    [anon_sym_fg] = ACTIONS(580),
    [anon_sym_functions] = ACTIONS(580),
    [anon_sym_history] = ACTIONS(580),
    [anon_sym_jobs] = ACTIONS(580),
    [anon_sym_math] = ACTIONS(580),
    [anon_sym_path] = ACTIONS(580),
    [anon_sym_printf] = ACTIONS(580),
    [anon_sym_pwd] = ACTIONS(580),
    [anon_sym_random] = ACTIONS(580),
    [anon_sym_read] = ACTIONS(580),
    [anon_sym_realpath] = ACTIONS(580),
    [anon_sym_set] = ACTIONS(580),
    [anon_sym_set_color] = ACTIONS(580),
    [anon_sym_source] = ACTIONS(580),
    [anon_sym_status] = ACTIONS(580),
    [anon_sym_string] = ACTIONS(580),
    [anon_sym_test] = ACTIONS(580),
    [anon_sym_time] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(580),
    [anon_sym_type] = ACTIONS(580),
    [anon_sym_ulimit] = ACTIONS(580),
    [anon_sym_wait] = ACTIONS(580),
    [sym_home_dir_expansion] = ACTIONS(580),
    [sym_glob] = ACTIONS(580),
    [sym_word] = ACTIONS(580),
    [sym__concat] = ACTIONS(582),
    [sym__concat_oct] = ACTIONS(582),
    [sym__concat_list] = ACTIONS(582),
  },
  [146] = {
    [sym_command_substitution] = STATE(193),
    [sym_variable_expansion] = STATE(193),
    [sym_brace_expansion] = STATE(193),
    [sym_double_quote_string] = STATE(193),
    [sym_single_quote_string] = STATE(193),
    [sym_builtin] = STATE(193),
    [sym__special_character] = STATE(217),
    [sym_concatenation] = STATE(295),
    [sym__expression] = STATE(295),
    [anon_sym_DOLLAR] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(540),
    [sym_integer] = ACTIONS(542),
    [sym_float] = ACTIONS(542),
    [anon_sym_RBRACK] = ACTIONS(544),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(544),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_DQUOTE] = ACTIONS(548),
    [anon_sym_SQUOTE] = ACTIONS(550),
    [sym_escape_sequence] = ACTIONS(869),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_COLON] = ACTIONS(552),
    [anon_sym__] = ACTIONS(552),
    [anon_sym_argparse] = ACTIONS(552),
    [anon_sym_bg] = ACTIONS(552),
    [anon_sym_bind] = ACTIONS(552),
    [anon_sym_block] = ACTIONS(552),
    [anon_sym_breakpoint] = ACTIONS(552),
    [anon_sym_builtin] = ACTIONS(552),
    [anon_sym_cd] = ACTIONS(552),
    [anon_sym_command] = ACTIONS(552),
    [anon_sym_commandline] = ACTIONS(552),
    [anon_sym_complete] = ACTIONS(552),
    [anon_sym_contains] = ACTIONS(552),
    [anon_sym_count] = ACTIONS(552),
    [anon_sym_disown] = ACTIONS(552),
    [anon_sym_echo] = ACTIONS(552),
    [anon_sym_emit] = ACTIONS(552),
    [anon_sym_eval] = ACTIONS(552),
    [anon_sym_exec] = ACTIONS(552),
    [anon_sym_exit] = ACTIONS(552),
    [anon_sym_false] = ACTIONS(552),
    [anon_sym_fg] = ACTIONS(552),
    [anon_sym_functions] = ACTIONS(552),
    [anon_sym_history] = ACTIONS(552),
    [anon_sym_jobs] = ACTIONS(552),
    [anon_sym_math] = ACTIONS(552),
    [anon_sym_path] = ACTIONS(552),
    [anon_sym_printf] = ACTIONS(552),
    [anon_sym_pwd] = ACTIONS(552),
    [anon_sym_random] = ACTIONS(552),
    [anon_sym_read] = ACTIONS(552),
    [anon_sym_realpath] = ACTIONS(552),
    [anon_sym_set] = ACTIONS(552),
    [anon_sym_set_color] = ACTIONS(552),
    [anon_sym_source] = ACTIONS(552),
    [anon_sym_status] = ACTIONS(552),
    [anon_sym_string] = ACTIONS(552),
    [anon_sym_test] = ACTIONS(552),
    [anon_sym_time] = ACTIONS(552),
    [anon_sym_true] = ACTIONS(552),
    [anon_sym_type] = ACTIONS(552),
    [anon_sym_ulimit] = ACTIONS(552),
    [anon_sym_wait] = ACTIONS(552),
    [sym_home_dir_expansion] = ACTIONS(542),
    [sym_glob] = ACTIONS(542),
    [sym_word] = ACTIONS(542),
  },
  [147] = {
    [aux_sym_variable_expansion_repeat1] = STATE(136),
    [anon_sym_SEMI] = ACTIONS(574),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_LF] = ACTIONS(574),
    [anon_sym_CR] = ACTIONS(574),
    [anon_sym_CR_LF] = ACTIONS(574),
    [anon_sym_DOLLAR] = ACTIONS(574),
    [anon_sym_LPAREN] = ACTIONS(574),
    [sym_integer] = ACTIONS(574),
    [sym_float] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [sym_escape_sequence] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym__] = ACTIONS(574),
    [anon_sym_argparse] = ACTIONS(574),
    [anon_sym_bg] = ACTIONS(574),
    [anon_sym_bind] = ACTIONS(574),
    [anon_sym_block] = ACTIONS(574),
    [anon_sym_breakpoint] = ACTIONS(574),
    [anon_sym_builtin] = ACTIONS(574),
    [anon_sym_cd] = ACTIONS(574),
    [anon_sym_command] = ACTIONS(574),
    [anon_sym_commandline] = ACTIONS(574),
    [anon_sym_complete] = ACTIONS(574),
    [anon_sym_contains] = ACTIONS(574),
    [anon_sym_count] = ACTIONS(574),
    [anon_sym_disown] = ACTIONS(574),
    [anon_sym_echo] = ACTIONS(574),
    [anon_sym_emit] = ACTIONS(574),
    [anon_sym_eval] = ACTIONS(574),
    [anon_sym_exec] = ACTIONS(574),
    [anon_sym_exit] = ACTIONS(574),
    [anon_sym_false] = ACTIONS(574),
    [anon_sym_fg] = ACTIONS(574),
    [anon_sym_functions] = ACTIONS(574),
    [anon_sym_history] = ACTIONS(574),
    [anon_sym_jobs] = ACTIONS(574),
    [anon_sym_math] = ACTIONS(574),
    [anon_sym_path] = ACTIONS(574),
    [anon_sym_printf] = ACTIONS(574),
    [anon_sym_pwd] = ACTIONS(574),
    [anon_sym_random] = ACTIONS(574),
    [anon_sym_read] = ACTIONS(574),
    [anon_sym_realpath] = ACTIONS(574),
    [anon_sym_set] = ACTIONS(574),
    [anon_sym_set_color] = ACTIONS(574),
    [anon_sym_source] = ACTIONS(574),
    [anon_sym_status] = ACTIONS(574),
    [anon_sym_string] = ACTIONS(574),
    [anon_sym_test] = ACTIONS(574),
    [anon_sym_time] = ACTIONS(574),
    [anon_sym_true] = ACTIONS(574),
    [anon_sym_type] = ACTIONS(574),
    [anon_sym_ulimit] = ACTIONS(574),
    [anon_sym_wait] = ACTIONS(574),
    [sym_home_dir_expansion] = ACTIONS(574),
    [sym_glob] = ACTIONS(574),
    [sym_word] = ACTIONS(574),
    [sym__concat] = ACTIONS(576),
    [sym__concat_oct] = ACTIONS(576),
    [sym__concat_list] = ACTIONS(871),
  },
  [148] = {
    [aux_sym_variable_expansion_repeat1] = STATE(147),
    [anon_sym_SEMI] = ACTIONS(580),
    [anon_sym_AMP] = ACTIONS(580),
    [anon_sym_LF] = ACTIONS(580),
    [anon_sym_CR] = ACTIONS(580),
    [anon_sym_CR_LF] = ACTIONS(580),
    [anon_sym_DOLLAR] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(580),
    [sym_integer] = ACTIONS(580),
    [sym_float] = ACTIONS(580),
    [anon_sym_RBRACK] = ACTIONS(580),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_LBRACE] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [sym_escape_sequence] = ACTIONS(580),
    [anon_sym_DOT] = ACTIONS(580),
    [anon_sym_COLON] = ACTIONS(580),
    [anon_sym__] = ACTIONS(580),
    [anon_sym_argparse] = ACTIONS(580),
    [anon_sym_bg] = ACTIONS(580),
    [anon_sym_bind] = ACTIONS(580),
    [anon_sym_block] = ACTIONS(580),
    [anon_sym_breakpoint] = ACTIONS(580),
    [anon_sym_builtin] = ACTIONS(580),
    [anon_sym_cd] = ACTIONS(580),
    [anon_sym_command] = ACTIONS(580),
    [anon_sym_commandline] = ACTIONS(580),
    [anon_sym_complete] = ACTIONS(580),
    [anon_sym_contains] = ACTIONS(580),
    [anon_sym_count] = ACTIONS(580),
    [anon_sym_disown] = ACTIONS(580),
    [anon_sym_echo] = ACTIONS(580),
    [anon_sym_emit] = ACTIONS(580),
    [anon_sym_eval] = ACTIONS(580),
    [anon_sym_exec] = ACTIONS(580),
    [anon_sym_exit] = ACTIONS(580),
    [anon_sym_false] = ACTIONS(580),
    [anon_sym_fg] = ACTIONS(580),
    [anon_sym_functions] = ACTIONS(580),
    [anon_sym_history] = ACTIONS(580),
    [anon_sym_jobs] = ACTIONS(580),
    [anon_sym_math] = ACTIONS(580),
    [anon_sym_path] = ACTIONS(580),
    [anon_sym_printf] = ACTIONS(580),
    [anon_sym_pwd] = ACTIONS(580),
    [anon_sym_random] = ACTIONS(580),
    [anon_sym_read] = ACTIONS(580),
    [anon_sym_realpath] = ACTIONS(580),
    [anon_sym_set] = ACTIONS(580),
    [anon_sym_set_color] = ACTIONS(580),
    [anon_sym_source] = ACTIONS(580),
    [anon_sym_status] = ACTIONS(580),
    [anon_sym_string] = ACTIONS(580),
    [anon_sym_test] = ACTIONS(580),
    [anon_sym_time] = ACTIONS(580),
    [anon_sym_true] = ACTIONS(580),
    [anon_sym_type] = ACTIONS(580),
    [anon_sym_ulimit] = ACTIONS(580),
    [anon_sym_wait] = ACTIONS(580),
    [sym_home_dir_expansion] = ACTIONS(580),
    [sym_glob] = ACTIONS(580),
    [sym_word] = ACTIONS(580),
    [sym__concat] = ACTIONS(582),
    [sym__concat_oct] = ACTIONS(582),
    [sym__concat_list] = ACTIONS(871),
  },
  [149] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(396),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(478),
    [sym__brace_expression] = STATE(478),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(443),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(841),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [150] = {
    [anon_sym_SEMI] = ACTIONS(674),
    [anon_sym_AMP] = ACTIONS(674),
    [anon_sym_LF] = ACTIONS(674),
    [anon_sym_CR] = ACTIONS(674),
    [anon_sym_CR_LF] = ACTIONS(674),
    [anon_sym_DOLLAR] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(674),
    [sym_integer] = ACTIONS(674),
    [sym_float] = ACTIONS(674),
    [anon_sym_RBRACK] = ACTIONS(674),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(674),
    [anon_sym_LBRACE] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [anon_sym_SQUOTE] = ACTIONS(674),
    [sym_escape_sequence] = ACTIONS(674),
    [anon_sym_DOT] = ACTIONS(674),
    [anon_sym_COLON] = ACTIONS(674),
    [anon_sym__] = ACTIONS(674),
    [anon_sym_argparse] = ACTIONS(674),
    [anon_sym_bg] = ACTIONS(674),
    [anon_sym_bind] = ACTIONS(674),
    [anon_sym_block] = ACTIONS(674),
    [anon_sym_breakpoint] = ACTIONS(674),
    [anon_sym_builtin] = ACTIONS(674),
    [anon_sym_cd] = ACTIONS(674),
    [anon_sym_command] = ACTIONS(674),
    [anon_sym_commandline] = ACTIONS(674),
    [anon_sym_complete] = ACTIONS(674),
    [anon_sym_contains] = ACTIONS(674),
    [anon_sym_count] = ACTIONS(674),
    [anon_sym_disown] = ACTIONS(674),
    [anon_sym_echo] = ACTIONS(674),
    [anon_sym_emit] = ACTIONS(674),
    [anon_sym_eval] = ACTIONS(674),
    [anon_sym_exec] = ACTIONS(674),
    [anon_sym_exit] = ACTIONS(674),
    [anon_sym_false] = ACTIONS(674),
    [anon_sym_fg] = ACTIONS(674),
    [anon_sym_functions] = ACTIONS(674),
    [anon_sym_history] = ACTIONS(674),
    [anon_sym_jobs] = ACTIONS(674),
    [anon_sym_math] = ACTIONS(674),
    [anon_sym_path] = ACTIONS(674),
    [anon_sym_printf] = ACTIONS(674),
    [anon_sym_pwd] = ACTIONS(674),
    [anon_sym_random] = ACTIONS(674),
    [anon_sym_read] = ACTIONS(674),
    [anon_sym_realpath] = ACTIONS(674),
    [anon_sym_set] = ACTIONS(674),
    [anon_sym_set_color] = ACTIONS(674),
    [anon_sym_source] = ACTIONS(674),
    [anon_sym_status] = ACTIONS(674),
    [anon_sym_string] = ACTIONS(674),
    [anon_sym_test] = ACTIONS(674),
    [anon_sym_time] = ACTIONS(674),
    [anon_sym_true] = ACTIONS(674),
    [anon_sym_type] = ACTIONS(674),
    [anon_sym_ulimit] = ACTIONS(674),
    [anon_sym_wait] = ACTIONS(674),
    [sym_home_dir_expansion] = ACTIONS(674),
    [sym_glob] = ACTIONS(674),
    [sym_word] = ACTIONS(674),
    [sym__concat] = ACTIONS(676),
    [sym__concat_oct] = ACTIONS(676),
    [sym__concat_list] = ACTIONS(676),
  },
  [151] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(464),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(511),
    [sym__brace_expression] = STATE(511),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(458),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [152] = {
    [aux_sym_concatenation_repeat1] = STATE(157),
    [anon_sym_SEMI] = ACTIONS(701),
    [anon_sym_AMP] = ACTIONS(701),
    [anon_sym_LF] = ACTIONS(701),
    [anon_sym_CR] = ACTIONS(701),
    [anon_sym_CR_LF] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(701),
    [anon_sym_LPAREN] = ACTIONS(701),
    [sym_integer] = ACTIONS(701),
    [sym_float] = ACTIONS(701),
    [anon_sym_RBRACK] = ACTIONS(701),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [sym_escape_sequence] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(701),
    [anon_sym__] = ACTIONS(701),
    [anon_sym_argparse] = ACTIONS(701),
    [anon_sym_bg] = ACTIONS(701),
    [anon_sym_bind] = ACTIONS(701),
    [anon_sym_block] = ACTIONS(701),
    [anon_sym_breakpoint] = ACTIONS(701),
    [anon_sym_builtin] = ACTIONS(701),
    [anon_sym_cd] = ACTIONS(701),
    [anon_sym_command] = ACTIONS(701),
    [anon_sym_commandline] = ACTIONS(701),
    [anon_sym_complete] = ACTIONS(701),
    [anon_sym_contains] = ACTIONS(701),
    [anon_sym_count] = ACTIONS(701),
    [anon_sym_disown] = ACTIONS(701),
    [anon_sym_echo] = ACTIONS(701),
    [anon_sym_emit] = ACTIONS(701),
    [anon_sym_eval] = ACTIONS(701),
    [anon_sym_exec] = ACTIONS(701),
    [anon_sym_exit] = ACTIONS(701),
    [anon_sym_false] = ACTIONS(701),
    [anon_sym_fg] = ACTIONS(701),
    [anon_sym_functions] = ACTIONS(701),
    [anon_sym_history] = ACTIONS(701),
    [anon_sym_jobs] = ACTIONS(701),
    [anon_sym_math] = ACTIONS(701),
    [anon_sym_path] = ACTIONS(701),
    [anon_sym_printf] = ACTIONS(701),
    [anon_sym_pwd] = ACTIONS(701),
    [anon_sym_random] = ACTIONS(701),
    [anon_sym_read] = ACTIONS(701),
    [anon_sym_realpath] = ACTIONS(701),
    [anon_sym_set] = ACTIONS(701),
    [anon_sym_set_color] = ACTIONS(701),
    [anon_sym_source] = ACTIONS(701),
    [anon_sym_status] = ACTIONS(701),
    [anon_sym_string] = ACTIONS(701),
    [anon_sym_test] = ACTIONS(701),
    [anon_sym_time] = ACTIONS(701),
    [anon_sym_true] = ACTIONS(701),
    [anon_sym_type] = ACTIONS(701),
    [anon_sym_ulimit] = ACTIONS(701),
    [anon_sym_wait] = ACTIONS(701),
    [sym_home_dir_expansion] = ACTIONS(701),
    [sym_glob] = ACTIONS(701),
    [sym_word] = ACTIONS(701),
    [sym__concat] = ACTIONS(875),
    [sym__concat_oct] = ACTIONS(877),
  },
  [153] = {
    [aux_sym_concatenation_repeat1] = STATE(152),
    [anon_sym_SEMI] = ACTIONS(717),
    [anon_sym_AMP] = ACTIONS(717),
    [anon_sym_LF] = ACTIONS(717),
    [anon_sym_CR] = ACTIONS(717),
    [anon_sym_CR_LF] = ACTIONS(717),
    [anon_sym_DOLLAR] = ACTIONS(717),
    [anon_sym_LPAREN] = ACTIONS(717),
    [sym_integer] = ACTIONS(717),
    [sym_float] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_LBRACE] = ACTIONS(717),
    [anon_sym_DQUOTE] = ACTIONS(717),
    [anon_sym_SQUOTE] = ACTIONS(717),
    [sym_escape_sequence] = ACTIONS(717),
    [anon_sym_DOT] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(717),
    [anon_sym__] = ACTIONS(717),
    [anon_sym_argparse] = ACTIONS(717),
    [anon_sym_bg] = ACTIONS(717),
    [anon_sym_bind] = ACTIONS(717),
    [anon_sym_block] = ACTIONS(717),
    [anon_sym_breakpoint] = ACTIONS(717),
    [anon_sym_builtin] = ACTIONS(717),
    [anon_sym_cd] = ACTIONS(717),
    [anon_sym_command] = ACTIONS(717),
    [anon_sym_commandline] = ACTIONS(717),
    [anon_sym_complete] = ACTIONS(717),
    [anon_sym_contains] = ACTIONS(717),
    [anon_sym_count] = ACTIONS(717),
    [anon_sym_disown] = ACTIONS(717),
    [anon_sym_echo] = ACTIONS(717),
    [anon_sym_emit] = ACTIONS(717),
    [anon_sym_eval] = ACTIONS(717),
    [anon_sym_exec] = ACTIONS(717),
    [anon_sym_exit] = ACTIONS(717),
    [anon_sym_false] = ACTIONS(717),
    [anon_sym_fg] = ACTIONS(717),
    [anon_sym_functions] = ACTIONS(717),
    [anon_sym_history] = ACTIONS(717),
    [anon_sym_jobs] = ACTIONS(717),
    [anon_sym_math] = ACTIONS(717),
    [anon_sym_path] = ACTIONS(717),
    [anon_sym_printf] = ACTIONS(717),
    [anon_sym_pwd] = ACTIONS(717),
    [anon_sym_random] = ACTIONS(717),
    [anon_sym_read] = ACTIONS(717),
    [anon_sym_realpath] = ACTIONS(717),
    [anon_sym_set] = ACTIONS(717),
    [anon_sym_set_color] = ACTIONS(717),
    [anon_sym_source] = ACTIONS(717),
    [anon_sym_status] = ACTIONS(717),
    [anon_sym_string] = ACTIONS(717),
    [anon_sym_test] = ACTIONS(717),
    [anon_sym_time] = ACTIONS(717),
    [anon_sym_true] = ACTIONS(717),
    [anon_sym_type] = ACTIONS(717),
    [anon_sym_ulimit] = ACTIONS(717),
    [anon_sym_wait] = ACTIONS(717),
    [sym_home_dir_expansion] = ACTIONS(717),
    [sym_glob] = ACTIONS(717),
    [sym_word] = ACTIONS(717),
    [sym__concat] = ACTIONS(875),
    [sym__concat_oct] = ACTIONS(879),
  },
  [154] = {
    [aux_sym_concatenation_repeat1] = STATE(152),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_AMP] = ACTIONS(695),
    [anon_sym_LF] = ACTIONS(695),
    [anon_sym_CR] = ACTIONS(695),
    [anon_sym_CR_LF] = ACTIONS(695),
    [anon_sym_DOLLAR] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(695),
    [sym_integer] = ACTIONS(695),
    [sym_float] = ACTIONS(695),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [anon_sym_DQUOTE] = ACTIONS(695),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [sym_escape_sequence] = ACTIONS(695),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_COLON] = ACTIONS(695),
    [anon_sym__] = ACTIONS(695),
    [anon_sym_argparse] = ACTIONS(695),
    [anon_sym_bg] = ACTIONS(695),
    [anon_sym_bind] = ACTIONS(695),
    [anon_sym_block] = ACTIONS(695),
    [anon_sym_breakpoint] = ACTIONS(695),
    [anon_sym_builtin] = ACTIONS(695),
    [anon_sym_cd] = ACTIONS(695),
    [anon_sym_command] = ACTIONS(695),
    [anon_sym_commandline] = ACTIONS(695),
    [anon_sym_complete] = ACTIONS(695),
    [anon_sym_contains] = ACTIONS(695),
    [anon_sym_count] = ACTIONS(695),
    [anon_sym_disown] = ACTIONS(695),
    [anon_sym_echo] = ACTIONS(695),
    [anon_sym_emit] = ACTIONS(695),
    [anon_sym_eval] = ACTIONS(695),
    [anon_sym_exec] = ACTIONS(695),
    [anon_sym_exit] = ACTIONS(695),
    [anon_sym_false] = ACTIONS(695),
    [anon_sym_fg] = ACTIONS(695),
    [anon_sym_functions] = ACTIONS(695),
    [anon_sym_history] = ACTIONS(695),
    [anon_sym_jobs] = ACTIONS(695),
    [anon_sym_math] = ACTIONS(695),
    [anon_sym_path] = ACTIONS(695),
    [anon_sym_printf] = ACTIONS(695),
    [anon_sym_pwd] = ACTIONS(695),
    [anon_sym_random] = ACTIONS(695),
    [anon_sym_read] = ACTIONS(695),
    [anon_sym_realpath] = ACTIONS(695),
    [anon_sym_set] = ACTIONS(695),
    [anon_sym_set_color] = ACTIONS(695),
    [anon_sym_source] = ACTIONS(695),
    [anon_sym_status] = ACTIONS(695),
    [anon_sym_string] = ACTIONS(695),
    [anon_sym_test] = ACTIONS(695),
    [anon_sym_time] = ACTIONS(695),
    [anon_sym_true] = ACTIONS(695),
    [anon_sym_type] = ACTIONS(695),
    [anon_sym_ulimit] = ACTIONS(695),
    [anon_sym_wait] = ACTIONS(695),
    [sym_home_dir_expansion] = ACTIONS(695),
    [sym_glob] = ACTIONS(695),
    [sym_word] = ACTIONS(695),
    [sym__concat] = ACTIONS(875),
    [sym__concat_oct] = ACTIONS(879),
  },
  [155] = {
    [anon_sym_SEMI] = ACTIONS(691),
    [anon_sym_AMP] = ACTIONS(691),
    [anon_sym_LF] = ACTIONS(691),
    [anon_sym_CR] = ACTIONS(691),
    [anon_sym_CR_LF] = ACTIONS(691),
    [anon_sym_DOLLAR] = ACTIONS(691),
    [anon_sym_LPAREN] = ACTIONS(691),
    [sym_integer] = ACTIONS(691),
    [sym_float] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(691),
    [anon_sym_SQUOTE] = ACTIONS(691),
    [sym_escape_sequence] = ACTIONS(691),
    [anon_sym_DOT] = ACTIONS(691),
    [anon_sym_COLON] = ACTIONS(691),
    [anon_sym__] = ACTIONS(691),
    [anon_sym_argparse] = ACTIONS(691),
    [anon_sym_bg] = ACTIONS(691),
    [anon_sym_bind] = ACTIONS(691),
    [anon_sym_block] = ACTIONS(691),
    [anon_sym_breakpoint] = ACTIONS(691),
    [anon_sym_builtin] = ACTIONS(691),
    [anon_sym_cd] = ACTIONS(691),
    [anon_sym_command] = ACTIONS(691),
    [anon_sym_commandline] = ACTIONS(691),
    [anon_sym_complete] = ACTIONS(691),
    [anon_sym_contains] = ACTIONS(691),
    [anon_sym_count] = ACTIONS(691),
    [anon_sym_disown] = ACTIONS(691),
    [anon_sym_echo] = ACTIONS(691),
    [anon_sym_emit] = ACTIONS(691),
    [anon_sym_eval] = ACTIONS(691),
    [anon_sym_exec] = ACTIONS(691),
    [anon_sym_exit] = ACTIONS(691),
    [anon_sym_false] = ACTIONS(691),
    [anon_sym_fg] = ACTIONS(691),
    [anon_sym_functions] = ACTIONS(691),
    [anon_sym_history] = ACTIONS(691),
    [anon_sym_jobs] = ACTIONS(691),
    [anon_sym_math] = ACTIONS(691),
    [anon_sym_path] = ACTIONS(691),
    [anon_sym_printf] = ACTIONS(691),
    [anon_sym_pwd] = ACTIONS(691),
    [anon_sym_random] = ACTIONS(691),
    [anon_sym_read] = ACTIONS(691),
    [anon_sym_realpath] = ACTIONS(691),
    [anon_sym_set] = ACTIONS(691),
    [anon_sym_set_color] = ACTIONS(691),
    [anon_sym_source] = ACTIONS(691),
    [anon_sym_status] = ACTIONS(691),
    [anon_sym_string] = ACTIONS(691),
    [anon_sym_test] = ACTIONS(691),
    [anon_sym_time] = ACTIONS(691),
    [anon_sym_true] = ACTIONS(691),
    [anon_sym_type] = ACTIONS(691),
    [anon_sym_ulimit] = ACTIONS(691),
    [anon_sym_wait] = ACTIONS(691),
    [sym_home_dir_expansion] = ACTIONS(691),
    [sym_glob] = ACTIONS(691),
    [sym_word] = ACTIONS(691),
    [sym__concat] = ACTIONS(693),
    [sym__concat_oct] = ACTIONS(693),
    [sym__concat_list] = ACTIONS(693),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(705),
    [anon_sym_AMP] = ACTIONS(705),
    [anon_sym_LF] = ACTIONS(705),
    [anon_sym_CR] = ACTIONS(705),
    [anon_sym_CR_LF] = ACTIONS(705),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(705),
    [sym_integer] = ACTIONS(705),
    [sym_float] = ACTIONS(705),
    [anon_sym_RBRACK] = ACTIONS(705),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(705),
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [anon_sym_SQUOTE] = ACTIONS(705),
    [sym_escape_sequence] = ACTIONS(705),
    [anon_sym_DOT] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(705),
    [anon_sym__] = ACTIONS(705),
    [anon_sym_argparse] = ACTIONS(705),
    [anon_sym_bg] = ACTIONS(705),
    [anon_sym_bind] = ACTIONS(705),
    [anon_sym_block] = ACTIONS(705),
    [anon_sym_breakpoint] = ACTIONS(705),
    [anon_sym_builtin] = ACTIONS(705),
    [anon_sym_cd] = ACTIONS(705),
    [anon_sym_command] = ACTIONS(705),
    [anon_sym_commandline] = ACTIONS(705),
    [anon_sym_complete] = ACTIONS(705),
    [anon_sym_contains] = ACTIONS(705),
    [anon_sym_count] = ACTIONS(705),
    [anon_sym_disown] = ACTIONS(705),
    [anon_sym_echo] = ACTIONS(705),
    [anon_sym_emit] = ACTIONS(705),
    [anon_sym_eval] = ACTIONS(705),
    [anon_sym_exec] = ACTIONS(705),
    [anon_sym_exit] = ACTIONS(705),
    [anon_sym_false] = ACTIONS(705),
    [anon_sym_fg] = ACTIONS(705),
    [anon_sym_functions] = ACTIONS(705),
    [anon_sym_history] = ACTIONS(705),
    [anon_sym_jobs] = ACTIONS(705),
    [anon_sym_math] = ACTIONS(705),
    [anon_sym_path] = ACTIONS(705),
    [anon_sym_printf] = ACTIONS(705),
    [anon_sym_pwd] = ACTIONS(705),
    [anon_sym_random] = ACTIONS(705),
    [anon_sym_read] = ACTIONS(705),
    [anon_sym_realpath] = ACTIONS(705),
    [anon_sym_set] = ACTIONS(705),
    [anon_sym_set_color] = ACTIONS(705),
    [anon_sym_source] = ACTIONS(705),
    [anon_sym_status] = ACTIONS(705),
    [anon_sym_string] = ACTIONS(705),
    [anon_sym_test] = ACTIONS(705),
    [anon_sym_time] = ACTIONS(705),
    [anon_sym_true] = ACTIONS(705),
    [anon_sym_type] = ACTIONS(705),
    [anon_sym_ulimit] = ACTIONS(705),
    [anon_sym_wait] = ACTIONS(705),
    [sym_home_dir_expansion] = ACTIONS(705),
    [sym_glob] = ACTIONS(705),
    [sym_word] = ACTIONS(705),
    [sym__concat] = ACTIONS(707),
    [sym__concat_oct] = ACTIONS(707),
    [sym__concat_list] = ACTIONS(707),
  },
  [157] = {
    [aux_sym_concatenation_repeat1] = STATE(157),
    [anon_sym_SEMI] = ACTIONS(709),
    [anon_sym_AMP] = ACTIONS(709),
    [anon_sym_LF] = ACTIONS(709),
    [anon_sym_CR] = ACTIONS(709),
    [anon_sym_CR_LF] = ACTIONS(709),
    [anon_sym_DOLLAR] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(709),
    [sym_integer] = ACTIONS(709),
    [sym_float] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(709),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_escape_sequence] = ACTIONS(709),
    [anon_sym_DOT] = ACTIONS(709),
    [anon_sym_COLON] = ACTIONS(709),
    [anon_sym__] = ACTIONS(709),
    [anon_sym_argparse] = ACTIONS(709),
    [anon_sym_bg] = ACTIONS(709),
    [anon_sym_bind] = ACTIONS(709),
    [anon_sym_block] = ACTIONS(709),
    [anon_sym_breakpoint] = ACTIONS(709),
    [anon_sym_builtin] = ACTIONS(709),
    [anon_sym_cd] = ACTIONS(709),
    [anon_sym_command] = ACTIONS(709),
    [anon_sym_commandline] = ACTIONS(709),
    [anon_sym_complete] = ACTIONS(709),
    [anon_sym_contains] = ACTIONS(709),
    [anon_sym_count] = ACTIONS(709),
    [anon_sym_disown] = ACTIONS(709),
    [anon_sym_echo] = ACTIONS(709),
    [anon_sym_emit] = ACTIONS(709),
    [anon_sym_eval] = ACTIONS(709),
    [anon_sym_exec] = ACTIONS(709),
    [anon_sym_exit] = ACTIONS(709),
    [anon_sym_false] = ACTIONS(709),
    [anon_sym_fg] = ACTIONS(709),
    [anon_sym_functions] = ACTIONS(709),
    [anon_sym_history] = ACTIONS(709),
    [anon_sym_jobs] = ACTIONS(709),
    [anon_sym_math] = ACTIONS(709),
    [anon_sym_path] = ACTIONS(709),
    [anon_sym_printf] = ACTIONS(709),
    [anon_sym_pwd] = ACTIONS(709),
    [anon_sym_random] = ACTIONS(709),
    [anon_sym_read] = ACTIONS(709),
    [anon_sym_realpath] = ACTIONS(709),
    [anon_sym_set] = ACTIONS(709),
    [anon_sym_set_color] = ACTIONS(709),
    [anon_sym_source] = ACTIONS(709),
    [anon_sym_status] = ACTIONS(709),
    [anon_sym_string] = ACTIONS(709),
    [anon_sym_test] = ACTIONS(709),
    [anon_sym_time] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_type] = ACTIONS(709),
    [anon_sym_ulimit] = ACTIONS(709),
    [anon_sym_wait] = ACTIONS(709),
    [sym_home_dir_expansion] = ACTIONS(709),
    [sym_glob] = ACTIONS(709),
    [sym_word] = ACTIONS(709),
    [sym__concat] = ACTIONS(881),
    [sym__concat_oct] = ACTIONS(884),
  },
  [158] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(461),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(504),
    [sym__brace_expression] = STATE(504),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(462),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [159] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(441),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(509),
    [sym__brace_expression] = STATE(509),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(442),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [160] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(488),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(503),
    [sym__brace_expression] = STATE(503),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(489),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [161] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(396),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(512),
    [sym__brace_expression] = STATE(512),
    [sym__base_brace_expression] = STATE(396),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [162] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(485),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(502),
    [sym__brace_expression] = STATE(502),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(496),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(893),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [163] = {
    [sym_command_substitution] = STATE(396),
    [sym_variable_expansion] = STATE(493),
    [sym_brace_expansion] = STATE(396),
    [sym_double_quote_string] = STATE(396),
    [sym_single_quote_string] = STATE(396),
    [sym_builtin] = STATE(396),
    [sym_brace_concatenation] = STATE(506),
    [sym__brace_expression] = STATE(506),
    [sym__base_brace_expression] = STATE(396),
    [aux_sym_brace_expansion_repeat1] = STATE(490),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(835),
    [sym_integer] = ACTIONS(837),
    [sym_float] = ACTIONS(837),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [sym_escape_sequence] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(849),
    [anon_sym_COLON] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_argparse] = ACTIONS(849),
    [anon_sym_bg] = ACTIONS(849),
    [anon_sym_bind] = ACTIONS(849),
    [anon_sym_block] = ACTIONS(849),
    [anon_sym_breakpoint] = ACTIONS(849),
    [anon_sym_builtin] = ACTIONS(849),
    [anon_sym_cd] = ACTIONS(849),
    [anon_sym_command] = ACTIONS(849),
    [anon_sym_commandline] = ACTIONS(849),
    [anon_sym_complete] = ACTIONS(849),
    [anon_sym_contains] = ACTIONS(849),
    [anon_sym_count] = ACTIONS(849),
    [anon_sym_disown] = ACTIONS(849),
    [anon_sym_echo] = ACTIONS(849),
    [anon_sym_emit] = ACTIONS(849),
    [anon_sym_eval] = ACTIONS(849),
    [anon_sym_exec] = ACTIONS(849),
    [anon_sym_exit] = ACTIONS(849),
    [anon_sym_false] = ACTIONS(849),
    [anon_sym_fg] = ACTIONS(849),
    [anon_sym_functions] = ACTIONS(849),
    [anon_sym_history] = ACTIONS(849),
    [anon_sym_jobs] = ACTIONS(849),
    [anon_sym_math] = ACTIONS(849),
    [anon_sym_path] = ACTIONS(849),
    [anon_sym_printf] = ACTIONS(849),
    [anon_sym_pwd] = ACTIONS(849),
    [anon_sym_random] = ACTIONS(849),
    [anon_sym_read] = ACTIONS(849),
    [anon_sym_realpath] = ACTIONS(849),
    [anon_sym_set] = ACTIONS(849),
    [anon_sym_set_color] = ACTIONS(849),
    [anon_sym_source] = ACTIONS(849),
    [anon_sym_status] = ACTIONS(849),
    [anon_sym_string] = ACTIONS(849),
    [anon_sym_test] = ACTIONS(849),
    [anon_sym_time] = ACTIONS(849),
    [anon_sym_true] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_ulimit] = ACTIONS(849),
    [anon_sym_wait] = ACTIONS(849),
    [sym_glob] = ACTIONS(837),
    [sym_brace_word] = ACTIONS(837),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_AMP] = ACTIONS(745),
    [anon_sym_LF] = ACTIONS(745),
    [anon_sym_CR] = ACTIONS(745),
    [anon_sym_CR_LF] = ACTIONS(745),
    [anon_sym_DOLLAR] = ACTIONS(745),
    [anon_sym_LPAREN] = ACTIONS(745),
    [sym_integer] = ACTIONS(745),
    [sym_float] = ACTIONS(745),
    [anon_sym_RBRACK] = ACTIONS(745),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_LBRACE] = ACTIONS(745),
    [anon_sym_DQUOTE] = ACTIONS(745),
    [anon_sym_SQUOTE] = ACTIONS(745),
    [sym_escape_sequence] = ACTIONS(745),
    [anon_sym_DOT] = ACTIONS(745),
    [anon_sym_COLON] = ACTIONS(745),
    [anon_sym__] = ACTIONS(745),
    [anon_sym_argparse] = ACTIONS(745),
    [anon_sym_bg] = ACTIONS(745),
    [anon_sym_bind] = ACTIONS(745),
    [anon_sym_block] = ACTIONS(745),
    [anon_sym_breakpoint] = ACTIONS(745),
    [anon_sym_builtin] = ACTIONS(745),
    [anon_sym_cd] = ACTIONS(745),
    [anon_sym_command] = ACTIONS(745),
    [anon_sym_commandline] = ACTIONS(745),
    [anon_sym_complete] = ACTIONS(745),
    [anon_sym_contains] = ACTIONS(745),
    [anon_sym_count] = ACTIONS(745),
    [anon_sym_disown] = ACTIONS(745),
    [anon_sym_echo] = ACTIONS(745),
    [anon_sym_emit] = ACTIONS(745),
    [anon_sym_eval] = ACTIONS(745),
    [anon_sym_exec] = ACTIONS(745),
    [anon_sym_exit] = ACTIONS(745),
    [anon_sym_false] = ACTIONS(745),
    [anon_sym_fg] = ACTIONS(745),
    [anon_sym_functions] = ACTIONS(745),
    [anon_sym_history] = ACTIONS(745),
    [anon_sym_jobs] = ACTIONS(745),
    [anon_sym_math] = ACTIONS(745),
    [anon_sym_path] = ACTIONS(745),
    [anon_sym_printf] = ACTIONS(745),
    [anon_sym_pwd] = ACTIONS(745),
    [anon_sym_random] = ACTIONS(745),
    [anon_sym_read] = ACTIONS(745),
    [anon_sym_realpath] = ACTIONS(745),
    [anon_sym_set] = ACTIONS(745),
    [anon_sym_set_color] = ACTIONS(745),
    [anon_sym_source] = ACTIONS(745),
    [anon_sym_status] = ACTIONS(745),
    [anon_sym_string] = ACTIONS(745),
    [anon_sym_test] = ACTIONS(745),
    [anon_sym_time] = ACTIONS(745),
    [anon_sym_true] = ACTIONS(745),
    [anon_sym_type] = ACTIONS(745),
    [anon_sym_ulimit] = ACTIONS(745),
    [anon_sym_wait] = ACTIONS(745),
    [sym_home_dir_expansion] = ACTIONS(745),
    [sym_glob] = ACTIONS(745),
    [sym_word] = ACTIONS(745),
    [sym__concat] = ACTIONS(747),
    [sym__concat_oct] = ACTIONS(747),
  },
  [165] = {
    [sym_command_substitution] = STATE(459),
    [sym_variable_expansion] = STATE(459),
    [sym_brace_expansion] = STATE(459),
    [sym_double_quote_string] = STATE(459),
    [sym_single_quote_string] = STATE(459),
    [sym_builtin] = STATE(459),
    [sym__special_character] = STATE(459),
    [anon_sym_DOLLAR] = ACTIONS(806),
    [anon_sym_LPAREN] = ACTIONS(808),
    [sym_integer] = ACTIONS(897),
    [sym_float] = ACTIONS(897),
    [anon_sym_RBRACK] = ACTIONS(814),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(814),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(818),
    [anon_sym_SQUOTE] = ACTIONS(820),
    [sym_escape_sequence] = ACTIONS(899),
    [anon_sym_DOT] = ACTIONS(824),
    [anon_sym_COLON] = ACTIONS(824),
    [anon_sym__] = ACTIONS(824),
    [anon_sym_argparse] = ACTIONS(824),
    [anon_sym_bg] = ACTIONS(824),
    [anon_sym_bind] = ACTIONS(824),
    [anon_sym_block] = ACTIONS(824),
    [anon_sym_breakpoint] = ACTIONS(824),
    [anon_sym_builtin] = ACTIONS(824),
    [anon_sym_cd] = ACTIONS(824),
    [anon_sym_command] = ACTIONS(824),
    [anon_sym_commandline] = ACTIONS(824),
    [anon_sym_complete] = ACTIONS(824),
    [anon_sym_contains] = ACTIONS(824),
    [anon_sym_count] = ACTIONS(824),
    [anon_sym_disown] = ACTIONS(824),
    [anon_sym_echo] = ACTIONS(824),
    [anon_sym_emit] = ACTIONS(824),
    [anon_sym_eval] = ACTIONS(824),
    [anon_sym_exec] = ACTIONS(824),
    [anon_sym_exit] = ACTIONS(824),
    [anon_sym_false] = ACTIONS(824),
    [anon_sym_fg] = ACTIONS(824),
    [anon_sym_functions] = ACTIONS(824),
    [anon_sym_history] = ACTIONS(824),
    [anon_sym_jobs] = ACTIONS(824),
    [anon_sym_math] = ACTIONS(824),
    [anon_sym_path] = ACTIONS(824),
    [anon_sym_printf] = ACTIONS(824),
    [anon_sym_pwd] = ACTIONS(824),
    [anon_sym_random] = ACTIONS(824),
    [anon_sym_read] = ACTIONS(824),
    [anon_sym_realpath] = ACTIONS(824),
    [anon_sym_set] = ACTIONS(824),
    [anon_sym_set_color] = ACTIONS(824),
    [anon_sym_source] = ACTIONS(824),
    [anon_sym_status] = ACTIONS(824),
    [anon_sym_string] = ACTIONS(824),
    [anon_sym_test] = ACTIONS(824),
    [anon_sym_time] = ACTIONS(824),
    [anon_sym_true] = ACTIONS(824),
    [anon_sym_type] = ACTIONS(824),
    [anon_sym_ulimit] = ACTIONS(824),
    [anon_sym_wait] = ACTIONS(824),
    [sym_home_dir_expansion] = ACTIONS(897),
    [sym_glob] = ACTIONS(897),
    [sym_word] = ACTIONS(897),
  },
  [166] = {
    [anon_sym_SEMI] = ACTIONS(733),
    [anon_sym_AMP] = ACTIONS(733),
    [anon_sym_LF] = ACTIONS(733),
    [anon_sym_CR] = ACTIONS(733),
    [anon_sym_CR_LF] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [anon_sym_LPAREN] = ACTIONS(733),
    [sym_integer] = ACTIONS(733),
    [sym_float] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
    [anon_sym_DQUOTE] = ACTIONS(733),
    [anon_sym_SQUOTE] = ACTIONS(733),
    [sym_escape_sequence] = ACTIONS(733),
    [anon_sym_DOT] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(733),
    [anon_sym__] = ACTIONS(733),
    [anon_sym_argparse] = ACTIONS(733),
    [anon_sym_bg] = ACTIONS(733),
    [anon_sym_bind] = ACTIONS(733),
    [anon_sym_block] = ACTIONS(733),
    [anon_sym_breakpoint] = ACTIONS(733),
    [anon_sym_builtin] = ACTIONS(733),
    [anon_sym_cd] = ACTIONS(733),
    [anon_sym_command] = ACTIONS(733),
    [anon_sym_commandline] = ACTIONS(733),
    [anon_sym_complete] = ACTIONS(733),
    [anon_sym_contains] = ACTIONS(733),
    [anon_sym_count] = ACTIONS(733),
    [anon_sym_disown] = ACTIONS(733),
    [anon_sym_echo] = ACTIONS(733),
    [anon_sym_emit] = ACTIONS(733),
    [anon_sym_eval] = ACTIONS(733),
    [anon_sym_exec] = ACTIONS(733),
    [anon_sym_exit] = ACTIONS(733),
    [anon_sym_false] = ACTIONS(733),
    [anon_sym_fg] = ACTIONS(733),
    [anon_sym_functions] = ACTIONS(733),
    [anon_sym_history] = ACTIONS(733),
    [anon_sym_jobs] = ACTIONS(733),
    [anon_sym_math] = ACTIONS(733),
    [anon_sym_path] = ACTIONS(733),
    [anon_sym_printf] = ACTIONS(733),
    [anon_sym_pwd] = ACTIONS(733),
    [anon_sym_random] = ACTIONS(733),
    [anon_sym_read] = ACTIONS(733),
    [anon_sym_realpath] = ACTIONS(733),
    [anon_sym_set] = ACTIONS(733),
    [anon_sym_set_color] = ACTIONS(733),
    [anon_sym_source] = ACTIONS(733),
    [anon_sym_status] = ACTIONS(733),
    [anon_sym_string] = ACTIONS(733),
    [anon_sym_test] = ACTIONS(733),
    [anon_sym_time] = ACTIONS(733),
    [anon_sym_true] = ACTIONS(733),
    [anon_sym_type] = ACTIONS(733),
    [anon_sym_ulimit] = ACTIONS(733),
    [anon_sym_wait] = ACTIONS(733),
    [sym_home_dir_expansion] = ACTIONS(733),
    [sym_glob] = ACTIONS(733),
    [sym_word] = ACTIONS(733),
    [sym__concat] = ACTIONS(735),
    [sym__concat_oct] = ACTIONS(735),
  },
  [167] = {
    [anon_sym_SEMI] = ACTIONS(725),
    [anon_sym_AMP] = ACTIONS(725),
    [anon_sym_LF] = ACTIONS(725),
    [anon_sym_CR] = ACTIONS(725),
    [anon_sym_CR_LF] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [anon_sym_LPAREN] = ACTIONS(725),
    [sym_integer] = ACTIONS(725),
    [sym_float] = ACTIONS(725),
    [anon_sym_RBRACK] = ACTIONS(725),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_LBRACE] = ACTIONS(725),
    [anon_sym_DQUOTE] = ACTIONS(725),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [sym_escape_sequence] = ACTIONS(725),
    [anon_sym_DOT] = ACTIONS(725),
    [anon_sym_COLON] = ACTIONS(725),
    [anon_sym__] = ACTIONS(725),
    [anon_sym_argparse] = ACTIONS(725),
    [anon_sym_bg] = ACTIONS(725),
    [anon_sym_bind] = ACTIONS(725),
    [anon_sym_block] = ACTIONS(725),
    [anon_sym_breakpoint] = ACTIONS(725),
    [anon_sym_builtin] = ACTIONS(725),
    [anon_sym_cd] = ACTIONS(725),
    [anon_sym_command] = ACTIONS(725),
    [anon_sym_commandline] = ACTIONS(725),
    [anon_sym_complete] = ACTIONS(725),
    [anon_sym_contains] = ACTIONS(725),
    [anon_sym_count] = ACTIONS(725),
    [anon_sym_disown] = ACTIONS(725),
    [anon_sym_echo] = ACTIONS(725),
    [anon_sym_emit] = ACTIONS(725),
    [anon_sym_eval] = ACTIONS(725),
    [anon_sym_exec] = ACTIONS(725),
    [anon_sym_exit] = ACTIONS(725),
    [anon_sym_false] = ACTIONS(725),
    [anon_sym_fg] = ACTIONS(725),
    [anon_sym_functions] = ACTIONS(725),
    [anon_sym_history] = ACTIONS(725),
    [anon_sym_jobs] = ACTIONS(725),
    [anon_sym_math] = ACTIONS(725),
    [anon_sym_path] = ACTIONS(725),
    [anon_sym_printf] = ACTIONS(725),
    [anon_sym_pwd] = ACTIONS(725),
    [anon_sym_random] = ACTIONS(725),
    [anon_sym_read] = ACTIONS(725),
    [anon_sym_realpath] = ACTIONS(725),
    [anon_sym_set] = ACTIONS(725),
    [anon_sym_set_color] = ACTIONS(725),
    [anon_sym_source] = ACTIONS(725),
    [anon_sym_status] = ACTIONS(725),
    [anon_sym_string] = ACTIONS(725),
    [anon_sym_test] = ACTIONS(725),
    [anon_sym_time] = ACTIONS(725),
    [anon_sym_true] = ACTIONS(725),
    [anon_sym_type] = ACTIONS(725),
    [anon_sym_ulimit] = ACTIONS(725),
    [anon_sym_wait] = ACTIONS(725),
    [sym_home_dir_expansion] = ACTIONS(725),
    [sym_glob] = ACTIONS(725),
    [sym_word] = ACTIONS(725),
    [sym__concat] = ACTIONS(727),
    [sym__concat_oct] = ACTIONS(727),
  },
  [168] = {
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_AMP] = ACTIONS(729),
    [anon_sym_LF] = ACTIONS(729),
    [anon_sym_CR] = ACTIONS(729),
    [anon_sym_CR_LF] = ACTIONS(729),
    [anon_sym_DOLLAR] = ACTIONS(729),
    [anon_sym_LPAREN] = ACTIONS(729),
    [sym_integer] = ACTIONS(729),
    [sym_float] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_LBRACE] = ACTIONS(729),
    [anon_sym_DQUOTE] = ACTIONS(729),
    [anon_sym_SQUOTE] = ACTIONS(729),
    [sym_escape_sequence] = ACTIONS(729),
    [anon_sym_DOT] = ACTIONS(729),
    [anon_sym_COLON] = ACTIONS(729),
    [anon_sym__] = ACTIONS(729),
    [anon_sym_argparse] = ACTIONS(729),
    [anon_sym_bg] = ACTIONS(729),
    [anon_sym_bind] = ACTIONS(729),
    [anon_sym_block] = ACTIONS(729),
    [anon_sym_breakpoint] = ACTIONS(729),
    [anon_sym_builtin] = ACTIONS(729),
    [anon_sym_cd] = ACTIONS(729),
    [anon_sym_command] = ACTIONS(729),
    [anon_sym_commandline] = ACTIONS(729),
    [anon_sym_complete] = ACTIONS(729),
    [anon_sym_contains] = ACTIONS(729),
    [anon_sym_count] = ACTIONS(729),
    [anon_sym_disown] = ACTIONS(729),
    [anon_sym_echo] = ACTIONS(729),
    [anon_sym_emit] = ACTIONS(729),
    [anon_sym_eval] = ACTIONS(729),
    [anon_sym_exec] = ACTIONS(729),
    [anon_sym_exit] = ACTIONS(729),
    [anon_sym_false] = ACTIONS(729),
    [anon_sym_fg] = ACTIONS(729),
    [anon_sym_functions] = ACTIONS(729),
    [anon_sym_history] = ACTIONS(729),
    [anon_sym_jobs] = ACTIONS(729),
    [anon_sym_math] = ACTIONS(729),
    [anon_sym_path] = ACTIONS(729),
    [anon_sym_printf] = ACTIONS(729),
    [anon_sym_pwd] = ACTIONS(729),
    [anon_sym_random] = ACTIONS(729),
    [anon_sym_read] = ACTIONS(729),
    [anon_sym_realpath] = ACTIONS(729),
    [anon_sym_set] = ACTIONS(729),
    [anon_sym_set_color] = ACTIONS(729),
    [anon_sym_source] = ACTIONS(729),
    [anon_sym_status] = ACTIONS(729),
    [anon_sym_string] = ACTIONS(729),
    [anon_sym_test] = ACTIONS(729),
    [anon_sym_time] = ACTIONS(729),
    [anon_sym_true] = ACTIONS(729),
    [anon_sym_type] = ACTIONS(729),
    [anon_sym_ulimit] = ACTIONS(729),
    [anon_sym_wait] = ACTIONS(729),
    [sym_home_dir_expansion] = ACTIONS(729),
    [sym_glob] = ACTIONS(729),
    [sym_word] = ACTIONS(729),
    [sym__concat] = ACTIONS(731),
    [sym__concat_oct] = ACTIONS(731),
  },
  [169] = {
    [anon_sym_SEMI] = ACTIONS(709),
    [anon_sym_AMP] = ACTIONS(709),
    [anon_sym_LF] = ACTIONS(709),
    [anon_sym_CR] = ACTIONS(709),
    [anon_sym_CR_LF] = ACTIONS(709),
    [anon_sym_DOLLAR] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(709),
    [sym_integer] = ACTIONS(709),
    [sym_float] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(709),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [anon_sym_SQUOTE] = ACTIONS(709),
    [sym_escape_sequence] = ACTIONS(709),
    [anon_sym_DOT] = ACTIONS(709),
    [anon_sym_COLON] = ACTIONS(709),
    [anon_sym__] = ACTIONS(709),
    [anon_sym_argparse] = ACTIONS(709),
    [anon_sym_bg] = ACTIONS(709),
    [anon_sym_bind] = ACTIONS(709),
    [anon_sym_block] = ACTIONS(709),
    [anon_sym_breakpoint] = ACTIONS(709),
    [anon_sym_builtin] = ACTIONS(709),
    [anon_sym_cd] = ACTIONS(709),
    [anon_sym_command] = ACTIONS(709),
    [anon_sym_commandline] = ACTIONS(709),
    [anon_sym_complete] = ACTIONS(709),
    [anon_sym_contains] = ACTIONS(709),
    [anon_sym_count] = ACTIONS(709),
    [anon_sym_disown] = ACTIONS(709),
    [anon_sym_echo] = ACTIONS(709),
    [anon_sym_emit] = ACTIONS(709),
    [anon_sym_eval] = ACTIONS(709),
    [anon_sym_exec] = ACTIONS(709),
    [anon_sym_exit] = ACTIONS(709),
    [anon_sym_false] = ACTIONS(709),
    [anon_sym_fg] = ACTIONS(709),
    [anon_sym_functions] = ACTIONS(709),
    [anon_sym_history] = ACTIONS(709),
    [anon_sym_jobs] = ACTIONS(709),
    [anon_sym_math] = ACTIONS(709),
    [anon_sym_path] = ACTIONS(709),
    [anon_sym_printf] = ACTIONS(709),
    [anon_sym_pwd] = ACTIONS(709),
    [anon_sym_random] = ACTIONS(709),
    [anon_sym_read] = ACTIONS(709),
    [anon_sym_realpath] = ACTIONS(709),
    [anon_sym_set] = ACTIONS(709),
    [anon_sym_set_color] = ACTIONS(709),
    [anon_sym_source] = ACTIONS(709),
    [anon_sym_status] = ACTIONS(709),
    [anon_sym_string] = ACTIONS(709),
    [anon_sym_test] = ACTIONS(709),
    [anon_sym_time] = ACTIONS(709),
    [anon_sym_true] = ACTIONS(709),
    [anon_sym_type] = ACTIONS(709),
    [anon_sym_ulimit] = ACTIONS(709),
    [anon_sym_wait] = ACTIONS(709),
    [sym_home_dir_expansion] = ACTIONS(709),
    [sym_glob] = ACTIONS(709),
    [sym_word] = ACTIONS(709),
    [sym__concat] = ACTIONS(723),
    [sym__concat_oct] = ACTIONS(723),
  },
  [170] = {
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_CR] = ACTIONS(761),
    [anon_sym_CR_LF] = ACTIONS(761),
    [anon_sym_DOLLAR] = ACTIONS(761),
    [anon_sym_LPAREN] = ACTIONS(761),
    [sym_integer] = ACTIONS(761),
    [sym_float] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [anon_sym_SQUOTE] = ACTIONS(761),
    [sym_escape_sequence] = ACTIONS(761),
    [anon_sym_DOT] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym__] = ACTIONS(761),
    [anon_sym_argparse] = ACTIONS(761),
    [anon_sym_bg] = ACTIONS(761),
    [anon_sym_bind] = ACTIONS(761),
    [anon_sym_block] = ACTIONS(761),
    [anon_sym_breakpoint] = ACTIONS(761),
    [anon_sym_builtin] = ACTIONS(761),
    [anon_sym_cd] = ACTIONS(761),
    [anon_sym_command] = ACTIONS(761),
    [anon_sym_commandline] = ACTIONS(761),
    [anon_sym_complete] = ACTIONS(761),
    [anon_sym_contains] = ACTIONS(761),
    [anon_sym_count] = ACTIONS(761),
    [anon_sym_disown] = ACTIONS(761),
    [anon_sym_echo] = ACTIONS(761),
    [anon_sym_emit] = ACTIONS(761),
    [anon_sym_eval] = ACTIONS(761),
    [anon_sym_exec] = ACTIONS(761),
    [anon_sym_exit] = ACTIONS(761),
    [anon_sym_false] = ACTIONS(761),
    [anon_sym_fg] = ACTIONS(761),
    [anon_sym_functions] = ACTIONS(761),
    [anon_sym_history] = ACTIONS(761),
    [anon_sym_jobs] = ACTIONS(761),
    [anon_sym_math] = ACTIONS(761),
    [anon_sym_path] = ACTIONS(761),
    [anon_sym_printf] = ACTIONS(761),
    [anon_sym_pwd] = ACTIONS(761),
    [anon_sym_random] = ACTIONS(761),
    [anon_sym_read] = ACTIONS(761),
    [anon_sym_realpath] = ACTIONS(761),
    [anon_sym_set] = ACTIONS(761),
    [anon_sym_set_color] = ACTIONS(761),
    [anon_sym_source] = ACTIONS(761),
    [anon_sym_status] = ACTIONS(761),
    [anon_sym_string] = ACTIONS(761),
    [anon_sym_test] = ACTIONS(761),
    [anon_sym_time] = ACTIONS(761),
    [anon_sym_true] = ACTIONS(761),
    [anon_sym_type] = ACTIONS(761),
    [anon_sym_ulimit] = ACTIONS(761),
    [anon_sym_wait] = ACTIONS(761),
    [sym_home_dir_expansion] = ACTIONS(761),
    [sym_glob] = ACTIONS(761),
    [sym_word] = ACTIONS(761),
    [sym__concat] = ACTIONS(763),
    [sym__concat_oct] = ACTIONS(763),
  },
  [171] = {
    [sym_command_substitution] = STATE(226),
    [sym_variable_expansion] = STATE(226),
    [sym_brace_expansion] = STATE(226),
    [sym_double_quote_string] = STATE(226),
    [sym_single_quote_string] = STATE(226),
    [sym_builtin] = STATE(226),
    [sym__special_character] = STATE(226),
    [anon_sym_DOLLAR] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(540),
    [sym_integer] = ACTIONS(901),
    [sym_float] = ACTIONS(901),
    [anon_sym_RBRACK] = ACTIONS(544),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(544),
    [anon_sym_LBRACE] = ACTIONS(546),
    [anon_sym_DQUOTE] = ACTIONS(548),
    [anon_sym_SQUOTE] = ACTIONS(550),
    [sym_escape_sequence] = ACTIONS(903),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_COLON] = ACTIONS(552),
    [anon_sym__] = ACTIONS(552),
    [anon_sym_argparse] = ACTIONS(552),
    [anon_sym_bg] = ACTIONS(552),
    [anon_sym_bind] = ACTIONS(552),
    [anon_sym_block] = ACTIONS(552),
    [anon_sym_breakpoint] = ACTIONS(552),
    [anon_sym_builtin] = ACTIONS(552),
    [anon_sym_cd] = ACTIONS(552),
    [anon_sym_command] = ACTIONS(552),
    [anon_sym_commandline] = ACTIONS(552),
    [anon_sym_complete] = ACTIONS(552),
    [anon_sym_contains] = ACTIONS(552),
    [anon_sym_count] = ACTIONS(552),
    [anon_sym_disown] = ACTIONS(552),
    [anon_sym_echo] = ACTIONS(552),
    [anon_sym_emit] = ACTIONS(552),
    [anon_sym_eval] = ACTIONS(552),
    [anon_sym_exec] = ACTIONS(552),
    [anon_sym_exit] = ACTIONS(552),
    [anon_sym_false] = ACTIONS(552),
    [anon_sym_fg] = ACTIONS(552),
    [anon_sym_functions] = ACTIONS(552),
    [anon_sym_history] = ACTIONS(552),
    [anon_sym_jobs] = ACTIONS(552),
    [anon_sym_math] = ACTIONS(552),
    [anon_sym_path] = ACTIONS(552),
    [anon_sym_printf] = ACTIONS(552),
    [anon_sym_pwd] = ACTIONS(552),
    [anon_sym_random] = ACTIONS(552),
    [anon_sym_read] = ACTIONS(552),
    [anon_sym_realpath] = ACTIONS(552),
    [anon_sym_set] = ACTIONS(552),
    [anon_sym_set_color] = ACTIONS(552),
    [anon_sym_source] = ACTIONS(552),
    [anon_sym_status] = ACTIONS(552),
    [anon_sym_string] = ACTIONS(552),
    [anon_sym_test] = ACTIONS(552),
    [anon_sym_time] = ACTIONS(552),
    [anon_sym_true] = ACTIONS(552),
    [anon_sym_type] = ACTIONS(552),
    [anon_sym_ulimit] = ACTIONS(552),
    [anon_sym_wait] = ACTIONS(552),
    [sym_home_dir_expansion] = ACTIONS(901),
    [sym_glob] = ACTIONS(901),
    [sym_word] = ACTIONS(901),
  },
  [172] = {
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_CR] = ACTIONS(719),
    [anon_sym_CR_LF] = ACTIONS(719),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [anon_sym_LPAREN] = ACTIONS(719),
    [sym_integer] = ACTIONS(719),
    [sym_float] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_LBRACE] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [anon_sym_SQUOTE] = ACTIONS(719),
    [sym_escape_sequence] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_COLON] = ACTIONS(719),
    [anon_sym__] = ACTIONS(719),
    [anon_sym_argparse] = ACTIONS(719),
    [anon_sym_bg] = ACTIONS(719),
    [anon_sym_bind] = ACTIONS(719),
    [anon_sym_block] = ACTIONS(719),
    [anon_sym_breakpoint] = ACTIONS(719),
    [anon_sym_builtin] = ACTIONS(719),
    [anon_sym_cd] = ACTIONS(719),
    [anon_sym_command] = ACTIONS(719),
    [anon_sym_commandline] = ACTIONS(719),
    [anon_sym_complete] = ACTIONS(719),
    [anon_sym_contains] = ACTIONS(719),
    [anon_sym_count] = ACTIONS(719),
    [anon_sym_disown] = ACTIONS(719),
    [anon_sym_echo] = ACTIONS(719),
    [anon_sym_emit] = ACTIONS(719),
    [anon_sym_eval] = ACTIONS(719),
    [anon_sym_exec] = ACTIONS(719),
    [anon_sym_exit] = ACTIONS(719),
    [anon_sym_false] = ACTIONS(719),
    [anon_sym_fg] = ACTIONS(719),
    [anon_sym_functions] = ACTIONS(719),
    [anon_sym_history] = ACTIONS(719),
    [anon_sym_jobs] = ACTIONS(719),
    [anon_sym_math] = ACTIONS(719),
    [anon_sym_path] = ACTIONS(719),
    [anon_sym_printf] = ACTIONS(719),
    [anon_sym_pwd] = ACTIONS(719),
    [anon_sym_random] = ACTIONS(719),
    [anon_sym_read] = ACTIONS(719),
    [anon_sym_realpath] = ACTIONS(719),
    [anon_sym_set] = ACTIONS(719),
    [anon_sym_set_color] = ACTIONS(719),
    [anon_sym_source] = ACTIONS(719),
    [anon_sym_status] = ACTIONS(719),
    [anon_sym_string] = ACTIONS(719),
    [anon_sym_test] = ACTIONS(719),
    [anon_sym_time] = ACTIONS(719),
    [anon_sym_true] = ACTIONS(719),
    [anon_sym_type] = ACTIONS(719),
    [anon_sym_ulimit] = ACTIONS(719),
    [anon_sym_wait] = ACTIONS(719),
    [sym_home_dir_expansion] = ACTIONS(719),
    [sym_glob] = ACTIONS(719),
    [sym_word] = ACTIONS(719),
    [sym__concat] = ACTIONS(721),
    [sym__concat_oct] = ACTIONS(721),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(749),
    [anon_sym_AMP] = ACTIONS(749),
    [anon_sym_LF] = ACTIONS(749),
    [anon_sym_CR] = ACTIONS(749),
    [anon_sym_CR_LF] = ACTIONS(749),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_LPAREN] = ACTIONS(749),
    [sym_integer] = ACTIONS(749),
    [sym_float] = ACTIONS(749),
    [anon_sym_RBRACK] = ACTIONS(749),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_LBRACE] = ACTIONS(749),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [anon_sym_SQUOTE] = ACTIONS(749),
    [sym_escape_sequence] = ACTIONS(749),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_COLON] = ACTIONS(749),
    [anon_sym__] = ACTIONS(749),
    [anon_sym_argparse] = ACTIONS(749),
    [anon_sym_bg] = ACTIONS(749),
    [anon_sym_bind] = ACTIONS(749),
    [anon_sym_block] = ACTIONS(749),
    [anon_sym_breakpoint] = ACTIONS(749),
    [anon_sym_builtin] = ACTIONS(749),
    [anon_sym_cd] = ACTIONS(749),
    [anon_sym_command] = ACTIONS(749),
    [anon_sym_commandline] = ACTIONS(749),
    [anon_sym_complete] = ACTIONS(749),
    [anon_sym_contains] = ACTIONS(749),
    [anon_sym_count] = ACTIONS(749),
    [anon_sym_disown] = ACTIONS(749),
    [anon_sym_echo] = ACTIONS(749),
    [anon_sym_emit] = ACTIONS(749),
    [anon_sym_eval] = ACTIONS(749),
    [anon_sym_exec] = ACTIONS(749),
    [anon_sym_exit] = ACTIONS(749),
    [anon_sym_false] = ACTIONS(749),
    [anon_sym_fg] = ACTIONS(749),
    [anon_sym_functions] = ACTIONS(749),
    [anon_sym_history] = ACTIONS(749),
    [anon_sym_jobs] = ACTIONS(749),
    [anon_sym_math] = ACTIONS(749),
    [anon_sym_path] = ACTIONS(749),
    [anon_sym_printf] = ACTIONS(749),
    [anon_sym_pwd] = ACTIONS(749),
    [anon_sym_random] = ACTIONS(749),
    [anon_sym_read] = ACTIONS(749),
    [anon_sym_realpath] = ACTIONS(749),
    [anon_sym_set] = ACTIONS(749),
    [anon_sym_set_color] = ACTIONS(749),
    [anon_sym_source] = ACTIONS(749),
    [anon_sym_status] = ACTIONS(749),
    [anon_sym_string] = ACTIONS(749),
    [anon_sym_test] = ACTIONS(749),
    [anon_sym_time] = ACTIONS(749),
    [anon_sym_true] = ACTIONS(749),
    [anon_sym_type] = ACTIONS(749),
    [anon_sym_ulimit] = ACTIONS(749),
    [anon_sym_wait] = ACTIONS(749),
    [sym_home_dir_expansion] = ACTIONS(749),
    [sym_glob] = ACTIONS(749),
    [sym_word] = ACTIONS(749),
    [sym__concat] = ACTIONS(751),
    [sym__concat_oct] = ACTIONS(751),
  },
  [174] = {
    [anon_sym_SEMI] = ACTIONS(737),
    [anon_sym_AMP] = ACTIONS(737),
    [anon_sym_LF] = ACTIONS(737),
    [anon_sym_CR] = ACTIONS(737),
    [anon_sym_CR_LF] = ACTIONS(737),
    [anon_sym_DOLLAR] = ACTIONS(737),
    [anon_sym_LPAREN] = ACTIONS(737),
    [sym_integer] = ACTIONS(737),
    [sym_float] = ACTIONS(737),
    [anon_sym_RBRACK] = ACTIONS(737),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(737),
    [anon_sym_LBRACE] = ACTIONS(737),
    [anon_sym_DQUOTE] = ACTIONS(737),
    [anon_sym_SQUOTE] = ACTIONS(737),
    [sym_escape_sequence] = ACTIONS(737),
    [anon_sym_DOT] = ACTIONS(737),
    [anon_sym_COLON] = ACTIONS(737),
    [anon_sym__] = ACTIONS(737),
    [anon_sym_argparse] = ACTIONS(737),
    [anon_sym_bg] = ACTIONS(737),
    [anon_sym_bind] = ACTIONS(737),
    [anon_sym_block] = ACTIONS(737),
    [anon_sym_breakpoint] = ACTIONS(737),
    [anon_sym_builtin] = ACTIONS(737),
    [anon_sym_cd] = ACTIONS(737),
    [anon_sym_command] = ACTIONS(737),
    [anon_sym_commandline] = ACTIONS(737),
    [anon_sym_complete] = ACTIONS(737),
    [anon_sym_contains] = ACTIONS(737),
    [anon_sym_count] = ACTIONS(737),
    [anon_sym_disown] = ACTIONS(737),
    [anon_sym_echo] = ACTIONS(737),
    [anon_sym_emit] = ACTIONS(737),
    [anon_sym_eval] = ACTIONS(737),
    [anon_sym_exec] = ACTIONS(737),
    [anon_sym_exit] = ACTIONS(737),
    [anon_sym_false] = ACTIONS(737),
    [anon_sym_fg] = ACTIONS(737),
    [anon_sym_functions] = ACTIONS(737),
    [anon_sym_history] = ACTIONS(737),
    [anon_sym_jobs] = ACTIONS(737),
    [anon_sym_math] = ACTIONS(737),
    [anon_sym_path] = ACTIONS(737),
    [anon_sym_printf] = ACTIONS(737),
    [anon_sym_pwd] = ACTIONS(737),
    [anon_sym_random] = ACTIONS(737),
    [anon_sym_read] = ACTIONS(737),
    [anon_sym_realpath] = ACTIONS(737),
    [anon_sym_set] = ACTIONS(737),
    [anon_sym_set_color] = ACTIONS(737),
    [anon_sym_source] = ACTIONS(737),
    [anon_sym_status] = ACTIONS(737),
    [anon_sym_string] = ACTIONS(737),
    [anon_sym_test] = ACTIONS(737),
    [anon_sym_time] = ACTIONS(737),
    [anon_sym_true] = ACTIONS(737),
    [anon_sym_type] = ACTIONS(737),
    [anon_sym_ulimit] = ACTIONS(737),
    [anon_sym_wait] = ACTIONS(737),
    [sym_home_dir_expansion] = ACTIONS(737),
    [sym_glob] = ACTIONS(737),
    [sym_word] = ACTIONS(737),
    [sym__concat] = ACTIONS(739),
    [sym__concat_oct] = ACTIONS(739),
  },
  [175] = {
    [anon_sym_SEMI] = ACTIONS(769),
    [anon_sym_AMP] = ACTIONS(769),
    [anon_sym_LF] = ACTIONS(769),
    [anon_sym_CR] = ACTIONS(769),
    [anon_sym_CR_LF] = ACTIONS(769),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [anon_sym_LPAREN] = ACTIONS(769),
    [sym_integer] = ACTIONS(769),
    [sym_float] = ACTIONS(769),
    [anon_sym_RBRACK] = ACTIONS(769),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [anon_sym_SQUOTE] = ACTIONS(769),
    [sym_escape_sequence] = ACTIONS(769),
    [anon_sym_DOT] = ACTIONS(769),
    [anon_sym_COLON] = ACTIONS(769),
    [anon_sym__] = ACTIONS(769),
    [anon_sym_argparse] = ACTIONS(769),
    [anon_sym_bg] = ACTIONS(769),
    [anon_sym_bind] = ACTIONS(769),
    [anon_sym_block] = ACTIONS(769),
    [anon_sym_breakpoint] = ACTIONS(769),
    [anon_sym_builtin] = ACTIONS(769),
    [anon_sym_cd] = ACTIONS(769),
    [anon_sym_command] = ACTIONS(769),
    [anon_sym_commandline] = ACTIONS(769),
    [anon_sym_complete] = ACTIONS(769),
    [anon_sym_contains] = ACTIONS(769),
    [anon_sym_count] = ACTIONS(769),
    [anon_sym_disown] = ACTIONS(769),
    [anon_sym_echo] = ACTIONS(769),
    [anon_sym_emit] = ACTIONS(769),
    [anon_sym_eval] = ACTIONS(769),
    [anon_sym_exec] = ACTIONS(769),
    [anon_sym_exit] = ACTIONS(769),
    [anon_sym_false] = ACTIONS(769),
    [anon_sym_fg] = ACTIONS(769),
    [anon_sym_functions] = ACTIONS(769),
    [anon_sym_history] = ACTIONS(769),
    [anon_sym_jobs] = ACTIONS(769),
    [anon_sym_math] = ACTIONS(769),
    [anon_sym_path] = ACTIONS(769),
    [anon_sym_printf] = ACTIONS(769),
    [anon_sym_pwd] = ACTIONS(769),
    [anon_sym_random] = ACTIONS(769),
    [anon_sym_read] = ACTIONS(769),
    [anon_sym_realpath] = ACTIONS(769),
    [anon_sym_set] = ACTIONS(769),
    [anon_sym_set_color] = ACTIONS(769),
    [anon_sym_source] = ACTIONS(769),
    [anon_sym_status] = ACTIONS(769),
    [anon_sym_string] = ACTIONS(769),
    [anon_sym_test] = ACTIONS(769),
    [anon_sym_time] = ACTIONS(769),
    [anon_sym_true] = ACTIONS(769),
    [anon_sym_type] = ACTIONS(769),
    [anon_sym_ulimit] = ACTIONS(769),
    [anon_sym_wait] = ACTIONS(769),
    [sym_home_dir_expansion] = ACTIONS(769),
    [sym_glob] = ACTIONS(769),
    [sym_word] = ACTIONS(769),
    [sym__concat] = ACTIONS(771),
    [sym__concat_oct] = ACTIONS(771),
  },
  [176] = {
    [sym_command_substitution] = STATE(360),
    [sym_variable_expansion] = STATE(360),
    [sym_brace_expansion] = STATE(360),
    [sym_double_quote_string] = STATE(360),
    [sym_single_quote_string] = STATE(360),
    [sym_builtin] = STATE(360),
    [sym__special_character] = STATE(360),
    [anon_sym_DOLLAR] = ACTIONS(851),
    [anon_sym_LPAREN] = ACTIONS(853),
    [sym_integer] = ACTIONS(905),
    [sym_float] = ACTIONS(905),
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(859),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [sym_escape_sequence] = ACTIONS(907),
    [anon_sym_DOT] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(867),
    [anon_sym__] = ACTIONS(867),
    [anon_sym_argparse] = ACTIONS(867),
    [anon_sym_bg] = ACTIONS(867),
    [anon_sym_bind] = ACTIONS(867),
    [anon_sym_block] = ACTIONS(867),
    [anon_sym_breakpoint] = ACTIONS(867),
    [anon_sym_builtin] = ACTIONS(867),
    [anon_sym_cd] = ACTIONS(867),
    [anon_sym_command] = ACTIONS(867),
    [anon_sym_commandline] = ACTIONS(867),
    [anon_sym_complete] = ACTIONS(867),
    [anon_sym_contains] = ACTIONS(867),
    [anon_sym_count] = ACTIONS(867),
    [anon_sym_disown] = ACTIONS(867),
    [anon_sym_echo] = ACTIONS(867),
    [anon_sym_emit] = ACTIONS(867),
    [anon_sym_eval] = ACTIONS(867),
    [anon_sym_exec] = ACTIONS(867),
    [anon_sym_exit] = ACTIONS(867),
    [anon_sym_false] = ACTIONS(867),
    [anon_sym_fg] = ACTIONS(867),
    [anon_sym_functions] = ACTIONS(867),
    [anon_sym_history] = ACTIONS(867),
    [anon_sym_jobs] = ACTIONS(867),
    [anon_sym_math] = ACTIONS(867),
    [anon_sym_path] = ACTIONS(867),
    [anon_sym_printf] = ACTIONS(867),
    [anon_sym_pwd] = ACTIONS(867),
    [anon_sym_random] = ACTIONS(867),
    [anon_sym_read] = ACTIONS(867),
    [anon_sym_realpath] = ACTIONS(867),
    [anon_sym_set] = ACTIONS(867),
    [anon_sym_set_color] = ACTIONS(867),
    [anon_sym_source] = ACTIONS(867),
    [anon_sym_status] = ACTIONS(867),
    [anon_sym_string] = ACTIONS(867),
    [anon_sym_test] = ACTIONS(867),
    [anon_sym_time] = ACTIONS(867),
    [anon_sym_true] = ACTIONS(867),
    [anon_sym_type] = ACTIONS(867),
    [anon_sym_ulimit] = ACTIONS(867),
    [anon_sym_wait] = ACTIONS(867),
    [sym_home_dir_expansion] = ACTIONS(905),
    [sym_glob] = ACTIONS(905),
    [sym_word] = ACTIONS(905),
  },
  [177] = {
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_AMP] = ACTIONS(753),
    [anon_sym_LF] = ACTIONS(753),
    [anon_sym_CR] = ACTIONS(753),
    [anon_sym_CR_LF] = ACTIONS(753),
    [anon_sym_DOLLAR] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(753),
    [sym_integer] = ACTIONS(753),
    [sym_float] = ACTIONS(753),
    [anon_sym_RBRACK] = ACTIONS(753),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(753),
    [anon_sym_LBRACE] = ACTIONS(753),
    [anon_sym_DQUOTE] = ACTIONS(753),
    [anon_sym_SQUOTE] = ACTIONS(753),
    [sym_escape_sequence] = ACTIONS(753),
    [anon_sym_DOT] = ACTIONS(753),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [anon_sym_argparse] = ACTIONS(753),
    [anon_sym_bg] = ACTIONS(753),
    [anon_sym_bind] = ACTIONS(753),
    [anon_sym_block] = ACTIONS(753),
    [anon_sym_breakpoint] = ACTIONS(753),
    [anon_sym_builtin] = ACTIONS(753),
    [anon_sym_cd] = ACTIONS(753),
    [anon_sym_command] = ACTIONS(753),
    [anon_sym_commandline] = ACTIONS(753),
    [anon_sym_complete] = ACTIONS(753),
    [anon_sym_contains] = ACTIONS(753),
    [anon_sym_count] = ACTIONS(753),
    [anon_sym_disown] = ACTIONS(753),
    [anon_sym_echo] = ACTIONS(753),
    [anon_sym_emit] = ACTIONS(753),
    [anon_sym_eval] = ACTIONS(753),
    [anon_sym_exec] = ACTIONS(753),
    [anon_sym_exit] = ACTIONS(753),
    [anon_sym_false] = ACTIONS(753),
    [anon_sym_fg] = ACTIONS(753),
    [anon_sym_functions] = ACTIONS(753),
    [anon_sym_history] = ACTIONS(753),
    [anon_sym_jobs] = ACTIONS(753),
    [anon_sym_math] = ACTIONS(753),
    [anon_sym_path] = ACTIONS(753),
    [anon_sym_printf] = ACTIONS(753),
    [anon_sym_pwd] = ACTIONS(753),
    [anon_sym_random] = ACTIONS(753),
    [anon_sym_read] = ACTIONS(753),
    [anon_sym_realpath] = ACTIONS(753),
    [anon_sym_set] = ACTIONS(753),
    [anon_sym_set_color] = ACTIONS(753),
    [anon_sym_source] = ACTIONS(753),
    [anon_sym_status] = ACTIONS(753),
    [anon_sym_string] = ACTIONS(753),
    [anon_sym_test] = ACTIONS(753),
    [anon_sym_time] = ACTIONS(753),
    [anon_sym_true] = ACTIONS(753),
    [anon_sym_type] = ACTIONS(753),
    [anon_sym_ulimit] = ACTIONS(753),
    [anon_sym_wait] = ACTIONS(753),
    [sym_home_dir_expansion] = ACTIONS(753),
    [sym_glob] = ACTIONS(753),
    [sym_word] = ACTIONS(753),
    [sym__concat] = ACTIONS(755),
    [sym__concat_oct] = ACTIONS(755),
  },
  [178] = {
    [sym_command_substitution] = STATE(169),
    [sym_variable_expansion] = STATE(169),
    [sym_brace_expansion] = STATE(169),
    [sym_double_quote_string] = STATE(169),
    [sym_single_quote_string] = STATE(169),
    [sym_builtin] = STATE(169),
    [sym__special_character] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(560),
    [sym_integer] = ACTIONS(909),
    [sym_float] = ACTIONS(909),
    [anon_sym_RBRACK] = ACTIONS(564),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym_escape_sequence] = ACTIONS(911),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(572),
    [anon_sym__] = ACTIONS(572),
    [anon_sym_argparse] = ACTIONS(572),
    [anon_sym_bg] = ACTIONS(572),
    [anon_sym_bind] = ACTIONS(572),
    [anon_sym_block] = ACTIONS(572),
    [anon_sym_breakpoint] = ACTIONS(572),
    [anon_sym_builtin] = ACTIONS(572),
    [anon_sym_cd] = ACTIONS(572),
    [anon_sym_command] = ACTIONS(572),
    [anon_sym_commandline] = ACTIONS(572),
    [anon_sym_complete] = ACTIONS(572),
    [anon_sym_contains] = ACTIONS(572),
    [anon_sym_count] = ACTIONS(572),
    [anon_sym_disown] = ACTIONS(572),
    [anon_sym_echo] = ACTIONS(572),
    [anon_sym_emit] = ACTIONS(572),
    [anon_sym_eval] = ACTIONS(572),
    [anon_sym_exec] = ACTIONS(572),
    [anon_sym_exit] = ACTIONS(572),
    [anon_sym_false] = ACTIONS(572),
    [anon_sym_fg] = ACTIONS(572),
    [anon_sym_functions] = ACTIONS(572),
    [anon_sym_history] = ACTIONS(572),
    [anon_sym_jobs] = ACTIONS(572),
    [anon_sym_math] = ACTIONS(572),
    [anon_sym_path] = ACTIONS(572),
    [anon_sym_printf] = ACTIONS(572),
    [anon_sym_pwd] = ACTIONS(572),
    [anon_sym_random] = ACTIONS(572),
    [anon_sym_read] = ACTIONS(572),
    [anon_sym_realpath] = ACTIONS(572),
    [anon_sym_set] = ACTIONS(572),
    [anon_sym_set_color] = ACTIONS(572),
    [anon_sym_source] = ACTIONS(572),
    [anon_sym_status] = ACTIONS(572),
    [anon_sym_string] = ACTIONS(572),
    [anon_sym_test] = ACTIONS(572),
    [anon_sym_time] = ACTIONS(572),
    [anon_sym_true] = ACTIONS(572),
    [anon_sym_type] = ACTIONS(572),
    [anon_sym_ulimit] = ACTIONS(572),
    [anon_sym_wait] = ACTIONS(572),
    [sym_home_dir_expansion] = ACTIONS(909),
    [sym_glob] = ACTIONS(909),
    [sym_word] = ACTIONS(909),
  },
  [179] = {
    [sym_command_substitution] = STATE(114),
    [sym_variable_expansion] = STATE(114),
    [sym_brace_expansion] = STATE(114),
    [sym_double_quote_string] = STATE(114),
    [sym_single_quote_string] = STATE(114),
    [sym_builtin] = STATE(114),
    [sym__special_character] = STATE(114),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(913),
    [sym_float] = ACTIONS(913),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(915),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym__] = ACTIONS(47),
    [anon_sym_argparse] = ACTIONS(47),
    [anon_sym_bg] = ACTIONS(47),
    [anon_sym_bind] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_breakpoint] = ACTIONS(47),
    [anon_sym_builtin] = ACTIONS(47),
    [anon_sym_cd] = ACTIONS(47),
    [anon_sym_command] = ACTIONS(47),
    [anon_sym_commandline] = ACTIONS(47),
    [anon_sym_complete] = ACTIONS(47),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_count] = ACTIONS(47),
    [anon_sym_disown] = ACTIONS(47),
    [anon_sym_echo] = ACTIONS(47),
    [anon_sym_emit] = ACTIONS(47),
    [anon_sym_eval] = ACTIONS(47),
    [anon_sym_exec] = ACTIONS(47),
    [anon_sym_exit] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_fg] = ACTIONS(47),
    [anon_sym_functions] = ACTIONS(47),
    [anon_sym_history] = ACTIONS(47),
    [anon_sym_jobs] = ACTIONS(47),
    [anon_sym_math] = ACTIONS(47),
    [anon_sym_path] = ACTIONS(47),
    [anon_sym_printf] = ACTIONS(47),
    [anon_sym_pwd] = ACTIONS(47),
    [anon_sym_random] = ACTIONS(47),
    [anon_sym_read] = ACTIONS(47),
    [anon_sym_realpath] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_set_color] = ACTIONS(47),
    [anon_sym_source] = ACTIONS(47),
    [anon_sym_status] = ACTIONS(47),
    [anon_sym_string] = ACTIONS(47),
    [anon_sym_test] = ACTIONS(47),
    [anon_sym_time] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_type] = ACTIONS(47),
    [anon_sym_ulimit] = ACTIONS(47),
    [anon_sym_wait] = ACTIONS(47),
    [sym_home_dir_expansion] = ACTIONS(913),
    [sym_glob] = ACTIONS(913),
    [sym_word] = ACTIONS(913),
  },
  [180] = {
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_CR] = ACTIONS(757),
    [anon_sym_CR_LF] = ACTIONS(757),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [anon_sym_LPAREN] = ACTIONS(757),
    [sym_integer] = ACTIONS(757),
    [sym_float] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(757),
    [sym_escape_sequence] = ACTIONS(757),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(757),
    [anon_sym__] = ACTIONS(757),
    [anon_sym_argparse] = ACTIONS(757),
    [anon_sym_bg] = ACTIONS(757),
    [anon_sym_bind] = ACTIONS(757),
    [anon_sym_block] = ACTIONS(757),
    [anon_sym_breakpoint] = ACTIONS(757),
    [anon_sym_builtin] = ACTIONS(757),
    [anon_sym_cd] = ACTIONS(757),
    [anon_sym_command] = ACTIONS(757),
    [anon_sym_commandline] = ACTIONS(757),
    [anon_sym_complete] = ACTIONS(757),
    [anon_sym_contains] = ACTIONS(757),
    [anon_sym_count] = ACTIONS(757),
    [anon_sym_disown] = ACTIONS(757),
    [anon_sym_echo] = ACTIONS(757),
    [anon_sym_emit] = ACTIONS(757),
    [anon_sym_eval] = ACTIONS(757),
    [anon_sym_exec] = ACTIONS(757),
    [anon_sym_exit] = ACTIONS(757),
    [anon_sym_false] = ACTIONS(757),
    [anon_sym_fg] = ACTIONS(757),
    [anon_sym_functions] = ACTIONS(757),
    [anon_sym_history] = ACTIONS(757),
    [anon_sym_jobs] = ACTIONS(757),
    [anon_sym_math] = ACTIONS(757),
    [anon_sym_path] = ACTIONS(757),
    [anon_sym_printf] = ACTIONS(757),
    [anon_sym_pwd] = ACTIONS(757),
    [anon_sym_random] = ACTIONS(757),
    [anon_sym_read] = ACTIONS(757),
    [anon_sym_realpath] = ACTIONS(757),
    [anon_sym_set] = ACTIONS(757),
    [anon_sym_set_color] = ACTIONS(757),
    [anon_sym_source] = ACTIONS(757),
    [anon_sym_status] = ACTIONS(757),
    [anon_sym_string] = ACTIONS(757),
    [anon_sym_test] = ACTIONS(757),
    [anon_sym_time] = ACTIONS(757),
    [anon_sym_true] = ACTIONS(757),
    [anon_sym_type] = ACTIONS(757),
    [anon_sym_ulimit] = ACTIONS(757),
    [anon_sym_wait] = ACTIONS(757),
    [sym_home_dir_expansion] = ACTIONS(757),
    [sym_glob] = ACTIONS(757),
    [sym_word] = ACTIONS(757),
    [sym__concat] = ACTIONS(759),
    [sym__concat_oct] = ACTIONS(759),
  },
  [181] = {
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_AMP] = ACTIONS(741),
    [anon_sym_LF] = ACTIONS(741),
    [anon_sym_CR] = ACTIONS(741),
    [anon_sym_CR_LF] = ACTIONS(741),
    [anon_sym_DOLLAR] = ACTIONS(741),
    [anon_sym_LPAREN] = ACTIONS(741),
    [sym_integer] = ACTIONS(741),
    [sym_float] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_LBRACE] = ACTIONS(741),
    [anon_sym_DQUOTE] = ACTIONS(741),
    [anon_sym_SQUOTE] = ACTIONS(741),
    [sym_escape_sequence] = ACTIONS(741),
    [anon_sym_DOT] = ACTIONS(741),
    [anon_sym_COLON] = ACTIONS(741),
    [anon_sym__] = ACTIONS(741),
    [anon_sym_argparse] = ACTIONS(741),
    [anon_sym_bg] = ACTIONS(741),
    [anon_sym_bind] = ACTIONS(741),
    [anon_sym_block] = ACTIONS(741),
    [anon_sym_breakpoint] = ACTIONS(741),
    [anon_sym_builtin] = ACTIONS(741),
    [anon_sym_cd] = ACTIONS(741),
    [anon_sym_command] = ACTIONS(741),
    [anon_sym_commandline] = ACTIONS(741),
    [anon_sym_complete] = ACTIONS(741),
    [anon_sym_contains] = ACTIONS(741),
    [anon_sym_count] = ACTIONS(741),
    [anon_sym_disown] = ACTIONS(741),
    [anon_sym_echo] = ACTIONS(741),
    [anon_sym_emit] = ACTIONS(741),
    [anon_sym_eval] = ACTIONS(741),
    [anon_sym_exec] = ACTIONS(741),
    [anon_sym_exit] = ACTIONS(741),
    [anon_sym_false] = ACTIONS(741),
    [anon_sym_fg] = ACTIONS(741),
    [anon_sym_functions] = ACTIONS(741),
    [anon_sym_history] = ACTIONS(741),
    [anon_sym_jobs] = ACTIONS(741),
    [anon_sym_math] = ACTIONS(741),
    [anon_sym_path] = ACTIONS(741),
    [anon_sym_printf] = ACTIONS(741),
    [anon_sym_pwd] = ACTIONS(741),
    [anon_sym_random] = ACTIONS(741),
    [anon_sym_read] = ACTIONS(741),
    [anon_sym_realpath] = ACTIONS(741),
    [anon_sym_set] = ACTIONS(741),
    [anon_sym_set_color] = ACTIONS(741),
    [anon_sym_source] = ACTIONS(741),
    [anon_sym_status] = ACTIONS(741),
    [anon_sym_string] = ACTIONS(741),
    [anon_sym_test] = ACTIONS(741),
    [anon_sym_time] = ACTIONS(741),
    [anon_sym_true] = ACTIONS(741),
    [anon_sym_type] = ACTIONS(741),
    [anon_sym_ulimit] = ACTIONS(741),
    [anon_sym_wait] = ACTIONS(741),
    [sym_home_dir_expansion] = ACTIONS(741),
    [sym_glob] = ACTIONS(741),
    [sym_word] = ACTIONS(741),
    [sym__concat] = ACTIONS(743),
    [sym__concat_oct] = ACTIONS(743),
  },
  [182] = {
    [anon_sym_SEMI] = ACTIONS(765),
    [anon_sym_AMP] = ACTIONS(765),
    [anon_sym_LF] = ACTIONS(765),
    [anon_sym_CR] = ACTIONS(765),
    [anon_sym_CR_LF] = ACTIONS(765),
    [anon_sym_DOLLAR] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(765),
    [sym_integer] = ACTIONS(765),
    [sym_float] = ACTIONS(765),
    [anon_sym_RBRACK] = ACTIONS(765),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_LBRACE] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(765),
    [anon_sym_SQUOTE] = ACTIONS(765),
    [sym_escape_sequence] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(765),
    [anon_sym_COLON] = ACTIONS(765),
    [anon_sym__] = ACTIONS(765),
    [anon_sym_argparse] = ACTIONS(765),
    [anon_sym_bg] = ACTIONS(765),
    [anon_sym_bind] = ACTIONS(765),
    [anon_sym_block] = ACTIONS(765),
    [anon_sym_breakpoint] = ACTIONS(765),
    [anon_sym_builtin] = ACTIONS(765),
    [anon_sym_cd] = ACTIONS(765),
    [anon_sym_command] = ACTIONS(765),
    [anon_sym_commandline] = ACTIONS(765),
    [anon_sym_complete] = ACTIONS(765),
    [anon_sym_contains] = ACTIONS(765),
    [anon_sym_count] = ACTIONS(765),
    [anon_sym_disown] = ACTIONS(765),
    [anon_sym_echo] = ACTIONS(765),
    [anon_sym_emit] = ACTIONS(765),
    [anon_sym_eval] = ACTIONS(765),
    [anon_sym_exec] = ACTIONS(765),
    [anon_sym_exit] = ACTIONS(765),
    [anon_sym_false] = ACTIONS(765),
    [anon_sym_fg] = ACTIONS(765),
    [anon_sym_functions] = ACTIONS(765),
    [anon_sym_history] = ACTIONS(765),
    [anon_sym_jobs] = ACTIONS(765),
    [anon_sym_math] = ACTIONS(765),
    [anon_sym_path] = ACTIONS(765),
    [anon_sym_printf] = ACTIONS(765),
    [anon_sym_pwd] = ACTIONS(765),
    [anon_sym_random] = ACTIONS(765),
    [anon_sym_read] = ACTIONS(765),
    [anon_sym_realpath] = ACTIONS(765),
    [anon_sym_set] = ACTIONS(765),
    [anon_sym_set_color] = ACTIONS(765),
    [anon_sym_source] = ACTIONS(765),
    [anon_sym_status] = ACTIONS(765),
    [anon_sym_string] = ACTIONS(765),
    [anon_sym_test] = ACTIONS(765),
    [anon_sym_time] = ACTIONS(765),
    [anon_sym_true] = ACTIONS(765),
    [anon_sym_type] = ACTIONS(765),
    [anon_sym_ulimit] = ACTIONS(765),
    [anon_sym_wait] = ACTIONS(765),
    [sym_home_dir_expansion] = ACTIONS(765),
    [sym_glob] = ACTIONS(765),
    [sym_word] = ACTIONS(765),
    [sym__concat] = ACTIONS(767),
    [sym__concat_oct] = ACTIONS(767),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(917), 62,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      sym_float,
      anon_sym_RBRACK,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym__,
      anon_sym_argparse,
      anon_sym_bg,
      anon_sym_bind,
      anon_sym_block,
      anon_sym_breakpoint,
      anon_sym_builtin,
      anon_sym_cd,
      anon_sym_command,
      anon_sym_commandline,
      anon_sym_complete,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_disown,
      anon_sym_echo,
      anon_sym_emit,
      anon_sym_eval,
      anon_sym_exec,
      anon_sym_exit,
      anon_sym_false,
      anon_sym_fg,
      anon_sym_functions,
      anon_sym_history,
      anon_sym_jobs,
      anon_sym_math,
      anon_sym_path,
      anon_sym_printf,
      anon_sym_pwd,
      anon_sym_random,
      anon_sym_read,
      anon_sym_realpath,
      anon_sym_set,
      anon_sym_set_color,
      anon_sym_source,
      anon_sym_status,
      anon_sym_string,
      anon_sym_test,
      anon_sym_time,
      anon_sym_true,
      anon_sym_type,
      anon_sym_ulimit,
      anon_sym_wait,
      sym_home_dir_expansion,
      sym_glob,
      sym_word,
  [68] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(919), 62,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      sym_float,
      anon_sym_RBRACK,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_escape_sequence,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym__,
      anon_sym_argparse,
      anon_sym_bg,
      anon_sym_bind,
      anon_sym_block,
      anon_sym_breakpoint,
      anon_sym_builtin,
      anon_sym_cd,
      anon_sym_command,
      anon_sym_commandline,
      anon_sym_complete,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_disown,
      anon_sym_echo,
      anon_sym_emit,
      anon_sym_eval,
      anon_sym_exec,
      anon_sym_exit,
      anon_sym_false,
      anon_sym_fg,
      anon_sym_functions,
      anon_sym_history,
      anon_sym_jobs,
      anon_sym_math,
      anon_sym_path,
      anon_sym_printf,
      anon_sym_pwd,
      anon_sym_random,
      anon_sym_read,
      anon_sym_realpath,
      anon_sym_set,
      anon_sym_set_color,
      anon_sym_source,
      anon_sym_status,
      anon_sym_string,
      anon_sym_test,
      anon_sym_time,
      anon_sym_true,
      anon_sym_type,
      anon_sym_ulimit,
      anon_sym_wait,
      sym_home_dir_expansion,
      sym_glob,
      sym_word,
  [136] = 9,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_DOLLAR,
    ACTIONS(835), 1,
      anon_sym_LPAREN,
    ACTIONS(839), 1,
      anon_sym_LBRACE,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(847), 1,
      anon_sym_SQUOTE,
    ACTIONS(921), 5,
      sym_integer,
      sym_float,
      sym_escape_sequence,
      sym_glob,
      sym_brace_word,
    STATE(483), 7,
      sym_command_substitution,
      sym_variable_expansion,
      sym_brace_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
      sym_builtin,
      sym__base_brace_expression,
    ACTIONS(849), 44,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym__,
      anon_sym_argparse,
      anon_sym_bg,
      anon_sym_bind,
      anon_sym_block,
      anon_sym_breakpoint,
      anon_sym_builtin,
      anon_sym_cd,
      anon_sym_command,
      anon_sym_commandline,
      anon_sym_complete,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_disown,
      anon_sym_echo,
      anon_sym_emit,
      anon_sym_eval,
      anon_sym_exec,
      anon_sym_exit,
      anon_sym_false,
      anon_sym_fg,
      anon_sym_functions,
      anon_sym_history,
      anon_sym_jobs,
      anon_sym_math,
      anon_sym_path,
      anon_sym_printf,
      anon_sym_pwd,
      anon_sym_random,
      anon_sym_read,
      anon_sym_realpath,
      anon_sym_set,
      anon_sym_set_color,
      anon_sym_source,
      anon_sym_status,
      anon_sym_string,
      anon_sym_test,
      anon_sym_time,
      anon_sym_true,
      anon_sym_type,
      anon_sym_ulimit,
      anon_sym_wait,
  [217] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym_escape_sequence,
    ACTIONS(923), 56,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      sym_float,
      anon_sym_RBRACK,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym__,
      anon_sym_argparse,
      anon_sym_bg,
      anon_sym_bind,
      anon_sym_block,
      anon_sym_breakpoint,
      anon_sym_builtin,
      anon_sym_cd,
      anon_sym_command,
      anon_sym_commandline,
      anon_sym_complete,
      anon_sym_contains,
      anon_sym_count,
      anon_sym_disown,
      anon_sym_echo,
      anon_sym_emit,
      anon_sym_eval,
      anon_sym_exec,
      anon_sym_exit,
      anon_sym_false,
      anon_sym_fg,
      anon_sym_functions,
      anon_sym_history,
      anon_sym_jobs,
      anon_sym_math,
      anon_sym_path,
      anon_sym_printf,
      anon_sym_pwd,
      anon_sym_random,
      anon_sym_read,
      anon_sym_realpath,
      anon_sym_set,
      anon_sym_set_color,
      anon_sym_source,
      anon_sym_status,
      anon_sym_string,
      anon_sym_test,
      anon_sym_time,
      anon_sym_true,
      anon_sym_type,
      anon_sym_ulimit,
      anon_sym_wait,
      sym_home_dir_expansion,
      sym_glob,
      sym_word,
  [282] = 4,
    ACTIONS(39), 1,
      sym_comment,
    STATE(191), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(574), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [307] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__concat_list,
    STATE(191), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(574), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [334] = 4,
    ACTIONS(39), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(580), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [359] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym__concat_list,
    STATE(188), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(580), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [386] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__concat_list,
    STATE(191), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(676), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(674), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [413] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [451] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__concat,
    ACTIONS(948), 1,
      sym__concat_oct,
    STATE(210), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(695), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [477] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_test_command_token2,
    ACTIONS(751), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(950), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [501] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_test_command_token2,
    ACTIONS(751), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(952), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [525] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(707), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(705), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [547] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [585] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(693), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(691), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [607] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [645] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(958), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(197), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [683] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_DOLLAR,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    ACTIONS(966), 1,
      sym_integer,
    ACTIONS(969), 1,
      anon_sym_RBRACK,
    ACTIONS(971), 1,
      anon_sym_DOT_DOT,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
    ACTIONS(977), 1,
      anon_sym_SQUOTE,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [721] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(676), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(674), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [743] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(980), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(199), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [781] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(982), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(192), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [819] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(984), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(212), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [857] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [895] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(988), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [933] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym__concat,
    ACTIONS(993), 1,
      sym__concat_oct,
    STATE(208), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(709), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [959] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(996), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(211), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [997] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__concat,
    ACTIONS(998), 1,
      sym__concat_oct,
    STATE(208), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(701), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1023] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(1000), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [1061] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(1002), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [1099] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(1004), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(206), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [1137] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(1006), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(201), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [1175] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(214), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [1213] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(940), 1,
      anon_sym_DOT_DOT,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    ACTIONS(1010), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_index,
    STATE(207), 2,
      sym_range,
      aux_sym_list_element_access_repeat1,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [1251] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym__concat,
    ACTIONS(948), 1,
      sym__concat_oct,
    STATE(210), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(717), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1277] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(721), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(719), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1298] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(771), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(769), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1319] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(755), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(753), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1340] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(731), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(729), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1361] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(751), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(749), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1382] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(727), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(725), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1403] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(747), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(745), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1424] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(763), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(761), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1445] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(723), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(709), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1466] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(767), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(765), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1487] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(739), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(737), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1508] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(735), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(733), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1529] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(743), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(741), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1550] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(759), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(757), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [1571] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1601] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1631] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1661] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1691] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1721] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1751] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1781] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1811] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1024), 6,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
  [1839] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1026), 8,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
  [1865] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      sym_index,
    ACTIONS(1028), 2,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [1897] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1927] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1957] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1987] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2017] = 3,
    ACTIONS(39), 1,
      sym_comment,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1034), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2037] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2067] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2097] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1036), 6,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
  [2125] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2155] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2185] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_DOLLAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_integer,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    ACTIONS(944), 1,
      anon_sym_SQUOTE,
    STATE(342), 1,
      sym_index,
    ACTIONS(1042), 2,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
    STATE(354), 4,
      sym_command_substitution,
      sym_variable_expansion,
      sym_double_quote_string,
      sym_single_quote_string,
  [2217] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2247] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2277] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2307] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2337] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2367] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2397] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    ACTIONS(1048), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2427] = 8,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2457] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1050), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2474] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1050), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2491] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1052), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2508] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1054), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2525] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1056), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2552] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1058), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2579] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1060), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2606] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1062), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2623] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1064), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2640] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1066), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2667] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1068), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2684] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1070), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2701] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1064), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2718] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1016), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2745] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1072), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2772] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1064), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2789] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1074), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2806] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1064), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2823] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1076), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2840] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1064), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2857] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1078), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2884] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1080), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2901] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1052), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2918] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1052), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2935] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1052), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2952] = 7,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_PIPE,
    ACTIONS(1018), 1,
      sym_stream_redirect,
    ACTIONS(1020), 1,
      sym_direction,
    STATE(269), 1,
      sym_file_redirect,
    ACTIONS(1012), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(1082), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2979] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1084), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [2996] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1086), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3013] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1052), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3030] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1050), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3047] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1050), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3064] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1050), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3081] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1086), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3098] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(775), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3115] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1086), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3132] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1086), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3149] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1088), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3166] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1090), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3183] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1092), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3200] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1094), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3217] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1086), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3234] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1096), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3251] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1098), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_RPAREN,
      sym_stream_redirect,
      sym_direction,
  [3268] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__concat_list,
    STATE(312), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(574), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 1,
      sym__concat_list,
    STATE(306), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(676), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3308] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym__concat_list,
    STATE(305), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(580), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3329] = 4,
    ACTIONS(39), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(580), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3348] = 4,
    ACTIONS(39), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(574), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__concat_list,
    STATE(311), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__concat_list,
    STATE(306), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3405] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1107), 1,
      sym__concat_list,
    STATE(312), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(676), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(674), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 8,
      sym__concat_list,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(306), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 8,
      sym__concat_list,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3460] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1114), 1,
      anon_sym_DQUOTE,
    ACTIONS(1116), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(324), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3482] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1118), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3504] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1122), 1,
      anon_sym_DQUOTE,
    ACTIONS(1124), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(316), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3526] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1126), 1,
      anon_sym_DQUOTE,
    ACTIONS(1128), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(331), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3548] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1130), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3570] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym__concat,
    ACTIONS(1134), 1,
      sym__concat_oct,
    STATE(328), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(695), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3590] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym__concat,
    ACTIONS(1134), 1,
      sym__concat_oct,
    STATE(328), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(717), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3610] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3632] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_DOLLAR,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    ACTIONS(1144), 1,
      anon_sym_DQUOTE,
    ACTIONS(1146), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3654] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1149), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3676] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1151), 1,
      anon_sym_DQUOTE,
    ACTIONS(1153), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(319), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3698] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1155), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3720] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1157), 1,
      anon_sym_DQUOTE,
    ACTIONS(1159), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(337), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3742] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym__concat,
    ACTIONS(1161), 1,
      sym__concat_oct,
    STATE(329), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(701), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3762] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1163), 1,
      sym__concat,
    ACTIONS(1166), 1,
      sym__concat_oct,
    STATE(329), 1,
      aux_sym_concatenation_repeat1,
    ACTIONS(709), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3782] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1169), 1,
      anon_sym_DQUOTE,
    ACTIONS(1171), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(322), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3804] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1173), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3826] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(676), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(674), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3842] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(707), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(705), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3858] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(693), 3,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
    ACTIONS(691), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 8,
      sym__concat_list,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3888] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1175), 1,
      anon_sym_DQUOTE,
    ACTIONS(1177), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(326), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3910] = 6,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1110), 1,
      anon_sym_DOLLAR,
    ACTIONS(1112), 1,
      anon_sym_LPAREN,
    ACTIONS(1179), 1,
      anon_sym_DQUOTE,
    ACTIONS(1120), 2,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
    STATE(323), 3,
      sym_command_substitution,
      sym_variable_expansion,
      aux_sym_double_quote_string_repeat1,
  [3932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 8,
      sym__concat_list,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 8,
      sym__concat_list,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3973] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(743), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(741), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4014] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1183), 1,
      sym__concat_list,
    STATE(344), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(674), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4031] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(751), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(749), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4046] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(739), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(737), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4061] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(755), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(753), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4076] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym__concat_list,
    STATE(351), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(580), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4119] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1186), 1,
      sym__concat_list,
    STATE(344), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(574), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1188), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1190), 6,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4190] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(767), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(765), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4205] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(735), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(733), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4220] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(759), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(757), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4235] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(721), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(719), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4250] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(723), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(709), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4278] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__concat_list,
    STATE(363), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(580), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4295] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__concat_list,
    STATE(344), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(574), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4325] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(763), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(761), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4340] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(727), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(725), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4355] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(747), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(745), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 7,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [4383] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(771), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(769), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4398] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(731), 2,
      sym__concat,
      sym__concat_oct,
    ACTIONS(729), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4413] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym__concat_list,
    ACTIONS(691), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4427] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__concat_list,
    ACTIONS(674), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4441] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1196), 1,
      anon_sym_if,
    ACTIONS(1194), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4455] = 3,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(707), 1,
      sym__concat_list,
    ACTIONS(705), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4469] = 3,
    ACTIONS(39), 1,
      sym_comment,
    STATE(381), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 4,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
      aux_sym_test_command_token2,
  [4482] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(719), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4493] = 3,
    ACTIONS(39), 1,
      sym_comment,
    STATE(375), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 4,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
      aux_sym_test_command_token2,
  [4506] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_end,
    ACTIONS(1200), 1,
      anon_sym_else,
    STATE(513), 1,
      sym_else_clause,
    STATE(392), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
  [4523] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(753), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym__concat_list,
    STATE(383), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4549] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1204), 1,
      sym__concat_list,
    STATE(381), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(676), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [4564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      anon_sym_else,
    ACTIONS(1207), 1,
      anon_sym_end,
    STATE(519), 1,
      sym_else_clause,
    STATE(392), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
  [4581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1202), 1,
      sym__concat_list,
    STATE(385), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4596] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1209), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1211), 1,
      sym__concat_list,
    STATE(385), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(676), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 4,
      sym__brace_concat,
      sym__concat_list,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4635] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(741), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(385), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 4,
      sym__brace_concat,
      sym__concat_list,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4659] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym__concat_list,
    STATE(381), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(576), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [4674] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(769), 5,
      anon_sym_DOLLAR,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      aux_sym_double_quote_string_token1,
      sym_escape_sequence,
  [4685] = 4,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1214), 1,
      sym__concat_list,
    STATE(389), 1,
      aux_sym_variable_expansion_repeat1,
    ACTIONS(582), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [4700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1216), 1,
      anon_sym_end,
    ACTIONS(1218), 1,
      anon_sym_else,
    STATE(392), 2,
      sym_else_if_clause,
      aux_sym_if_statement_repeat1,
  [4714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_DOLLAR,
    ACTIONS(1223), 1,
      anon_sym_LPAREN,
    ACTIONS(1225), 1,
      sym_variable_name,
    STATE(310), 1,
      sym_variable_expansion,
  [4730] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1227), 1,
      anon_sym_SQUOTE,
    ACTIONS(1229), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1231), 1,
      sym_escape_sequence,
    STATE(403), 1,
      aux_sym_single_quote_string_repeat1,
  [4746] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1233), 1,
      anon_sym_SQUOTE,
    ACTIONS(1235), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1237), 1,
      sym_escape_sequence,
    STATE(398), 1,
      aux_sym_single_quote_string_repeat1,
  [4762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      sym__brace_concat,
    STATE(400), 1,
      aux_sym_brace_concatenation_repeat1,
    ACTIONS(1239), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4776] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1243), 1,
      aux_sym_test_command_token2,
    ACTIONS(1245), 1,
      sym__concat,
    ACTIONS(1247), 1,
      sym__concat_oct,
    STATE(419), 1,
      aux_sym_concatenation_repeat1,
  [4792] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_SQUOTE,
    ACTIONS(1251), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1253), 1,
      sym_escape_sequence,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [4808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_end,
    ACTIONS(1257), 1,
      anon_sym_case,
    STATE(405), 2,
      sym_case_clause,
      aux_sym_switch_statement_repeat1,
  [4822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      sym__brace_concat,
    STATE(408), 1,
      aux_sym_brace_concatenation_repeat1,
    ACTIONS(1259), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4836] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1261), 1,
      anon_sym_SQUOTE,
    ACTIONS(1263), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1266), 1,
      sym_escape_sequence,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [4852] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1253), 1,
      sym_escape_sequence,
    ACTIONS(1269), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [4868] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1253), 1,
      sym_escape_sequence,
    ACTIONS(1271), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [4884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_DOLLAR,
    ACTIONS(1275), 1,
      anon_sym_LPAREN,
    ACTIONS(1277), 1,
      sym_variable_name,
    STATE(190), 1,
      sym_variable_expansion,
  [4900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      anon_sym_case,
    ACTIONS(1279), 1,
      anon_sym_end,
    STATE(410), 2,
      sym_case_clause,
      aux_sym_switch_statement_repeat1,
  [4914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_DOLLAR,
    ACTIONS(1283), 1,
      anon_sym_LPAREN,
    ACTIONS(1285), 1,
      sym_variable_name,
    STATE(99), 1,
      sym_variable_expansion,
  [4930] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1253), 1,
      sym_escape_sequence,
    ACTIONS(1287), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [4946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      sym__brace_concat,
    STATE(408), 1,
      aux_sym_brace_concatenation_repeat1,
    ACTIONS(1289), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4960] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_SQUOTE,
    ACTIONS(1296), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1298), 1,
      sym_escape_sequence,
    STATE(402), 1,
      aux_sym_single_quote_string_repeat1,
  [4976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_end,
    ACTIONS(1302), 1,
      anon_sym_case,
    STATE(410), 2,
      sym_case_clause,
      aux_sym_switch_statement_repeat1,
  [4990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DOLLAR,
    ACTIONS(1307), 1,
      anon_sym_LPAREN,
    ACTIONS(1309), 1,
      sym_variable_name,
    STATE(148), 1,
      sym_variable_expansion,
  [5006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_DOLLAR,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
    ACTIONS(1315), 1,
      sym_variable_name,
    STATE(307), 1,
      sym_variable_expansion,
  [5022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 4,
      sym__brace_concat,
      sym__concat_list,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5032] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_SQUOTE,
    ACTIONS(1319), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1321), 1,
      sym_escape_sequence,
    STATE(407), 1,
      aux_sym_single_quote_string_repeat1,
  [5048] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_SQUOTE,
    ACTIONS(1325), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1327), 1,
      sym_escape_sequence,
    STATE(424), 1,
      aux_sym_single_quote_string_repeat1,
  [5064] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_DOLLAR,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
    ACTIONS(1333), 1,
      sym_variable_name,
    STATE(348), 1,
      sym_variable_expansion,
  [5080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 4,
      sym__brace_concat,
      sym__concat_list,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5090] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym__concat,
    ACTIONS(1247), 1,
      sym__concat_oct,
    ACTIONS(1335), 1,
      aux_sym_test_command_token2,
    STATE(419), 1,
      aux_sym_concatenation_repeat1,
  [5106] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1245), 1,
      sym__concat,
    ACTIONS(1337), 1,
      aux_sym_test_command_token2,
    ACTIONS(1339), 1,
      sym__concat_oct,
    STATE(422), 1,
      aux_sym_concatenation_repeat1,
  [5122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 4,
      sym__brace_concat,
      sym__concat_list,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5132] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1253), 1,
      sym_escape_sequence,
    ACTIONS(1341), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [5148] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(723), 1,
      aux_sym_test_command_token2,
    ACTIONS(1343), 1,
      sym__concat,
    ACTIONS(1346), 1,
      sym__concat_oct,
    STATE(422), 1,
      aux_sym_concatenation_repeat1,
  [5164] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_SQUOTE,
    ACTIONS(1351), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1353), 1,
      sym_escape_sequence,
    STATE(421), 1,
      aux_sym_single_quote_string_repeat1,
  [5180] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1253), 1,
      sym_escape_sequence,
    ACTIONS(1355), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [5196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_DOLLAR,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
    ACTIONS(1361), 1,
      sym_variable_name,
    STATE(380), 1,
      sym_variable_expansion,
  [5212] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(676), 4,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
      aux_sym_test_command_token2,
  [5222] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1251), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1253), 1,
      sym_escape_sequence,
    ACTIONS(1363), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      aux_sym_single_quote_string_repeat1,
  [5238] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(707), 4,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
      aux_sym_test_command_token2,
  [5248] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(693), 4,
      sym__concat,
      sym__concat_oct,
      sym__concat_list,
      aux_sym_test_command_token2,
  [5258] = 5,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1365), 1,
      anon_sym_SQUOTE,
    ACTIONS(1367), 1,
      aux_sym_single_quote_string_token1,
    ACTIONS(1369), 1,
      sym_escape_sequence,
    STATE(427), 1,
      aux_sym_single_quote_string_repeat1,
  [5274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_DOLLAR,
    ACTIONS(1373), 1,
      anon_sym_LPAREN,
    ACTIONS(1375), 1,
      sym_variable_name,
    STATE(391), 1,
      sym_variable_expansion,
  [5290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_DOLLAR,
    ACTIONS(1377), 1,
      sym_variable_name,
    STATE(362), 1,
      sym_variable_expansion,
  [5303] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(771), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_DOLLAR,
    ACTIONS(1379), 1,
      sym_variable_name,
    STATE(377), 1,
      sym_variable_expansion,
  [5352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5370] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(735), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RBRACE,
    ACTIONS(1381), 2,
      sym__brace_concat,
      anon_sym_COMMA,
  [5390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      anon_sym_RBRACE,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1387), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(471), 1,
      aux_sym_brace_expansion_repeat1,
  [5429] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(743), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5438] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(727), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1273), 1,
      anon_sym_DOLLAR,
    ACTIONS(1391), 1,
      sym_variable_name,
    STATE(189), 1,
      sym_variable_expansion,
  [5460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5504] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(731), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5522] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(747), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5531] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(763), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_DOLLAR,
    ACTIONS(1397), 1,
      sym_variable_name,
    STATE(386), 1,
      sym_variable_expansion,
  [5562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1399), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5575] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(723), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5584] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(721), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1401), 1,
      anon_sym_RBRACE,
    ACTIONS(1381), 2,
      sym__brace_concat,
      anon_sym_COMMA,
  [5604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5617] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(759), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1399), 1,
      anon_sym_RBRACE,
    ACTIONS(1381), 2,
      sym__brace_concat,
      anon_sym_COMMA,
  [5637] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(767), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(451), 1,
      aux_sym_brace_expansion_repeat1,
  [5668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1403), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5681] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(755), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1405), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5712] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(739), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_DOLLAR,
    ACTIONS(1407), 1,
      sym_variable_name,
    STATE(308), 1,
      sym_variable_expansion,
  [5734] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(751), 3,
      sym__concat,
      sym__concat_oct,
      aux_sym_test_command_token2,
  [5743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_DOLLAR,
    ACTIONS(1409), 1,
      sym_variable_name,
    STATE(97), 1,
      sym_variable_expansion,
  [5756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(477), 1,
      aux_sym_brace_expansion_repeat1,
  [5791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(480), 1,
      aux_sym_brace_expansion_repeat1,
  [5804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1413), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_DOLLAR,
    ACTIONS(1415), 1,
      sym_variable_name,
    STATE(145), 1,
      sym_variable_expansion,
  [5830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 3,
      sym__brace_concat,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1419), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1421), 1,
      anon_sym_RBRACE,
    ACTIONS(1381), 2,
      sym__brace_concat,
      anon_sym_COMMA,
  [5876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(486), 1,
      aux_sym_brace_expansion_repeat1,
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1425), 1,
      anon_sym_RBRACE,
    ACTIONS(1381), 2,
      sym__brace_concat,
      anon_sym_COMMA,
  [5913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1427), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 1,
      anon_sym_DOLLAR,
    ACTIONS(1429), 1,
      sym_variable_name,
    STATE(313), 1,
      sym_variable_expansion,
  [5952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1427), 1,
      anon_sym_RBRACE,
    ACTIONS(1381), 2,
      sym__brace_concat,
      anon_sym_COMMA,
  [5976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1434), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [5989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_RBRACE,
    STATE(484), 1,
      aux_sym_brace_expansion_repeat1,
  [6002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [6015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_brace_expansion_repeat1,
  [6028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_LBRACK,
    STATE(372), 1,
      sym_list_element_access,
  [6038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1440), 1,
      anon_sym_LBRACK,
    STATE(420), 1,
      sym_list_element_access,
  [6048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_LBRACK,
    STATE(335), 1,
      sym_list_element_access,
  [6058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1444), 1,
      anon_sym_LBRACK,
    STATE(150), 1,
      sym_list_element_access,
  [6068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(494), 1,
      aux_sym_brace_expansion_repeat1,
  [6078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(497), 1,
      aux_sym_brace_expansion_repeat1,
  [6088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      aux_sym_brace_expansion_repeat1,
  [6098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1446), 1,
      anon_sym_LBRACK,
    STATE(202), 1,
      sym_list_element_access,
  [6108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(482), 1,
      aux_sym_brace_expansion_repeat1,
  [6118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_LBRACK,
    STATE(426), 1,
      sym_list_element_access,
  [6128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1450), 1,
      anon_sym_LBRACK,
    STATE(332), 1,
      sym_list_element_access,
  [6138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_brace_expansion_repeat1,
  [6148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      sym_list_element_access,
  [6158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_brace_expansion_repeat1,
  [6168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_end,
  [6183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1454), 1,
      anon_sym_if,
  [6190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1456), 1,
      ts_builtin_sym_end,
  [6197] = 2,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(1458), 1,
      aux_sym_test_command_token2,
  [6204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1198), 1,
      anon_sym_end,
  [6211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1460), 1,
      sym_variable_name,
  [6218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1462), 1,
      anon_sym_end,
  [6225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1464), 1,
      anon_sym_in,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(183)] = 0,
  [SMALL_STATE(184)] = 68,
  [SMALL_STATE(185)] = 136,
  [SMALL_STATE(186)] = 217,
  [SMALL_STATE(187)] = 282,
  [SMALL_STATE(188)] = 307,
  [SMALL_STATE(189)] = 334,
  [SMALL_STATE(190)] = 359,
  [SMALL_STATE(191)] = 386,
  [SMALL_STATE(192)] = 413,
  [SMALL_STATE(193)] = 451,
  [SMALL_STATE(194)] = 477,
  [SMALL_STATE(195)] = 501,
  [SMALL_STATE(196)] = 525,
  [SMALL_STATE(197)] = 547,
  [SMALL_STATE(198)] = 585,
  [SMALL_STATE(199)] = 607,
  [SMALL_STATE(200)] = 645,
  [SMALL_STATE(201)] = 683,
  [SMALL_STATE(202)] = 721,
  [SMALL_STATE(203)] = 743,
  [SMALL_STATE(204)] = 781,
  [SMALL_STATE(205)] = 819,
  [SMALL_STATE(206)] = 857,
  [SMALL_STATE(207)] = 895,
  [SMALL_STATE(208)] = 933,
  [SMALL_STATE(209)] = 959,
  [SMALL_STATE(210)] = 997,
  [SMALL_STATE(211)] = 1023,
  [SMALL_STATE(212)] = 1061,
  [SMALL_STATE(213)] = 1099,
  [SMALL_STATE(214)] = 1137,
  [SMALL_STATE(215)] = 1175,
  [SMALL_STATE(216)] = 1213,
  [SMALL_STATE(217)] = 1251,
  [SMALL_STATE(218)] = 1277,
  [SMALL_STATE(219)] = 1298,
  [SMALL_STATE(220)] = 1319,
  [SMALL_STATE(221)] = 1340,
  [SMALL_STATE(222)] = 1361,
  [SMALL_STATE(223)] = 1382,
  [SMALL_STATE(224)] = 1403,
  [SMALL_STATE(225)] = 1424,
  [SMALL_STATE(226)] = 1445,
  [SMALL_STATE(227)] = 1466,
  [SMALL_STATE(228)] = 1487,
  [SMALL_STATE(229)] = 1508,
  [SMALL_STATE(230)] = 1529,
  [SMALL_STATE(231)] = 1550,
  [SMALL_STATE(232)] = 1571,
  [SMALL_STATE(233)] = 1601,
  [SMALL_STATE(234)] = 1631,
  [SMALL_STATE(235)] = 1661,
  [SMALL_STATE(236)] = 1691,
  [SMALL_STATE(237)] = 1721,
  [SMALL_STATE(238)] = 1751,
  [SMALL_STATE(239)] = 1781,
  [SMALL_STATE(240)] = 1811,
  [SMALL_STATE(241)] = 1839,
  [SMALL_STATE(242)] = 1865,
  [SMALL_STATE(243)] = 1897,
  [SMALL_STATE(244)] = 1927,
  [SMALL_STATE(245)] = 1957,
  [SMALL_STATE(246)] = 1987,
  [SMALL_STATE(247)] = 2017,
  [SMALL_STATE(248)] = 2037,
  [SMALL_STATE(249)] = 2067,
  [SMALL_STATE(250)] = 2097,
  [SMALL_STATE(251)] = 2125,
  [SMALL_STATE(252)] = 2155,
  [SMALL_STATE(253)] = 2185,
  [SMALL_STATE(254)] = 2217,
  [SMALL_STATE(255)] = 2247,
  [SMALL_STATE(256)] = 2277,
  [SMALL_STATE(257)] = 2307,
  [SMALL_STATE(258)] = 2337,
  [SMALL_STATE(259)] = 2367,
  [SMALL_STATE(260)] = 2397,
  [SMALL_STATE(261)] = 2427,
  [SMALL_STATE(262)] = 2457,
  [SMALL_STATE(263)] = 2474,
  [SMALL_STATE(264)] = 2491,
  [SMALL_STATE(265)] = 2508,
  [SMALL_STATE(266)] = 2525,
  [SMALL_STATE(267)] = 2552,
  [SMALL_STATE(268)] = 2579,
  [SMALL_STATE(269)] = 2606,
  [SMALL_STATE(270)] = 2623,
  [SMALL_STATE(271)] = 2640,
  [SMALL_STATE(272)] = 2667,
  [SMALL_STATE(273)] = 2684,
  [SMALL_STATE(274)] = 2701,
  [SMALL_STATE(275)] = 2718,
  [SMALL_STATE(276)] = 2745,
  [SMALL_STATE(277)] = 2772,
  [SMALL_STATE(278)] = 2789,
  [SMALL_STATE(279)] = 2806,
  [SMALL_STATE(280)] = 2823,
  [SMALL_STATE(281)] = 2840,
  [SMALL_STATE(282)] = 2857,
  [SMALL_STATE(283)] = 2884,
  [SMALL_STATE(284)] = 2901,
  [SMALL_STATE(285)] = 2918,
  [SMALL_STATE(286)] = 2935,
  [SMALL_STATE(287)] = 2952,
  [SMALL_STATE(288)] = 2979,
  [SMALL_STATE(289)] = 2996,
  [SMALL_STATE(290)] = 3013,
  [SMALL_STATE(291)] = 3030,
  [SMALL_STATE(292)] = 3047,
  [SMALL_STATE(293)] = 3064,
  [SMALL_STATE(294)] = 3081,
  [SMALL_STATE(295)] = 3098,
  [SMALL_STATE(296)] = 3115,
  [SMALL_STATE(297)] = 3132,
  [SMALL_STATE(298)] = 3149,
  [SMALL_STATE(299)] = 3166,
  [SMALL_STATE(300)] = 3183,
  [SMALL_STATE(301)] = 3200,
  [SMALL_STATE(302)] = 3217,
  [SMALL_STATE(303)] = 3234,
  [SMALL_STATE(304)] = 3251,
  [SMALL_STATE(305)] = 3268,
  [SMALL_STATE(306)] = 3289,
  [SMALL_STATE(307)] = 3308,
  [SMALL_STATE(308)] = 3329,
  [SMALL_STATE(309)] = 3348,
  [SMALL_STATE(310)] = 3367,
  [SMALL_STATE(311)] = 3386,
  [SMALL_STATE(312)] = 3405,
  [SMALL_STATE(313)] = 3426,
  [SMALL_STATE(314)] = 3443,
  [SMALL_STATE(315)] = 3460,
  [SMALL_STATE(316)] = 3482,
  [SMALL_STATE(317)] = 3504,
  [SMALL_STATE(318)] = 3526,
  [SMALL_STATE(319)] = 3548,
  [SMALL_STATE(320)] = 3570,
  [SMALL_STATE(321)] = 3590,
  [SMALL_STATE(322)] = 3610,
  [SMALL_STATE(323)] = 3632,
  [SMALL_STATE(324)] = 3654,
  [SMALL_STATE(325)] = 3676,
  [SMALL_STATE(326)] = 3698,
  [SMALL_STATE(327)] = 3720,
  [SMALL_STATE(328)] = 3742,
  [SMALL_STATE(329)] = 3762,
  [SMALL_STATE(330)] = 3782,
  [SMALL_STATE(331)] = 3804,
  [SMALL_STATE(332)] = 3826,
  [SMALL_STATE(333)] = 3842,
  [SMALL_STATE(334)] = 3858,
  [SMALL_STATE(335)] = 3874,
  [SMALL_STATE(336)] = 3888,
  [SMALL_STATE(337)] = 3910,
  [SMALL_STATE(338)] = 3932,
  [SMALL_STATE(339)] = 3946,
  [SMALL_STATE(340)] = 3960,
  [SMALL_STATE(341)] = 3973,
  [SMALL_STATE(342)] = 3988,
  [SMALL_STATE(343)] = 4001,
  [SMALL_STATE(344)] = 4014,
  [SMALL_STATE(345)] = 4031,
  [SMALL_STATE(346)] = 4046,
  [SMALL_STATE(347)] = 4061,
  [SMALL_STATE(348)] = 4076,
  [SMALL_STATE(349)] = 4093,
  [SMALL_STATE(350)] = 4106,
  [SMALL_STATE(351)] = 4119,
  [SMALL_STATE(352)] = 4136,
  [SMALL_STATE(353)] = 4149,
  [SMALL_STATE(354)] = 4162,
  [SMALL_STATE(355)] = 4175,
  [SMALL_STATE(356)] = 4190,
  [SMALL_STATE(357)] = 4205,
  [SMALL_STATE(358)] = 4220,
  [SMALL_STATE(359)] = 4235,
  [SMALL_STATE(360)] = 4250,
  [SMALL_STATE(361)] = 4265,
  [SMALL_STATE(362)] = 4278,
  [SMALL_STATE(363)] = 4295,
  [SMALL_STATE(364)] = 4312,
  [SMALL_STATE(365)] = 4325,
  [SMALL_STATE(366)] = 4340,
  [SMALL_STATE(367)] = 4355,
  [SMALL_STATE(368)] = 4370,
  [SMALL_STATE(369)] = 4383,
  [SMALL_STATE(370)] = 4398,
  [SMALL_STATE(371)] = 4413,
  [SMALL_STATE(372)] = 4427,
  [SMALL_STATE(373)] = 4441,
  [SMALL_STATE(374)] = 4455,
  [SMALL_STATE(375)] = 4469,
  [SMALL_STATE(376)] = 4482,
  [SMALL_STATE(377)] = 4493,
  [SMALL_STATE(378)] = 4506,
  [SMALL_STATE(379)] = 4523,
  [SMALL_STATE(380)] = 4534,
  [SMALL_STATE(381)] = 4549,
  [SMALL_STATE(382)] = 4564,
  [SMALL_STATE(383)] = 4581,
  [SMALL_STATE(384)] = 4596,
  [SMALL_STATE(385)] = 4607,
  [SMALL_STATE(386)] = 4622,
  [SMALL_STATE(387)] = 4635,
  [SMALL_STATE(388)] = 4646,
  [SMALL_STATE(389)] = 4659,
  [SMALL_STATE(390)] = 4674,
  [SMALL_STATE(391)] = 4685,
  [SMALL_STATE(392)] = 4700,
  [SMALL_STATE(393)] = 4714,
  [SMALL_STATE(394)] = 4730,
  [SMALL_STATE(395)] = 4746,
  [SMALL_STATE(396)] = 4762,
  [SMALL_STATE(397)] = 4776,
  [SMALL_STATE(398)] = 4792,
  [SMALL_STATE(399)] = 4808,
  [SMALL_STATE(400)] = 4822,
  [SMALL_STATE(401)] = 4836,
  [SMALL_STATE(402)] = 4852,
  [SMALL_STATE(403)] = 4868,
  [SMALL_STATE(404)] = 4884,
  [SMALL_STATE(405)] = 4900,
  [SMALL_STATE(406)] = 4914,
  [SMALL_STATE(407)] = 4930,
  [SMALL_STATE(408)] = 4946,
  [SMALL_STATE(409)] = 4960,
  [SMALL_STATE(410)] = 4976,
  [SMALL_STATE(411)] = 4990,
  [SMALL_STATE(412)] = 5006,
  [SMALL_STATE(413)] = 5022,
  [SMALL_STATE(414)] = 5032,
  [SMALL_STATE(415)] = 5048,
  [SMALL_STATE(416)] = 5064,
  [SMALL_STATE(417)] = 5080,
  [SMALL_STATE(418)] = 5090,
  [SMALL_STATE(419)] = 5106,
  [SMALL_STATE(420)] = 5122,
  [SMALL_STATE(421)] = 5132,
  [SMALL_STATE(422)] = 5148,
  [SMALL_STATE(423)] = 5164,
  [SMALL_STATE(424)] = 5180,
  [SMALL_STATE(425)] = 5196,
  [SMALL_STATE(426)] = 5212,
  [SMALL_STATE(427)] = 5222,
  [SMALL_STATE(428)] = 5238,
  [SMALL_STATE(429)] = 5248,
  [SMALL_STATE(430)] = 5258,
  [SMALL_STATE(431)] = 5274,
  [SMALL_STATE(432)] = 5290,
  [SMALL_STATE(433)] = 5303,
  [SMALL_STATE(434)] = 5312,
  [SMALL_STATE(435)] = 5321,
  [SMALL_STATE(436)] = 5330,
  [SMALL_STATE(437)] = 5339,
  [SMALL_STATE(438)] = 5352,
  [SMALL_STATE(439)] = 5361,
  [SMALL_STATE(440)] = 5370,
  [SMALL_STATE(441)] = 5379,
  [SMALL_STATE(442)] = 5390,
  [SMALL_STATE(443)] = 5403,
  [SMALL_STATE(444)] = 5416,
  [SMALL_STATE(445)] = 5429,
  [SMALL_STATE(446)] = 5438,
  [SMALL_STATE(447)] = 5447,
  [SMALL_STATE(448)] = 5460,
  [SMALL_STATE(449)] = 5473,
  [SMALL_STATE(450)] = 5482,
  [SMALL_STATE(451)] = 5491,
  [SMALL_STATE(452)] = 5504,
  [SMALL_STATE(453)] = 5513,
  [SMALL_STATE(454)] = 5522,
  [SMALL_STATE(455)] = 5531,
  [SMALL_STATE(456)] = 5540,
  [SMALL_STATE(457)] = 5549,
  [SMALL_STATE(458)] = 5562,
  [SMALL_STATE(459)] = 5575,
  [SMALL_STATE(460)] = 5584,
  [SMALL_STATE(461)] = 5593,
  [SMALL_STATE(462)] = 5604,
  [SMALL_STATE(463)] = 5617,
  [SMALL_STATE(464)] = 5626,
  [SMALL_STATE(465)] = 5637,
  [SMALL_STATE(466)] = 5646,
  [SMALL_STATE(467)] = 5655,
  [SMALL_STATE(468)] = 5668,
  [SMALL_STATE(469)] = 5681,
  [SMALL_STATE(470)] = 5690,
  [SMALL_STATE(471)] = 5699,
  [SMALL_STATE(472)] = 5712,
  [SMALL_STATE(473)] = 5721,
  [SMALL_STATE(474)] = 5734,
  [SMALL_STATE(475)] = 5743,
  [SMALL_STATE(476)] = 5756,
  [SMALL_STATE(477)] = 5765,
  [SMALL_STATE(478)] = 5778,
  [SMALL_STATE(479)] = 5791,
  [SMALL_STATE(480)] = 5804,
  [SMALL_STATE(481)] = 5817,
  [SMALL_STATE(482)] = 5830,
  [SMALL_STATE(483)] = 5843,
  [SMALL_STATE(484)] = 5852,
  [SMALL_STATE(485)] = 5865,
  [SMALL_STATE(486)] = 5876,
  [SMALL_STATE(487)] = 5889,
  [SMALL_STATE(488)] = 5902,
  [SMALL_STATE(489)] = 5913,
  [SMALL_STATE(490)] = 5926,
  [SMALL_STATE(491)] = 5939,
  [SMALL_STATE(492)] = 5952,
  [SMALL_STATE(493)] = 5965,
  [SMALL_STATE(494)] = 5976,
  [SMALL_STATE(495)] = 5989,
  [SMALL_STATE(496)] = 6002,
  [SMALL_STATE(497)] = 6015,
  [SMALL_STATE(498)] = 6028,
  [SMALL_STATE(499)] = 6038,
  [SMALL_STATE(500)] = 6048,
  [SMALL_STATE(501)] = 6058,
  [SMALL_STATE(502)] = 6068,
  [SMALL_STATE(503)] = 6078,
  [SMALL_STATE(504)] = 6088,
  [SMALL_STATE(505)] = 6098,
  [SMALL_STATE(506)] = 6108,
  [SMALL_STATE(507)] = 6118,
  [SMALL_STATE(508)] = 6128,
  [SMALL_STATE(509)] = 6138,
  [SMALL_STATE(510)] = 6148,
  [SMALL_STATE(511)] = 6158,
  [SMALL_STATE(512)] = 6168,
  [SMALL_STATE(513)] = 6176,
  [SMALL_STATE(514)] = 6183,
  [SMALL_STATE(515)] = 6190,
  [SMALL_STATE(516)] = 6197,
  [SMALL_STATE(517)] = 6204,
  [SMALL_STATE(518)] = 6211,
  [SMALL_STATE(519)] = 6218,
  [SMALL_STATE(520)] = 6225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(78),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(4),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(81),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(406),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(22),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(140),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(107),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(89),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(143),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(267),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(518),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(77),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(76),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(7),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(131),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(121),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(162),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(318),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(395),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(118),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 4, .production_id = 19),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_clause, 3, .production_id = 19),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(8),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_while_statement_repeat1, 2), SHIFT_REPEAT(276),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(81),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(406),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(140),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(143),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(275),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(518),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(131),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(318),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(395),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(118),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(287),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 4),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(78),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(81),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(406),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(22),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(140),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(107),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(89),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(143),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(282),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(518),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(77),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(76),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(7),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(131),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(121),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(162),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(318),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(395),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(107),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(118),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat2, 2), SHIFT_REPEAT(266),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(406),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(22),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(107),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(121),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(162),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(318),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(395),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(118),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(129),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 12), SHIFT_REPEAT(141),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 5),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__terminated_opt_statement, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__terminated_statement, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terminated_statement, 2),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_expansion, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_expansion, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(411),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(47),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(154),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(173),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(160),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(330),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(409),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 2, .production_id = 18), SHIFT_REPEAT(174),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(411),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(47),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(154),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(173),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(160),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(330),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(409),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_clause_repeat1, 2), SHIFT_REPEAT(174),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(411),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(47),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(154),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(173),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(160),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(330),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(409),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 14), SHIFT_REPEAT(174),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(510),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_element_access, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_element_access, 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(179),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(110),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, .production_id = 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_expansion, 4),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_expansion, 5),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 5),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 3),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_character, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_character, 1),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 2),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote_string, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote_string, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_expansion, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_expansion, 3),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string, 2),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_substitution, 4),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_substitution, 4),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 4),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_redirect, 2, .production_id = 7),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 3),
  [779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(431),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(16),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(397),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(474),
  [791] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(159),
  [794] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(315),
  [797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(430),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(397),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 11), SHIFT_REPEAT(472),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(501),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_expansion_repeat1, 1),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(178),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(157),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_statement_repeat1, 1, .production_id = 16),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_definition_repeat1, 1, .production_id = 6),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 9),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_command_repeat1, 2, .production_id = 9),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(505),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_command, 3, .production_id = 10),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_command, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [960] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(393),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(25),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(354),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(253),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(317),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 2), SHIFT_REPEAT(414),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(171),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(208),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 2),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_statement, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_execution, 3),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, .production_id = 20),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, .production_id = 20),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 2),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirect_statement, 2),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_statement, 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 13),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_statement, 3),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 5, .production_id = 15),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 8),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 8),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 17),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 8),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 8),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 8),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4, .production_id = 15),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 13),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(500),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(508),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(416),
  [1141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(48),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [1146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(323),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(176),
  [1166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(329),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(498),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_element_access_repeat1, 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(507),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_expansion_repeat1, 2), SHIFT_REPEAT(499),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(514),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__brace_expression, 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_concatenation, 2),
  [1261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(401),
  [1266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quote_string_repeat1, 2), SHIFT_REPEAT(401),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_brace_concatenation_repeat1, 2),
  [1291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_concatenation_repeat1, 2), SHIFT_REPEAT(185),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [1302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(133),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, .production_id = 1),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 2),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(165),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(422),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__base_brace_expression, 1),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_brace_expansion_repeat1, 2),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_expansion_repeat1, 2), SHIFT_REPEAT(161),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
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
