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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 331
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_LPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RPAREN = 5,
  anon_sym_RBRACK = 6,
  anon_sym_COMMA = 7,
  anon_sym_set_DASHoption = 8,
  anon_sym_datatype = 9,
  anon_sym_sort = 10,
  anon_sym_function = 11,
  anon_sym_COLONunextractable = 12,
  anon_sym_COLONon_merge = 13,
  anon_sym_COLONmerge = 14,
  anon_sym_COLONdefault = 15,
  anon_sym_declare = 16,
  anon_sym_relation = 17,
  anon_sym_ruleset = 18,
  anon_sym_rule = 19,
  anon_sym_COLONruleset = 20,
  anon_sym_COLONname = 21,
  anon_sym_rewrite = 22,
  anon_sym_COLONwhen = 23,
  anon_sym_birewrite = 24,
  anon_sym_let = 25,
  anon_sym_run = 26,
  anon_sym_COLONuntil = 27,
  anon_sym_simplify = 28,
  anon_sym_add_DASHruleset = 29,
  anon_sym_calc = 30,
  anon_sym_query_DASHextract = 31,
  anon_sym_COLONvariants = 32,
  anon_sym_check = 33,
  anon_sym_check_DASHproof = 34,
  anon_sym_run_DASHschedule = 35,
  anon_sym_push = 36,
  anon_sym_pop = 37,
  anon_sym_print_DASHtable = 38,
  anon_sym_print_DASHsize = 39,
  anon_sym_input = 40,
  anon_sym_output = 41,
  anon_sym_fail = 42,
  anon_sym_include = 43,
  anon_sym_saturate = 44,
  anon_sym_seq = 45,
  anon_sym_repeat = 46,
  anon_sym_COLONcost = 47,
  anon_sym_set = 48,
  anon_sym_delete = 49,
  anon_sym_union = 50,
  anon_sym_panic = 51,
  anon_sym_extract = 52,
  anon_sym_EQ = 53,
  sym_num = 54,
  sym_unum = 55,
  anon_sym_NaN = 56,
  aux_sym_f64_token1 = 57,
  anon_sym_inf = 58,
  anon_sym_DASHinf = 59,
  sym_ident = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_string_token1 = 62,
  sym_source_file = 63,
  sym_comment = 64,
  sym_lparen = 65,
  sym_rparen = 66,
  sym_command = 67,
  sym_schedule = 68,
  sym_cost = 69,
  sym_nonletaction = 70,
  sym_action = 71,
  sym_fact = 72,
  sym_schema = 73,
  sym_expr = 74,
  sym_literal = 75,
  sym_callexpr = 76,
  sym_variant = 77,
  sym_type = 78,
  sym_identsort = 79,
  sym_f64 = 80,
  sym_symstring = 81,
  sym_string = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_command_repeat1 = 84,
  aux_sym_command_repeat2 = 85,
  aux_sym_command_repeat3 = 86,
  aux_sym_command_repeat4 = 87,
  aux_sym_command_repeat5 = 88,
  aux_sym_command_repeat6 = 89,
  aux_sym_command_repeat7 = 90,
  aux_sym_string_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_set_DASHoption] = "set-option",
  [anon_sym_datatype] = "datatype",
  [anon_sym_sort] = "sort",
  [anon_sym_function] = "function",
  [anon_sym_COLONunextractable] = ":unextractable",
  [anon_sym_COLONon_merge] = ":on_merge",
  [anon_sym_COLONmerge] = ":merge",
  [anon_sym_COLONdefault] = ":default",
  [anon_sym_declare] = "declare",
  [anon_sym_relation] = "relation",
  [anon_sym_ruleset] = "ruleset",
  [anon_sym_rule] = "rule",
  [anon_sym_COLONruleset] = ":ruleset",
  [anon_sym_COLONname] = ":name",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_COLONwhen] = ":when",
  [anon_sym_birewrite] = "birewrite",
  [anon_sym_let] = "let",
  [anon_sym_run] = "run",
  [anon_sym_COLONuntil] = ":until",
  [anon_sym_simplify] = "simplify",
  [anon_sym_add_DASHruleset] = "add-ruleset",
  [anon_sym_calc] = "calc",
  [anon_sym_query_DASHextract] = "query-extract",
  [anon_sym_COLONvariants] = ":variants",
  [anon_sym_check] = "check",
  [anon_sym_check_DASHproof] = "check-proof",
  [anon_sym_run_DASHschedule] = "run-schedule",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_print_DASHtable] = "print-table",
  [anon_sym_print_DASHsize] = "print-size",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_fail] = "fail",
  [anon_sym_include] = "include",
  [anon_sym_saturate] = "saturate",
  [anon_sym_seq] = "seq",
  [anon_sym_repeat] = "repeat",
  [anon_sym_COLONcost] = ":cost",
  [anon_sym_set] = "set",
  [anon_sym_delete] = "delete",
  [anon_sym_union] = "union",
  [anon_sym_panic] = "panic",
  [anon_sym_extract] = "extract",
  [anon_sym_EQ] = "=",
  [sym_num] = "num",
  [sym_unum] = "unum",
  [anon_sym_NaN] = "NaN",
  [aux_sym_f64_token1] = "f64_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [sym_ident] = "ident",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_content",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_command] = "command",
  [sym_schedule] = "schedule",
  [sym_cost] = "cost",
  [sym_nonletaction] = "nonletaction",
  [sym_action] = "action",
  [sym_fact] = "fact",
  [sym_schema] = "schema",
  [sym_expr] = "expr",
  [sym_literal] = "literal",
  [sym_callexpr] = "callexpr",
  [sym_variant] = "variant",
  [sym_type] = "type",
  [sym_identsort] = "identsort",
  [sym_f64] = "f64",
  [sym_symstring] = "symstring",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
  [aux_sym_command_repeat4] = "command_repeat4",
  [aux_sym_command_repeat5] = "command_repeat5",
  [aux_sym_command_repeat6] = "command_repeat6",
  [aux_sym_command_repeat7] = "command_repeat7",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_COLONunextractable] = anon_sym_COLONunextractable,
  [anon_sym_COLONon_merge] = anon_sym_COLONon_merge,
  [anon_sym_COLONmerge] = anon_sym_COLONmerge,
  [anon_sym_COLONdefault] = anon_sym_COLONdefault,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_relation] = anon_sym_relation,
  [anon_sym_ruleset] = anon_sym_ruleset,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_COLONruleset] = anon_sym_COLONruleset,
  [anon_sym_COLONname] = anon_sym_COLONname,
  [anon_sym_rewrite] = anon_sym_rewrite,
  [anon_sym_COLONwhen] = anon_sym_COLONwhen,
  [anon_sym_birewrite] = anon_sym_birewrite,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_COLONuntil] = anon_sym_COLONuntil,
  [anon_sym_simplify] = anon_sym_simplify,
  [anon_sym_add_DASHruleset] = anon_sym_add_DASHruleset,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_query_DASHextract] = anon_sym_query_DASHextract,
  [anon_sym_COLONvariants] = anon_sym_COLONvariants,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_check_DASHproof] = anon_sym_check_DASHproof,
  [anon_sym_run_DASHschedule] = anon_sym_run_DASHschedule,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_print_DASHtable] = anon_sym_print_DASHtable,
  [anon_sym_print_DASHsize] = anon_sym_print_DASHsize,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_fail] = anon_sym_fail,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_saturate] = anon_sym_saturate,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_COLONcost] = anon_sym_COLONcost,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_extract] = anon_sym_extract,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_num] = sym_num,
  [sym_unum] = sym_unum,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_f64_token1] = aux_sym_f64_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [sym_ident] = sym_ident,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_command] = sym_command,
  [sym_schedule] = sym_schedule,
  [sym_cost] = sym_cost,
  [sym_nonletaction] = sym_nonletaction,
  [sym_action] = sym_action,
  [sym_fact] = sym_fact,
  [sym_schema] = sym_schema,
  [sym_expr] = sym_expr,
  [sym_literal] = sym_literal,
  [sym_callexpr] = sym_callexpr,
  [sym_variant] = sym_variant,
  [sym_type] = sym_type,
  [sym_identsort] = sym_identsort,
  [sym_f64] = sym_f64,
  [sym_symstring] = sym_symstring,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
  [aux_sym_command_repeat4] = aux_sym_command_repeat4,
  [aux_sym_command_repeat5] = aux_sym_command_repeat5,
  [aux_sym_command_repeat6] = aux_sym_command_repeat6,
  [aux_sym_command_repeat7] = aux_sym_command_repeat7,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONunextractable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONon_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONmerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONwhen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_birewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONuntil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simplify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query_DASHextract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONvariants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHproof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run_DASHschedule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHtable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saturate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONcost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_num] = {
    .visible = true,
    .named = true,
  },
  [sym_unum] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_f64_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_schedule] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_nonletaction] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_callexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identsort] = {
    .visible = true,
    .named = true,
  },
  [sym_f64] = {
    .visible = true,
    .named = true,
  },
  [sym_symstring] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 6,
  [17] = 17,
  [18] = 18,
  [19] = 7,
  [20] = 8,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 26,
  [33] = 33,
  [34] = 23,
  [35] = 23,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 39,
  [47] = 47,
  [48] = 44,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 3,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 82,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 105,
  [106] = 86,
  [107] = 107,
  [108] = 108,
  [109] = 79,
  [110] = 110,
  [111] = 111,
  [112] = 110,
  [113] = 113,
  [114] = 78,
  [115] = 115,
  [116] = 116,
  [117] = 88,
  [118] = 111,
  [119] = 80,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 81,
  [124] = 77,
  [125] = 125,
  [126] = 3,
  [127] = 107,
  [128] = 83,
  [129] = 82,
  [130] = 89,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 3,
  [135] = 89,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 86,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 105,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 82,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 102,
  [183] = 183,
  [184] = 121,
  [185] = 185,
  [186] = 108,
  [187] = 115,
  [188] = 188,
  [189] = 83,
  [190] = 190,
  [191] = 88,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 79,
  [198] = 80,
  [199] = 81,
  [200] = 77,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 148,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 209,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 215,
  [235] = 235,
  [236] = 3,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 238,
  [249] = 240,
  [250] = 250,
  [251] = 240,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 238,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 276,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 3,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 87,
  [293] = 293,
  [294] = 90,
  [295] = 3,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 303,
  [311] = 311,
  [312] = 82,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 303,
  [328] = 328,
  [329] = 325,
  [330] = 330,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(235);
      if (lookahead == '"') ADVANCE(496);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == ',') ADVANCE(246);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == '[') ADVANCE(241);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'q') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(496);
      if (lookahead == ';') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(498);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(496);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(339);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(496);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == 'N') ADVANCE(339);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(496);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '[') ADVANCE(241);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead == 'q') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '[') ADVANCE(242);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(243);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(182);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '=') ADVANCE(324);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(236);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(327);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(129);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(290);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(288);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 162:
      if (lookahead == 'q') ADVANCE(311);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 225:
      if (lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 226:
      if (lookahead == 'x') ADVANCE(202);
      END_STATE();
    case 227:
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 228:
      if (lookahead == 'x') ADVANCE(213);
      END_STATE();
    case 229:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 230:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 231:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 232:
      if (lookahead == 'z') ADVANCE(72);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 's') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(180);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(436);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(328);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(348);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(335);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(421);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(464);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(447);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 'u') ADVANCE(450);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(425);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(357);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(472);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'b') ADVANCE(411);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(284);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(403);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(320);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(407);
      if (lookahead == 'p') ADVANCE(479);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(471);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(459);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'c') ADVANCE(462);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(359);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(492);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(481);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(264);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(316);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(259);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(309);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(269);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(249);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(272);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(301);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(299);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(293);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(455);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(453);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(361);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(446);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(413);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(468);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(460);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(461);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(484);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(291);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(332);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(334);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(485);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(295);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(377);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(443);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(388);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(469);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(470);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(431);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(433);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'k') ADVANCE(289);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(349);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(307);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(475);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(276);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(393);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(376);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(372);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(373);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(381);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == 'w') ADVANCE(445);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'm') ADVANCE(435);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(318);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(253);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(261);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(247);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(355);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(392);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'n') ADVANCE(467);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(419);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(420);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(297);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(409);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(480);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(473);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(456);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(346);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 's') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 's') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead == 't') ADVANCE(338);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 's') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(341);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(274);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(251);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(303);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(305);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(322);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(263);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(282);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(286);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(487);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(491);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(441);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(490);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(401);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 't') ADVANCE(449);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(463);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(457);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(458);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(412);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'w') ADVANCE(448);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'x') ADVANCE(466);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'x') ADVANCE(474);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'y') ADVANCE(280);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'y') ADVANCE(493);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'y') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == 'z') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(452);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(428);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '^') ADVANCE(489);
      if (lookahead == '_') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(489);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(489);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(498);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 17},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 17},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 17},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 17},
  [299] = {.lex_state = 17},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 17},
  [302] = {.lex_state = 17},
  [303] = {.lex_state = 17},
  [304] = {.lex_state = 17},
  [305] = {.lex_state = 238},
  [306] = {.lex_state = 17},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 17},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 17},
  [311] = {.lex_state = 17},
  [312] = {.lex_state = 17},
  [313] = {.lex_state = 17},
  [314] = {.lex_state = 17},
  [315] = {.lex_state = 17},
  [316] = {.lex_state = 17},
  [317] = {.lex_state = 17},
  [318] = {.lex_state = 17},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 17},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 17},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 17},
  [328] = {.lex_state = 17},
  [329] = {.lex_state = 7},
  [330] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_COLONunextractable] = ACTIONS(1),
    [anon_sym_COLONon_merge] = ACTIONS(1),
    [anon_sym_COLONmerge] = ACTIONS(1),
    [anon_sym_COLONdefault] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [anon_sym_ruleset] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_COLONruleset] = ACTIONS(1),
    [anon_sym_COLONname] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_COLONwhen] = ACTIONS(1),
    [anon_sym_birewrite] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_COLONuntil] = ACTIONS(1),
    [anon_sym_simplify] = ACTIONS(1),
    [anon_sym_add_DASHruleset] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_query_DASHextract] = ACTIONS(1),
    [anon_sym_COLONvariants] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_check_DASHproof] = ACTIONS(1),
    [anon_sym_run_DASHschedule] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_print_DASHtable] = ACTIONS(1),
    [anon_sym_print_DASHsize] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_fail] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_saturate] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_COLONcost] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_extract] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_num] = ACTIONS(1),
    [sym_unum] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_f64_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(319),
    [sym_comment] = STATE(1),
    [sym_lparen] = STATE(2),
    [sym_command] = STATE(242),
    [sym_nonletaction] = STATE(162),
    [sym_callexpr] = STATE(163),
    [aux_sym_source_file_repeat1] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_datatype,
    ACTIONS(17), 1,
      anon_sym_sort,
    ACTIONS(19), 1,
      anon_sym_function,
    ACTIONS(21), 1,
      anon_sym_declare,
    ACTIONS(23), 1,
      anon_sym_relation,
    ACTIONS(27), 1,
      anon_sym_rule,
    ACTIONS(31), 1,
      anon_sym_run,
    ACTIONS(33), 1,
      anon_sym_simplify,
    ACTIONS(35), 1,
      anon_sym_calc,
    ACTIONS(37), 1,
      anon_sym_query_DASHextract,
    ACTIONS(39), 1,
      anon_sym_check,
    ACTIONS(41), 1,
      anon_sym_check_DASHproof,
    ACTIONS(43), 1,
      anon_sym_run_DASHschedule,
    ACTIONS(47), 1,
      anon_sym_print_DASHtable,
    ACTIONS(49), 1,
      anon_sym_input,
    ACTIONS(51), 1,
      anon_sym_output,
    ACTIONS(53), 1,
      anon_sym_fail,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(57), 1,
      anon_sym_delete,
    ACTIONS(59), 1,
      anon_sym_union,
    ACTIONS(61), 1,
      anon_sym_panic,
    ACTIONS(63), 1,
      anon_sym_extract,
    ACTIONS(65), 1,
      sym_ident,
    STATE(2), 1,
      sym_comment,
    STATE(322), 1,
      sym_lparen,
    ACTIONS(13), 2,
      anon_sym_set_DASHoption,
      anon_sym_let,
    ACTIONS(29), 2,
      anon_sym_rewrite,
      anon_sym_birewrite,
    ACTIONS(45), 2,
      anon_sym_push,
      anon_sym_pop,
    ACTIONS(25), 3,
      anon_sym_ruleset,
      anon_sym_add_DASHruleset,
      anon_sym_print_DASHsize,
  [102] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_comment,
    ACTIONS(69), 33,
      anon_sym_LBRACK,
      anon_sym_set_DASHoption,
      anon_sym_datatype,
      anon_sym_sort,
      anon_sym_function,
      anon_sym_declare,
      anon_sym_relation,
      anon_sym_ruleset,
      anon_sym_rule,
      anon_sym_rewrite,
      anon_sym_birewrite,
      anon_sym_let,
      anon_sym_run,
      anon_sym_simplify,
      anon_sym_add_DASHruleset,
      anon_sym_calc,
      anon_sym_query_DASHextract,
      anon_sym_check,
      anon_sym_check_DASHproof,
      anon_sym_run_DASHschedule,
      anon_sym_push,
      anon_sym_pop,
      anon_sym_print_DASHtable,
      anon_sym_print_DASHsize,
      anon_sym_input,
      anon_sym_output,
      anon_sym_fail,
      anon_sym_include,
      anon_sym_delete,
      anon_sym_union,
      anon_sym_panic,
      anon_sym_extract,
      sym_ident,
  [147] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(265), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [209] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(206), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [271] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(182), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [333] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_command_repeat5,
    STATE(7), 1,
      sym_comment,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(184), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [395] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(184), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [457] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(173), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [519] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_command_repeat5,
    STATE(10), 1,
      sym_comment,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(186), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [581] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(192), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [643] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(172), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [705] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(172), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [767] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(108), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [829] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(272), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [891] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(102), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [953] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(229), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1015] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_command_repeat5,
    STATE(18), 1,
      sym_comment,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(178), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1077] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_command_repeat5,
    STATE(19), 1,
      sym_comment,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(121), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1139] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(121), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1201] = 19,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_command_repeat5,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(190), 1,
      sym_rparen,
    STATE(282), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1263] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(268), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1322] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(89), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1381] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(59), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1440] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(261), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1499] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(142), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1558] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(190), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1617] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(172), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1676] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      aux_sym_command_repeat2,
    STATE(29), 1,
      sym_comment,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(243), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1735] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(106), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1794] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(173), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1853] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_command_repeat2,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(86), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1912] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      aux_sym_command_repeat2,
    STATE(33), 1,
      sym_comment,
    STATE(52), 1,
      sym_rparen,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1971] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      aux_sym_command_repeat2,
    STATE(34), 1,
      sym_comment,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(135), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2030] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      aux_sym_command_repeat2,
    STATE(35), 1,
      sym_comment,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(130), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2089] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 1,
      sym_num,
    ACTIONS(121), 1,
      aux_sym_f64_token1,
    ACTIONS(124), 1,
      sym_ident,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_string,
    STATE(84), 1,
      sym_fact,
    STATE(90), 1,
      sym_expr,
    STATE(282), 1,
      sym_lparen,
    STATE(36), 2,
      sym_comment,
      aux_sym_command_repeat5,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(118), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2146] = 18,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      aux_sym_command_repeat2,
    STATE(37), 1,
      sym_comment,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(246), 1,
      sym_rparen,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2205] = 17,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_comment,
    STATE(171), 1,
      sym_rparen,
    STATE(197), 1,
      sym_string,
    STATE(237), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2261] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(150), 1,
      sym_num,
    ACTIONS(156), 1,
      aux_sym_f64_token1,
    ACTIONS(159), 1,
      sym_ident,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(39), 2,
      sym_comment,
      aux_sym_command_repeat2,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(153), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2315] = 16,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_COLONvariants,
    STATE(40), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(247), 1,
      sym_fact,
    STATE(276), 1,
      sym_lparen,
    STATE(294), 1,
      sym_expr,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2368] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      aux_sym_command_repeat2,
    STATE(41), 1,
      sym_comment,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2418] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(266), 1,
      sym_fact,
    STATE(276), 1,
      sym_lparen,
    STATE(294), 1,
      sym_expr,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2468] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      aux_sym_command_repeat2,
    STATE(43), 1,
      sym_comment,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2518] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_command_repeat2,
    STATE(109), 1,
      sym_string,
    STATE(114), 1,
      sym_expr,
    STATE(303), 1,
      sym_lparen,
    STATE(119), 2,
      sym_literal,
      sym_callexpr,
    STATE(124), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2568] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      aux_sym_command_repeat2,
    STATE(45), 1,
      sym_comment,
    STATE(78), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2618] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_num,
    ACTIONS(183), 1,
      aux_sym_f64_token1,
    ACTIONS(186), 1,
      sym_ident,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_string,
    STATE(114), 1,
      sym_expr,
    STATE(303), 1,
      sym_lparen,
    STATE(46), 2,
      sym_comment,
      aux_sym_command_repeat2,
    STATE(119), 2,
      sym_literal,
      sym_callexpr,
    STATE(124), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(180), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2666] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_command_repeat2,
    STATE(47), 1,
      sym_comment,
    STATE(76), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2716] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_command_repeat2,
    STATE(48), 1,
      sym_comment,
    STATE(109), 1,
      sym_string,
    STATE(114), 1,
      sym_expr,
    STATE(303), 1,
      sym_lparen,
    STATE(119), 2,
      sym_literal,
      sym_callexpr,
    STATE(124), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2766] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_command_repeat2,
    STATE(49), 1,
      sym_comment,
    STATE(75), 1,
      sym_expr,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2816] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(256), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2863] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(221), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2910] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(261), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2957] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_expr,
    STATE(53), 1,
      sym_comment,
    STATE(79), 1,
      sym_string,
    STATE(327), 1,
      sym_lparen,
    STATE(77), 2,
      sym_f64,
      sym_symstring,
    STATE(80), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3004] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(268), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3051] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(203), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3098] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(271), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3145] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_comment,
    STATE(68), 1,
      sym_expr,
    STATE(109), 1,
      sym_string,
    STATE(303), 1,
      sym_lparen,
    STATE(119), 2,
      sym_literal,
      sym_callexpr,
    STATE(124), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3192] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(171), 1,
      aux_sym_f64_token1,
    ACTIONS(173), 1,
      sym_ident,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_comment,
    STATE(74), 1,
      sym_expr,
    STATE(109), 1,
      sym_string,
    STATE(303), 1,
      sym_lparen,
    STATE(119), 2,
      sym_literal,
      sym_callexpr,
    STATE(124), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(169), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3239] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(253), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3286] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(250), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3333] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(222), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3380] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(246), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3427] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(267), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3474] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(239), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3521] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(230), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3568] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(241), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3615] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(233), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3662] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_comment,
    STATE(188), 1,
      sym_expr,
    STATE(197), 1,
      sym_string,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3709] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(235), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3756] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(208), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3803] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(259), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3850] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(205), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3897] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(264), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3944] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      sym_num,
    ACTIONS(134), 1,
      aux_sym_f64_token1,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_comment,
    STATE(197), 1,
      sym_string,
    STATE(237), 1,
      sym_expr,
    STATE(310), 1,
      sym_lparen,
    STATE(198), 2,
      sym_literal,
      sym_callexpr,
    STATE(200), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(132), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3991] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      sym_comment,
    STATE(292), 1,
      sym_rparen,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4020] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_comment,
    STATE(87), 1,
      sym_rparen,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4049] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    ACTIONS(196), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(198), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4071] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_comment,
    ACTIONS(192), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4093] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    ACTIONS(200), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(202), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4115] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(206), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4137] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(210), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4159] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_comment,
    ACTIONS(212), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(214), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4181] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_comment,
    ACTIONS(216), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(218), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4203] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      sym_comment,
    ACTIONS(220), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(222), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4225] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_comment,
    ACTIONS(67), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(69), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4247] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(226), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4269] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(230), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4291] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(234), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4313] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      sym_comment,
    ACTIONS(236), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(238), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4335] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(242), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4357] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_command_repeat3,
    STATE(120), 1,
      sym_lparen,
    STATE(163), 1,
      sym_callexpr,
    STATE(195), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4390] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_comment,
    STATE(120), 1,
      sym_lparen,
    STATE(125), 1,
      aux_sym_command_repeat3,
    STATE(163), 1,
      sym_callexpr,
    STATE(175), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4423] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_command_repeat3,
    STATE(120), 1,
      sym_lparen,
    STATE(163), 1,
      sym_callexpr,
    STATE(176), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4456] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_comment,
    STATE(120), 1,
      sym_lparen,
    STATE(125), 1,
      aux_sym_command_repeat3,
    STATE(163), 1,
      sym_callexpr,
    STATE(176), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4489] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_command_repeat3,
    STATE(120), 1,
      sym_lparen,
    STATE(163), 1,
      sym_callexpr,
    STATE(174), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4522] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      sym_comment,
    STATE(120), 1,
      sym_lparen,
    STATE(125), 1,
      aux_sym_command_repeat3,
    STATE(163), 1,
      sym_callexpr,
    STATE(166), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4555] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_command_repeat3,
    STATE(97), 1,
      sym_comment,
    STATE(120), 1,
      sym_lparen,
    STATE(163), 1,
      sym_callexpr,
    STATE(194), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4588] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_comment,
    STATE(120), 1,
      sym_lparen,
    STATE(125), 1,
      aux_sym_command_repeat3,
    STATE(163), 1,
      sym_callexpr,
    STATE(194), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4621] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
    STATE(120), 1,
      sym_lparen,
    STATE(125), 1,
      aux_sym_command_repeat3,
    STATE(163), 1,
      sym_callexpr,
    STATE(196), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4654] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_command_repeat3,
    STATE(100), 1,
      sym_comment,
    STATE(120), 1,
      sym_lparen,
    STATE(163), 1,
      sym_callexpr,
    STATE(196), 1,
      sym_rparen,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4687] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
    ACTIONS(212), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONname,
      anon_sym_COLONwhen,
  [4706] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(248), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4726] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(103), 1,
      sym_comment,
    STATE(121), 1,
      sym_rparen,
    STATE(140), 1,
      aux_sym_command_repeat7,
    STATE(180), 1,
      sym_schedule,
    STATE(234), 1,
      sym_lparen,
  [4760] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(104), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_command_repeat7,
    STATE(180), 1,
      sym_schedule,
    STATE(184), 1,
      sym_rparen,
    STATE(234), 1,
      sym_lparen,
  [4794] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(254), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4814] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(226), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4834] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(107), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_command_repeat7,
    STATE(115), 1,
      sym_rparen,
    STATE(180), 1,
      sym_schedule,
    STATE(234), 1,
      sym_lparen,
  [4868] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(258), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4888] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(202), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4908] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(110), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_command_repeat7,
    STATE(180), 1,
      sym_schedule,
    STATE(186), 1,
      sym_rparen,
    STATE(234), 1,
      sym_lparen,
  [4942] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(103), 1,
      aux_sym_command_repeat7,
    STATE(108), 1,
      sym_rparen,
    STATE(111), 1,
      sym_comment,
    STATE(180), 1,
      sym_schedule,
    STATE(234), 1,
      sym_lparen,
  [4976] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(108), 1,
      sym_rparen,
    STATE(112), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_command_repeat7,
    STATE(180), 1,
      sym_schedule,
    STATE(234), 1,
      sym_lparen,
  [5010] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(113), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_command_repeat7,
    STATE(180), 1,
      sym_schedule,
    STATE(192), 1,
      sym_rparen,
    STATE(234), 1,
      sym_lparen,
  [5044] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5064] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(115), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(262), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5084] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(113), 1,
      aux_sym_command_repeat7,
    STATE(116), 1,
      sym_comment,
    STATE(178), 1,
      sym_rparen,
    STATE(180), 1,
      sym_schedule,
    STATE(234), 1,
      sym_lparen,
  [5118] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(234), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5138] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(104), 1,
      aux_sym_command_repeat7,
    STATE(118), 1,
      sym_comment,
    STATE(180), 1,
      sym_schedule,
    STATE(186), 1,
      sym_rparen,
    STATE(234), 1,
      sym_lparen,
  [5172] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(206), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5192] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_delete,
    ACTIONS(59), 1,
      anon_sym_union,
    ACTIONS(61), 1,
      anon_sym_panic,
    ACTIONS(63), 1,
      anon_sym_extract,
    ACTIONS(65), 1,
      sym_ident,
    ACTIONS(264), 1,
      anon_sym_let,
    STATE(120), 1,
      sym_comment,
    STATE(322), 1,
      sym_lparen,
  [5226] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(268), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5246] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      anon_sym_COLONunextractable,
    ACTIONS(272), 1,
      anon_sym_COLONon_merge,
    ACTIONS(274), 1,
      anon_sym_COLONmerge,
    ACTIONS(276), 1,
      anon_sym_COLONdefault,
    ACTIONS(278), 1,
      anon_sym_COLONcost,
    STATE(122), 1,
      sym_comment,
    STATE(147), 1,
      sym_cost,
    STATE(173), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5278] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(210), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5298] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(198), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5318] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_lparen,
    STATE(163), 1,
      sym_callexpr,
    STATE(216), 1,
      sym_action,
    STATE(220), 1,
      sym_nonletaction,
    ACTIONS(280), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(283), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(125), 2,
      sym_comment,
      aux_sym_command_repeat3,
  [5346] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_comment,
    ACTIONS(67), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_run,
      anon_sym_saturate,
      anon_sym_seq,
      anon_sym_repeat,
      anon_sym_set,
  [5364] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      sym_ident,
    STATE(110), 1,
      aux_sym_command_repeat7,
    STATE(127), 1,
      sym_comment,
    STATE(180), 1,
      sym_schedule,
    STATE(187), 1,
      sym_rparen,
    STATE(234), 1,
      sym_lparen,
  [5398] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(218), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5418] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(214), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5438] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      anon_sym_DQUOTE,
    ACTIONS(238), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [5458] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_command_repeat1,
    STATE(173), 1,
      sym_rparen,
    STATE(204), 1,
      sym_variant,
    STATE(301), 1,
      sym_lparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5485] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(162), 1,
      sym_nonletaction,
    STATE(163), 1,
      sym_callexpr,
    STATE(242), 1,
      sym_command,
    ACTIONS(287), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(132), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [5512] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(278), 1,
      anon_sym_COLONcost,
    ACTIONS(290), 1,
      sym_ident,
    STATE(133), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_command_repeat4,
    STATE(207), 1,
      sym_rparen,
    STATE(217), 1,
      sym_type,
    STATE(263), 1,
      sym_cost,
  [5543] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
    ACTIONS(69), 7,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_delete,
      anon_sym_union,
      anon_sym_panic,
      anon_sym_extract,
      sym_ident,
  [5562] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_comment,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5579] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_rparen,
    STATE(136), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_command_repeat6,
    STATE(232), 1,
      sym_identsort,
    STATE(326), 1,
      sym_lparen,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5606] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(132), 1,
      aux_sym_source_file_repeat1,
    STATE(137), 1,
      sym_comment,
    STATE(162), 1,
      sym_nonletaction,
    STATE(163), 1,
      sym_callexpr,
    STATE(242), 1,
      sym_command,
    ACTIONS(7), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5635] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      aux_sym_command_repeat1,
    STATE(138), 1,
      sym_comment,
    STATE(192), 1,
      sym_rparen,
    STATE(204), 1,
      sym_variant,
    STATE(301), 1,
      sym_lparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5662] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_rparen,
    STATE(139), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_command_repeat6,
    STATE(232), 1,
      sym_identsort,
    STATE(326), 1,
      sym_lparen,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5689] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    ACTIONS(304), 1,
      sym_ident,
    STATE(180), 1,
      sym_schedule,
    STATE(234), 1,
      sym_lparen,
    STATE(140), 2,
      sym_comment,
      aux_sym_command_repeat7,
  [5718] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(278), 1,
      anon_sym_COLONcost,
    ACTIONS(290), 1,
      sym_ident,
    STATE(133), 1,
      aux_sym_command_repeat4,
    STATE(141), 1,
      sym_comment,
    STATE(217), 1,
      sym_type,
    STATE(226), 1,
      sym_rparen,
    STATE(244), 1,
      sym_cost,
  [5749] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_comment,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5766] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      sym_variant,
    STATE(301), 1,
      sym_lparen,
    ACTIONS(307), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(310), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(143), 2,
      sym_comment,
      aux_sym_command_repeat1,
  [5788] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(232), 1,
      sym_identsort,
    STATE(326), 1,
      sym_lparen,
    ACTIONS(312), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(315), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(144), 2,
      sym_comment,
      aux_sym_command_repeat6,
  [5810] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5826] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(146), 1,
      sym_comment,
    ACTIONS(319), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5842] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      anon_sym_COLONunextractable,
    ACTIONS(323), 1,
      anon_sym_COLONon_merge,
    ACTIONS(325), 1,
      anon_sym_COLONmerge,
    ACTIONS(327), 1,
      anon_sym_COLONdefault,
    STATE(147), 1,
      sym_comment,
    STATE(172), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5868] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_comment,
    ACTIONS(329), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5884] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_comment,
    STATE(192), 1,
      sym_rparen,
    STATE(311), 1,
      sym_lparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5905] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      sym_lparen,
    STATE(150), 1,
      sym_comment,
    STATE(162), 1,
      sym_nonletaction,
    STATE(163), 1,
      sym_callexpr,
    STATE(247), 1,
      sym_command,
    ACTIONS(7), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5928] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      sym_ident,
    STATE(217), 1,
      sym_type,
    ACTIONS(331), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    STATE(151), 2,
      sym_comment,
      aux_sym_command_repeat4,
  [5949] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      sym_ident,
    STATE(152), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_command_repeat4,
    STATE(217), 1,
      sym_type,
    STATE(266), 1,
      sym_rparen,
  [5974] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(323), 1,
      anon_sym_COLONon_merge,
    ACTIONS(325), 1,
      anon_sym_COLONmerge,
    ACTIONS(327), 1,
      anon_sym_COLONdefault,
    STATE(153), 1,
      sym_comment,
    STATE(172), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5997] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      sym_ident,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_command_repeat4,
    STATE(217), 1,
      sym_type,
    STATE(285), 1,
      sym_rparen,
  [6022] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      sym_ident,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_command_repeat4,
    STATE(155), 1,
      sym_comment,
    STATE(217), 1,
      sym_type,
    STATE(280), 1,
      sym_rparen,
  [6047] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      sym_ident,
    STATE(151), 1,
      aux_sym_command_repeat4,
    STATE(156), 1,
      sym_comment,
    STATE(217), 1,
      sym_type,
    STATE(246), 1,
      sym_rparen,
  [6072] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym_comment,
    ACTIONS(342), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [6087] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_COLONon_merge,
    ACTIONS(346), 1,
      anon_sym_COLONmerge,
    ACTIONS(348), 1,
      anon_sym_COLONdefault,
    STATE(158), 1,
      sym_comment,
    STATE(190), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6110] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_comment,
    ACTIONS(350), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6124] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(254), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6140] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_comment,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6154] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_comment,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6168] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_comment,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6182] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_comment,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6196] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_comment,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6210] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_COLONruleset,
    ACTIONS(364), 1,
      anon_sym_COLONname,
    STATE(161), 1,
      sym_rparen,
    STATE(166), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6230] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(366), 1,
      anon_sym_COLONuntil,
    ACTIONS(368), 1,
      sym_ident,
    STATE(115), 1,
      sym_rparen,
    STATE(167), 1,
      sym_comment,
  [6252] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(168), 1,
      sym_comment,
    ACTIONS(370), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6266] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      anon_sym_COLONuntil,
    ACTIONS(374), 1,
      sym_ident,
    STATE(169), 1,
      sym_comment,
    STATE(187), 1,
      sym_rparen,
  [6288] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(214), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6304] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      sym_comment,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6318] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_comment,
    ACTIONS(378), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6332] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_comment,
    ACTIONS(380), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6346] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      anon_sym_COLONruleset,
    ACTIONS(384), 1,
      anon_sym_COLONname,
    STATE(174), 1,
      sym_comment,
    STATE(190), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6366] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_COLONmerge,
    ACTIONS(388), 1,
      anon_sym_COLONdefault,
    STATE(175), 1,
      sym_comment,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6386] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_COLONmerge,
    ACTIONS(392), 1,
      anon_sym_COLONdefault,
    STATE(161), 1,
      sym_rparen,
    STATE(176), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6406] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(177), 1,
      sym_comment,
    ACTIONS(394), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6420] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_comment,
    ACTIONS(396), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6434] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(398), 1,
      sym_ident,
    STATE(56), 1,
      sym_schedule,
    STATE(179), 1,
      sym_comment,
    STATE(215), 1,
      sym_lparen,
  [6456] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(180), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(402), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6472] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym_comment,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6486] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(248), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6502] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      sym_comment,
    ACTIONS(406), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6516] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(268), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6532] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_comment,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6546] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(258), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6562] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(187), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(262), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [6578] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_COLONruleset,
    ACTIONS(412), 1,
      anon_sym_COLONwhen,
    STATE(173), 1,
      sym_rparen,
    STATE(188), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6598] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6612] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      sym_comment,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6626] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(191), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6640] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      sym_comment,
    ACTIONS(416), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6654] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      sym_comment,
    ACTIONS(418), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6668] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      anon_sym_COLONruleset,
    ACTIONS(422), 1,
      anon_sym_COLONname,
    STATE(177), 1,
      sym_rparen,
    STATE(194), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6688] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_COLONmerge,
    ACTIONS(426), 1,
      anon_sym_COLONdefault,
    STATE(177), 1,
      sym_rparen,
    STATE(195), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6708] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      anon_sym_COLONmerge,
    ACTIONS(430), 1,
      anon_sym_COLONdefault,
    STATE(168), 1,
      sym_rparen,
    STATE(196), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6728] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      sym_comment,
    ACTIONS(200), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6742] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6756] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      sym_comment,
    ACTIONS(208), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6770] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [6784] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      sym_comment,
    ACTIONS(432), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6798] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_comment,
    ACTIONS(434), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6812] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      anon_sym_COLONdefault,
    STATE(177), 1,
      sym_rparen,
    STATE(203), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6829] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      sym_comment,
    ACTIONS(436), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6842] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(438), 1,
      anon_sym_COLONdefault,
    STATE(193), 1,
      sym_rparen,
    STATE(205), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6859] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      anon_sym_COLONruleset,
    STATE(177), 1,
      sym_rparen,
    STATE(206), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6876] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      sym_comment,
    ACTIONS(442), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6889] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_COLONdefault,
    STATE(159), 1,
      sym_rparen,
    STATE(208), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6906] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(446), 1,
      anon_sym_COLONuntil,
    STATE(108), 1,
      sym_rparen,
    STATE(209), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6923] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(210), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6936] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_COLONuntil,
    STATE(173), 1,
      sym_rparen,
    STATE(211), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6953] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(452), 1,
      sym_unum,
    STATE(192), 1,
      sym_rparen,
    STATE(212), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6970] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(454), 1,
      anon_sym_COLONname,
    STATE(183), 1,
      sym_rparen,
    STATE(213), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6987] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7000] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      anon_sym_run,
    ACTIONS(462), 1,
      anon_sym_repeat,
    STATE(215), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [7017] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      sym_comment,
    ACTIONS(464), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7030] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    ACTIONS(468), 2,
      anon_sym_RBRACK,
      sym_ident,
  [7045] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(218), 1,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7058] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(219), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    ACTIONS(472), 2,
      anon_sym_RBRACK,
      sym_ident,
  [7073] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(220), 1,
      sym_comment,
    ACTIONS(474), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7086] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_COLONdefault,
    STATE(190), 1,
      sym_rparen,
    STATE(221), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7103] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      anon_sym_COLONdefault,
    STATE(161), 1,
      sym_rparen,
    STATE(222), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7120] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_COLONuntil,
    STATE(192), 1,
      sym_rparen,
    STATE(223), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7137] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_COLONname,
    STATE(161), 1,
      sym_rparen,
    STATE(224), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7154] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(478), 1,
      anon_sym_COLONuntil,
    STATE(186), 1,
      sym_rparen,
    STATE(225), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7171] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7184] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(482), 1,
      sym_unum,
    STATE(178), 1,
      sym_rparen,
    STATE(227), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7201] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_COLONname,
    STATE(168), 1,
      sym_rparen,
    STATE(228), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7218] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_COLONruleset,
    STATE(161), 1,
      sym_rparen,
    STATE(229), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7235] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(430), 1,
      anon_sym_COLONdefault,
    STATE(168), 1,
      sym_rparen,
    STATE(230), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7252] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      sym_schema,
    STATE(154), 1,
      sym_lparen,
    STATE(231), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7269] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(232), 1,
      sym_comment,
    ACTIONS(490), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7282] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      anon_sym_COLONdefault,
    STATE(183), 1,
      sym_rparen,
    STATE(233), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7299] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(492), 1,
      anon_sym_run,
    ACTIONS(496), 1,
      anon_sym_repeat,
    STATE(234), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [7316] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(183), 1,
      sym_rparen,
    STATE(235), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7330] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_RBRACK,
      sym_ident,
  [7344] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_rparen,
    STATE(237), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7358] = 5,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    ACTIONS(502), 1,
      aux_sym_string_token1,
    STATE(238), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_string_repeat1,
  [7374] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(168), 1,
      sym_rparen,
    STATE(239), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7388] = 5,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      aux_sym_string_token1,
    ACTIONS(504), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      aux_sym_string_repeat1,
    STATE(240), 1,
      sym_comment,
  [7404] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(218), 1,
      sym_rparen,
    STATE(241), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7418] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      sym_comment,
    ACTIONS(506), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7430] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      sym_rparen,
    STATE(243), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7444] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      sym_rparen,
    STATE(244), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7458] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_lparen,
    STATE(245), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7472] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      sym_rparen,
    STATE(246), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7486] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(192), 1,
      sym_rparen,
    STATE(247), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7500] = 5,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      aux_sym_string_token1,
    ACTIONS(508), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_string_repeat1,
  [7516] = 5,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      aux_sym_string_token1,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      aux_sym_string_repeat1,
    STATE(249), 1,
      sym_comment,
  [7532] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      sym_rparen,
    STATE(250), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7546] = 5,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      aux_sym_string_token1,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
    STATE(251), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym_string_repeat1,
  [7562] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_lparen,
    STATE(252), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7576] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_rparen,
    STATE(253), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7590] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_rparen,
    STATE(254), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7604] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_lparen,
    STATE(255), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7618] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_rparen,
    STATE(256), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7632] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_lparen,
    STATE(257), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7646] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(210), 1,
      sym_rparen,
    STATE(258), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7660] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      sym_rparen,
    STATE(259), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7674] = 5,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      aux_sym_string_token1,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym_string_repeat1,
  [7690] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym_rparen,
    STATE(261), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7704] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(262), 1,
      sym_comment,
    STATE(304), 1,
      sym_lparen,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7718] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      sym_rparen,
    STATE(263), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7732] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_rparen,
    STATE(264), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7746] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_lparen,
    STATE(265), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7760] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_rparen,
    STATE(266), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7774] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      sym_rparen,
    STATE(267), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7788] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(177), 1,
      sym_rparen,
    STATE(268), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7802] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      sym_rparen,
    STATE(269), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7816] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      sym_lparen,
    STATE(270), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7830] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_rparen,
    STATE(271), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7844] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_lparen,
    STATE(272), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7858] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_lparen,
    STATE(273), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7872] = 4,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      aux_sym_string_token1,
    STATE(274), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [7886] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_lparen,
    STATE(275), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7900] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      sym_ident,
    ACTIONS(523), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym_comment,
  [7913] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(235), 1,
      sym_string,
    STATE(277), 1,
      sym_comment,
  [7926] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(525), 1,
      sym_ident,
    STATE(258), 1,
      sym_type,
    STATE(278), 1,
      sym_comment,
  [7939] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string,
    STATE(279), 1,
      sym_comment,
  [7952] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(525), 1,
      sym_ident,
    STATE(146), 1,
      sym_type,
    STATE(280), 1,
      sym_comment,
  [7965] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(239), 1,
      sym_string,
    STATE(281), 1,
      sym_comment,
  [7978] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(527), 1,
      anon_sym_EQ,
    ACTIONS(529), 1,
      sym_ident,
    STATE(282), 1,
      sym_comment,
  [7991] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      sym_string,
    STATE(283), 1,
      sym_comment,
  [8004] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(250), 1,
      sym_string,
    STATE(284), 1,
      sym_comment,
  [8017] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(525), 1,
      sym_ident,
    STATE(145), 1,
      sym_type,
    STATE(285), 1,
      sym_comment,
  [8030] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(286), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_EQ,
      sym_ident,
  [8041] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(269), 1,
      sym_string,
    STATE(287), 1,
      sym_comment,
  [8054] = 4,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      aux_sym_string_token1,
    STATE(288), 1,
      sym_comment,
  [8067] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      sym_string,
    STATE(289), 1,
      sym_comment,
  [8080] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(247), 1,
      sym_string,
    STATE(290), 1,
      sym_comment,
  [8093] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(259), 1,
      sym_string,
    STATE(291), 1,
      sym_comment,
  [8106] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(292), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8117] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(535), 1,
      sym_unum,
    ACTIONS(537), 1,
      sym_ident,
    STATE(293), 1,
      sym_comment,
  [8130] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(294), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8141] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      sym_ident,
    STATE(295), 1,
      sym_comment,
  [8151] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(539), 1,
      sym_ident,
    STATE(296), 1,
      sym_comment,
  [8161] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      sym_unum,
    STATE(297), 1,
      sym_comment,
  [8171] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(543), 1,
      sym_ident,
    STATE(298), 1,
      sym_comment,
  [8181] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(482), 1,
      sym_ident,
    STATE(299), 1,
      sym_comment,
  [8191] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(545), 1,
      sym_unum,
    STATE(300), 1,
      sym_comment,
  [8201] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      sym_ident,
    STATE(301), 1,
      sym_comment,
  [8211] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      sym_ident,
    STATE(302), 1,
      sym_comment,
  [8221] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(551), 1,
      sym_ident,
    STATE(303), 1,
      sym_comment,
  [8231] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      sym_ident,
    STATE(304), 1,
      sym_comment,
  [8241] = 3,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(555), 1,
      aux_sym_comment_token1,
    STATE(305), 1,
      sym_comment,
  [8251] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(557), 1,
      sym_ident,
    STATE(306), 1,
      sym_comment,
  [8261] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      sym_unum,
    STATE(307), 1,
      sym_comment,
  [8271] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(561), 1,
      sym_ident,
    STATE(308), 1,
      sym_comment,
  [8281] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(563), 1,
      sym_ident,
    STATE(309), 1,
      sym_comment,
  [8291] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      sym_ident,
    STATE(310), 1,
      sym_comment,
  [8301] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      sym_ident,
    STATE(311), 1,
      sym_comment,
  [8311] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_ident,
    STATE(312), 1,
      sym_comment,
  [8321] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(569), 1,
      sym_ident,
    STATE(313), 1,
      sym_comment,
  [8331] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(571), 1,
      sym_ident,
    STATE(314), 1,
      sym_comment,
  [8341] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(573), 1,
      sym_ident,
    STATE(315), 1,
      sym_comment,
  [8351] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(575), 1,
      sym_ident,
    STATE(316), 1,
      sym_comment,
  [8361] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(577), 1,
      sym_ident,
    STATE(317), 1,
      sym_comment,
  [8371] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(452), 1,
      sym_ident,
    STATE(318), 1,
      sym_comment,
  [8381] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      sym_comment,
  [8391] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      sym_ident,
    STATE(320), 1,
      sym_comment,
  [8401] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(583), 1,
      sym_ident,
    STATE(321), 1,
      sym_comment,
  [8411] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(585), 1,
      anon_sym_set,
    STATE(322), 1,
      sym_comment,
  [8421] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(587), 1,
      sym_ident,
    STATE(323), 1,
      sym_comment,
  [8431] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      sym_ident,
    STATE(324), 1,
      sym_comment,
  [8441] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      sym_unum,
    STATE(325), 1,
      sym_comment,
  [8451] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      sym_ident,
    STATE(326), 1,
      sym_comment,
  [8461] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      sym_ident,
    STATE(327), 1,
      sym_comment,
  [8471] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(597), 1,
      sym_ident,
    STATE(328), 1,
      sym_comment,
  [8481] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(599), 1,
      sym_unum,
    STATE(329), 1,
      sym_comment,
  [8491] = 1,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 147,
  [SMALL_STATE(5)] = 209,
  [SMALL_STATE(6)] = 271,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 395,
  [SMALL_STATE(9)] = 457,
  [SMALL_STATE(10)] = 519,
  [SMALL_STATE(11)] = 581,
  [SMALL_STATE(12)] = 643,
  [SMALL_STATE(13)] = 705,
  [SMALL_STATE(14)] = 767,
  [SMALL_STATE(15)] = 829,
  [SMALL_STATE(16)] = 891,
  [SMALL_STATE(17)] = 953,
  [SMALL_STATE(18)] = 1015,
  [SMALL_STATE(19)] = 1077,
  [SMALL_STATE(20)] = 1139,
  [SMALL_STATE(21)] = 1201,
  [SMALL_STATE(22)] = 1263,
  [SMALL_STATE(23)] = 1322,
  [SMALL_STATE(24)] = 1381,
  [SMALL_STATE(25)] = 1440,
  [SMALL_STATE(26)] = 1499,
  [SMALL_STATE(27)] = 1558,
  [SMALL_STATE(28)] = 1617,
  [SMALL_STATE(29)] = 1676,
  [SMALL_STATE(30)] = 1735,
  [SMALL_STATE(31)] = 1794,
  [SMALL_STATE(32)] = 1853,
  [SMALL_STATE(33)] = 1912,
  [SMALL_STATE(34)] = 1971,
  [SMALL_STATE(35)] = 2030,
  [SMALL_STATE(36)] = 2089,
  [SMALL_STATE(37)] = 2146,
  [SMALL_STATE(38)] = 2205,
  [SMALL_STATE(39)] = 2261,
  [SMALL_STATE(40)] = 2315,
  [SMALL_STATE(41)] = 2368,
  [SMALL_STATE(42)] = 2418,
  [SMALL_STATE(43)] = 2468,
  [SMALL_STATE(44)] = 2518,
  [SMALL_STATE(45)] = 2568,
  [SMALL_STATE(46)] = 2618,
  [SMALL_STATE(47)] = 2666,
  [SMALL_STATE(48)] = 2716,
  [SMALL_STATE(49)] = 2766,
  [SMALL_STATE(50)] = 2816,
  [SMALL_STATE(51)] = 2863,
  [SMALL_STATE(52)] = 2910,
  [SMALL_STATE(53)] = 2957,
  [SMALL_STATE(54)] = 3004,
  [SMALL_STATE(55)] = 3051,
  [SMALL_STATE(56)] = 3098,
  [SMALL_STATE(57)] = 3145,
  [SMALL_STATE(58)] = 3192,
  [SMALL_STATE(59)] = 3239,
  [SMALL_STATE(60)] = 3286,
  [SMALL_STATE(61)] = 3333,
  [SMALL_STATE(62)] = 3380,
  [SMALL_STATE(63)] = 3427,
  [SMALL_STATE(64)] = 3474,
  [SMALL_STATE(65)] = 3521,
  [SMALL_STATE(66)] = 3568,
  [SMALL_STATE(67)] = 3615,
  [SMALL_STATE(68)] = 3662,
  [SMALL_STATE(69)] = 3709,
  [SMALL_STATE(70)] = 3756,
  [SMALL_STATE(71)] = 3803,
  [SMALL_STATE(72)] = 3850,
  [SMALL_STATE(73)] = 3897,
  [SMALL_STATE(74)] = 3944,
  [SMALL_STATE(75)] = 3991,
  [SMALL_STATE(76)] = 4020,
  [SMALL_STATE(77)] = 4049,
  [SMALL_STATE(78)] = 4071,
  [SMALL_STATE(79)] = 4093,
  [SMALL_STATE(80)] = 4115,
  [SMALL_STATE(81)] = 4137,
  [SMALL_STATE(82)] = 4159,
  [SMALL_STATE(83)] = 4181,
  [SMALL_STATE(84)] = 4203,
  [SMALL_STATE(85)] = 4225,
  [SMALL_STATE(86)] = 4247,
  [SMALL_STATE(87)] = 4269,
  [SMALL_STATE(88)] = 4291,
  [SMALL_STATE(89)] = 4313,
  [SMALL_STATE(90)] = 4335,
  [SMALL_STATE(91)] = 4357,
  [SMALL_STATE(92)] = 4390,
  [SMALL_STATE(93)] = 4423,
  [SMALL_STATE(94)] = 4456,
  [SMALL_STATE(95)] = 4489,
  [SMALL_STATE(96)] = 4522,
  [SMALL_STATE(97)] = 4555,
  [SMALL_STATE(98)] = 4588,
  [SMALL_STATE(99)] = 4621,
  [SMALL_STATE(100)] = 4654,
  [SMALL_STATE(101)] = 4687,
  [SMALL_STATE(102)] = 4706,
  [SMALL_STATE(103)] = 4726,
  [SMALL_STATE(104)] = 4760,
  [SMALL_STATE(105)] = 4794,
  [SMALL_STATE(106)] = 4814,
  [SMALL_STATE(107)] = 4834,
  [SMALL_STATE(108)] = 4868,
  [SMALL_STATE(109)] = 4888,
  [SMALL_STATE(110)] = 4908,
  [SMALL_STATE(111)] = 4942,
  [SMALL_STATE(112)] = 4976,
  [SMALL_STATE(113)] = 5010,
  [SMALL_STATE(114)] = 5044,
  [SMALL_STATE(115)] = 5064,
  [SMALL_STATE(116)] = 5084,
  [SMALL_STATE(117)] = 5118,
  [SMALL_STATE(118)] = 5138,
  [SMALL_STATE(119)] = 5172,
  [SMALL_STATE(120)] = 5192,
  [SMALL_STATE(121)] = 5226,
  [SMALL_STATE(122)] = 5246,
  [SMALL_STATE(123)] = 5278,
  [SMALL_STATE(124)] = 5298,
  [SMALL_STATE(125)] = 5318,
  [SMALL_STATE(126)] = 5346,
  [SMALL_STATE(127)] = 5364,
  [SMALL_STATE(128)] = 5398,
  [SMALL_STATE(129)] = 5418,
  [SMALL_STATE(130)] = 5438,
  [SMALL_STATE(131)] = 5458,
  [SMALL_STATE(132)] = 5485,
  [SMALL_STATE(133)] = 5512,
  [SMALL_STATE(134)] = 5543,
  [SMALL_STATE(135)] = 5562,
  [SMALL_STATE(136)] = 5579,
  [SMALL_STATE(137)] = 5606,
  [SMALL_STATE(138)] = 5635,
  [SMALL_STATE(139)] = 5662,
  [SMALL_STATE(140)] = 5689,
  [SMALL_STATE(141)] = 5718,
  [SMALL_STATE(142)] = 5749,
  [SMALL_STATE(143)] = 5766,
  [SMALL_STATE(144)] = 5788,
  [SMALL_STATE(145)] = 5810,
  [SMALL_STATE(146)] = 5826,
  [SMALL_STATE(147)] = 5842,
  [SMALL_STATE(148)] = 5868,
  [SMALL_STATE(149)] = 5884,
  [SMALL_STATE(150)] = 5905,
  [SMALL_STATE(151)] = 5928,
  [SMALL_STATE(152)] = 5949,
  [SMALL_STATE(153)] = 5974,
  [SMALL_STATE(154)] = 5997,
  [SMALL_STATE(155)] = 6022,
  [SMALL_STATE(156)] = 6047,
  [SMALL_STATE(157)] = 6072,
  [SMALL_STATE(158)] = 6087,
  [SMALL_STATE(159)] = 6110,
  [SMALL_STATE(160)] = 6124,
  [SMALL_STATE(161)] = 6140,
  [SMALL_STATE(162)] = 6154,
  [SMALL_STATE(163)] = 6168,
  [SMALL_STATE(164)] = 6182,
  [SMALL_STATE(165)] = 6196,
  [SMALL_STATE(166)] = 6210,
  [SMALL_STATE(167)] = 6230,
  [SMALL_STATE(168)] = 6252,
  [SMALL_STATE(169)] = 6266,
  [SMALL_STATE(170)] = 6288,
  [SMALL_STATE(171)] = 6304,
  [SMALL_STATE(172)] = 6318,
  [SMALL_STATE(173)] = 6332,
  [SMALL_STATE(174)] = 6346,
  [SMALL_STATE(175)] = 6366,
  [SMALL_STATE(176)] = 6386,
  [SMALL_STATE(177)] = 6406,
  [SMALL_STATE(178)] = 6420,
  [SMALL_STATE(179)] = 6434,
  [SMALL_STATE(180)] = 6456,
  [SMALL_STATE(181)] = 6472,
  [SMALL_STATE(182)] = 6486,
  [SMALL_STATE(183)] = 6502,
  [SMALL_STATE(184)] = 6516,
  [SMALL_STATE(185)] = 6532,
  [SMALL_STATE(186)] = 6546,
  [SMALL_STATE(187)] = 6562,
  [SMALL_STATE(188)] = 6578,
  [SMALL_STATE(189)] = 6598,
  [SMALL_STATE(190)] = 6612,
  [SMALL_STATE(191)] = 6626,
  [SMALL_STATE(192)] = 6640,
  [SMALL_STATE(193)] = 6654,
  [SMALL_STATE(194)] = 6668,
  [SMALL_STATE(195)] = 6688,
  [SMALL_STATE(196)] = 6708,
  [SMALL_STATE(197)] = 6728,
  [SMALL_STATE(198)] = 6742,
  [SMALL_STATE(199)] = 6756,
  [SMALL_STATE(200)] = 6770,
  [SMALL_STATE(201)] = 6784,
  [SMALL_STATE(202)] = 6798,
  [SMALL_STATE(203)] = 6812,
  [SMALL_STATE(204)] = 6829,
  [SMALL_STATE(205)] = 6842,
  [SMALL_STATE(206)] = 6859,
  [SMALL_STATE(207)] = 6876,
  [SMALL_STATE(208)] = 6889,
  [SMALL_STATE(209)] = 6906,
  [SMALL_STATE(210)] = 6923,
  [SMALL_STATE(211)] = 6936,
  [SMALL_STATE(212)] = 6953,
  [SMALL_STATE(213)] = 6970,
  [SMALL_STATE(214)] = 6987,
  [SMALL_STATE(215)] = 7000,
  [SMALL_STATE(216)] = 7017,
  [SMALL_STATE(217)] = 7030,
  [SMALL_STATE(218)] = 7045,
  [SMALL_STATE(219)] = 7058,
  [SMALL_STATE(220)] = 7073,
  [SMALL_STATE(221)] = 7086,
  [SMALL_STATE(222)] = 7103,
  [SMALL_STATE(223)] = 7120,
  [SMALL_STATE(224)] = 7137,
  [SMALL_STATE(225)] = 7154,
  [SMALL_STATE(226)] = 7171,
  [SMALL_STATE(227)] = 7184,
  [SMALL_STATE(228)] = 7201,
  [SMALL_STATE(229)] = 7218,
  [SMALL_STATE(230)] = 7235,
  [SMALL_STATE(231)] = 7252,
  [SMALL_STATE(232)] = 7269,
  [SMALL_STATE(233)] = 7282,
  [SMALL_STATE(234)] = 7299,
  [SMALL_STATE(235)] = 7316,
  [SMALL_STATE(236)] = 7330,
  [SMALL_STATE(237)] = 7344,
  [SMALL_STATE(238)] = 7358,
  [SMALL_STATE(239)] = 7374,
  [SMALL_STATE(240)] = 7388,
  [SMALL_STATE(241)] = 7404,
  [SMALL_STATE(242)] = 7418,
  [SMALL_STATE(243)] = 7430,
  [SMALL_STATE(244)] = 7444,
  [SMALL_STATE(245)] = 7458,
  [SMALL_STATE(246)] = 7472,
  [SMALL_STATE(247)] = 7486,
  [SMALL_STATE(248)] = 7500,
  [SMALL_STATE(249)] = 7516,
  [SMALL_STATE(250)] = 7532,
  [SMALL_STATE(251)] = 7546,
  [SMALL_STATE(252)] = 7562,
  [SMALL_STATE(253)] = 7576,
  [SMALL_STATE(254)] = 7590,
  [SMALL_STATE(255)] = 7604,
  [SMALL_STATE(256)] = 7618,
  [SMALL_STATE(257)] = 7632,
  [SMALL_STATE(258)] = 7646,
  [SMALL_STATE(259)] = 7660,
  [SMALL_STATE(260)] = 7674,
  [SMALL_STATE(261)] = 7690,
  [SMALL_STATE(262)] = 7704,
  [SMALL_STATE(263)] = 7718,
  [SMALL_STATE(264)] = 7732,
  [SMALL_STATE(265)] = 7746,
  [SMALL_STATE(266)] = 7760,
  [SMALL_STATE(267)] = 7774,
  [SMALL_STATE(268)] = 7788,
  [SMALL_STATE(269)] = 7802,
  [SMALL_STATE(270)] = 7816,
  [SMALL_STATE(271)] = 7830,
  [SMALL_STATE(272)] = 7844,
  [SMALL_STATE(273)] = 7858,
  [SMALL_STATE(274)] = 7872,
  [SMALL_STATE(275)] = 7886,
  [SMALL_STATE(276)] = 7900,
  [SMALL_STATE(277)] = 7913,
  [SMALL_STATE(278)] = 7926,
  [SMALL_STATE(279)] = 7939,
  [SMALL_STATE(280)] = 7952,
  [SMALL_STATE(281)] = 7965,
  [SMALL_STATE(282)] = 7978,
  [SMALL_STATE(283)] = 7991,
  [SMALL_STATE(284)] = 8004,
  [SMALL_STATE(285)] = 8017,
  [SMALL_STATE(286)] = 8030,
  [SMALL_STATE(287)] = 8041,
  [SMALL_STATE(288)] = 8054,
  [SMALL_STATE(289)] = 8067,
  [SMALL_STATE(290)] = 8080,
  [SMALL_STATE(291)] = 8093,
  [SMALL_STATE(292)] = 8106,
  [SMALL_STATE(293)] = 8117,
  [SMALL_STATE(294)] = 8130,
  [SMALL_STATE(295)] = 8141,
  [SMALL_STATE(296)] = 8151,
  [SMALL_STATE(297)] = 8161,
  [SMALL_STATE(298)] = 8171,
  [SMALL_STATE(299)] = 8181,
  [SMALL_STATE(300)] = 8191,
  [SMALL_STATE(301)] = 8201,
  [SMALL_STATE(302)] = 8211,
  [SMALL_STATE(303)] = 8221,
  [SMALL_STATE(304)] = 8231,
  [SMALL_STATE(305)] = 8241,
  [SMALL_STATE(306)] = 8251,
  [SMALL_STATE(307)] = 8261,
  [SMALL_STATE(308)] = 8271,
  [SMALL_STATE(309)] = 8281,
  [SMALL_STATE(310)] = 8291,
  [SMALL_STATE(311)] = 8301,
  [SMALL_STATE(312)] = 8311,
  [SMALL_STATE(313)] = 8321,
  [SMALL_STATE(314)] = 8331,
  [SMALL_STATE(315)] = 8341,
  [SMALL_STATE(316)] = 8351,
  [SMALL_STATE(317)] = 8361,
  [SMALL_STATE(318)] = 8371,
  [SMALL_STATE(319)] = 8381,
  [SMALL_STATE(320)] = 8391,
  [SMALL_STATE(321)] = 8401,
  [SMALL_STATE(322)] = 8411,
  [SMALL_STATE(323)] = 8421,
  [SMALL_STATE(324)] = 8431,
  [SMALL_STATE(325)] = 8441,
  [SMALL_STATE(326)] = 8451,
  [SMALL_STATE(327)] = 8461,
  [SMALL_STATE(328)] = 8471,
  [SMALL_STATE(329)] = 8481,
  [SMALL_STATE(330)] = 8491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lparen, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lparen, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(286),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(286),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(77),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(81),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(81),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(80),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(240),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(295),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(295),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(77),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(81),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(81),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(80),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(240),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(124),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(123),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(123),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(119),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(251),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rparen, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rparen, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(134),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(126),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(126),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(160),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(295),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(295),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(219),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(288),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [579] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_egglog(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
