#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 1
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 15

enum {
  sym_identifier = 1,
  anon_sym_u8 = 2,
  anon_sym_i8 = 3,
  anon_sym_u16 = 4,
  anon_sym_i16 = 5,
  anon_sym_u32 = 6,
  anon_sym_i32 = 7,
  anon_sym_u64 = 8,
  anon_sym_i64 = 9,
  anon_sym_u128 = 10,
  anon_sym_i128 = 11,
  anon_sym_isize = 12,
  anon_sym_usize = 13,
  anon_sym_f32 = 14,
  anon_sym_f64 = 15,
  anon_sym_c_int = 16,
  anon_sym_bool = 17,
  anon_sym_String = 18,
  anon_sym_c_char = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_let = 22,
  anon_sym_COLON = 23,
  anon_sym_EQ = 24,
  sym_mutable_specifier = 25,
  anon_sym_DASH = 26,
  sym_integer_literal = 27,
  aux_sym_string_literal_token1 = 28,
  anon_sym_DQUOTE = 29,
  sym_char_literal = 30,
  sym_escape_sequence = 31,
  anon_sym_function = 32,
  anon_sym_DASH_GT = 33,
  anon_sym_LPAREN = 34,
  anon_sym_COMMA = 35,
  anon_sym_RPAREN = 36,
  anon_sym_LBRACE = 37,
  anon_sym_RBRACE = 38,
  anon_sym_true = 39,
  anon_sym_false = 40,
  sym_line_comment = 41,
  sym__string_content = 42,
  sym_float_literal = 43,
  sym_source_file = 44,
  sym__statement = 45,
  sym__type = 46,
  sym_array_type = 47,
  sym_let_declaration = 48,
  sym__expression = 49,
  sym_unary_expression = 50,
  sym__literal = 51,
  sym__pattern = 52,
  sym__literal_pattern = 53,
  sym_negative_literal = 54,
  sym_string_literal = 55,
  sym_function_item = 56,
  sym_parameters = 57,
  sym_parameter = 58,
  sym_block = 59,
  sym_boolean_literal = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_string_literal_repeat1 = 62,
  aux_sym_parameters_repeat1 = 63,
  alias_sym_type_identifier = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_u8] = "primitive_type",
  [anon_sym_i8] = "primitive_type",
  [anon_sym_u16] = "primitive_type",
  [anon_sym_i16] = "primitive_type",
  [anon_sym_u32] = "primitive_type",
  [anon_sym_i32] = "primitive_type",
  [anon_sym_u64] = "primitive_type",
  [anon_sym_i64] = "primitive_type",
  [anon_sym_u128] = "primitive_type",
  [anon_sym_i128] = "primitive_type",
  [anon_sym_isize] = "primitive_type",
  [anon_sym_usize] = "primitive_type",
  [anon_sym_f32] = "primitive_type",
  [anon_sym_f64] = "primitive_type",
  [anon_sym_c_int] = "primitive_type",
  [anon_sym_bool] = "primitive_type",
  [anon_sym_String] = "primitive_type",
  [anon_sym_c_char] = "primitive_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_mutable_specifier] = "mutable_specifier",
  [anon_sym_DASH] = "-",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_string_literal_token1] = "\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_char_literal] = "char_literal",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym__string_content] = "_string_content",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_let_declaration] = "let_declaration",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__literal] = "_literal",
  [sym__pattern] = "_pattern",
  [sym__literal_pattern] = "_literal_pattern",
  [sym_negative_literal] = "negative_literal",
  [sym_string_literal] = "string_literal",
  [sym_function_item] = "function_item",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_u8,
  [anon_sym_u32] = anon_sym_u8,
  [anon_sym_i32] = anon_sym_u8,
  [anon_sym_u64] = anon_sym_u8,
  [anon_sym_i64] = anon_sym_u8,
  [anon_sym_u128] = anon_sym_u8,
  [anon_sym_i128] = anon_sym_u8,
  [anon_sym_isize] = anon_sym_u8,
  [anon_sym_usize] = anon_sym_u8,
  [anon_sym_f32] = anon_sym_u8,
  [anon_sym_f64] = anon_sym_u8,
  [anon_sym_c_int] = anon_sym_u8,
  [anon_sym_bool] = anon_sym_u8,
  [anon_sym_String] = anon_sym_u8,
  [anon_sym_c_char] = anon_sym_u8,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_mutable_specifier] = sym_mutable_specifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_string_literal_token1] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_char_literal] = sym_char_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym__string_content] = sym__string_content,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_let_declaration] = sym_let_declaration,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__literal] = sym__literal,
  [sym__pattern] = sym__pattern,
  [sym__literal_pattern] = sym__literal_pattern,
  [sym_negative_literal] = sym_negative_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_function_item] = sym_function_item,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_mutable_specifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__literal_pattern] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_negative_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_item] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_element = 2,
  field_name = 3,
  field_parameters = 4,
  field_pattern = 5,
  field_return_type = 6,
  field_type = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_element] = "element",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_return_type] = "return_type",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 3},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 4},
  [14] = {.index = 23, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
  [1] =
    {field_pattern, 2},
  [2] =
    {field_pattern, 1},
    {field_type, 3},
  [4] =
    {field_pattern, 1},
    {field_value, 3},
  [6] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [9] =
    {field_pattern, 2},
    {field_type, 4},
  [11] =
    {field_pattern, 2},
    {field_value, 4},
  [13] =
    {field_element, 1},
  [14] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [17] =
    {field_pattern, 0},
    {field_type, 2},
  [19] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [23] =
    {field_pattern, 2},
    {field_type, 4},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [4] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(68);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(47);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(11);
      if (lookahead == '6') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(33);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 21:
      if (lookahead == 'z') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(3);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'S') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == '6') ADVANCE(27);
      if (lookahead == '8') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(38);
      if (lookahead == '6') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(41);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(46);
      if (lookahead == '6') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == '4') ADVANCE(49);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 42:
      if (lookahead == 'z') ADVANCE(58);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == '8') ADVANCE(61);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 50:
      if (lookahead == 'z') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 2},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 1, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 2},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 1, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 37, .external_lex_state = 3},
  [79] = {.lex_state = 37, .external_lex_state = 3},
  [80] = {.lex_state = 37, .external_lex_state = 3},
  [81] = {.lex_state = 37, .external_lex_state = 3},
  [82] = {.lex_state = 37, .external_lex_state = 3},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 37},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 37},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 37},
};

