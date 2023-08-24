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
#define STATE_COUNT 306
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_ws = 2,
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
  sym_string = 61,
  sym_source_file = 62,
  sym_lparen = 63,
  sym_rparen = 64,
  sym_command = 65,
  sym_schedule = 66,
  sym_cost = 67,
  sym_nonletaction = 68,
  sym_action = 69,
  sym_fact = 70,
  sym_schema = 71,
  sym_expr = 72,
  sym_literal = 73,
  sym_callexpr = 74,
  sym_variant = 75,
  sym_type = 76,
  sym_identsort = 77,
  sym_f64 = 78,
  sym_symstring = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_command_repeat1 = 81,
  aux_sym_command_repeat2 = 82,
  aux_sym_command_repeat3 = 83,
  aux_sym_command_repeat4 = 84,
  aux_sym_command_repeat5 = 85,
  aux_sym_command_repeat6 = 86,
  aux_sym_command_repeat7 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_ws] = "ws",
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
  [sym_string] = "string",
  [sym_source_file] = "source_file",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_command_repeat3] = "command_repeat3",
  [aux_sym_command_repeat4] = "command_repeat4",
  [aux_sym_command_repeat5] = "command_repeat5",
  [aux_sym_command_repeat6] = "command_repeat6",
  [aux_sym_command_repeat7] = "command_repeat7",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_ws] = sym_ws,
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
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
  [aux_sym_command_repeat3] = aux_sym_command_repeat3,
  [aux_sym_command_repeat4] = aux_sym_command_repeat4,
  [aux_sym_command_repeat5] = aux_sym_command_repeat5,
  [aux_sym_command_repeat6] = aux_sym_command_repeat6,
  [aux_sym_command_repeat7] = aux_sym_command_repeat7,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ws] = {
    .visible = true,
    .named = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 6,
  [20] = 20,
  [21] = 10,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 23,
  [30] = 30,
  [31] = 31,
  [32] = 22,
  [33] = 33,
  [34] = 22,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 46,
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
  [92] = 78,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 77,
  [99] = 79,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
  [106] = 83,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 104,
  [116] = 3,
  [117] = 110,
  [118] = 118,
  [119] = 78,
  [120] = 120,
  [121] = 80,
  [122] = 81,
  [123] = 82,
  [124] = 124,
  [125] = 77,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 3,
  [135] = 79,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
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
  [157] = 153,
  [158] = 158,
  [159] = 78,
  [160] = 101,
  [161] = 161,
  [162] = 162,
  [163] = 118,
  [164] = 120,
  [165] = 112,
  [166] = 114,
  [167] = 80,
  [168] = 81,
  [169] = 169,
  [170] = 82,
  [171] = 83,
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
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 138,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 195,
  [206] = 206,
  [207] = 197,
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
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 3,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
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
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 84,
  [258] = 256,
  [259] = 3,
  [260] = 260,
  [261] = 261,
  [262] = 86,
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
  [277] = 78,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 3,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 266,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 266,
  [303] = 303,
  [304] = 283,
  [305] = 305,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(234);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == ',') ADVANCE(243);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == '[') ADVANCE(238);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'q') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(336);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(336);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(238);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'q') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(359);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '[') ADVANCE(239);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(235);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(324);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(195);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(330);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(287);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 101:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(285);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 161:
      if (lookahead == 'q') ADVANCE(308);
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 218:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 224:
      if (lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 225:
      if (lookahead == 'x') ADVANCE(201);
      END_STATE();
    case 226:
      if (lookahead == 'x') ADVANCE(209);
      END_STATE();
    case 227:
      if (lookahead == 'x') ADVANCE(212);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(276);
      END_STATE();
    case 229:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 230:
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 231:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 's') ADVANCE(379);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(448);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(179);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_add_DASHruleset);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(433);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_print_DASHtable);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_num);
      if (lookahead == '.') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_f64_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'h') ADVANCE(371);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'e') ADVANCE(349);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(345);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(332);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(418);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(461);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(444);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == 'u') ADVANCE(447);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(422);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(353);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(354);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(469);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'b') ADVANCE(408);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(281);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(400);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(317);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(387);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead == 'p') ADVANCE(476);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(468);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(456);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(459);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(356);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(489);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(364);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(478);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(405);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(479);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(261);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(313);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(256);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(306);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(266);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(246);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(269);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(298);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(296);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(290);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(347);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(452);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(450);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(358);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(437);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(443);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(410);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(465);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(457);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(458);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'e') ADVANCE(481);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'f') ADVANCE(288);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'f') ADVANCE(329);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'f') ADVANCE(331);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'f') ADVANCE(482);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(292);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(374);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(440);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(427);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(385);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(485);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(402);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(423);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(348);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(466);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(467);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(428);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(429);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(430);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'k') ADVANCE(286);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(346);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(304);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(339);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(472);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(273);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(390);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(373);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(369);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(370);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(378);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == 'w') ADVANCE(442);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'm') ADVANCE(432);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(351);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(315);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(250);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(258);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(244);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(352);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(383);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(389);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(384);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(394);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'n') ADVANCE(464);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(382);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(436);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(424);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(414);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(415);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(416);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(417);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(294);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(406);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(439);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(366);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(477);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(470);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(483);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(342);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(426);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(360);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(475);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(395);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(453);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(363);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(396);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(343);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 's') ADVANCE(386);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 's') ADVANCE(350);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 's') ADVANCE(391);
      if (lookahead == 't') ADVANCE(335);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 's') ADVANCE(380);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(338);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(271);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(248);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(300);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(302);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(319);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(260);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(279);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(283);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(435);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(484);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(488);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(438);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(487);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(362);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(365);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(367);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(397);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(398);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(399);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 't') ADVANCE(446);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(357);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(375);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(460);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(407);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(454);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(455);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(409);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'w') ADVANCE(445);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'x') ADVANCE(463);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'x') ADVANCE(471);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'y') ADVANCE(277);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'y') ADVANCE(490);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'y') ADVANCE(434);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'z') ADVANCE(368);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(425);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '^') ADVANCE(486);
      if (lookahead == '_') ADVANCE(486);
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '^' ||
          lookahead == '_') ADVANCE(486);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '|') ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 15},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 16},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 16},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 16},
  [281] = {.lex_state = 16},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 16},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 16},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 16},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 16},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 16},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
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
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(265),
    [sym_lparen] = STATE(2),
    [sym_command] = STATE(131),
    [sym_nonletaction] = STATE(154),
    [sym_callexpr] = STATE(155),
    [aux_sym_source_file_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_ws] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
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
    STATE(272), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
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
  [100] = 3,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
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
  [143] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(152), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [198] = 16,
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
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(118), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(19), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [253] = 16,
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
      sym_string,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(160), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [308] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(174), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [363] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(193), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(18), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [418] = 16,
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
      sym_string,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(163), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(6), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [473] = 16,
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
      sym_string,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(163), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [528] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(189), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(17), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [583] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(247), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [638] = 16,
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
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(120), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(21), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [693] = 16,
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
      sym_string,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(164), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(10), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [748] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(230), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(12), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [803] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(161), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(7), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [858] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(161), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [913] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(216), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [968] = 16,
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
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(101), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1023] = 16,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(177), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(4), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1078] = 16,
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
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_expr,
    STATE(118), 1,
      sym_rparen,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1133] = 15,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(24), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1185] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(125), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1237] = 15,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1289] = 15,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(33), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1341] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(253), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1393] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(232), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(36), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1445] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(189), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1497] = 15,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(98), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1549] = 15,
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
      sym_string,
    STATE(84), 1,
      sym_expr,
    STATE(258), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(30), 2,
      sym_fact,
      aux_sym_command_repeat5,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(118), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1601] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(174), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1653] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(23), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1705] = 15,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1757] = 15,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(99), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(29), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1809] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(226), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(26), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1861] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(250), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1913] = 15,
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
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(161), 1,
      sym_rparen,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [1965] = 14,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(140), 1,
      sym_num,
    ACTIONS(146), 1,
      aux_sym_f64_token1,
    ACTIONS(149), 1,
      sym_ident,
    ACTIONS(152), 1,
      sym_string,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(38), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(143), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2014] = 15,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(191), 1,
      sym_rparen,
    STATE(234), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2065] = 14,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    ACTIONS(165), 1,
      anon_sym_COLONvariants,
    STATE(241), 1,
      sym_fact,
    STATE(256), 1,
      sym_lparen,
    STATE(257), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2113] = 12,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(28), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2156] = 12,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_num,
    ACTIONS(173), 1,
      aux_sym_f64_token1,
    ACTIONS(176), 1,
      sym_ident,
    ACTIONS(179), 1,
      sym_string,
    STATE(266), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(42), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(106), 2,
      sym_f64,
      sym_symstring,
    STATE(122), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(170), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2199] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      sym_num,
    ACTIONS(186), 1,
      aux_sym_f64_token1,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      sym_string,
    STATE(266), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(49), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(106), 2,
      sym_f64,
      sym_symstring,
    STATE(122), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(184), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2242] = 12,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(31), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2285] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      sym_num,
    ACTIONS(186), 1,
      aux_sym_f64_token1,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      sym_string,
    STATE(266), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(46), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(106), 2,
      sym_f64,
      sym_symstring,
    STATE(122), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(184), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2328] = 13,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      aux_sym_command_repeat2,
    STATE(76), 1,
      sym_expr,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2373] = 13,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(246), 1,
      sym_fact,
    STATE(256), 1,
      sym_lparen,
    STATE(257), 1,
      sym_expr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2418] = 12,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(37), 2,
      sym_expr,
      aux_sym_command_repeat2,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2461] = 13,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      aux_sym_command_repeat2,
    STATE(75), 1,
      sym_expr,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2506] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(253), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2548] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      sym_num,
    ACTIONS(186), 1,
      aux_sym_f64_token1,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      sym_string,
    STATE(71), 1,
      sym_expr,
    STATE(266), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(106), 2,
      sym_f64,
      sym_symstring,
    STATE(122), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(184), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2590] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(242), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2632] = 12,
    ACTIONS(79), 1,
      sym_num,
    ACTIONS(83), 1,
      aux_sym_f64_token1,
    ACTIONS(85), 1,
      sym_ident,
    ACTIONS(87), 1,
      sym_string,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_expr,
    STATE(302), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(81), 2,
      sym_literal,
      sym_callexpr,
    STATE(83), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(81), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2674] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(232), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2716] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(228), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2758] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(201), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2800] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(244), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2842] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(221), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2884] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(248), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2926] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(210), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [2968] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(220), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3010] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      sym_num,
    ACTIONS(186), 1,
      aux_sym_f64_token1,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      sym_string,
    STATE(67), 1,
      sym_expr,
    STATE(266), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(106), 2,
      sym_f64,
      sym_symstring,
    STATE(122), 2,
      sym_literal,
      sym_callexpr,
    ACTIONS(184), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3052] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(229), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3094] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(245), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3136] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(243), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3178] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(217), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3220] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(234), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3262] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(250), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3304] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(194), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3346] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(214), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3388] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(185), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3430] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(235), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3472] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(219), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3514] = 12,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_num,
    ACTIONS(159), 1,
      aux_sym_f64_token1,
    ACTIONS(161), 1,
      sym_ident,
    ACTIONS(163), 1,
      sym_string,
    STATE(231), 1,
      sym_expr,
    STATE(288), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(168), 2,
      sym_literal,
      sym_callexpr,
    STATE(171), 2,
      sym_f64,
      sym_symstring,
    ACTIONS(157), 3,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
  [3556] = 6,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3583] = 6,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(192), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(194), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3610] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(196), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(198), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3630] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(200), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(202), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3650] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(204), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(206), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3670] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(208), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(210), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3690] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(212), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(214), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3710] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(216), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(218), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3730] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(220), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(222), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3750] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(224), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(226), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3770] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(67), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(69), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3790] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(228), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(230), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [3810] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(190), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(93), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3839] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(180), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(103), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3868] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(156), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(96), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3897] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(186), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(88), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3926] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(190), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(103), 2,
      sym_action,
      aux_sym_command_repeat3,
  [3955] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(200), 10,
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
  [3972] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(186), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(103), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4001] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(179), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(91), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4030] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(192), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(103), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4059] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(103), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4088] = 8,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(187), 1,
      sym_rparen,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(95), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4117] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(196), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(198), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4135] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(204), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(206), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4153] = 10,
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
    ACTIONS(234), 1,
      anon_sym_let,
    STATE(272), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [4185] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(236), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(238), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4203] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(112), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(115), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4233] = 7,
    STATE(100), 1,
      sym_lparen,
    STATE(155), 1,
      sym_callexpr,
    STATE(196), 1,
      sym_nonletaction,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(242), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(245), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(103), 2,
      sym_action,
      aux_sym_command_repeat3,
  [4259] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(164), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4289] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(165), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(104), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4319] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(220), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(222), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4337] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(152), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4367] = 9,
    ACTIONS(247), 1,
      anon_sym_COLONunextractable,
    ACTIONS(249), 1,
      anon_sym_COLONon_merge,
    ACTIONS(251), 1,
      anon_sym_COLONmerge,
    ACTIONS(253), 1,
      anon_sym_COLONdefault,
    ACTIONS(255), 1,
      anon_sym_COLONcost,
    STATE(137), 1,
      sym_cost,
    STATE(189), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4397] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(177), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(107), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4427] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(163), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4457] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(164), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(110), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4487] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(259), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4505] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(120), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(117), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4535] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(261), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(263), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4553] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(120), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4583] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
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
  [4599] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      sym_ident,
    STATE(118), 1,
      sym_rparen,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4629] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(265), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(267), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4647] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(200), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(202), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4665] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(269), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(271), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4683] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(208), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(210), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4701] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(212), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(214), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4719] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(216), 3,
      anon_sym_LPAREN,
      aux_sym_f64_token1,
      sym_string,
    ACTIONS(218), 6,
      anon_sym_LBRACK,
      sym_num,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_DASHinf,
      sym_ident,
  [4737] = 8,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      anon_sym_COLONcost,
    ACTIONS(273), 1,
      sym_ident,
    STATE(200), 1,
      sym_rparen,
    STATE(223), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(133), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4764] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [4779] = 8,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      sym_ident,
    STATE(195), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(126), 2,
      sym_schedule,
      aux_sym_command_repeat7,
  [4806] = 6,
    STATE(48), 1,
      sym_rparen,
    STATE(271), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(128), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [4829] = 6,
    STATE(44), 1,
      sym_rparen,
    STATE(271), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(139), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [4852] = 6,
    STATE(152), 1,
      sym_rparen,
    STATE(286), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(132), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4875] = 7,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(154), 1,
      sym_nonletaction,
    STATE(155), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(290), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(130), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [4900] = 7,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_lparen,
    STATE(154), 1,
      sym_nonletaction,
    STATE(155), 1,
      sym_callexpr,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(7), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(130), 2,
      sym_command,
      aux_sym_source_file_repeat1,
  [4925] = 6,
    STATE(189), 1,
      sym_rparen,
    STATE(286), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    STATE(141), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [4948] = 8,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      anon_sym_COLONcost,
    ACTIONS(273), 1,
      sym_ident,
    STATE(209), 1,
      sym_rparen,
    STATE(252), 1,
      sym_cost,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(147), 2,
      sym_type,
      aux_sym_command_repeat4,
  [4975] = 3,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 7,
      anon_sym_LBRACK,
      anon_sym_let,
      anon_sym_delete,
      anon_sym_union,
      anon_sym_panic,
      anon_sym_extract,
      sym_ident,
  [4992] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5007] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(295), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5021] = 7,
    ACTIONS(297), 1,
      anon_sym_COLONunextractable,
    ACTIONS(299), 1,
      anon_sym_COLONon_merge,
    ACTIONS(301), 1,
      anon_sym_COLONmerge,
    ACTIONS(303), 1,
      anon_sym_COLONdefault,
    STATE(161), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5045] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(305), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5059] = 5,
    STATE(271), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(307), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(310), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(139), 2,
      sym_identsort,
      aux_sym_command_repeat6,
  [5079] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(312), 7,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONcost,
  [5093] = 5,
    STATE(286), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(314), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(317), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(141), 2,
      sym_variant,
      aux_sym_command_repeat1,
  [5113] = 5,
    STATE(152), 1,
      sym_rparen,
    STATE(287), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5132] = 6,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      sym_ident,
    STATE(246), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(148), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5153] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(319), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [5166] = 6,
    ACTIONS(321), 1,
      anon_sym_COLONon_merge,
    ACTIONS(323), 1,
      anon_sym_COLONmerge,
    ACTIONS(325), 1,
      anon_sym_COLONdefault,
    STATE(174), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5187] = 6,
    ACTIONS(273), 1,
      sym_ident,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(147), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5208] = 5,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(331), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    STATE(147), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5227] = 6,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      sym_ident,
    STATE(232), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(147), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5248] = 6,
    ACTIONS(273), 1,
      sym_ident,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    STATE(146), 2,
      sym_type,
      aux_sym_command_repeat4,
  [5269] = 6,
    ACTIONS(299), 1,
      anon_sym_COLONon_merge,
    ACTIONS(301), 1,
      anon_sym_COLONmerge,
    ACTIONS(303), 1,
      anon_sym_COLONdefault,
    STATE(161), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5290] = 6,
    STATE(2), 1,
      sym_lparen,
    STATE(154), 1,
      sym_nonletaction,
    STATE(155), 1,
      sym_callexpr,
    STATE(241), 1,
      sym_command,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(7), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5311] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(338), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5323] = 6,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(340), 1,
      anon_sym_COLONuntil,
    ACTIONS(342), 1,
      sym_ident,
    STATE(112), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5343] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(344), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5355] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5367] = 5,
    ACTIONS(348), 1,
      anon_sym_COLONruleset,
    ACTIONS(350), 1,
      anon_sym_COLONname,
    STATE(174), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5385] = 6,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(352), 1,
      anon_sym_COLONuntil,
    ACTIONS(354), 1,
      sym_ident,
    STATE(165), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5405] = 6,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_ident,
    STATE(55), 1,
      sym_schedule,
    STATE(205), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [5425] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(200), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(202), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5439] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(236), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(238), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5453] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5465] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5477] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(265), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(267), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5491] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(269), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(271), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5505] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(257), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(259), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5519] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(261), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(263), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_ident,
  [5533] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(208), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5545] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(212), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5557] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5569] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(216), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5581] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(220), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONwhen,
  [5593] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5605] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5617] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5629] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(370), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5641] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(372), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5653] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(374), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5665] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5677] = 5,
    ACTIONS(378), 1,
      anon_sym_COLONmerge,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    STATE(188), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5695] = 5,
    ACTIONS(382), 1,
      anon_sym_COLONmerge,
    ACTIONS(384), 1,
      anon_sym_COLONdefault,
    STATE(178), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5713] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(386), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5725] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(388), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5737] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(390), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5749] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(392), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5761] = 5,
    ACTIONS(394), 1,
      anon_sym_COLONruleset,
    ACTIONS(396), 1,
      anon_sym_COLONwhen,
    STATE(189), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5779] = 5,
    ACTIONS(398), 1,
      anon_sym_COLONmerge,
    ACTIONS(400), 1,
      anon_sym_COLONdefault,
    STATE(181), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5797] = 5,
    ACTIONS(402), 1,
      anon_sym_COLONruleset,
    ACTIONS(404), 1,
      anon_sym_COLONname,
    STATE(188), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5815] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(406), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5827] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(408), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5839] = 5,
    ACTIONS(410), 1,
      anon_sym_COLONmerge,
    ACTIONS(412), 1,
      anon_sym_COLONdefault,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5857] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(414), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5869] = 5,
    ACTIONS(416), 1,
      anon_sym_COLONruleset,
    ACTIONS(418), 1,
      anon_sym_COLONname,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5887] = 4,
    ACTIONS(420), 1,
      anon_sym_COLONruleset,
    STATE(188), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5902] = 4,
    ACTIONS(400), 1,
      anon_sym_COLONdefault,
    STATE(181), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5917] = 4,
    ACTIONS(422), 1,
      anon_sym_run,
    ACTIONS(426), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(424), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [5932] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(428), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5943] = 4,
    ACTIONS(430), 1,
      anon_sym_COLONuntil,
    STATE(164), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5958] = 4,
    ACTIONS(432), 1,
      sym_unum,
    STATE(177), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5973] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    ACTIONS(434), 2,
      anon_sym_RBRACK,
      sym_ident,
  [5986] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(436), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5997] = 4,
    ACTIONS(325), 1,
      anon_sym_COLONdefault,
    STATE(174), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6012] = 4,
    STATE(108), 1,
      sym_schema,
    STATE(149), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(438), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6027] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(440), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6038] = 4,
    ACTIONS(442), 1,
      anon_sym_COLONuntil,
    STATE(152), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6053] = 4,
    ACTIONS(444), 1,
      anon_sym_run,
    ACTIONS(448), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(446), 2,
      anon_sym_saturate,
      anon_sym_seq,
  [6068] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(450), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6079] = 4,
    ACTIONS(452), 1,
      anon_sym_COLONuntil,
    STATE(120), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6094] = 4,
    ACTIONS(454), 1,
      anon_sym_COLONuntil,
    STATE(189), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6109] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(456), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6120] = 4,
    ACTIONS(412), 1,
      anon_sym_COLONdefault,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6135] = 4,
    ACTIONS(458), 1,
      anon_sym_COLONname,
    STATE(178), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6150] = 4,
    ACTIONS(418), 1,
      anon_sym_COLONname,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6165] = 4,
    ACTIONS(460), 1,
      sym_unum,
    STATE(152), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6180] = 4,
    ACTIONS(380), 1,
      anon_sym_COLONdefault,
    STATE(188), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6195] = 4,
    ACTIONS(462), 1,
      anon_sym_COLONname,
    STATE(181), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6210] = 4,
    ACTIONS(464), 1,
      anon_sym_COLONruleset,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6225] = 4,
    ACTIONS(466), 1,
      anon_sym_COLONdefault,
    STATE(176), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6240] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(468), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6251] = 4,
    ACTIONS(384), 1,
      anon_sym_COLONdefault,
    STATE(178), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6266] = 4,
    ACTIONS(470), 1,
      anon_sym_COLONdefault,
    STATE(175), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6281] = 3,
    STATE(172), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6293] = 3,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_RBRACK,
      sym_ident,
  [6305] = 3,
    STATE(209), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6317] = 3,
    STATE(15), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(472), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6329] = 3,
    STATE(87), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6341] = 3,
    STATE(169), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6353] = 3,
    STATE(127), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6365] = 3,
    STATE(189), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6377] = 3,
    STATE(181), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6389] = 3,
    STATE(89), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6401] = 3,
    STATE(218), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6413] = 3,
    STATE(174), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6425] = 3,
    STATE(177), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6437] = 3,
    STATE(162), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6449] = 3,
    STATE(178), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6461] = 3,
    STATE(191), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6473] = 3,
    STATE(274), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(97), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6485] = 3,
    STATE(203), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6497] = 3,
    STATE(94), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6509] = 3,
    STATE(143), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(438), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6521] = 3,
    STATE(152), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6533] = 3,
    STATE(182), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6545] = 3,
    STATE(176), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6557] = 3,
    STATE(183), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6569] = 3,
    STATE(175), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6581] = 3,
    STATE(161), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6593] = 3,
    STATE(97), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6605] = 3,
    STATE(173), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6617] = 3,
    STATE(8), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(472), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6629] = 3,
    STATE(188), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6641] = 3,
    STATE(90), 1,
      sym_lparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(9), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [6653] = 3,
    STATE(206), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6665] = 3,
    STATE(184), 1,
      sym_rparen,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(75), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6677] = 3,
    ACTIONS(474), 1,
      sym_ident,
    STATE(136), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6688] = 3,
    ACTIONS(476), 1,
      sym_unum,
    ACTIONS(478), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6699] = 3,
    ACTIONS(65), 1,
      sym_ident,
    ACTIONS(480), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6710] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6719] = 3,
    ACTIONS(482), 1,
      anon_sym_EQ,
    ACTIONS(484), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(69), 2,
      anon_sym_EQ,
      sym_ident,
  [6739] = 3,
    ACTIONS(474), 1,
      sym_ident,
    STATE(140), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6750] = 3,
    ACTIONS(474), 1,
      sym_ident,
    STATE(238), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6761] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
    ACTIONS(228), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6770] = 2,
    ACTIONS(486), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6778] = 2,
    ACTIONS(486), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6786] = 2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6794] = 2,
    ACTIONS(490), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6802] = 2,
    ACTIONS(460), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6810] = 2,
    ACTIONS(492), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6818] = 2,
    ACTIONS(460), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6826] = 2,
    ACTIONS(494), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6834] = 2,
    ACTIONS(496), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6842] = 2,
    ACTIONS(498), 1,
      anon_sym_set,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6850] = 2,
    ACTIONS(500), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6858] = 2,
    ACTIONS(502), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6866] = 2,
    ACTIONS(432), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6874] = 2,
    ACTIONS(504), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6882] = 2,
    ACTIONS(200), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6890] = 2,
    ACTIONS(506), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6898] = 2,
    ACTIONS(508), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6906] = 2,
    ACTIONS(510), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6914] = 2,
    ACTIONS(67), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6922] = 2,
    ACTIONS(512), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6930] = 2,
    ACTIONS(514), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6938] = 2,
    ACTIONS(516), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6946] = 2,
    ACTIONS(518), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6954] = 2,
    ACTIONS(520), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6962] = 2,
    ACTIONS(522), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6970] = 2,
    ACTIONS(524), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6978] = 2,
    ACTIONS(526), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6986] = 2,
    ACTIONS(528), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [6994] = 2,
    ACTIONS(530), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7002] = 2,
    ACTIONS(528), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7010] = 2,
    ACTIONS(532), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7018] = 2,
    ACTIONS(432), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7026] = 2,
    ACTIONS(534), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7034] = 2,
    ACTIONS(536), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7042] = 2,
    ACTIONS(538), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7050] = 2,
    ACTIONS(540), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7058] = 2,
    ACTIONS(542), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7066] = 2,
    ACTIONS(544), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7074] = 2,
    ACTIONS(546), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7082] = 2,
    ACTIONS(548), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7090] = 2,
    ACTIONS(550), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7098] = 2,
    ACTIONS(552), 1,
      sym_unum,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
  [7106] = 2,
    ACTIONS(554), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym_comment,
      sym_ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 100,
  [SMALL_STATE(4)] = 143,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 253,
  [SMALL_STATE(7)] = 308,
  [SMALL_STATE(8)] = 363,
  [SMALL_STATE(9)] = 418,
  [SMALL_STATE(10)] = 473,
  [SMALL_STATE(11)] = 528,
  [SMALL_STATE(12)] = 583,
  [SMALL_STATE(13)] = 638,
  [SMALL_STATE(14)] = 693,
  [SMALL_STATE(15)] = 748,
  [SMALL_STATE(16)] = 803,
  [SMALL_STATE(17)] = 858,
  [SMALL_STATE(18)] = 913,
  [SMALL_STATE(19)] = 968,
  [SMALL_STATE(20)] = 1023,
  [SMALL_STATE(21)] = 1078,
  [SMALL_STATE(22)] = 1133,
  [SMALL_STATE(23)] = 1185,
  [SMALL_STATE(24)] = 1237,
  [SMALL_STATE(25)] = 1289,
  [SMALL_STATE(26)] = 1341,
  [SMALL_STATE(27)] = 1393,
  [SMALL_STATE(28)] = 1445,
  [SMALL_STATE(29)] = 1497,
  [SMALL_STATE(30)] = 1549,
  [SMALL_STATE(31)] = 1601,
  [SMALL_STATE(32)] = 1653,
  [SMALL_STATE(33)] = 1705,
  [SMALL_STATE(34)] = 1757,
  [SMALL_STATE(35)] = 1809,
  [SMALL_STATE(36)] = 1861,
  [SMALL_STATE(37)] = 1913,
  [SMALL_STATE(38)] = 1965,
  [SMALL_STATE(39)] = 2014,
  [SMALL_STATE(40)] = 2065,
  [SMALL_STATE(41)] = 2113,
  [SMALL_STATE(42)] = 2156,
  [SMALL_STATE(43)] = 2199,
  [SMALL_STATE(44)] = 2242,
  [SMALL_STATE(45)] = 2285,
  [SMALL_STATE(46)] = 2328,
  [SMALL_STATE(47)] = 2373,
  [SMALL_STATE(48)] = 2418,
  [SMALL_STATE(49)] = 2461,
  [SMALL_STATE(50)] = 2506,
  [SMALL_STATE(51)] = 2548,
  [SMALL_STATE(52)] = 2590,
  [SMALL_STATE(53)] = 2632,
  [SMALL_STATE(54)] = 2674,
  [SMALL_STATE(55)] = 2716,
  [SMALL_STATE(56)] = 2758,
  [SMALL_STATE(57)] = 2800,
  [SMALL_STATE(58)] = 2842,
  [SMALL_STATE(59)] = 2884,
  [SMALL_STATE(60)] = 2926,
  [SMALL_STATE(61)] = 2968,
  [SMALL_STATE(62)] = 3010,
  [SMALL_STATE(63)] = 3052,
  [SMALL_STATE(64)] = 3094,
  [SMALL_STATE(65)] = 3136,
  [SMALL_STATE(66)] = 3178,
  [SMALL_STATE(67)] = 3220,
  [SMALL_STATE(68)] = 3262,
  [SMALL_STATE(69)] = 3304,
  [SMALL_STATE(70)] = 3346,
  [SMALL_STATE(71)] = 3388,
  [SMALL_STATE(72)] = 3430,
  [SMALL_STATE(73)] = 3472,
  [SMALL_STATE(74)] = 3514,
  [SMALL_STATE(75)] = 3556,
  [SMALL_STATE(76)] = 3583,
  [SMALL_STATE(77)] = 3610,
  [SMALL_STATE(78)] = 3630,
  [SMALL_STATE(79)] = 3650,
  [SMALL_STATE(80)] = 3670,
  [SMALL_STATE(81)] = 3690,
  [SMALL_STATE(82)] = 3710,
  [SMALL_STATE(83)] = 3730,
  [SMALL_STATE(84)] = 3750,
  [SMALL_STATE(85)] = 3770,
  [SMALL_STATE(86)] = 3790,
  [SMALL_STATE(87)] = 3810,
  [SMALL_STATE(88)] = 3839,
  [SMALL_STATE(89)] = 3868,
  [SMALL_STATE(90)] = 3897,
  [SMALL_STATE(91)] = 3926,
  [SMALL_STATE(92)] = 3955,
  [SMALL_STATE(93)] = 3972,
  [SMALL_STATE(94)] = 4001,
  [SMALL_STATE(95)] = 4030,
  [SMALL_STATE(96)] = 4059,
  [SMALL_STATE(97)] = 4088,
  [SMALL_STATE(98)] = 4117,
  [SMALL_STATE(99)] = 4135,
  [SMALL_STATE(100)] = 4153,
  [SMALL_STATE(101)] = 4185,
  [SMALL_STATE(102)] = 4203,
  [SMALL_STATE(103)] = 4233,
  [SMALL_STATE(104)] = 4259,
  [SMALL_STATE(105)] = 4289,
  [SMALL_STATE(106)] = 4319,
  [SMALL_STATE(107)] = 4337,
  [SMALL_STATE(108)] = 4367,
  [SMALL_STATE(109)] = 4397,
  [SMALL_STATE(110)] = 4427,
  [SMALL_STATE(111)] = 4457,
  [SMALL_STATE(112)] = 4487,
  [SMALL_STATE(113)] = 4505,
  [SMALL_STATE(114)] = 4535,
  [SMALL_STATE(115)] = 4553,
  [SMALL_STATE(116)] = 4583,
  [SMALL_STATE(117)] = 4599,
  [SMALL_STATE(118)] = 4629,
  [SMALL_STATE(119)] = 4647,
  [SMALL_STATE(120)] = 4665,
  [SMALL_STATE(121)] = 4683,
  [SMALL_STATE(122)] = 4701,
  [SMALL_STATE(123)] = 4719,
  [SMALL_STATE(124)] = 4737,
  [SMALL_STATE(125)] = 4764,
  [SMALL_STATE(126)] = 4779,
  [SMALL_STATE(127)] = 4806,
  [SMALL_STATE(128)] = 4829,
  [SMALL_STATE(129)] = 4852,
  [SMALL_STATE(130)] = 4875,
  [SMALL_STATE(131)] = 4900,
  [SMALL_STATE(132)] = 4925,
  [SMALL_STATE(133)] = 4948,
  [SMALL_STATE(134)] = 4975,
  [SMALL_STATE(135)] = 4992,
  [SMALL_STATE(136)] = 5007,
  [SMALL_STATE(137)] = 5021,
  [SMALL_STATE(138)] = 5045,
  [SMALL_STATE(139)] = 5059,
  [SMALL_STATE(140)] = 5079,
  [SMALL_STATE(141)] = 5093,
  [SMALL_STATE(142)] = 5113,
  [SMALL_STATE(143)] = 5132,
  [SMALL_STATE(144)] = 5153,
  [SMALL_STATE(145)] = 5166,
  [SMALL_STATE(146)] = 5187,
  [SMALL_STATE(147)] = 5208,
  [SMALL_STATE(148)] = 5227,
  [SMALL_STATE(149)] = 5248,
  [SMALL_STATE(150)] = 5269,
  [SMALL_STATE(151)] = 5290,
  [SMALL_STATE(152)] = 5311,
  [SMALL_STATE(153)] = 5323,
  [SMALL_STATE(154)] = 5343,
  [SMALL_STATE(155)] = 5355,
  [SMALL_STATE(156)] = 5367,
  [SMALL_STATE(157)] = 5385,
  [SMALL_STATE(158)] = 5405,
  [SMALL_STATE(159)] = 5425,
  [SMALL_STATE(160)] = 5439,
  [SMALL_STATE(161)] = 5453,
  [SMALL_STATE(162)] = 5465,
  [SMALL_STATE(163)] = 5477,
  [SMALL_STATE(164)] = 5491,
  [SMALL_STATE(165)] = 5505,
  [SMALL_STATE(166)] = 5519,
  [SMALL_STATE(167)] = 5533,
  [SMALL_STATE(168)] = 5545,
  [SMALL_STATE(169)] = 5557,
  [SMALL_STATE(170)] = 5569,
  [SMALL_STATE(171)] = 5581,
  [SMALL_STATE(172)] = 5593,
  [SMALL_STATE(173)] = 5605,
  [SMALL_STATE(174)] = 5617,
  [SMALL_STATE(175)] = 5629,
  [SMALL_STATE(176)] = 5641,
  [SMALL_STATE(177)] = 5653,
  [SMALL_STATE(178)] = 5665,
  [SMALL_STATE(179)] = 5677,
  [SMALL_STATE(180)] = 5695,
  [SMALL_STATE(181)] = 5713,
  [SMALL_STATE(182)] = 5725,
  [SMALL_STATE(183)] = 5737,
  [SMALL_STATE(184)] = 5749,
  [SMALL_STATE(185)] = 5761,
  [SMALL_STATE(186)] = 5779,
  [SMALL_STATE(187)] = 5797,
  [SMALL_STATE(188)] = 5815,
  [SMALL_STATE(189)] = 5827,
  [SMALL_STATE(190)] = 5839,
  [SMALL_STATE(191)] = 5857,
  [SMALL_STATE(192)] = 5869,
  [SMALL_STATE(193)] = 5887,
  [SMALL_STATE(194)] = 5902,
  [SMALL_STATE(195)] = 5917,
  [SMALL_STATE(196)] = 5932,
  [SMALL_STATE(197)] = 5943,
  [SMALL_STATE(198)] = 5958,
  [SMALL_STATE(199)] = 5973,
  [SMALL_STATE(200)] = 5986,
  [SMALL_STATE(201)] = 5997,
  [SMALL_STATE(202)] = 6012,
  [SMALL_STATE(203)] = 6027,
  [SMALL_STATE(204)] = 6038,
  [SMALL_STATE(205)] = 6053,
  [SMALL_STATE(206)] = 6068,
  [SMALL_STATE(207)] = 6079,
  [SMALL_STATE(208)] = 6094,
  [SMALL_STATE(209)] = 6109,
  [SMALL_STATE(210)] = 6120,
  [SMALL_STATE(211)] = 6135,
  [SMALL_STATE(212)] = 6150,
  [SMALL_STATE(213)] = 6165,
  [SMALL_STATE(214)] = 6180,
  [SMALL_STATE(215)] = 6195,
  [SMALL_STATE(216)] = 6210,
  [SMALL_STATE(217)] = 6225,
  [SMALL_STATE(218)] = 6240,
  [SMALL_STATE(219)] = 6251,
  [SMALL_STATE(220)] = 6266,
  [SMALL_STATE(221)] = 6281,
  [SMALL_STATE(222)] = 6293,
  [SMALL_STATE(223)] = 6305,
  [SMALL_STATE(224)] = 6317,
  [SMALL_STATE(225)] = 6329,
  [SMALL_STATE(226)] = 6341,
  [SMALL_STATE(227)] = 6353,
  [SMALL_STATE(228)] = 6365,
  [SMALL_STATE(229)] = 6377,
  [SMALL_STATE(230)] = 6389,
  [SMALL_STATE(231)] = 6401,
  [SMALL_STATE(232)] = 6413,
  [SMALL_STATE(233)] = 6425,
  [SMALL_STATE(234)] = 6437,
  [SMALL_STATE(235)] = 6449,
  [SMALL_STATE(236)] = 6461,
  [SMALL_STATE(237)] = 6473,
  [SMALL_STATE(238)] = 6485,
  [SMALL_STATE(239)] = 6497,
  [SMALL_STATE(240)] = 6509,
  [SMALL_STATE(241)] = 6521,
  [SMALL_STATE(242)] = 6533,
  [SMALL_STATE(243)] = 6545,
  [SMALL_STATE(244)] = 6557,
  [SMALL_STATE(245)] = 6569,
  [SMALL_STATE(246)] = 6581,
  [SMALL_STATE(247)] = 6593,
  [SMALL_STATE(248)] = 6605,
  [SMALL_STATE(249)] = 6617,
  [SMALL_STATE(250)] = 6629,
  [SMALL_STATE(251)] = 6641,
  [SMALL_STATE(252)] = 6653,
  [SMALL_STATE(253)] = 6665,
  [SMALL_STATE(254)] = 6677,
  [SMALL_STATE(255)] = 6688,
  [SMALL_STATE(256)] = 6699,
  [SMALL_STATE(257)] = 6710,
  [SMALL_STATE(258)] = 6719,
  [SMALL_STATE(259)] = 6730,
  [SMALL_STATE(260)] = 6739,
  [SMALL_STATE(261)] = 6750,
  [SMALL_STATE(262)] = 6761,
  [SMALL_STATE(263)] = 6770,
  [SMALL_STATE(264)] = 6778,
  [SMALL_STATE(265)] = 6786,
  [SMALL_STATE(266)] = 6794,
  [SMALL_STATE(267)] = 6802,
  [SMALL_STATE(268)] = 6810,
  [SMALL_STATE(269)] = 6818,
  [SMALL_STATE(270)] = 6826,
  [SMALL_STATE(271)] = 6834,
  [SMALL_STATE(272)] = 6842,
  [SMALL_STATE(273)] = 6850,
  [SMALL_STATE(274)] = 6858,
  [SMALL_STATE(275)] = 6866,
  [SMALL_STATE(276)] = 6874,
  [SMALL_STATE(277)] = 6882,
  [SMALL_STATE(278)] = 6890,
  [SMALL_STATE(279)] = 6898,
  [SMALL_STATE(280)] = 6906,
  [SMALL_STATE(281)] = 6914,
  [SMALL_STATE(282)] = 6922,
  [SMALL_STATE(283)] = 6930,
  [SMALL_STATE(284)] = 6938,
  [SMALL_STATE(285)] = 6946,
  [SMALL_STATE(286)] = 6954,
  [SMALL_STATE(287)] = 6962,
  [SMALL_STATE(288)] = 6970,
  [SMALL_STATE(289)] = 6978,
  [SMALL_STATE(290)] = 6986,
  [SMALL_STATE(291)] = 6994,
  [SMALL_STATE(292)] = 7002,
  [SMALL_STATE(293)] = 7010,
  [SMALL_STATE(294)] = 7018,
  [SMALL_STATE(295)] = 7026,
  [SMALL_STATE(296)] = 7034,
  [SMALL_STATE(297)] = 7042,
  [SMALL_STATE(298)] = 7050,
  [SMALL_STATE(299)] = 7058,
  [SMALL_STATE(300)] = 7066,
  [SMALL_STATE(301)] = 7074,
  [SMALL_STATE(302)] = 7082,
  [SMALL_STATE(303)] = 7090,
  [SMALL_STATE(304)] = 7098,
  [SMALL_STATE(305)] = 7106,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lparen, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lparen, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(259),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(259),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(83),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(82),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(82),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(81),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat5, 2), SHIFT_REPEAT(80),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(281),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(281),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(83),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(82),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(82),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(81),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(80),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(106),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(123),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(123),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(122),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2), SHIFT_REPEAT(121),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rparen, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rparen, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_callexpr, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_callexpr, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symstring, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symstring, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f64, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f64, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2), SHIFT_REPEAT(134),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat3, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 5),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(116),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(116),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat7, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat7, 2), SHIFT_REPEAT(166),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2), SHIFT_REPEAT(281),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat6, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 3),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(281),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat4, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat4, 2), SHIFT_REPEAT(199),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 15),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 14),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 13),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 12),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 11),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 10),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 8),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 9),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 7),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 8),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonletaction, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identsort, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [488] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
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
