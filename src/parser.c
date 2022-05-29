#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 421
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 2
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 30

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_while = 4,
  anon_sym_PLUS_PLUS = 5,
  anon_sym_DASH_DASH = 6,
  anon_sym_continue = 7,
  anon_sym_for = 8,
  anon_sym_in = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_u8 = 14,
  anon_sym_i8 = 15,
  anon_sym_u16 = 16,
  anon_sym_i16 = 17,
  anon_sym_u32 = 18,
  anon_sym_i32 = 19,
  anon_sym_u64 = 20,
  anon_sym_i64 = 21,
  anon_sym_u128 = 22,
  anon_sym_i128 = 23,
  anon_sym_isize = 24,
  anon_sym_usize = 25,
  anon_sym_f32 = 26,
  anon_sym_f64 = 27,
  anon_sym_c_int = 28,
  anon_sym_bool = 29,
  anon_sym_String = 30,
  anon_sym_c_char = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_let = 34,
  anon_sym_COLON = 35,
  anon_sym_EQ = 36,
  anon_sym_enum = 37,
  anon_sym_LBRACE = 38,
  anon_sym_BSLASHn = 39,
  anon_sym_RBRACE = 40,
  sym_mutable_specifier = 41,
  anon_sym_DASH = 42,
  anon_sym_return = 43,
  anon_sym_AMP = 44,
  anon_sym_PIPE = 45,
  anon_sym_CARET = 46,
  anon_sym_EQ_EQ = 47,
  anon_sym_BANG_EQ = 48,
  anon_sym_LT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_GT = 51,
  anon_sym_GT_EQ = 52,
  anon_sym_LT_LT = 53,
  anon_sym_GT_GT = 54,
  anon_sym_PLUS = 55,
  anon_sym_STAR = 56,
  anon_sym_SLASH = 57,
  anon_sym_PERCENT = 58,
  sym_integer_literal = 59,
  aux_sym_string_literal_token1 = 60,
  anon_sym_DQUOTE = 61,
  sym_char_literal = 62,
  sym_escape_sequence = 63,
  anon_sym_function = 64,
  anon_sym_DASH_GT = 65,
  anon_sym_if = 66,
  anon_sym_else = 67,
  anon_sym_true = 68,
  anon_sym_false = 69,
  sym_line_comment = 70,
  sym__string_content = 71,
  sym_float_literal = 72,
  sym_source_file = 73,
  sym__expression = 74,
  sym_while_statement = 75,
  sym_increment_statement = 76,
  sym_decrement_statement = 77,
  sym_continue_statement = 78,
  sym_for_expression = 79,
  sym_call_expression = 80,
  sym_range_expression = 81,
  sym_arguments = 82,
  sym__top_level_declaration = 83,
  sym__type = 84,
  sym_array_type = 85,
  sym_let_declaration = 86,
  sym_enum_declaration = 87,
  sym_enum_integral_type = 88,
  sym_enum_variant_list = 89,
  sym_enum_variant = 90,
  sym_field_declaration_list = 91,
  sym_field_declaration = 92,
  sym__field_identifier = 93,
  sym_ordered_field_declaration_list = 94,
  sym_unary_expression = 95,
  sym_return_statement = 96,
  sym_binary_expression = 97,
  sym__literal = 98,
  sym__pattern = 99,
  sym__literal_pattern = 100,
  sym_negative_literal = 101,
  sym_string_literal = 102,
  sym_function_declaration = 103,
  sym_parameters = 104,
  sym_parameter = 105,
  sym_block = 106,
  sym_if_statement = 107,
  sym_else_clause = 108,
  sym_boolean_literal = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_arguments_repeat1 = 111,
  aux_sym_arguments_repeat2 = 112,
  aux_sym_enum_variant_list_repeat1 = 113,
  aux_sym_enum_variant_list_repeat2 = 114,
  aux_sym_field_declaration_list_repeat1 = 115,
  aux_sym_field_declaration_list_repeat2 = 116,
  aux_sym_string_literal_repeat1 = 117,
  aux_sym_parameters_repeat1 = 118,
  aux_sym_block_repeat1 = 119,
  alias_sym_field_identifier = 120,
  alias_sym_type_identifier = 121,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_while] = "while",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_continue] = "continue",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym__string_content] = "_string_content",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_while_statement] = "while_statement",
  [sym_increment_statement] = "increment_statement",
  [sym_decrement_statement] = "decrement_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_for_expression] = "for_expression",
  [sym_call_expression] = "call_expression",
  [sym_range_expression] = "range_expression",
  [sym_arguments] = "arguments",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_let_declaration] = "let_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_integral_type] = "enum_integral_type",
  [sym_enum_variant_list] = "enum_variant_list",
  [sym_enum_variant] = "enum_variant",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym__field_identifier] = "_field_identifier",
  [sym_ordered_field_declaration_list] = "ordered_field_declaration_list",
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
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_enum_variant_list_repeat1] = "enum_variant_list_repeat1",
  [aux_sym_enum_variant_list_repeat2] = "enum_variant_list_repeat2",
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_field_declaration_list_repeat2] = "field_declaration_list_repeat2",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym__string_content] = sym__string_content,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_while_statement] = sym_while_statement,
  [sym_increment_statement] = sym_increment_statement,
  [sym_decrement_statement] = sym_decrement_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_for_expression] = sym_for_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_range_expression] = sym_range_expression,
  [sym_arguments] = sym_arguments,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_let_declaration] = sym_let_declaration,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_enum_integral_type] = sym_enum_integral_type,
  [sym_enum_variant_list] = sym_enum_variant_list,
  [sym_enum_variant] = sym_enum_variant,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym__field_identifier] = sym__field_identifier,
  [sym_ordered_field_declaration_list] = sym_ordered_field_declaration_list,
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
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_enum_variant_list_repeat1] = aux_sym_enum_variant_list_repeat1,
  [aux_sym_enum_variant_list_repeat2] = aux_sym_enum_variant_list_repeat2,
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_field_declaration_list_repeat2] = aux_sym_field_declaration_list_repeat2,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
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
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_range_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
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
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_integral_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant_list] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_ordered_field_declaration_list] = {
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
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_variant_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_variant_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_repeat2] = {
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
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_element = 6,
  field_function = 7,
  field_left = 8,
  field_name = 9,
  field_operator = 10,
  field_parameters = 11,
  field_pattern = 12,
  field_return_type = 13,
  field_right = 14,
  field_type = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_function] = "function",
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
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 3},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 3},
  [17] = {.index = 24, .length = 3},
  [18] = {.index = 27, .length = 3},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 1},
  [25] = {.index = 39, .length = 3},
  [26] = {.index = 42, .length = 3},
  [27] = {.index = 45, .length = 4},
  [28] = {.index = 49, .length = 3},
  [29] = {.index = 52, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
  [1] =
    {field_body, 1},
  [2] =
    {field_arguments, 1},
    {field_function, 0},
  [4] =
    {field_body, 2},
    {field_condition, 1},
  [6] =
    {field_pattern, 2},
  [7] =
    {field_name, 0},
  [8] =
    {field_body, 2},
    {field_name, 1},
  [10] =
    {field_condition, 1},
    {field_consequence, 2},
  [12] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [15] =
    {field_pattern, 1},
    {field_type, 3},
  [17] =
    {field_pattern, 1},
    {field_value, 3},
  [19] =
    {field_body, 1},
    {field_name, 0},
  [21] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [24] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [27] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [30] =
    {field_pattern, 2},
    {field_type, 4},
  [32] =
    {field_pattern, 2},
    {field_value, 4},
  [34] =
    {field_name, 0},
    {field_value, 2},
  [36] =
    {field_pattern, 0},
    {field_type, 2},
  [38] =
    {field_element, 1},
  [39] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [42] =
    {field_body, 1},
    {field_name, 0},
    {field_value, 3},
  [45] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [49] =
    {field_pattern, 2},
    {field_type, 4},
    {field_value, 6},
  [52] =
    {field_name, 0},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [8] = {
    [1] = alias_sym_type_identifier,
  },
  [12] = {
    [0] = alias_sym_type_identifier,
  },
  [21] = {
    [0] = alias_sym_field_identifier,
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
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(90);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == '6') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(48);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'z') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == '{') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == '{') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(56);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(91);
      if (lookahead == '6') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(11);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(108);
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
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(25);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead == '8') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(38);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == '6') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(62);
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(65);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 57:
      if (lookahead == 'z') ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == '8') ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 66:
      if (lookahead == 'z') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 52, .external_lex_state = 2},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 6, .external_lex_state = 2},
  [5] = {.lex_state = 6, .external_lex_state = 2},
  [6] = {.lex_state = 6, .external_lex_state = 2},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 6, .external_lex_state = 2},
  [9] = {.lex_state = 6, .external_lex_state = 2},
  [10] = {.lex_state = 6, .external_lex_state = 2},
  [11] = {.lex_state = 6, .external_lex_state = 2},
  [12] = {.lex_state = 6, .external_lex_state = 2},
  [13] = {.lex_state = 6, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 6, .external_lex_state = 2},
  [18] = {.lex_state = 6, .external_lex_state = 2},
  [19] = {.lex_state = 6, .external_lex_state = 2},
  [20] = {.lex_state = 6, .external_lex_state = 2},
  [21] = {.lex_state = 6, .external_lex_state = 2},
  [22] = {.lex_state = 6, .external_lex_state = 2},
  [23] = {.lex_state = 6, .external_lex_state = 2},
  [24] = {.lex_state = 52, .external_lex_state = 2},
  [25] = {.lex_state = 52, .external_lex_state = 2},
  [26] = {.lex_state = 52, .external_lex_state = 2},
  [27] = {.lex_state = 52, .external_lex_state = 2},
  [28] = {.lex_state = 52, .external_lex_state = 2},
  [29] = {.lex_state = 52, .external_lex_state = 2},
  [30] = {.lex_state = 52, .external_lex_state = 2},
  [31] = {.lex_state = 52, .external_lex_state = 2},
  [32] = {.lex_state = 52, .external_lex_state = 2},
  [33] = {.lex_state = 52, .external_lex_state = 2},
  [34] = {.lex_state = 52, .external_lex_state = 2},
  [35] = {.lex_state = 52, .external_lex_state = 2},
  [36] = {.lex_state = 52, .external_lex_state = 2},
  [37] = {.lex_state = 52, .external_lex_state = 2},
  [38] = {.lex_state = 52, .external_lex_state = 2},
  [39] = {.lex_state = 52, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 7, .external_lex_state = 2},
  [42] = {.lex_state = 7, .external_lex_state = 2},
  [43] = {.lex_state = 7, .external_lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 2},
  [45] = {.lex_state = 7, .external_lex_state = 2},
  [46] = {.lex_state = 7, .external_lex_state = 2},
  [47] = {.lex_state = 7, .external_lex_state = 2},
  [48] = {.lex_state = 7, .external_lex_state = 2},
  [49] = {.lex_state = 7, .external_lex_state = 2},
  [50] = {.lex_state = 7, .external_lex_state = 2},
  [51] = {.lex_state = 7, .external_lex_state = 2},
  [52] = {.lex_state = 7, .external_lex_state = 2},
  [53] = {.lex_state = 7, .external_lex_state = 2},
  [54] = {.lex_state = 7, .external_lex_state = 2},
  [55] = {.lex_state = 7, .external_lex_state = 2},
  [56] = {.lex_state = 7, .external_lex_state = 2},
  [57] = {.lex_state = 7, .external_lex_state = 2},
  [58] = {.lex_state = 7, .external_lex_state = 2},
  [59] = {.lex_state = 7, .external_lex_state = 2},
  [60] = {.lex_state = 7, .external_lex_state = 2},
  [61] = {.lex_state = 7, .external_lex_state = 2},
  [62] = {.lex_state = 7, .external_lex_state = 2},
  [63] = {.lex_state = 7, .external_lex_state = 2},
  [64] = {.lex_state = 7, .external_lex_state = 2},
  [65] = {.lex_state = 6, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 7, .external_lex_state = 2},
  [69] = {.lex_state = 7, .external_lex_state = 2},
  [70] = {.lex_state = 6, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 6, .external_lex_state = 2},
  [73] = {.lex_state = 6, .external_lex_state = 2},
  [74] = {.lex_state = 6, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 2},
  [76] = {.lex_state = 6, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 6, .external_lex_state = 2},
  [80] = {.lex_state = 6, .external_lex_state = 2},
  [81] = {.lex_state = 6, .external_lex_state = 2},
  [82] = {.lex_state = 6, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 6, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 6, .external_lex_state = 2},
  [88] = {.lex_state = 52, .external_lex_state = 2},
  [89] = {.lex_state = 6, .external_lex_state = 2},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 52, .external_lex_state = 2},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 9, .external_lex_state = 2},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 9, .external_lex_state = 2},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 9, .external_lex_state = 2},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 9, .external_lex_state = 2},
  [167] = {.lex_state = 9, .external_lex_state = 2},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 9, .external_lex_state = 2},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 52, .external_lex_state = 2},
  [175] = {.lex_state = 52, .external_lex_state = 2},
  [176] = {.lex_state = 9, .external_lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 52, .external_lex_state = 2},
  [179] = {.lex_state = 52, .external_lex_state = 2},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 2, .external_lex_state = 2},
  [188] = {.lex_state = 9, .external_lex_state = 2},
  [189] = {.lex_state = 9, .external_lex_state = 2},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 9, .external_lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 9, .external_lex_state = 2},
  [211] = {.lex_state = 52, .external_lex_state = 2},
  [212] = {.lex_state = 52, .external_lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 52, .external_lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 52, .external_lex_state = 2},
  [218] = {.lex_state = 52, .external_lex_state = 2},
  [219] = {.lex_state = 52, .external_lex_state = 2},
  [220] = {.lex_state = 52, .external_lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 52, .external_lex_state = 2},
  [226] = {.lex_state = 52, .external_lex_state = 2},
  [227] = {.lex_state = 52, .external_lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 52, .external_lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 52, .external_lex_state = 2},
  [238] = {.lex_state = 52, .external_lex_state = 2},
  [239] = {.lex_state = 6, .external_lex_state = 2},
  [240] = {.lex_state = 6, .external_lex_state = 2},
  [241] = {.lex_state = 6, .external_lex_state = 2},
  [242] = {.lex_state = 6, .external_lex_state = 2},
  [243] = {.lex_state = 6, .external_lex_state = 2},
  [244] = {.lex_state = 6, .external_lex_state = 2},
  [245] = {.lex_state = 6, .external_lex_state = 2},
  [246] = {.lex_state = 6, .external_lex_state = 2},
  [247] = {.lex_state = 6, .external_lex_state = 2},
  [248] = {.lex_state = 6, .external_lex_state = 2},
  [249] = {.lex_state = 6, .external_lex_state = 2},
  [250] = {.lex_state = 6, .external_lex_state = 2},
  [251] = {.lex_state = 6, .external_lex_state = 2},
  [252] = {.lex_state = 6, .external_lex_state = 2},
  [253] = {.lex_state = 6, .external_lex_state = 2},
  [254] = {.lex_state = 6, .external_lex_state = 2},
  [255] = {.lex_state = 6, .external_lex_state = 2},
  [256] = {.lex_state = 6, .external_lex_state = 2},
  [257] = {.lex_state = 6, .external_lex_state = 2},
  [258] = {.lex_state = 6, .external_lex_state = 2},
  [259] = {.lex_state = 6, .external_lex_state = 2},
  [260] = {.lex_state = 6, .external_lex_state = 2},
  [261] = {.lex_state = 6, .external_lex_state = 2},
  [262] = {.lex_state = 6, .external_lex_state = 2},
  [263] = {.lex_state = 6, .external_lex_state = 2},
  [264] = {.lex_state = 6, .external_lex_state = 2},
  [265] = {.lex_state = 6, .external_lex_state = 2},
  [266] = {.lex_state = 6, .external_lex_state = 2},
  [267] = {.lex_state = 6, .external_lex_state = 2},
  [268] = {.lex_state = 6, .external_lex_state = 2},
  [269] = {.lex_state = 6, .external_lex_state = 2},
  [270] = {.lex_state = 6, .external_lex_state = 2},
  [271] = {.lex_state = 6, .external_lex_state = 2},
  [272] = {.lex_state = 6, .external_lex_state = 2},
  [273] = {.lex_state = 6, .external_lex_state = 2},
  [274] = {.lex_state = 6, .external_lex_state = 2},
  [275] = {.lex_state = 6, .external_lex_state = 2},
  [276] = {.lex_state = 6, .external_lex_state = 2},
  [277] = {.lex_state = 6, .external_lex_state = 2},
  [278] = {.lex_state = 6, .external_lex_state = 2},
  [279] = {.lex_state = 6, .external_lex_state = 2},
  [280] = {.lex_state = 6, .external_lex_state = 2},
  [281] = {.lex_state = 6, .external_lex_state = 2},
  [282] = {.lex_state = 6, .external_lex_state = 2},
  [283] = {.lex_state = 6, .external_lex_state = 2},
  [284] = {.lex_state = 6, .external_lex_state = 2},
  [285] = {.lex_state = 6, .external_lex_state = 2},
  [286] = {.lex_state = 6, .external_lex_state = 2},
  [287] = {.lex_state = 6, .external_lex_state = 2},
  [288] = {.lex_state = 6, .external_lex_state = 2},
  [289] = {.lex_state = 6, .external_lex_state = 2},
  [290] = {.lex_state = 6, .external_lex_state = 2},
  [291] = {.lex_state = 6, .external_lex_state = 2},
  [292] = {.lex_state = 6, .external_lex_state = 2},
  [293] = {.lex_state = 6, .external_lex_state = 2},
  [294] = {.lex_state = 6, .external_lex_state = 2},
  [295] = {.lex_state = 6, .external_lex_state = 2},
  [296] = {.lex_state = 6, .external_lex_state = 2},
  [297] = {.lex_state = 6, .external_lex_state = 2},
  [298] = {.lex_state = 12},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 8},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 8},
  [310] = {.lex_state = 8},
  [311] = {.lex_state = 8},
  [312] = {.lex_state = 8},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 5},
  [320] = {.lex_state = 1, .external_lex_state = 3},
  [321] = {.lex_state = 12},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 1, .external_lex_state = 3},
  [324] = {.lex_state = 12},
  [325] = {.lex_state = 1, .external_lex_state = 3},
  [326] = {.lex_state = 1, .external_lex_state = 3},
  [327] = {.lex_state = 12},
  [328] = {.lex_state = 12},
  [329] = {.lex_state = 1, .external_lex_state = 3},
  [330] = {.lex_state = 1, .external_lex_state = 3},
  [331] = {.lex_state = 5},
  [332] = {.lex_state = 1, .external_lex_state = 3},
  [333] = {.lex_state = 5},
  [334] = {.lex_state = 8},
  [335] = {.lex_state = 1, .external_lex_state = 3},
  [336] = {.lex_state = 1, .external_lex_state = 3},
  [337] = {.lex_state = 12},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 12},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 52},
  [343] = {.lex_state = 52},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 8},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 52},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 5},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 52},
  [352] = {.lex_state = 5},
  [353] = {.lex_state = 5},
  [354] = {.lex_state = 5},
  [355] = {.lex_state = 52},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 52},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 5},
  [364] = {.lex_state = 52},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 52},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 1},
  [369] = {.lex_state = 8},
  [370] = {.lex_state = 0, .external_lex_state = 2},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 0, .external_lex_state = 2},
  [376] = {.lex_state = 12},
  [377] = {.lex_state = 12},
  [378] = {.lex_state = 1},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 8},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 12},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 12},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 0, .external_lex_state = 2},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 8},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 8},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
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
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(406),
    [sym__expression] = STATE(118),
    [sym_while_statement] = STATE(389),
    [sym_increment_statement] = STATE(389),
    [sym_decrement_statement] = STATE(389),
    [sym_continue_statement] = STATE(389),
    [sym_for_expression] = STATE(138),
    [sym_call_expression] = STATE(138),
    [sym_range_expression] = STATE(138),
    [sym__top_level_declaration] = STATE(24),
    [sym_let_declaration] = STATE(389),
    [sym_enum_declaration] = STATE(389),
    [sym_unary_expression] = STATE(138),
    [sym_return_statement] = STATE(389),
    [sym_binary_expression] = STATE(138),
    [sym__literal] = STATE(138),
    [sym_string_literal] = STATE(153),
    [sym_function_declaration] = STATE(24),
    [sym_block] = STATE(389),
    [sym_if_statement] = STATE(389),
    [sym_boolean_literal] = STATE(153),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
    [anon_sym_DASH_DASH] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_enum] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [sym_integer_literal] = ACTIONS(29),
    [aux_sym_string_literal_token1] = ACTIONS(31),
    [sym_char_literal] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(158), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [82] = 18,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [164] = 18,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [246] = 18,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [328] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [407] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [486] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [565] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [644] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [723] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [802] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [881] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [960] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1039] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1118] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1197] = 17,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1276] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(144), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1352] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(180), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1428] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(135), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1504] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(149), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1580] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(139), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1656] = 16,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      sym_mutable_specifier,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    STATE(203), 1,
      sym__expression,
    STATE(382), 1,
      sym_negative_literal,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(55), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1732] = 23,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_while,
    ACTIONS(9), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_continue,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(35), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(25), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(389), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1821] = 23,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(104), 1,
      anon_sym_while,
    ACTIONS(107), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(110), 1,
      anon_sym_DASH_DASH,
    ACTIONS(113), 1,
      anon_sym_continue,
    ACTIONS(116), 1,
      anon_sym_for,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT,
    ACTIONS(122), 1,
      anon_sym_let,
    ACTIONS(125), 1,
      anon_sym_enum,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(140), 1,
      aux_sym_string_literal_token1,
    ACTIONS(143), 1,
      anon_sym_function,
    ACTIONS(146), 1,
      anon_sym_if,
    STATE(118), 1,
      sym__expression,
    ACTIONS(149), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(137), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(25), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(389), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1910] = 21,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_while,
    ACTIONS(158), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH,
    ACTIONS(164), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(170), 1,
      anon_sym_DOT_DOT,
    ACTIONS(173), 1,
      anon_sym_let,
    ACTIONS(176), 1,
      anon_sym_enum,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_return,
    ACTIONS(193), 1,
      aux_sym_string_literal_token1,
    ACTIONS(196), 1,
      anon_sym_if,
    STATE(51), 1,
      sym__expression,
    ACTIONS(199), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(190), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(26), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1992] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(26), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2074] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(29), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2156] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(26), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2238] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(26), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2320] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(30), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2402] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(26), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2484] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2566] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(26), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2648] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(27), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2730] = 21,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_while,
    ACTIONS(206), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_continue,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(216), 1,
      anon_sym_let,
    ACTIONS(218), 1,
      anon_sym_enum,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(226), 1,
      anon_sym_return,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(232), 1,
      anon_sym_if,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(34), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2812] = 2,
    ACTIONS(254), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(256), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [2855] = 2,
    ACTIONS(258), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(260), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [2898] = 2,
    ACTIONS(262), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(264), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [2941] = 3,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(266), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [2985] = 13,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(272), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(270), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3049] = 13,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(296), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(294), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3113] = 7,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3165] = 5,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(298), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3213] = 13,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(304), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(302), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3277] = 13,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(308), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(306), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3341] = 13,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(312), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(310), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3405] = 11,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 12,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3465] = 13,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(316), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(314), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3529] = 2,
    ACTIONS(318), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(320), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3571] = 15,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    ACTIONS(324), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(326), 1,
      anon_sym_DASH_DASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(328), 6,
      sym_float_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(322), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3639] = 5,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(330), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(332), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3687] = 9,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 14,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3743] = 10,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 13,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3801] = 8,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 15,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3855] = 6,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [3905] = 2,
    ACTIONS(334), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(336), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3947] = 13,
    ACTIONS(274), 1,
      anon_sym_DOT_DOT,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_AMP,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_CARET,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(292), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(286), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(340), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(338), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4011] = 2,
    ACTIONS(342), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(344), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4052] = 2,
    ACTIONS(346), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(348), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4093] = 2,
    ACTIONS(350), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(352), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4134] = 2,
    ACTIONS(354), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(356), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4175] = 2,
    ACTIONS(358), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(360), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4216] = 2,
    ACTIONS(362), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(364), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4257] = 13,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_for,
    ACTIONS(371), 1,
      anon_sym_DOT_DOT,
    ACTIONS(376), 1,
      sym_mutable_specifier,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(385), 1,
      aux_sym_string_literal_token1,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(388), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    ACTIONS(382), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(373), 18,
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
  [4320] = 2,
    ACTIONS(391), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(393), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4361] = 2,
    ACTIONS(395), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(397), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4402] = 2,
    ACTIONS(399), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(401), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4443] = 2,
    ACTIONS(403), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(405), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4484] = 13,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(341), 1,
      sym_parameter,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(404), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [4546] = 12,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_parameter,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(404), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [4605] = 12,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_parameter,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(404), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [4664] = 11,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(413), 1,
      sym_mutable_specifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(393), 1,
      sym_parameter,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(404), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [4720] = 10,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(427), 1,
      sym_mutable_specifier,
    ACTIONS(429), 1,
      anon_sym_DASH,
    STATE(317), 1,
      sym__literal_pattern,
    STATE(322), 1,
      sym__pattern,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(431), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(331), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(425), 18,
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
  [4773] = 10,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(433), 1,
      sym_identifier,
    ACTIONS(437), 1,
      sym_mutable_specifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(157), 1,
      sym__pattern,
    STATE(167), 1,
      sym__literal_pattern,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(147), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(435), 18,
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
  [4826] = 9,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_DASH,
    STATE(317), 1,
      sym__literal_pattern,
    STATE(333), 1,
      sym__pattern,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(431), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(331), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(425), 18,
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
  [4876] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(416), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [4926] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(414), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [4976] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(407), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [5026] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(398), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [5076] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(403), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [5126] = 9,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_DASH,
    STATE(395), 1,
      sym__literal_pattern,
    STATE(417), 1,
      sym__pattern,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(417), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(382), 3,
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
  [5176] = 9,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(433), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_DASH,
    STATE(143), 1,
      sym__pattern,
    STATE(167), 1,
      sym__literal_pattern,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(441), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(147), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(435), 18,
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
  [5226] = 2,
    ACTIONS(445), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(443), 23,
      anon_sym_for,
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
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5260] = 2,
    ACTIONS(449), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(447), 23,
      anon_sym_for,
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
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5294] = 2,
    ACTIONS(453), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(451), 23,
      anon_sym_for,
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
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5328] = 2,
    ACTIONS(457), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(455), 23,
      anon_sym_for,
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
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5362] = 12,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(224), 1,
      anon_sym_DASH,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    STATE(58), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(461), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(459), 6,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [5416] = 2,
    ACTIONS(465), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(463), 23,
      anon_sym_for,
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
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5450] = 2,
    ACTIONS(254), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(256), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
  [5481] = 2,
    ACTIONS(258), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(260), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
  [5512] = 2,
    ACTIONS(262), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(264), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
  [5543] = 5,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [5579] = 7,
    ACTIONS(471), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_BSLASHn,
    STATE(355), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(409), 1,
      sym__field_identifier,
    STATE(299), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
    ACTIONS(475), 18,
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
  [5619] = 5,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 20,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [5655] = 7,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(300), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_identifier,
  [5695] = 11,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(300), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5743] = 9,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(300), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5787] = 10,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(300), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5833] = 8,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(300), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_identifier,
  [5875] = 6,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(300), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [5913] = 3,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(268), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [5945] = 2,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(344), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [5974] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(258), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [6003] = 2,
    ACTIONS(391), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(393), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6032] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(262), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [6061] = 2,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(254), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [6090] = 2,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6119] = 2,
    ACTIONS(395), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(397), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6148] = 2,
    ACTIONS(399), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(401), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6177] = 2,
    ACTIONS(403), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(405), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6206] = 2,
    ACTIONS(358), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(360), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6235] = 2,
    ACTIONS(334), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6264] = 2,
    ACTIONS(346), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6293] = 2,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6322] = 2,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(320), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6351] = 2,
    ACTIONS(362), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 22,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
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
      sym_identifier,
  [6380] = 14,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(497), 1,
      anon_sym_DASH_DASH,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_AMP,
    ACTIONS(507), 1,
      anon_sym_PIPE,
    ACTIONS(509), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(503), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(511), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6432] = 5,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(330), 19,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6466] = 5,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(298), 19,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6500] = 7,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(503), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(515), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 14,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6538] = 11,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_AMP,
    ACTIONS(507), 1,
      anon_sym_PIPE,
    ACTIONS(509), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(503), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6584] = 9,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_AMP,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(503), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 11,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6626] = 10,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      anon_sym_AMP,
    ACTIONS(509), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(503), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 10,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6670] = 6,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(515), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 16,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
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
  [6706] = 2,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(318), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
      anon_sym_else,
  [6734] = 3,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(266), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [6764] = 8,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(503), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(513), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 12,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6804] = 2,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(334), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
      anon_sym_else,
  [6832] = 2,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(350), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [6859] = 14,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_arguments,
    STATE(361), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6910] = 2,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(395), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [6937] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(400), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [6970] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__type,
    STATE(85), 1,
      sym_array_type,
    ACTIONS(533), 18,
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
  [7003] = 14,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_arguments,
    STATE(359), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7054] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(411), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7087] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(401), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7120] = 2,
    ACTIONS(393), 1,
      anon_sym_LF,
    ACTIONS(391), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [7147] = 14,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_arguments,
    STATE(348), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7198] = 4,
    ACTIONS(545), 1,
      anon_sym_else,
    STATE(238), 1,
      sym_else_clause,
    ACTIONS(543), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(541), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7229] = 14,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_arguments,
    STATE(338), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7280] = 12,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(551), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7327] = 4,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(555), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(553), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7358] = 14,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_arguments,
    STATE(356), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7409] = 14,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_arguments,
    STATE(360), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7460] = 2,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(358), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [7487] = 2,
    ACTIONS(567), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(569), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [7514] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(380), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7547] = 14,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_arguments,
    STATE(365), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7598] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_array_type,
    STATE(89), 1,
      sym__type,
    ACTIONS(533), 18,
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
  [7631] = 2,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(354), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [7658] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(379), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7691] = 2,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(399), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [7718] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(372), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7751] = 5,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(577), 1,
      anon_sym_LBRACK,
    STATE(188), 1,
      sym__type,
    STATE(210), 1,
      sym_array_type,
    ACTIONS(575), 18,
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
  [7784] = 5,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_LBRACK,
    STATE(352), 1,
      sym__type,
    STATE(354), 1,
      sym_array_type,
    ACTIONS(581), 18,
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
  [7817] = 4,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_EQ,
    ACTIONS(587), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(585), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7848] = 14,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_arguments,
    STATE(358), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7899] = 5,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(577), 1,
      anon_sym_LBRACK,
    STATE(176), 1,
      sym__type,
    STATE(210), 1,
      sym_array_type,
    ACTIONS(575), 18,
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
  [7932] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(413), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [7965] = 2,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(362), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [7992] = 2,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(403), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [8019] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(345), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [8052] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(346), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [8079] = 5,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(583), 1,
      anon_sym_LBRACK,
    STATE(349), 1,
      sym__type,
    STATE(354), 1,
      sym_array_type,
    ACTIONS(581), 18,
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
  [8112] = 2,
    ACTIONS(597), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(599), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [8139] = 2,
    ACTIONS(601), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(603), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [8166] = 12,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(605), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8213] = 2,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(342), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [8240] = 2,
    ACTIONS(607), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(609), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [8267] = 5,
    ACTIONS(525), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LBRACK,
    STATE(303), 1,
      sym_array_type,
    STATE(412), 1,
      sym__type,
    ACTIONS(527), 18,
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
  [8300] = 3,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(399), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(401), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [8328] = 13,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    STATE(371), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8376] = 2,
    ACTIONS(320), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(318), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8402] = 2,
    ACTIONS(611), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(613), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8428] = 3,
    ACTIONS(619), 1,
      anon_sym_EQ,
    ACTIONS(617), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(615), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8456] = 5,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(330), 17,
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
  [8488] = 2,
    ACTIONS(336), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(334), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8514] = 2,
    ACTIONS(625), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(627), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8540] = 12,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8586] = 13,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    STATE(146), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8634] = 12,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(639), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8680] = 3,
    ACTIONS(603), 1,
      anon_sym_COLON,
    ACTIONS(391), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(393), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [8708] = 12,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(639), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8754] = 3,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(266), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [8782] = 3,
    ACTIONS(599), 1,
      anon_sym_COLON,
    ACTIONS(399), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(401), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [8810] = 13,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(649), 1,
      anon_sym_DOT_DOT,
    ACTIONS(651), 1,
      anon_sym_DASH,
    ACTIONS(655), 1,
      aux_sym_string_literal_token1,
    ACTIONS(659), 1,
      sym_float_literal,
    STATE(205), 1,
      sym__expression,
    ACTIONS(653), 2,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [8858] = 3,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(663), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(661), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8886] = 2,
    ACTIONS(457), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(455), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8912] = 13,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    STATE(215), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8960] = 13,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    STATE(313), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9008] = 13,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    STATE(140), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9056] = 12,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(639), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9102] = 6,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 14,
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
  [9136] = 12,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(639), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9182] = 12,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(639), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9228] = 13,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_arguments,
    STATE(112), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9276] = 8,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 10,
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
  [9314] = 13,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_block,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9362] = 10,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9404] = 12,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(639), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9450] = 9,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9490] = 12,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(669), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9536] = 2,
    ACTIONS(453), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(451), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9562] = 12,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(639), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9608] = 11,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(633), 1,
      anon_sym_AMP,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(637), 1,
      anon_sym_CARET,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(641), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9652] = 7,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(643), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(298), 12,
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
  [9688] = 5,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(621), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_arguments,
    ACTIONS(298), 17,
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
  [9720] = 13,
    ACTIONS(467), 1,
      anon_sym_DOT_DOT,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_arguments,
    STATE(223), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(523), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(521), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9768] = 2,
    ACTIONS(449), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(447), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9794] = 2,
    ACTIONS(99), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(673), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9820] = 2,
    ACTIONS(296), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(294), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9845] = 2,
    ACTIONS(393), 1,
      anon_sym_LF,
    ACTIONS(391), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [9870] = 2,
    ACTIONS(260), 1,
      anon_sym_LF,
    ACTIONS(258), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [9895] = 2,
    ACTIONS(677), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(675), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9920] = 2,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(350), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [9945] = 2,
    ACTIONS(308), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(306), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9970] = 2,
    ACTIONS(681), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(679), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9995] = 2,
    ACTIONS(685), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(683), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10020] = 2,
    ACTIONS(689), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(687), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10045] = 2,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(362), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10070] = 2,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(254), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10095] = 2,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(358), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10120] = 2,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(354), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10145] = 2,
    ACTIONS(693), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(691), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10170] = 2,
    ACTIONS(697), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(695), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10195] = 2,
    ACTIONS(701), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(699), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10220] = 2,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(346), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10245] = 2,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(342), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10270] = 2,
    ACTIONS(405), 1,
      anon_sym_LF,
    ACTIONS(403), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10295] = 2,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(318), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10320] = 2,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(334), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10345] = 2,
    ACTIONS(401), 1,
      anon_sym_LF,
    ACTIONS(399), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10370] = 2,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(395), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10395] = 2,
    ACTIONS(705), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(703), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10420] = 2,
    ACTIONS(264), 1,
      anon_sym_LF,
    ACTIONS(262), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
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
  [10445] = 2,
    ACTIONS(709), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(707), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10470] = 2,
    ACTIONS(713), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(711), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10495] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(98), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10535] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(202), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10575] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(93), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10615] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(195), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10655] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(196), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10695] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(119), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10735] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(102), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10775] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(101), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10815] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10855] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(99), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10895] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(97), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10935] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(96), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10975] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11015] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(199), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11055] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(142), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11095] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(184), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11135] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(191), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11175] = 11,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    ACTIONS(719), 1,
      sym_char_literal,
    STATE(93), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(729), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11217] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(209), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11257] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(177), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11297] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(44), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11337] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(197), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11377] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(192), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11417] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(190), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11457] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11497] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(185), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11537] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(194), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11577] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(198), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11617] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(200), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11657] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11697] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(206), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11737] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(207), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11777] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(208), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11817] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(127), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11857] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(125), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11897] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(128), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11937] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(48), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11977] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(124), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12017] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(53), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12057] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(123), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12097] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(122), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12137] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(182), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12177] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(121), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12217] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(45), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12257] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(31), 1,
      aux_sym_string_literal_token1,
    ACTIONS(727), 1,
      anon_sym_DASH,
    STATE(120), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(29), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(138), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12297] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(49), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12337] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(181), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12377] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12417] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12457] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(168), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12497] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(47), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12537] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12577] = 10,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(647), 1,
      anon_sym_for,
    ACTIONS(721), 1,
      anon_sym_DOT_DOT,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(725), 1,
      aux_sym_string_literal_token1,
    STATE(193), 1,
      sym__expression,
    ACTIONS(657), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(233), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(659), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(213), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12617] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12657] = 10,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      aux_sym_string_literal_token1,
    ACTIONS(715), 1,
      sym_identifier,
    ACTIONS(717), 1,
      anon_sym_DASH,
    STATE(173), 1,
      sym__expression,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(719), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12697] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(42), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12737] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12777] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12817] = 10,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(214), 1,
      anon_sym_DOT_DOT,
    ACTIONS(230), 1,
      aux_sym_string_literal_token1,
    ACTIONS(731), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(228), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(66), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12857] = 4,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      anon_sym_EQ,
    STATE(324), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(733), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [12873] = 6,
    ACTIONS(477), 1,
      anon_sym_BSLASHn,
    ACTIONS(739), 1,
      sym_identifier,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(409), 1,
      sym__field_identifier,
    STATE(305), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [12893] = 5,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(343), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(310), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12910] = 5,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(302), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12927] = 5,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(310), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [12944] = 1,
    ACTIONS(449), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [12953] = 4,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(409), 1,
      sym__field_identifier,
    ACTIONS(753), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(305), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [12968] = 4,
    ACTIONS(755), 1,
      sym_identifier,
    STATE(409), 1,
      sym__field_identifier,
    ACTIONS(758), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(305), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [12983] = 5,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(300), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13000] = 4,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(409), 1,
      sym__field_identifier,
    ACTIONS(762), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(304), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [13015] = 1,
    ACTIONS(457), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [13024] = 1,
    ACTIONS(453), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [13033] = 3,
    ACTIONS(764), 1,
      sym_identifier,
    ACTIONS(767), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(310), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13045] = 3,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(769), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(312), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13057] = 3,
    ACTIONS(743), 1,
      sym_identifier,
    ACTIONS(771), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(310), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13069] = 4,
    ACTIONS(541), 1,
      anon_sym_SEMI,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(773), 1,
      anon_sym_else,
    STATE(374), 1,
      sym_else_clause,
  [13082] = 3,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(775), 1,
      anon_sym_if,
    STATE(226), 2,
      sym_block,
      sym_if_statement,
  [13093] = 2,
    ACTIONS(609), 1,
      anon_sym_LF,
    ACTIONS(607), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13102] = 3,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(777), 1,
      anon_sym_if,
    STATE(373), 2,
      sym_block,
      sym_if_statement,
  [13113] = 2,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(601), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13122] = 4,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(386), 1,
      sym_enum_variant_list,
    STATE(388), 1,
      sym_enum_integral_type,
  [13135] = 2,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(597), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13144] = 3,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(785), 2,
      sym__string_content,
      sym_escape_sequence,
  [13155] = 1,
    ACTIONS(787), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13162] = 4,
    ACTIONS(585), 1,
      anon_sym_SEMI,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(789), 1,
      anon_sym_COLON,
    ACTIONS(791), 1,
      anon_sym_EQ,
  [13175] = 3,
    ACTIONS(793), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(795), 2,
      sym__string_content,
      sym_escape_sequence,
  [13186] = 2,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(797), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13195] = 3,
    ACTIONS(801), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(803), 2,
      sym__string_content,
      sym_escape_sequence,
  [13206] = 3,
    ACTIONS(805), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(795), 2,
      sym__string_content,
      sym_escape_sequence,
  [13217] = 1,
    ACTIONS(807), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13224] = 1,
    ACTIONS(809), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13231] = 3,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(795), 2,
      sym__string_content,
      sym_escape_sequence,
  [13242] = 3,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(329), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(815), 2,
      sym__string_content,
      sym_escape_sequence,
  [13253] = 2,
    ACTIONS(569), 1,
      anon_sym_LF,
    ACTIONS(567), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13262] = 3,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(795), 2,
      sym__string_content,
      sym_escape_sequence,
  [13273] = 4,
    ACTIONS(553), 1,
      anon_sym_SEMI,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(819), 1,
      anon_sym_COLON,
    ACTIONS(821), 1,
      anon_sym_EQ,
  [13286] = 4,
    ACTIONS(823), 1,
      sym_identifier,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym_enum_variant_list,
    STATE(385), 1,
      sym_enum_integral_type,
  [13299] = 3,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(829), 2,
      sym__string_content,
      sym_escape_sequence,
  [13310] = 3,
    ACTIONS(832), 1,
      anon_sym_DQUOTE,
    STATE(332), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(834), 2,
      sym__string_content,
      sym_escape_sequence,
  [13321] = 1,
    ACTIONS(836), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13328] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13338] = 3,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13348] = 3,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    ACTIONS(843), 1,
      anon_sym_DASH_GT,
    STATE(175), 1,
      sym_block,
  [13358] = 3,
    ACTIONS(845), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(362), 1,
      aux_sym_parameters_repeat1,
  [13368] = 3,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    ACTIONS(849), 1,
      anon_sym_BSLASHn,
    STATE(342), 1,
      aux_sym_enum_variant_list_repeat2,
  [13378] = 3,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_enum_variant_list_repeat2,
  [13388] = 3,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_enum_variant_list,
  [13398] = 1,
    ACTIONS(856), 3,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [13404] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_parameters_repeat1,
  [13414] = 3,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_enum_variant_list_repeat2,
  [13424] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13434] = 3,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(865), 1,
      anon_sym_EQ,
  [13444] = 3,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COLON,
    STATE(390), 1,
      sym_enum_variant_list,
  [13454] = 3,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_enum_variant_list_repeat2,
  [13464] = 3,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    ACTIONS(617), 1,
      anon_sym_LF,
    ACTIONS(867), 1,
      anon_sym_EQ,
  [13474] = 2,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(451), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13482] = 2,
    ACTIONS(449), 1,
      anon_sym_LF,
    ACTIONS(447), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13490] = 3,
    ACTIONS(477), 1,
      anon_sym_BSLASHn,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_field_declaration_list_repeat2,
  [13500] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13510] = 3,
    ACTIONS(745), 1,
      anon_sym_BSLASHn,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_enum_variant_list_repeat2,
  [13520] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13530] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13540] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13550] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13560] = 3,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_parameters_repeat1,
  [13570] = 2,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(455), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13578] = 3,
    ACTIONS(477), 1,
      anon_sym_BSLASHn,
    ACTIONS(877), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_field_declaration_list_repeat2,
  [13588] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_arguments_repeat2,
  [13598] = 3,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    ACTIONS(881), 1,
      anon_sym_BSLASHn,
    STATE(366), 1,
      aux_sym_field_declaration_list_repeat2,
  [13608] = 2,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_LF,
  [13615] = 2,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_LF,
  [13622] = 1,
    ACTIONS(599), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13627] = 1,
    ACTIONS(884), 2,
      sym_float_literal,
      sym_integer_literal,
  [13632] = 2,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(677), 1,
      anon_sym_LF,
  [13639] = 2,
    ACTIONS(841), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_block,
  [13646] = 2,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(697), 1,
      anon_sym_LF,
  [13653] = 2,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    ACTIONS(713), 1,
      anon_sym_LF,
  [13660] = 1,
    ACTIONS(886), 2,
      sym_float_literal,
      sym_integer_literal,
  [13665] = 1,
    ACTIONS(888), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13670] = 1,
    ACTIONS(890), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13675] = 2,
    ACTIONS(703), 1,
      anon_sym_SEMI,
    ACTIONS(705), 1,
      anon_sym_LF,
  [13682] = 1,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13687] = 1,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13692] = 2,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_LF,
  [13699] = 1,
    ACTIONS(569), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13704] = 2,
    ACTIONS(892), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym_parameters,
  [13711] = 2,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_LF,
  [13718] = 2,
    ACTIONS(825), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_enum_variant_list,
  [13725] = 2,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    ACTIONS(693), 1,
      anon_sym_LF,
  [13732] = 2,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    ACTIONS(681), 1,
      anon_sym_LF,
  [13739] = 2,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
    STATE(368), 1,
      sym_enum_variant_list,
  [13746] = 2,
    ACTIONS(491), 1,
      anon_sym_LF,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [13753] = 2,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      anon_sym_LF,
  [13760] = 1,
    ACTIONS(894), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13765] = 2,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(709), 1,
      anon_sym_LF,
  [13772] = 1,
    ACTIONS(861), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13777] = 1,
    ACTIONS(896), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13782] = 1,
    ACTIONS(603), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13787] = 1,
    ACTIONS(898), 2,
      sym_float_literal,
      sym_integer_literal,
  [13792] = 1,
    ACTIONS(609), 2,
      anon_sym_in,
      anon_sym_COLON,
  [13797] = 1,
    ACTIONS(900), 1,
      anon_sym_in,
  [13801] = 1,
    ACTIONS(902), 1,
      anon_sym_COLON,
  [13805] = 1,
    ACTIONS(904), 1,
      anon_sym_RBRACK,
  [13809] = 1,
    ACTIONS(906), 1,
      anon_sym_RBRACK,
  [13813] = 1,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
  [13817] = 1,
    ACTIONS(910), 1,
      anon_sym_COLON,
  [13821] = 1,
    ACTIONS(912), 1,
      anon_sym_COLON,
  [13825] = 1,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [13829] = 1,
    ACTIONS(914), 1,
      ts_builtin_sym_end,
  [13833] = 1,
    ACTIONS(916), 1,
      anon_sym_COLON,
  [13837] = 1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [13841] = 1,
    ACTIONS(918), 1,
      anon_sym_COLON,
  [13845] = 1,
    ACTIONS(920), 1,
      sym_identifier,
  [13849] = 1,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
  [13853] = 1,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
  [13857] = 1,
    ACTIONS(926), 1,
      anon_sym_LBRACE,
  [13861] = 1,
    ACTIONS(928), 1,
      anon_sym_in,
  [13865] = 1,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
  [13869] = 1,
    ACTIONS(930), 1,
      anon_sym_in,
  [13873] = 1,
    ACTIONS(932), 1,
      anon_sym_in,
  [13877] = 1,
    ACTIONS(934), 1,
      anon_sym_COLON,
  [13881] = 1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [13885] = 1,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 644,
  [SMALL_STATE(11)] = 723,
  [SMALL_STATE(12)] = 802,
  [SMALL_STATE(13)] = 881,
  [SMALL_STATE(14)] = 960,
  [SMALL_STATE(15)] = 1039,
  [SMALL_STATE(16)] = 1118,
  [SMALL_STATE(17)] = 1197,
  [SMALL_STATE(18)] = 1276,
  [SMALL_STATE(19)] = 1352,
  [SMALL_STATE(20)] = 1428,
  [SMALL_STATE(21)] = 1504,
  [SMALL_STATE(22)] = 1580,
  [SMALL_STATE(23)] = 1656,
  [SMALL_STATE(24)] = 1732,
  [SMALL_STATE(25)] = 1821,
  [SMALL_STATE(26)] = 1910,
  [SMALL_STATE(27)] = 1992,
  [SMALL_STATE(28)] = 2074,
  [SMALL_STATE(29)] = 2156,
  [SMALL_STATE(30)] = 2238,
  [SMALL_STATE(31)] = 2320,
  [SMALL_STATE(32)] = 2402,
  [SMALL_STATE(33)] = 2484,
  [SMALL_STATE(34)] = 2566,
  [SMALL_STATE(35)] = 2648,
  [SMALL_STATE(36)] = 2730,
  [SMALL_STATE(37)] = 2812,
  [SMALL_STATE(38)] = 2855,
  [SMALL_STATE(39)] = 2898,
  [SMALL_STATE(40)] = 2941,
  [SMALL_STATE(41)] = 2985,
  [SMALL_STATE(42)] = 3049,
  [SMALL_STATE(43)] = 3113,
  [SMALL_STATE(44)] = 3165,
  [SMALL_STATE(45)] = 3213,
  [SMALL_STATE(46)] = 3277,
  [SMALL_STATE(47)] = 3341,
  [SMALL_STATE(48)] = 3405,
  [SMALL_STATE(49)] = 3465,
  [SMALL_STATE(50)] = 3529,
  [SMALL_STATE(51)] = 3571,
  [SMALL_STATE(52)] = 3639,
  [SMALL_STATE(53)] = 3687,
  [SMALL_STATE(54)] = 3743,
  [SMALL_STATE(55)] = 3801,
  [SMALL_STATE(56)] = 3855,
  [SMALL_STATE(57)] = 3905,
  [SMALL_STATE(58)] = 3947,
  [SMALL_STATE(59)] = 4011,
  [SMALL_STATE(60)] = 4052,
  [SMALL_STATE(61)] = 4093,
  [SMALL_STATE(62)] = 4134,
  [SMALL_STATE(63)] = 4175,
  [SMALL_STATE(64)] = 4216,
  [SMALL_STATE(65)] = 4257,
  [SMALL_STATE(66)] = 4320,
  [SMALL_STATE(67)] = 4361,
  [SMALL_STATE(68)] = 4402,
  [SMALL_STATE(69)] = 4443,
  [SMALL_STATE(70)] = 4484,
  [SMALL_STATE(71)] = 4546,
  [SMALL_STATE(72)] = 4605,
  [SMALL_STATE(73)] = 4664,
  [SMALL_STATE(74)] = 4720,
  [SMALL_STATE(75)] = 4773,
  [SMALL_STATE(76)] = 4826,
  [SMALL_STATE(77)] = 4876,
  [SMALL_STATE(78)] = 4926,
  [SMALL_STATE(79)] = 4976,
  [SMALL_STATE(80)] = 5026,
  [SMALL_STATE(81)] = 5076,
  [SMALL_STATE(82)] = 5126,
  [SMALL_STATE(83)] = 5176,
  [SMALL_STATE(84)] = 5226,
  [SMALL_STATE(85)] = 5260,
  [SMALL_STATE(86)] = 5294,
  [SMALL_STATE(87)] = 5328,
  [SMALL_STATE(88)] = 5362,
  [SMALL_STATE(89)] = 5416,
  [SMALL_STATE(90)] = 5450,
  [SMALL_STATE(91)] = 5481,
  [SMALL_STATE(92)] = 5512,
  [SMALL_STATE(93)] = 5543,
  [SMALL_STATE(94)] = 5579,
  [SMALL_STATE(95)] = 5619,
  [SMALL_STATE(96)] = 5655,
  [SMALL_STATE(97)] = 5695,
  [SMALL_STATE(98)] = 5743,
  [SMALL_STATE(99)] = 5787,
  [SMALL_STATE(100)] = 5833,
  [SMALL_STATE(101)] = 5875,
  [SMALL_STATE(102)] = 5913,
  [SMALL_STATE(103)] = 5945,
  [SMALL_STATE(104)] = 5974,
  [SMALL_STATE(105)] = 6003,
  [SMALL_STATE(106)] = 6032,
  [SMALL_STATE(107)] = 6061,
  [SMALL_STATE(108)] = 6090,
  [SMALL_STATE(109)] = 6119,
  [SMALL_STATE(110)] = 6148,
  [SMALL_STATE(111)] = 6177,
  [SMALL_STATE(112)] = 6206,
  [SMALL_STATE(113)] = 6235,
  [SMALL_STATE(114)] = 6264,
  [SMALL_STATE(115)] = 6293,
  [SMALL_STATE(116)] = 6322,
  [SMALL_STATE(117)] = 6351,
  [SMALL_STATE(118)] = 6380,
  [SMALL_STATE(119)] = 6432,
  [SMALL_STATE(120)] = 6466,
  [SMALL_STATE(121)] = 6500,
  [SMALL_STATE(122)] = 6538,
  [SMALL_STATE(123)] = 6584,
  [SMALL_STATE(124)] = 6626,
  [SMALL_STATE(125)] = 6670,
  [SMALL_STATE(126)] = 6706,
  [SMALL_STATE(127)] = 6734,
  [SMALL_STATE(128)] = 6764,
  [SMALL_STATE(129)] = 6804,
  [SMALL_STATE(130)] = 6832,
  [SMALL_STATE(131)] = 6859,
  [SMALL_STATE(132)] = 6910,
  [SMALL_STATE(133)] = 6937,
  [SMALL_STATE(134)] = 6970,
  [SMALL_STATE(135)] = 7003,
  [SMALL_STATE(136)] = 7054,
  [SMALL_STATE(137)] = 7087,
  [SMALL_STATE(138)] = 7120,
  [SMALL_STATE(139)] = 7147,
  [SMALL_STATE(140)] = 7198,
  [SMALL_STATE(141)] = 7229,
  [SMALL_STATE(142)] = 7280,
  [SMALL_STATE(143)] = 7327,
  [SMALL_STATE(144)] = 7358,
  [SMALL_STATE(145)] = 7409,
  [SMALL_STATE(146)] = 7460,
  [SMALL_STATE(147)] = 7487,
  [SMALL_STATE(148)] = 7514,
  [SMALL_STATE(149)] = 7547,
  [SMALL_STATE(150)] = 7598,
  [SMALL_STATE(151)] = 7631,
  [SMALL_STATE(152)] = 7658,
  [SMALL_STATE(153)] = 7691,
  [SMALL_STATE(154)] = 7718,
  [SMALL_STATE(155)] = 7751,
  [SMALL_STATE(156)] = 7784,
  [SMALL_STATE(157)] = 7817,
  [SMALL_STATE(158)] = 7848,
  [SMALL_STATE(159)] = 7899,
  [SMALL_STATE(160)] = 7932,
  [SMALL_STATE(161)] = 7965,
  [SMALL_STATE(162)] = 7992,
  [SMALL_STATE(163)] = 8019,
  [SMALL_STATE(164)] = 8052,
  [SMALL_STATE(165)] = 8079,
  [SMALL_STATE(166)] = 8112,
  [SMALL_STATE(167)] = 8139,
  [SMALL_STATE(168)] = 8166,
  [SMALL_STATE(169)] = 8213,
  [SMALL_STATE(170)] = 8240,
  [SMALL_STATE(171)] = 8267,
  [SMALL_STATE(172)] = 8300,
  [SMALL_STATE(173)] = 8328,
  [SMALL_STATE(174)] = 8376,
  [SMALL_STATE(175)] = 8402,
  [SMALL_STATE(176)] = 8428,
  [SMALL_STATE(177)] = 8456,
  [SMALL_STATE(178)] = 8488,
  [SMALL_STATE(179)] = 8514,
  [SMALL_STATE(180)] = 8540,
  [SMALL_STATE(181)] = 8586,
  [SMALL_STATE(182)] = 8634,
  [SMALL_STATE(183)] = 8680,
  [SMALL_STATE(184)] = 8708,
  [SMALL_STATE(185)] = 8754,
  [SMALL_STATE(186)] = 8782,
  [SMALL_STATE(187)] = 8810,
  [SMALL_STATE(188)] = 8858,
  [SMALL_STATE(189)] = 8886,
  [SMALL_STATE(190)] = 8912,
  [SMALL_STATE(191)] = 8960,
  [SMALL_STATE(192)] = 9008,
  [SMALL_STATE(193)] = 9056,
  [SMALL_STATE(194)] = 9102,
  [SMALL_STATE(195)] = 9136,
  [SMALL_STATE(196)] = 9182,
  [SMALL_STATE(197)] = 9228,
  [SMALL_STATE(198)] = 9276,
  [SMALL_STATE(199)] = 9314,
  [SMALL_STATE(200)] = 9362,
  [SMALL_STATE(201)] = 9404,
  [SMALL_STATE(202)] = 9450,
  [SMALL_STATE(203)] = 9490,
  [SMALL_STATE(204)] = 9536,
  [SMALL_STATE(205)] = 9562,
  [SMALL_STATE(206)] = 9608,
  [SMALL_STATE(207)] = 9652,
  [SMALL_STATE(208)] = 9688,
  [SMALL_STATE(209)] = 9720,
  [SMALL_STATE(210)] = 9768,
  [SMALL_STATE(211)] = 9794,
  [SMALL_STATE(212)] = 9820,
  [SMALL_STATE(213)] = 9845,
  [SMALL_STATE(214)] = 9870,
  [SMALL_STATE(215)] = 9895,
  [SMALL_STATE(216)] = 9920,
  [SMALL_STATE(217)] = 9945,
  [SMALL_STATE(218)] = 9970,
  [SMALL_STATE(219)] = 9995,
  [SMALL_STATE(220)] = 10020,
  [SMALL_STATE(221)] = 10045,
  [SMALL_STATE(222)] = 10070,
  [SMALL_STATE(223)] = 10095,
  [SMALL_STATE(224)] = 10120,
  [SMALL_STATE(225)] = 10145,
  [SMALL_STATE(226)] = 10170,
  [SMALL_STATE(227)] = 10195,
  [SMALL_STATE(228)] = 10220,
  [SMALL_STATE(229)] = 10245,
  [SMALL_STATE(230)] = 10270,
  [SMALL_STATE(231)] = 10295,
  [SMALL_STATE(232)] = 10320,
  [SMALL_STATE(233)] = 10345,
  [SMALL_STATE(234)] = 10370,
  [SMALL_STATE(235)] = 10395,
  [SMALL_STATE(236)] = 10420,
  [SMALL_STATE(237)] = 10445,
  [SMALL_STATE(238)] = 10470,
  [SMALL_STATE(239)] = 10495,
  [SMALL_STATE(240)] = 10535,
  [SMALL_STATE(241)] = 10575,
  [SMALL_STATE(242)] = 10615,
  [SMALL_STATE(243)] = 10655,
  [SMALL_STATE(244)] = 10695,
  [SMALL_STATE(245)] = 10735,
  [SMALL_STATE(246)] = 10775,
  [SMALL_STATE(247)] = 10815,
  [SMALL_STATE(248)] = 10855,
  [SMALL_STATE(249)] = 10895,
  [SMALL_STATE(250)] = 10935,
  [SMALL_STATE(251)] = 10975,
  [SMALL_STATE(252)] = 11015,
  [SMALL_STATE(253)] = 11055,
  [SMALL_STATE(254)] = 11095,
  [SMALL_STATE(255)] = 11135,
  [SMALL_STATE(256)] = 11175,
  [SMALL_STATE(257)] = 11217,
  [SMALL_STATE(258)] = 11257,
  [SMALL_STATE(259)] = 11297,
  [SMALL_STATE(260)] = 11337,
  [SMALL_STATE(261)] = 11377,
  [SMALL_STATE(262)] = 11417,
  [SMALL_STATE(263)] = 11457,
  [SMALL_STATE(264)] = 11497,
  [SMALL_STATE(265)] = 11537,
  [SMALL_STATE(266)] = 11577,
  [SMALL_STATE(267)] = 11617,
  [SMALL_STATE(268)] = 11657,
  [SMALL_STATE(269)] = 11697,
  [SMALL_STATE(270)] = 11737,
  [SMALL_STATE(271)] = 11777,
  [SMALL_STATE(272)] = 11817,
  [SMALL_STATE(273)] = 11857,
  [SMALL_STATE(274)] = 11897,
  [SMALL_STATE(275)] = 11937,
  [SMALL_STATE(276)] = 11977,
  [SMALL_STATE(277)] = 12017,
  [SMALL_STATE(278)] = 12057,
  [SMALL_STATE(279)] = 12097,
  [SMALL_STATE(280)] = 12137,
  [SMALL_STATE(281)] = 12177,
  [SMALL_STATE(282)] = 12217,
  [SMALL_STATE(283)] = 12257,
  [SMALL_STATE(284)] = 12297,
  [SMALL_STATE(285)] = 12337,
  [SMALL_STATE(286)] = 12377,
  [SMALL_STATE(287)] = 12417,
  [SMALL_STATE(288)] = 12457,
  [SMALL_STATE(289)] = 12497,
  [SMALL_STATE(290)] = 12537,
  [SMALL_STATE(291)] = 12577,
  [SMALL_STATE(292)] = 12617,
  [SMALL_STATE(293)] = 12657,
  [SMALL_STATE(294)] = 12697,
  [SMALL_STATE(295)] = 12737,
  [SMALL_STATE(296)] = 12777,
  [SMALL_STATE(297)] = 12817,
  [SMALL_STATE(298)] = 12857,
  [SMALL_STATE(299)] = 12873,
  [SMALL_STATE(300)] = 12893,
  [SMALL_STATE(301)] = 12910,
  [SMALL_STATE(302)] = 12927,
  [SMALL_STATE(303)] = 12944,
  [SMALL_STATE(304)] = 12953,
  [SMALL_STATE(305)] = 12968,
  [SMALL_STATE(306)] = 12983,
  [SMALL_STATE(307)] = 13000,
  [SMALL_STATE(308)] = 13015,
  [SMALL_STATE(309)] = 13024,
  [SMALL_STATE(310)] = 13033,
  [SMALL_STATE(311)] = 13045,
  [SMALL_STATE(312)] = 13057,
  [SMALL_STATE(313)] = 13069,
  [SMALL_STATE(314)] = 13082,
  [SMALL_STATE(315)] = 13093,
  [SMALL_STATE(316)] = 13102,
  [SMALL_STATE(317)] = 13113,
  [SMALL_STATE(318)] = 13122,
  [SMALL_STATE(319)] = 13135,
  [SMALL_STATE(320)] = 13144,
  [SMALL_STATE(321)] = 13155,
  [SMALL_STATE(322)] = 13162,
  [SMALL_STATE(323)] = 13175,
  [SMALL_STATE(324)] = 13186,
  [SMALL_STATE(325)] = 13195,
  [SMALL_STATE(326)] = 13206,
  [SMALL_STATE(327)] = 13217,
  [SMALL_STATE(328)] = 13224,
  [SMALL_STATE(329)] = 13231,
  [SMALL_STATE(330)] = 13242,
  [SMALL_STATE(331)] = 13253,
  [SMALL_STATE(332)] = 13262,
  [SMALL_STATE(333)] = 13273,
  [SMALL_STATE(334)] = 13286,
  [SMALL_STATE(335)] = 13299,
  [SMALL_STATE(336)] = 13310,
  [SMALL_STATE(337)] = 13321,
  [SMALL_STATE(338)] = 13328,
  [SMALL_STATE(339)] = 13338,
  [SMALL_STATE(340)] = 13348,
  [SMALL_STATE(341)] = 13358,
  [SMALL_STATE(342)] = 13368,
  [SMALL_STATE(343)] = 13378,
  [SMALL_STATE(344)] = 13388,
  [SMALL_STATE(345)] = 13398,
  [SMALL_STATE(346)] = 13404,
  [SMALL_STATE(347)] = 13414,
  [SMALL_STATE(348)] = 13424,
  [SMALL_STATE(349)] = 13434,
  [SMALL_STATE(350)] = 13444,
  [SMALL_STATE(351)] = 13454,
  [SMALL_STATE(352)] = 13464,
  [SMALL_STATE(353)] = 13474,
  [SMALL_STATE(354)] = 13482,
  [SMALL_STATE(355)] = 13490,
  [SMALL_STATE(356)] = 13500,
  [SMALL_STATE(357)] = 13510,
  [SMALL_STATE(358)] = 13520,
  [SMALL_STATE(359)] = 13530,
  [SMALL_STATE(360)] = 13540,
  [SMALL_STATE(361)] = 13550,
  [SMALL_STATE(362)] = 13560,
  [SMALL_STATE(363)] = 13570,
  [SMALL_STATE(364)] = 13578,
  [SMALL_STATE(365)] = 13588,
  [SMALL_STATE(366)] = 13598,
  [SMALL_STATE(367)] = 13608,
  [SMALL_STATE(368)] = 13615,
  [SMALL_STATE(369)] = 13622,
  [SMALL_STATE(370)] = 13627,
  [SMALL_STATE(371)] = 13632,
  [SMALL_STATE(372)] = 13639,
  [SMALL_STATE(373)] = 13646,
  [SMALL_STATE(374)] = 13653,
  [SMALL_STATE(375)] = 13660,
  [SMALL_STATE(376)] = 13665,
  [SMALL_STATE(377)] = 13670,
  [SMALL_STATE(378)] = 13675,
  [SMALL_STATE(379)] = 13682,
  [SMALL_STATE(380)] = 13687,
  [SMALL_STATE(381)] = 13692,
  [SMALL_STATE(382)] = 13699,
  [SMALL_STATE(383)] = 13704,
  [SMALL_STATE(384)] = 13711,
  [SMALL_STATE(385)] = 13718,
  [SMALL_STATE(386)] = 13725,
  [SMALL_STATE(387)] = 13732,
  [SMALL_STATE(388)] = 13739,
  [SMALL_STATE(389)] = 13746,
  [SMALL_STATE(390)] = 13753,
  [SMALL_STATE(391)] = 13760,
  [SMALL_STATE(392)] = 13765,
  [SMALL_STATE(393)] = 13772,
  [SMALL_STATE(394)] = 13777,
  [SMALL_STATE(395)] = 13782,
  [SMALL_STATE(396)] = 13787,
  [SMALL_STATE(397)] = 13792,
  [SMALL_STATE(398)] = 13797,
  [SMALL_STATE(399)] = 13801,
  [SMALL_STATE(400)] = 13805,
  [SMALL_STATE(401)] = 13809,
  [SMALL_STATE(402)] = 13813,
  [SMALL_STATE(403)] = 13817,
  [SMALL_STATE(404)] = 13821,
  [SMALL_STATE(405)] = 13825,
  [SMALL_STATE(406)] = 13829,
  [SMALL_STATE(407)] = 13833,
  [SMALL_STATE(408)] = 13837,
  [SMALL_STATE(409)] = 13841,
  [SMALL_STATE(410)] = 13845,
  [SMALL_STATE(411)] = 13849,
  [SMALL_STATE(412)] = 13853,
  [SMALL_STATE(413)] = 13857,
  [SMALL_STATE(414)] = 13861,
  [SMALL_STATE(415)] = 13865,
  [SMALL_STATE(416)] = 13869,
  [SMALL_STATE(417)] = 13873,
  [SMALL_STATE(418)] = 13877,
  [SMALL_STATE(419)] = 13881,
  [SMALL_STATE(420)] = 13885,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(378),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(410),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(255),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(262),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(294),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(292),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(235),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(334),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(290),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(325),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(261),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 20),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 20),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 28),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 28),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 25),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 25),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 18),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 18),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(395),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(397),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(396),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(382),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(336),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(91),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 23),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 23),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 12),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 12),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 24),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 22),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 26),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 27),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 27),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 19),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 19),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 7),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(399),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(298),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 15),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(335),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(23),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(311),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 29),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(307),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 21),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [914] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