enum {
  ts_external_token__string_content = 0,
  ts_external_token_float_literal = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_float_literal] = sym_float_literal,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_float_literal] = true,
  },
  [2] = {
    [ts_external_token_float_literal] = true,
  },
  [3] = {
    [ts_external_token__string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_c_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_c_char] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_mutable_specifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(123),
    [sym__statement] = STATE(66),
    [sym_let_declaration] = STATE(66),
    [sym_function_item] = STATE(66),
    [aux_sym_source_file_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(7),
  },
  [2] = {
    [sym__pattern] = STATE(115),
    [sym__literal_pattern] = STATE(74),
    [sym_negative_literal] = STATE(71),
    [sym_string_literal] = STATE(71),
    [sym_parameter] = STATE(86),
    [sym_boolean_literal] = STATE(71),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_u128] = ACTIONS(11),
    [anon_sym_i128] = ACTIONS(11),
    [anon_sym_isize] = ACTIONS(11),
    [anon_sym_usize] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_c_int] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_c_char] = ACTIONS(11),
    [sym_mutable_specifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(17),
    [aux_sym_string_literal_token1] = ACTIONS(19),
    [sym_char_literal] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(17),
  },
  [3] = {
    [sym__pattern] = STATE(115),
    [sym__literal_pattern] = STATE(74),
    [sym_negative_literal] = STATE(71),
    [sym_string_literal] = STATE(71),
    [sym_parameter] = STATE(108),
    [sym_boolean_literal] = STATE(71),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_u128] = ACTIONS(11),
    [anon_sym_i128] = ACTIONS(11),
    [anon_sym_isize] = ACTIONS(11),
    [anon_sym_usize] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_c_int] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_c_char] = ACTIONS(11),
    [sym_mutable_specifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(17),
    [aux_sym_string_literal_token1] = ACTIONS(19),
    [sym_char_literal] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(17),
  },
  [4] = {
    [sym__pattern] = STATE(115),
    [sym__literal_pattern] = STATE(74),
    [sym_negative_literal] = STATE(71),
    [sym_string_literal] = STATE(71),
    [sym_parameter] = STATE(108),
    [sym_boolean_literal] = STATE(71),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_u128] = ACTIONS(11),
    [anon_sym_i128] = ACTIONS(11),
    [anon_sym_isize] = ACTIONS(11),
    [anon_sym_usize] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_c_int] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_c_char] = ACTIONS(11),
    [sym_mutable_specifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(17),
    [aux_sym_string_literal_token1] = ACTIONS(19),
    [sym_char_literal] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(17),
  },
  [5] = {
    [sym__pattern] = STATE(115),
    [sym__literal_pattern] = STATE(74),
    [sym_negative_literal] = STATE(71),
    [sym_string_literal] = STATE(71),
    [sym_parameter] = STATE(108),
    [sym_boolean_literal] = STATE(71),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_u128] = ACTIONS(11),
    [anon_sym_i128] = ACTIONS(11),
    [anon_sym_isize] = ACTIONS(11),
    [anon_sym_usize] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_c_int] = ACTIONS(11),
    [anon_sym_bool] = ACTIONS(11),
    [anon_sym_String] = ACTIONS(11),
    [anon_sym_c_char] = ACTIONS(11),
    [sym_mutable_specifier] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_integer_literal] = ACTIONS(17),
    [aux_sym_string_literal_token1] = ACTIONS(19),
    [sym_char_literal] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_float_literal] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(31), 1,
      sym_mutable_specifier,
    STATE(74), 1,
      sym__literal_pattern,
    STATE(75), 1,
      sym__pattern,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(71), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(11), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [53] = 10,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_mutable_specifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(29), 1,
      sym__pattern,
    STATE(30), 1,
      sym__literal_pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(33), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [106] = 9,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    STATE(27), 1,
      sym__pattern,
    STATE(30), 1,
      sym__literal_pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(33), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [156] = 9,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(73), 1,
      sym__pattern,
    STATE(74), 1,
      sym__literal_pattern,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(71), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(11), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [206] = 9,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    STATE(74), 1,
      sym__literal_pattern,
    STATE(117), 1,
      sym__pattern,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(71), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(11), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [256] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(111), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [289] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(121), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [322] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym__type,
    STATE(48), 1,
      sym_array_type,
    ACTIONS(55), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [355] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(105), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [388] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(101), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [421] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(112), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [454] = 5,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym__type,
    STATE(48), 1,
      sym_array_type,
    ACTIONS(55), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [487] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(76), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [520] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(85), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [553] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_array_type,
    STATE(116), 1,
      sym__type,
    ACTIONS(49), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [586] = 11,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_let,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_function,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(25), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_item,
      aux_sym_source_file_repeat1,
  [628] = 11,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_let,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_function,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(21), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_item,
      aux_sym_source_file_repeat1,
  [670] = 11,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_let,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_function,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(24), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_item,
      aux_sym_source_file_repeat1,
  [712] = 11,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_let,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(25), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_item,
      aux_sym_source_file_repeat1,
  [754] = 4,
    ACTIONS(77), 1,
      anon_sym_let,
    ACTIONS(82), 1,
      anon_sym_function,
    STATE(25), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_item,
      aux_sym_source_file_repeat1,
    ACTIONS(80), 8,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [777] = 7,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(88), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [804] = 3,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(85), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [823] = 7,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(98), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [850] = 3,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(91), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [869] = 1,
    ACTIONS(97), 12,
      sym_float_literal,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [884] = 1,
    ACTIONS(99), 12,
      sym_float_literal,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [899] = 1,
    ACTIONS(101), 12,
      sym_float_literal,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [914] = 1,
    ACTIONS(103), 12,
      sym_float_literal,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [929] = 7,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(77), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [956] = 1,
    ACTIONS(105), 12,
      sym_float_literal,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [971] = 1,
    ACTIONS(107), 12,
      sym_float_literal,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [986] = 7,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(109), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_unary_expression,
      sym__literal,
    STATE(53), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(111), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [1013] = 7,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [1040] = 7,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(109), 1,
      anon_sym_DASH,
    STATE(60), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_unary_expression,
      sym__literal,
    STATE(53), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(111), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [1067] = 1,
    ACTIONS(115), 12,
      sym_float_literal,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1082] = 7,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(109), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_unary_expression,
      sym__literal,
    STATE(53), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(111), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [1109] = 7,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(109), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_unary_expression,
      sym__literal,
    STATE(53), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(111), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [1136] = 7,
    ACTIONS(19), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(90), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(83), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(84), 2,
      sym_unary_expression,
      sym__literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [1163] = 7,
    ACTIONS(43), 1,
      aux_sym_string_literal_token1,
    ACTIONS(109), 1,
      anon_sym_DASH,
    STATE(50), 1,
      sym__expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(51), 2,
      sym_unary_expression,
      sym__literal,
    STATE(53), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(111), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
  [1190] = 2,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(117), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1206] = 2,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(121), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1222] = 1,
    ACTIONS(125), 11,
      sym_float_literal,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1236] = 1,
    ACTIONS(127), 11,
      sym_float_literal,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1250] = 1,
    ACTIONS(129), 11,
      sym_float_literal,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1264] = 1,
    ACTIONS(131), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1277] = 1,
    ACTIONS(133), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1290] = 1,
    ACTIONS(135), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1303] = 1,
    ACTIONS(137), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1316] = 1,
    ACTIONS(139), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1329] = 1,
    ACTIONS(141), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1342] = 1,
    ACTIONS(143), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1355] = 1,
    ACTIONS(145), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1368] = 1,
    ACTIONS(147), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1381] = 1,
    ACTIONS(149), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1394] = 1,
    ACTIONS(151), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1407] = 1,
    ACTIONS(153), 10,
      sym_float_literal,
      anon_sym_let,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_true,
      anon_sym_false,
  [1420] = 1,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1431] = 1,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1442] = 1,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_function,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1453] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_let,
    ACTIONS(158), 1,
      anon_sym_function,
    STATE(65), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_item,
      aux_sym_source_file_repeat1,
  [1469] = 4,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(65), 4,
      sym__statement,
      sym_let_declaration,
      sym_function_item,
      aux_sym_source_file_repeat1,
  [1485] = 1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_function,
      anon_sym_RBRACE,
  [1494] = 1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_function,
      anon_sym_RBRACE,
  [1503] = 1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_function,
      anon_sym_RBRACE,
  [1512] = 1,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_function,
  [1520] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_function,
  [1528] = 1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_function,
  [1536] = 3,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1548] = 1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_function,
  [1556] = 3,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      anon_sym_EQ,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1568] = 2,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1577] = 1,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
      anon_sym_RBRACE,
  [1584] = 3,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(175), 2,
      sym__string_content,
      sym_escape_sequence,
  [1595] = 3,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(179), 2,
      sym__string_content,
      sym_escape_sequence,
  [1606] = 3,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(179), 2,
      sym__string_content,
      sym_escape_sequence,
  [1617] = 3,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(185), 2,
      sym__string_content,
      sym_escape_sequence,
  [1628] = 3,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(189), 2,
      sym__string_content,
      sym_escape_sequence,
  [1639] = 1,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
      anon_sym_RBRACE,
  [1646] = 1,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
      anon_sym_RBRACE,
  [1653] = 2,
    ACTIONS(192), 1,
      anon_sym_EQ,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1662] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameters_repeat1,
  [1672] = 1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1678] = 1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1684] = 3,
    ACTIONS(198), 1,
      anon_sym_DASH_GT,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [1694] = 1,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1700] = 3,
    ACTIONS(202), 1,
      anon_sym_DASH_GT,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block,
  [1710] = 1,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1716] = 1,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1722] = 3,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_parameters_repeat1,
  [1732] = 1,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1738] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_parameters_repeat1,
  [1748] = 1,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1754] = 1,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1760] = 1,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_function,
  [1766] = 1,
    ACTIONS(213), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1771] = 1,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1776] = 1,
    ACTIONS(217), 2,
      sym_float_literal,
      sym_integer_literal,
  [1781] = 1,
    ACTIONS(219), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1786] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_parameters,
  [1793] = 2,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [1800] = 2,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_parameters,
  [1807] = 1,
    ACTIONS(223), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1812] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1817] = 1,
    ACTIONS(225), 2,
      sym_float_literal,
      sym_integer_literal,
  [1822] = 1,
    ACTIONS(227), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [1827] = 1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1832] = 2,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
  [1839] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [1843] = 1,
    ACTIONS(231), 1,
      sym_identifier,
  [1847] = 1,
    ACTIONS(233), 1,
      anon_sym_COLON,
  [1851] = 1,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
  [1855] = 1,
    ACTIONS(237), 1,
      anon_sym_COLON,
  [1859] = 1,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
  [1863] = 1,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
  [1867] = 1,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [1871] = 1,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
  [1875] = 1,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
  [1879] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [1883] = 1,
    ACTIONS(247), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 53,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 256,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 322,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 388,
  [SMALL_STATE(16)] = 421,
  [SMALL_STATE(17)] = 454,
  [SMALL_STATE(18)] = 487,
  [SMALL_STATE(19)] = 520,
  [SMALL_STATE(20)] = 553,
  [SMALL_STATE(21)] = 586,
  [SMALL_STATE(22)] = 628,
  [SMALL_STATE(23)] = 670,
  [SMALL_STATE(24)] = 712,
  [SMALL_STATE(25)] = 754,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 804,
  [SMALL_STATE(28)] = 823,
  [SMALL_STATE(29)] = 850,
  [SMALL_STATE(30)] = 869,
  [SMALL_STATE(31)] = 884,
  [SMALL_STATE(32)] = 899,
  [SMALL_STATE(33)] = 914,
  [SMALL_STATE(34)] = 929,
  [SMALL_STATE(35)] = 956,
  [SMALL_STATE(36)] = 971,
  [SMALL_STATE(37)] = 986,
  [SMALL_STATE(38)] = 1013,
  [SMALL_STATE(39)] = 1040,
  [SMALL_STATE(40)] = 1067,
  [SMALL_STATE(41)] = 1082,
  [SMALL_STATE(42)] = 1109,
  [SMALL_STATE(43)] = 1136,
  [SMALL_STATE(44)] = 1163,
  [SMALL_STATE(45)] = 1190,
  [SMALL_STATE(46)] = 1206,
  [SMALL_STATE(47)] = 1222,
  [SMALL_STATE(48)] = 1236,
  [SMALL_STATE(49)] = 1250,
  [SMALL_STATE(50)] = 1264,
  [SMALL_STATE(51)] = 1277,
  [SMALL_STATE(52)] = 1290,
  [SMALL_STATE(53)] = 1303,
  [SMALL_STATE(54)] = 1316,
  [SMALL_STATE(55)] = 1329,
  [SMALL_STATE(56)] = 1342,
  [SMALL_STATE(57)] = 1355,
  [SMALL_STATE(58)] = 1368,
  [SMALL_STATE(59)] = 1381,
  [SMALL_STATE(60)] = 1394,
  [SMALL_STATE(61)] = 1407,
  [SMALL_STATE(62)] = 1420,
  [SMALL_STATE(63)] = 1431,
  [SMALL_STATE(64)] = 1442,
  [SMALL_STATE(65)] = 1453,
  [SMALL_STATE(66)] = 1469,
  [SMALL_STATE(67)] = 1485,
  [SMALL_STATE(68)] = 1494,
  [SMALL_STATE(69)] = 1503,
  [SMALL_STATE(70)] = 1512,
  [SMALL_STATE(71)] = 1520,
  [SMALL_STATE(72)] = 1528,
  [SMALL_STATE(73)] = 1536,
  [SMALL_STATE(74)] = 1548,
  [SMALL_STATE(75)] = 1556,
  [SMALL_STATE(76)] = 1568,
  [SMALL_STATE(77)] = 1577,
  [SMALL_STATE(78)] = 1584,
  [SMALL_STATE(79)] = 1595,
  [SMALL_STATE(80)] = 1606,
  [SMALL_STATE(81)] = 1617,
  [SMALL_STATE(82)] = 1628,
  [SMALL_STATE(83)] = 1639,
  [SMALL_STATE(84)] = 1646,
  [SMALL_STATE(85)] = 1653,
  [SMALL_STATE(86)] = 1662,
  [SMALL_STATE(87)] = 1672,
  [SMALL_STATE(88)] = 1678,
  [SMALL_STATE(89)] = 1684,
  [SMALL_STATE(90)] = 1694,
  [SMALL_STATE(91)] = 1700,
  [SMALL_STATE(92)] = 1710,
  [SMALL_STATE(93)] = 1716,
  [SMALL_STATE(94)] = 1722,
  [SMALL_STATE(95)] = 1732,
  [SMALL_STATE(96)] = 1738,
  [SMALL_STATE(97)] = 1748,
  [SMALL_STATE(98)] = 1754,
  [SMALL_STATE(99)] = 1760,
  [SMALL_STATE(100)] = 1766,
  [SMALL_STATE(101)] = 1771,
  [SMALL_STATE(102)] = 1776,
  [SMALL_STATE(103)] = 1781,
  [SMALL_STATE(104)] = 1786,
  [SMALL_STATE(105)] = 1793,
  [SMALL_STATE(106)] = 1800,
  [SMALL_STATE(107)] = 1807,
  [SMALL_STATE(108)] = 1812,
  [SMALL_STATE(109)] = 1817,
  [SMALL_STATE(110)] = 1822,
  [SMALL_STATE(111)] = 1827,
  [SMALL_STATE(112)] = 1832,
  [SMALL_STATE(113)] = 1839,
  [SMALL_STATE(114)] = 1843,
  [SMALL_STATE(115)] = 1847,
  [SMALL_STATE(116)] = 1851,
  [SMALL_STATE(117)] = 1855,
  [SMALL_STATE(118)] = 1859,
  [SMALL_STATE(119)] = 1863,
  [SMALL_STATE(120)] = 1867,
  [SMALL_STATE(121)] = 1871,
  [SMALL_STATE(122)] = 1875,
  [SMALL_STATE(123)] = 1879,
  [SMALL_STATE(124)] = 1883,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 8),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 11),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 9),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 13),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(82),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 12),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [245] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jakt_external_scanner_create(void);
void tree_sitter_jakt_external_scanner_destroy(void *);
bool tree_sitter_jakt_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jakt_external_scanner_serialize(void *, char *);
void tree_sitter_jakt_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jakt(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jakt_external_scanner_create,
      tree_sitter_jakt_external_scanner_destroy,
      tree_sitter_jakt_external_scanner_scan,
      tree_sitter_jakt_external_scanner_serialize,
      tree_sitter_jakt_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
