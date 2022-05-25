#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 1
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 18

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_u8 = 4,
  anon_sym_i8 = 5,
  anon_sym_u16 = 6,
  anon_sym_i16 = 7,
  anon_sym_u32 = 8,
  anon_sym_i32 = 9,
  anon_sym_u64 = 10,
  anon_sym_i64 = 11,
  anon_sym_u128 = 12,
  anon_sym_i128 = 13,
  anon_sym_isize = 14,
  anon_sym_usize = 15,
  anon_sym_f32 = 16,
  anon_sym_f64 = 17,
  anon_sym_c_int = 18,
  anon_sym_bool = 19,
  anon_sym_String = 20,
  anon_sym_c_char = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_let = 24,
  anon_sym_COLON = 25,
  anon_sym_EQ = 26,
  sym_mutable_specifier = 27,
  anon_sym_DASH = 28,
  anon_sym_return = 29,
  anon_sym_AMP = 30,
  anon_sym_PIPE = 31,
  anon_sym_CARET = 32,
  anon_sym_EQ_EQ = 33,
  anon_sym_BANG_EQ = 34,
  anon_sym_LT = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_GT = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_LT_LT = 39,
  anon_sym_GT_GT = 40,
  anon_sym_PLUS = 41,
  anon_sym_STAR = 42,
  anon_sym_SLASH = 43,
  anon_sym_PERCENT = 44,
  sym_integer_literal = 45,
  aux_sym_string_literal_token1 = 46,
  anon_sym_DQUOTE = 47,
  sym_char_literal = 48,
  sym_escape_sequence = 49,
  anon_sym_function = 50,
  anon_sym_DASH_GT = 51,
  anon_sym_LPAREN = 52,
  anon_sym_COMMA = 53,
  anon_sym_RPAREN = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  anon_sym_if = 57,
  anon_sym_else = 58,
  anon_sym_true = 59,
  anon_sym_false = 60,
  sym_line_comment = 61,
  sym__string_content = 62,
  sym_float_literal = 63,
  sym_source_file = 64,
  sym_declaration = 65,
  sym__expression = 66,
  sym__top_level_declaration = 67,
  sym__type = 68,
  sym_array_type = 69,
  sym_let_declaration = 70,
  sym_unary_expression = 71,
  sym_return_statement = 72,
  sym_binary_expression = 73,
  sym__literal = 74,
  sym__pattern = 75,
  sym__literal_pattern = 76,
  sym_negative_literal = 77,
  sym_string_literal = 78,
  sym_function_declaration = 79,
  sym_parameters = 80,
  sym_parameter = 81,
  sym_block = 82,
  sym_if_statement = 83,
  sym_else_clause = 84,
  sym_boolean_literal = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_string_literal_repeat1 = 87,
  aux_sym_parameters_repeat1 = 88,
  aux_sym_block_repeat1 = 89,
  alias_sym_type_identifier = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_return] = "return",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
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
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym__string_content] = "_string_content",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym__expression] = "_expression",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_let_declaration] = "let_declaration",
  [sym_unary_expression] = "unary_expression",
  [sym_return_statement] = "return_statement",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym__pattern] = "_pattern",
  [sym__literal_pattern] = "_literal_pattern",
  [sym_negative_literal] = "negative_literal",
  [sym_string_literal] = "string_literal",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_return] = anon_sym_return,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym__string_content] = sym__string_content,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym__expression] = sym__expression,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_let_declaration] = sym_let_declaration,
  [sym_unary_expression] = sym_unary_expression,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym__pattern] = sym__pattern,
  [sym__literal_pattern] = sym__literal_pattern,
  [sym_negative_literal] = sym_negative_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__top_level_declaration] = {
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
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
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
  [sym_function_declaration] = {
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_element = 5,
  field_left = 6,
  field_name = 7,
  field_operator = 8,
  field_parameters = 9,
  field_pattern = 10,
  field_return_type = 11,
  field_right = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 3},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 4},
  [12] = {.index = 20, .length = 1},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 4},
  [16] = {.index = 30, .length = 5},
  [17] = {.index = 35, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
  [1] =
    {field_pattern, 2},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
    {field_pattern, 1},
    {field_type, 3},
  [7] =
    {field_pattern, 1},
    {field_value, 3},
  [9] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [12] =
    {field_pattern, 2},
    {field_type, 4},
  [14] =
    {field_pattern, 2},
    {field_value, 4},
  [16] =
    {field_condition, 1},
    {field_condition, 2},
    {field_condition, 3},
    {field_consequence, 4},
  [20] =
    {field_element, 1},
  [21] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [24] =
    {field_pattern, 0},
    {field_type, 2},
  [26] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [30] =
    {field_alternative, 5},
    {field_condition, 1},
    {field_condition, 2},
    {field_condition, 3},
    {field_consequence, 4},
  [35] =
    {field_pattern, 2},
    {field_type, 4},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [5] = {
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
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= '_')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(72);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == '6') ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == '8') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(40);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(41);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == 'z') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == '{') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(48);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(95);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(73);
      if (lookahead == '6') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(8);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(95);
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
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '6') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 48:
      if (lookahead == 'z') ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 57:
      if (lookahead == 'z') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 45, .external_lex_state = 2},
  [2] = {.lex_state = 45, .external_lex_state = 2},
  [3] = {.lex_state = 45, .external_lex_state = 2},
  [4] = {.lex_state = 45, .external_lex_state = 2},
  [5] = {.lex_state = 45, .external_lex_state = 2},
  [6] = {.lex_state = 45, .external_lex_state = 2},
  [7] = {.lex_state = 45, .external_lex_state = 2},
  [8] = {.lex_state = 45, .external_lex_state = 2},
  [9] = {.lex_state = 45, .external_lex_state = 2},
  [10] = {.lex_state = 45, .external_lex_state = 2},
  [11] = {.lex_state = 45, .external_lex_state = 2},
  [12] = {.lex_state = 45, .external_lex_state = 2},
  [13] = {.lex_state = 45, .external_lex_state = 2},
  [14] = {.lex_state = 4, .external_lex_state = 2},
  [15] = {.lex_state = 4, .external_lex_state = 2},
  [16] = {.lex_state = 4, .external_lex_state = 2},
  [17] = {.lex_state = 4, .external_lex_state = 2},
  [18] = {.lex_state = 4, .external_lex_state = 2},
  [19] = {.lex_state = 45, .external_lex_state = 2},
  [20] = {.lex_state = 45, .external_lex_state = 2},
  [21] = {.lex_state = 4, .external_lex_state = 2},
  [22] = {.lex_state = 4, .external_lex_state = 2},
  [23] = {.lex_state = 4, .external_lex_state = 2},
  [24] = {.lex_state = 4, .external_lex_state = 2},
  [25] = {.lex_state = 4, .external_lex_state = 2},
  [26] = {.lex_state = 4, .external_lex_state = 2},
  [27] = {.lex_state = 4, .external_lex_state = 2},
  [28] = {.lex_state = 4, .external_lex_state = 2},
  [29] = {.lex_state = 4, .external_lex_state = 2},
  [30] = {.lex_state = 4, .external_lex_state = 2},
  [31] = {.lex_state = 4, .external_lex_state = 2},
  [32] = {.lex_state = 45, .external_lex_state = 2},
  [33] = {.lex_state = 45, .external_lex_state = 2},
  [34] = {.lex_state = 45, .external_lex_state = 2},
  [35] = {.lex_state = 45, .external_lex_state = 2},
  [36] = {.lex_state = 45, .external_lex_state = 2},
  [37] = {.lex_state = 45, .external_lex_state = 2},
  [38] = {.lex_state = 45, .external_lex_state = 2},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 45, .external_lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 4},
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
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 45, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 6, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 6, .external_lex_state = 2},
  [91] = {.lex_state = 6, .external_lex_state = 2},
  [92] = {.lex_state = 45, .external_lex_state = 2},
  [93] = {.lex_state = 45, .external_lex_state = 2},
  [94] = {.lex_state = 45, .external_lex_state = 2},
  [95] = {.lex_state = 45, .external_lex_state = 2},
  [96] = {.lex_state = 45, .external_lex_state = 2},
  [97] = {.lex_state = 45, .external_lex_state = 2},
  [98] = {.lex_state = 45, .external_lex_state = 2},
  [99] = {.lex_state = 45, .external_lex_state = 2},
  [100] = {.lex_state = 45, .external_lex_state = 2},
  [101] = {.lex_state = 45, .external_lex_state = 2},
  [102] = {.lex_state = 45, .external_lex_state = 2},
  [103] = {.lex_state = 45, .external_lex_state = 2},
  [104] = {.lex_state = 45, .external_lex_state = 2},
  [105] = {.lex_state = 45, .external_lex_state = 2},
  [106] = {.lex_state = 45, .external_lex_state = 2},
  [107] = {.lex_state = 6, .external_lex_state = 2},
  [108] = {.lex_state = 45, .external_lex_state = 2},
  [109] = {.lex_state = 45, .external_lex_state = 2},
  [110] = {.lex_state = 45, .external_lex_state = 2},
  [111] = {.lex_state = 45, .external_lex_state = 2},
  [112] = {.lex_state = 45, .external_lex_state = 2},
  [113] = {.lex_state = 6, .external_lex_state = 2},
  [114] = {.lex_state = 45, .external_lex_state = 2},
  [115] = {.lex_state = 45, .external_lex_state = 2},
  [116] = {.lex_state = 45, .external_lex_state = 2},
  [117] = {.lex_state = 45, .external_lex_state = 2},
  [118] = {.lex_state = 45, .external_lex_state = 2},
  [119] = {.lex_state = 45, .external_lex_state = 2},
  [120] = {.lex_state = 45, .external_lex_state = 2},
  [121] = {.lex_state = 45, .external_lex_state = 2},
  [122] = {.lex_state = 45, .external_lex_state = 2},
  [123] = {.lex_state = 45, .external_lex_state = 2},
  [124] = {.lex_state = 6, .external_lex_state = 2},
  [125] = {.lex_state = 6, .external_lex_state = 2},
  [126] = {.lex_state = 45, .external_lex_state = 2},
  [127] = {.lex_state = 6, .external_lex_state = 2},
  [128] = {.lex_state = 45, .external_lex_state = 2},
  [129] = {.lex_state = 45, .external_lex_state = 2},
  [130] = {.lex_state = 45, .external_lex_state = 2},
  [131] = {.lex_state = 45, .external_lex_state = 2},
  [132] = {.lex_state = 45, .external_lex_state = 2},
  [133] = {.lex_state = 45, .external_lex_state = 2},
  [134] = {.lex_state = 45, .external_lex_state = 2},
  [135] = {.lex_state = 45, .external_lex_state = 2},
  [136] = {.lex_state = 45, .external_lex_state = 2},
  [137] = {.lex_state = 45, .external_lex_state = 2},
  [138] = {.lex_state = 45, .external_lex_state = 2},
  [139] = {.lex_state = 45, .external_lex_state = 2},
  [140] = {.lex_state = 45, .external_lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 5, .external_lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 5, .external_lex_state = 3},
  [151] = {.lex_state = 5, .external_lex_state = 3},
  [152] = {.lex_state = 5, .external_lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 5, .external_lex_state = 3},
  [156] = {.lex_state = 5, .external_lex_state = 3},
  [157] = {.lex_state = 5, .external_lex_state = 3},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
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
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(191),
    [sym_declaration] = STATE(171),
    [sym__expression] = STATE(68),
    [sym__top_level_declaration] = STATE(19),
    [sym_let_declaration] = STATE(186),
    [sym_unary_expression] = STATE(70),
    [sym_return_statement] = STATE(171),
    [sym_binary_expression] = STATE(70),
    [sym__literal] = STATE(70),
    [sym_string_literal] = STATE(59),
    [sym_function_declaration] = STATE(19),
    [sym_block] = STATE(171),
    [sym_if_statement] = STATE(171),
    [sym_boolean_literal] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [aux_sym_string_literal_token1] = ACTIONS(15),
    [sym_char_literal] = ACTIONS(13),
    [anon_sym_function] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_float_literal] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_mutable_specifier,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_parameter,
    STATE(194), 1,
      sym__pattern,
    STATE(195), 1,
      sym__literal_pattern,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(201), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(27), 18,
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
  [62] = 12,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_mutable_specifier,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_parameter,
    STATE(194), 1,
      sym__pattern,
    STATE(195), 1,
      sym__literal_pattern,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(201), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(27), 18,
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
  [121] = 12,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_mutable_specifier,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_parameter,
    STATE(194), 1,
      sym__pattern,
    STATE(195), 1,
      sym__literal_pattern,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(201), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(27), 18,
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
  [180] = 11,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(29), 1,
      sym_mutable_specifier,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    STATE(183), 1,
      sym_parameter,
    STATE(194), 1,
      sym__pattern,
    STATE(195), 1,
      sym__literal_pattern,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(201), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(27), 18,
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
  [236] = 10,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(88), 1,
      sym__pattern,
    STATE(89), 1,
      sym__literal_pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(91), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [289] = 10,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_mutable_specifier,
    ACTIONS(67), 1,
      anon_sym_DASH,
    STATE(153), 1,
      sym__pattern,
    STATE(159), 1,
      sym__literal_pattern,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(149), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 18,
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
  [342] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    STATE(192), 1,
      sym__pattern,
    STATE(195), 1,
      sym__literal_pattern,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(201), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(27), 18,
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
  [392] = 9,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(87), 1,
      sym__pattern,
    STATE(89), 1,
      sym__literal_pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(91), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [442] = 9,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_DASH,
    STATE(145), 1,
      sym__pattern,
    STATE(159), 1,
      sym__literal_pattern,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(149), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 18,
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
  [492] = 2,
    ACTIONS(71), 9,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(73), 21,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [527] = 2,
    ACTIONS(75), 9,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(77), 21,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [562] = 2,
    ACTIONS(79), 9,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(81), 21,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [597] = 7,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(89), 11,
      sym_float_literal,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [640] = 2,
    ACTIONS(97), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(99), 20,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [673] = 2,
    ACTIONS(101), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(103), 20,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [706] = 2,
    ACTIONS(105), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(107), 20,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [739] = 10,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(117), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [788] = 17,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    ACTIONS(17), 1,
      anon_sym_function,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym__expression,
    STATE(186), 1,
      sym_let_declaration,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(20), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(171), 4,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [851] = 17,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_let,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(132), 1,
      anon_sym_return,
    ACTIONS(138), 1,
      aux_sym_string_literal_token1,
    ACTIONS(141), 1,
      anon_sym_function,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(68), 1,
      sym__expression,
    STATE(186), 1,
      sym_let_declaration,
    ACTIONS(150), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(135), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(20), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(171), 4,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [914] = 3,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(89), 17,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [949] = 5,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(89), 13,
      sym_float_literal,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [988] = 6,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(89), 12,
      sym_float_literal,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1029] = 8,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(89), 10,
      sym_float_literal,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1074] = 4,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(89), 15,
      sym_float_literal,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1111] = 10,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(155), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1160] = 10,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(157), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(159), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1209] = 10,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(163), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1258] = 10,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(167), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1307] = 2,
    ACTIONS(83), 8,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(89), 20,
      sym_float_literal,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1340] = 10,
    ACTIONS(87), 1,
      anon_sym_AMP,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(85), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(169), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(171), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1389] = 15,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_return,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      anon_sym_if,
    STATE(29), 1,
      sym__expression,
    STATE(140), 1,
      sym_let_declaration,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(34), 5,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1445] = 15,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_return,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__expression,
    STATE(140), 1,
      sym_let_declaration,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(37), 5,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1501] = 15,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_return,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__expression,
    STATE(140), 1,
      sym_let_declaration,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(37), 5,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1557] = 15,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_return,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__expression,
    STATE(140), 1,
      sym_let_declaration,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(33), 5,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1613] = 15,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_return,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__expression,
    STATE(140), 1,
      sym_let_declaration,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(37), 5,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1669] = 15,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_let,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(206), 1,
      anon_sym_return,
    ACTIONS(212), 1,
      aux_sym_string_literal_token1,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      anon_sym_if,
    STATE(29), 1,
      sym__expression,
    STATE(140), 1,
      sym_let_declaration,
    ACTIONS(223), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(209), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(37), 5,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1725] = 15,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_let,
    ACTIONS(177), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_return,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym__expression,
    STATE(140), 1,
      sym_let_declaration,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(36), 5,
      sym_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1781] = 5,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_array_type,
    STATE(198), 1,
      sym__type,
    ACTIONS(230), 18,
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
  [1814] = 5,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_array_type,
    STATE(168), 1,
      sym__type,
    ACTIONS(236), 18,
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
  [1847] = 5,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_array_type,
    STATE(173), 1,
      sym__type,
    ACTIONS(230), 18,
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
  [1880] = 5,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_array_type,
    STATE(197), 1,
      sym__type,
    ACTIONS(230), 18,
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
  [1913] = 5,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_array_type,
    STATE(190), 1,
      sym__type,
    ACTIONS(230), 18,
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
  [1946] = 5,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
    STATE(162), 1,
      sym__type,
    STATE(165), 1,
      sym_array_type,
    ACTIONS(236), 18,
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
  [1979] = 5,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      sym__type,
    STATE(124), 1,
      sym_array_type,
    ACTIONS(242), 18,
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
  [2012] = 5,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__type,
    STATE(124), 1,
      sym_array_type,
    ACTIONS(242), 18,
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
  [2045] = 5,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_array_type,
    STATE(187), 1,
      sym__type,
    ACTIONS(230), 18,
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
  [2078] = 5,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_array_type,
    STATE(181), 1,
      sym__type,
    ACTIONS(230), 18,
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
  [2111] = 2,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(79), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2136] = 2,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(71), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2161] = 2,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(75), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2186] = 10,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(248), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(246), 3,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [2226] = 8,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2261] = 7,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2294] = 6,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2325] = 2,
    ACTIONS(75), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 16,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [2348] = 4,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 12,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2375] = 2,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(83), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2398] = 2,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(101), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2421] = 2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 16,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [2444] = 5,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 10,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2473] = 2,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(97), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2496] = 9,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2533] = 9,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2570] = 9,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2607] = 9,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2644] = 3,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(83), 14,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
  [2669] = 9,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2706] = 9,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      anon_sym_PIPE,
    ACTIONS(256), 1,
      anon_sym_CARET,
    ACTIONS(250), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(258), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(260), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(262), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [2743] = 2,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(105), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2766] = 2,
    ACTIONS(79), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 16,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [2789] = 2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 15,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [2811] = 2,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 15,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [2833] = 9,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_CARET,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(276), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2869] = 2,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 15,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [2891] = 4,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(89), 10,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_RPAREN,
  [2917] = 8,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_CARET,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(89), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [2951] = 6,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(89), 7,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [2981] = 7,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(274), 1,
      anon_sym_CARET,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(89), 6,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [3013] = 5,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(280), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(89), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [3041] = 3,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(89), 12,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3065] = 9,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(272), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_CARET,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(278), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(280), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(282), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(276), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3101] = 2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 15,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
  [3123] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_float_literal,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      anon_sym_DASH,
    ACTIONS(292), 1,
      aux_sym_string_literal_token1,
    STATE(66), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(290), 2,
      sym_integer_literal,
      sym_char_literal,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3162] = 4,
    ACTIONS(298), 1,
      anon_sym_else,
    STATE(138), 1,
      sym_else_clause,
    ACTIONS(294), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(296), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3186] = 2,
    ACTIONS(300), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(302), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3206] = 4,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(308), 1,
      anon_sym_EQ,
    ACTIONS(304), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(310), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3230] = 4,
    ACTIONS(314), 1,
      anon_sym_COLON,
    ACTIONS(316), 1,
      anon_sym_EQ,
    ACTIONS(312), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(318), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3254] = 2,
    ACTIONS(320), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(322), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3274] = 2,
    ACTIONS(324), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(326), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3294] = 2,
    ACTIONS(328), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(330), 9,
      sym_float_literal,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3314] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(69), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3345] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(21), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3376] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(77), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3407] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(78), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3438] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(79), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3469] = 2,
    ACTIONS(338), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(340), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3488] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3519] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(81), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3550] = 2,
    ACTIONS(342), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(344), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3569] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(74), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3600] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(62), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3631] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3662] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(64), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3693] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(75), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3724] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(73), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3755] = 3,
    ACTIONS(348), 1,
      anon_sym_EQ,
    ACTIONS(346), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(350), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3776] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(82), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3807] = 2,
    ACTIONS(352), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(354), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3826] = 2,
    ACTIONS(121), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(356), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3845] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(63), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3876] = 2,
    ACTIONS(358), 7,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(360), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3895] = 3,
    ACTIONS(364), 1,
      anon_sym_EQ,
    ACTIONS(362), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(366), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3916] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(65), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3947] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(26), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [3978] = 2,
    ACTIONS(342), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(344), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3997] = 8,
    ACTIONS(35), 1,
      aux_sym_string_literal_token1,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(76), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(336), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(83), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4028] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4059] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4090] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(23), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4121] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4152] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(25), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4183] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(30), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4214] = 2,
    ACTIONS(368), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(370), 8,
      sym_float_literal,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4233] = 2,
    ACTIONS(372), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(374), 8,
      sym_float_literal,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4252] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(31), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4283] = 2,
    ACTIONS(376), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(378), 8,
      sym_float_literal,
      anon_sym_EQ,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4302] = 2,
    ACTIONS(352), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(354), 7,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4321] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(58), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4352] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(57), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4383] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(53), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4414] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(55), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4445] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(54), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4476] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(61), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4507] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      aux_sym_string_literal_token1,
    STATE(67), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(13), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(70), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4538] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(28), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4569] = 8,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DASH,
    STATE(27), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(181), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(17), 3,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [4600] = 2,
    ACTIONS(380), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(382), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4618] = 2,
    ACTIONS(384), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(386), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4636] = 2,
    ACTIONS(388), 6,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(390), 7,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4654] = 1,
    ACTIONS(370), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [4661] = 3,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(392), 1,
      anon_sym_if,
    STATE(180), 2,
      sym_block,
      sym_if_statement,
  [4672] = 2,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(324), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [4681] = 3,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(396), 2,
      sym__string_content,
      sym_escape_sequence,
  [4692] = 4,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(400), 1,
      anon_sym_EQ,
  [4705] = 1,
    ACTIONS(378), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [4712] = 4,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      anon_sym_else,
    STATE(185), 1,
      sym_else_clause,
  [4725] = 2,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(300), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [4734] = 2,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(328), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [4743] = 3,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(406), 2,
      sym__string_content,
      sym_escape_sequence,
  [4754] = 3,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(411), 2,
      sym__string_content,
      sym_escape_sequence,
  [4765] = 3,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(411), 2,
      sym__string_content,
      sym_escape_sequence,
  [4776] = 4,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(417), 1,
      anon_sym_EQ,
  [4789] = 1,
    ACTIONS(374), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [4796] = 3,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(421), 2,
      sym__string_content,
      sym_escape_sequence,
  [4807] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(411), 2,
      sym__string_content,
      sym_escape_sequence,
  [4818] = 3,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(427), 2,
      sym__string_content,
      sym_escape_sequence,
  [4829] = 3,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_if,
    STATE(139), 2,
      sym_block,
      sym_if_statement,
  [4840] = 2,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(320), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [4849] = 2,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(354), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [4857] = 3,
    ACTIONS(431), 1,
      anon_sym_DASH_GT,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
  [4867] = 3,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      anon_sym_EQ,
  [4877] = 2,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 2,
      anon_sym_SEMI,
      anon_sym_else,
  [4885] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      aux_sym_parameters_repeat1,
  [4895] = 2,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(368), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4903] = 2,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(372), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4911] = 3,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_parameters_repeat1,
  [4921] = 3,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(446), 1,
      anon_sym_EQ,
  [4931] = 3,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_parameters_repeat1,
  [4941] = 2,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(376), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4949] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(266), 1,
      anon_sym_SEMI,
  [4956] = 1,
    ACTIONS(450), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [4961] = 2,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
  [4968] = 1,
    ACTIONS(452), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [4973] = 1,
    ACTIONS(454), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [4978] = 1,
    ACTIONS(456), 2,
      sym_float_literal,
      sym_integer_literal,
  [4983] = 2,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_parameters,
  [4990] = 2,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_block,
  [4997] = 1,
    ACTIONS(460), 2,
      sym_float_literal,
      sym_integer_literal,
  [5002] = 2,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_LF,
  [5009] = 1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5014] = 1,
    ACTIONS(464), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [5019] = 1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5024] = 1,
    ACTIONS(466), 2,
      sym_float_literal,
      sym_integer_literal,
  [5029] = 2,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      anon_sym_LF,
  [5036] = 2,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_LF,
  [5043] = 1,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5048] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_block,
  [5055] = 1,
    ACTIONS(302), 1,
      anon_sym_COLON,
  [5059] = 1,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
  [5063] = 1,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
  [5067] = 1,
    ACTIONS(474), 1,
      anon_sym_COLON,
  [5071] = 1,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
  [5075] = 1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [5079] = 1,
    ACTIONS(322), 1,
      anon_sym_COLON,
  [5083] = 1,
    ACTIONS(480), 1,
      sym_identifier,
  [5087] = 1,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [5091] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
  [5095] = 1,
    ACTIONS(326), 1,
      anon_sym_COLON,
  [5099] = 1,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
  [5103] = 1,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [5107] = 1,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 121,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 392,
  [SMALL_STATE(10)] = 442,
  [SMALL_STATE(11)] = 492,
  [SMALL_STATE(12)] = 527,
  [SMALL_STATE(13)] = 562,
  [SMALL_STATE(14)] = 597,
  [SMALL_STATE(15)] = 640,
  [SMALL_STATE(16)] = 673,
  [SMALL_STATE(17)] = 706,
  [SMALL_STATE(18)] = 739,
  [SMALL_STATE(19)] = 788,
  [SMALL_STATE(20)] = 851,
  [SMALL_STATE(21)] = 914,
  [SMALL_STATE(22)] = 949,
  [SMALL_STATE(23)] = 988,
  [SMALL_STATE(24)] = 1029,
  [SMALL_STATE(25)] = 1074,
  [SMALL_STATE(26)] = 1111,
  [SMALL_STATE(27)] = 1160,
  [SMALL_STATE(28)] = 1209,
  [SMALL_STATE(29)] = 1258,
  [SMALL_STATE(30)] = 1307,
  [SMALL_STATE(31)] = 1340,
  [SMALL_STATE(32)] = 1389,
  [SMALL_STATE(33)] = 1445,
  [SMALL_STATE(34)] = 1501,
  [SMALL_STATE(35)] = 1557,
  [SMALL_STATE(36)] = 1613,
  [SMALL_STATE(37)] = 1669,
  [SMALL_STATE(38)] = 1725,
  [SMALL_STATE(39)] = 1781,
  [SMALL_STATE(40)] = 1814,
  [SMALL_STATE(41)] = 1847,
  [SMALL_STATE(42)] = 1880,
  [SMALL_STATE(43)] = 1913,
  [SMALL_STATE(44)] = 1946,
  [SMALL_STATE(45)] = 1979,
  [SMALL_STATE(46)] = 2012,
  [SMALL_STATE(47)] = 2045,
  [SMALL_STATE(48)] = 2078,
  [SMALL_STATE(49)] = 2111,
  [SMALL_STATE(50)] = 2136,
  [SMALL_STATE(51)] = 2161,
  [SMALL_STATE(52)] = 2186,
  [SMALL_STATE(53)] = 2226,
  [SMALL_STATE(54)] = 2261,
  [SMALL_STATE(55)] = 2294,
  [SMALL_STATE(56)] = 2325,
  [SMALL_STATE(57)] = 2348,
  [SMALL_STATE(58)] = 2375,
  [SMALL_STATE(59)] = 2398,
  [SMALL_STATE(60)] = 2421,
  [SMALL_STATE(61)] = 2444,
  [SMALL_STATE(62)] = 2473,
  [SMALL_STATE(63)] = 2496,
  [SMALL_STATE(64)] = 2533,
  [SMALL_STATE(65)] = 2570,
  [SMALL_STATE(66)] = 2607,
  [SMALL_STATE(67)] = 2644,
  [SMALL_STATE(68)] = 2669,
  [SMALL_STATE(69)] = 2706,
  [SMALL_STATE(70)] = 2743,
  [SMALL_STATE(71)] = 2766,
  [SMALL_STATE(72)] = 2789,
  [SMALL_STATE(73)] = 2811,
  [SMALL_STATE(74)] = 2833,
  [SMALL_STATE(75)] = 2869,
  [SMALL_STATE(76)] = 2891,
  [SMALL_STATE(77)] = 2917,
  [SMALL_STATE(78)] = 2951,
  [SMALL_STATE(79)] = 2981,
  [SMALL_STATE(80)] = 3013,
  [SMALL_STATE(81)] = 3041,
  [SMALL_STATE(82)] = 3065,
  [SMALL_STATE(83)] = 3101,
  [SMALL_STATE(84)] = 3123,
  [SMALL_STATE(85)] = 3162,
  [SMALL_STATE(86)] = 3186,
  [SMALL_STATE(87)] = 3206,
  [SMALL_STATE(88)] = 3230,
  [SMALL_STATE(89)] = 3254,
  [SMALL_STATE(90)] = 3274,
  [SMALL_STATE(91)] = 3294,
  [SMALL_STATE(92)] = 3314,
  [SMALL_STATE(93)] = 3345,
  [SMALL_STATE(94)] = 3376,
  [SMALL_STATE(95)] = 3407,
  [SMALL_STATE(96)] = 3438,
  [SMALL_STATE(97)] = 3469,
  [SMALL_STATE(98)] = 3488,
  [SMALL_STATE(99)] = 3519,
  [SMALL_STATE(100)] = 3550,
  [SMALL_STATE(101)] = 3569,
  [SMALL_STATE(102)] = 3600,
  [SMALL_STATE(103)] = 3631,
  [SMALL_STATE(104)] = 3662,
  [SMALL_STATE(105)] = 3693,
  [SMALL_STATE(106)] = 3724,
  [SMALL_STATE(107)] = 3755,
  [SMALL_STATE(108)] = 3776,
  [SMALL_STATE(109)] = 3807,
  [SMALL_STATE(110)] = 3826,
  [SMALL_STATE(111)] = 3845,
  [SMALL_STATE(112)] = 3876,
  [SMALL_STATE(113)] = 3895,
  [SMALL_STATE(114)] = 3916,
  [SMALL_STATE(115)] = 3947,
  [SMALL_STATE(116)] = 3978,
  [SMALL_STATE(117)] = 3997,
  [SMALL_STATE(118)] = 4028,
  [SMALL_STATE(119)] = 4059,
  [SMALL_STATE(120)] = 4090,
  [SMALL_STATE(121)] = 4121,
  [SMALL_STATE(122)] = 4152,
  [SMALL_STATE(123)] = 4183,
  [SMALL_STATE(124)] = 4214,
  [SMALL_STATE(125)] = 4233,
  [SMALL_STATE(126)] = 4252,
  [SMALL_STATE(127)] = 4283,
  [SMALL_STATE(128)] = 4302,
  [SMALL_STATE(129)] = 4321,
  [SMALL_STATE(130)] = 4352,
  [SMALL_STATE(131)] = 4383,
  [SMALL_STATE(132)] = 4414,
  [SMALL_STATE(133)] = 4445,
  [SMALL_STATE(134)] = 4476,
  [SMALL_STATE(135)] = 4507,
  [SMALL_STATE(136)] = 4538,
  [SMALL_STATE(137)] = 4569,
  [SMALL_STATE(138)] = 4600,
  [SMALL_STATE(139)] = 4618,
  [SMALL_STATE(140)] = 4636,
  [SMALL_STATE(141)] = 4654,
  [SMALL_STATE(142)] = 4661,
  [SMALL_STATE(143)] = 4672,
  [SMALL_STATE(144)] = 4681,
  [SMALL_STATE(145)] = 4692,
  [SMALL_STATE(146)] = 4705,
  [SMALL_STATE(147)] = 4712,
  [SMALL_STATE(148)] = 4725,
  [SMALL_STATE(149)] = 4734,
  [SMALL_STATE(150)] = 4743,
  [SMALL_STATE(151)] = 4754,
  [SMALL_STATE(152)] = 4765,
  [SMALL_STATE(153)] = 4776,
  [SMALL_STATE(154)] = 4789,
  [SMALL_STATE(155)] = 4796,
  [SMALL_STATE(156)] = 4807,
  [SMALL_STATE(157)] = 4818,
  [SMALL_STATE(158)] = 4829,
  [SMALL_STATE(159)] = 4840,
  [SMALL_STATE(160)] = 4849,
  [SMALL_STATE(161)] = 4857,
  [SMALL_STATE(162)] = 4867,
  [SMALL_STATE(163)] = 4877,
  [SMALL_STATE(164)] = 4885,
  [SMALL_STATE(165)] = 4895,
  [SMALL_STATE(166)] = 4903,
  [SMALL_STATE(167)] = 4911,
  [SMALL_STATE(168)] = 4921,
  [SMALL_STATE(169)] = 4931,
  [SMALL_STATE(170)] = 4941,
  [SMALL_STATE(171)] = 4949,
  [SMALL_STATE(172)] = 4956,
  [SMALL_STATE(173)] = 4961,
  [SMALL_STATE(174)] = 4968,
  [SMALL_STATE(175)] = 4973,
  [SMALL_STATE(176)] = 4978,
  [SMALL_STATE(177)] = 4983,
  [SMALL_STATE(178)] = 4990,
  [SMALL_STATE(179)] = 4997,
  [SMALL_STATE(180)] = 5002,
  [SMALL_STATE(181)] = 5009,
  [SMALL_STATE(182)] = 5014,
  [SMALL_STATE(183)] = 5019,
  [SMALL_STATE(184)] = 5024,
  [SMALL_STATE(185)] = 5029,
  [SMALL_STATE(186)] = 5036,
  [SMALL_STATE(187)] = 5043,
  [SMALL_STATE(188)] = 5048,
  [SMALL_STATE(189)] = 5055,
  [SMALL_STATE(190)] = 5059,
  [SMALL_STATE(191)] = 5063,
  [SMALL_STATE(192)] = 5067,
  [SMALL_STATE(193)] = 5071,
  [SMALL_STATE(194)] = 5075,
  [SMALL_STATE(195)] = 5079,
  [SMALL_STATE(196)] = 5083,
  [SMALL_STATE(197)] = 5087,
  [SMALL_STATE(198)] = 5091,
  [SMALL_STATE(199)] = 5095,
  [SMALL_STATE(200)] = 5099,
  [SMALL_STATE(201)] = 5103,
  [SMALL_STATE(202)] = 5107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 17),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 17),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 13),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 13),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 10),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(52),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(144),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(202),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 11),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 11),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 15),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 15),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 9),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 8),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 6),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 12),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 12),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 16),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 16),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(150),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 14),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [472] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
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
