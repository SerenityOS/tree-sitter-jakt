#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 442
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 2
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 33

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
  anon_sym_ref = 37,
  anon_sym_enum = 38,
  anon_sym_LBRACE = 39,
  anon_sym_BSLASHn = 40,
  anon_sym_RBRACE = 41,
  sym_mutable_specifier = 42,
  anon_sym_DASH = 43,
  anon_sym_return = 44,
  anon_sym_AMP = 45,
  anon_sym_PIPE = 46,
  anon_sym_CARET = 47,
  anon_sym_EQ_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_LT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_GT = 52,
  anon_sym_GT_EQ = 53,
  anon_sym_LT_LT = 54,
  anon_sym_GT_GT = 55,
  anon_sym_PLUS = 56,
  anon_sym_STAR = 57,
  anon_sym_SLASH = 58,
  anon_sym_PERCENT = 59,
  sym_integer_literal = 60,
  sym_binary_literal = 61,
  aux_sym_string_literal_token1 = 62,
  anon_sym_DQUOTE = 63,
  sym_char_literal = 64,
  sym_escape_sequence = 65,
  anon_sym_function = 66,
  anon_sym_DASH_GT = 67,
  anon_sym_if = 68,
  anon_sym_else = 69,
  anon_sym_true = 70,
  anon_sym_false = 71,
  sym_line_comment = 72,
  sym__string_content = 73,
  sym_float_literal = 74,
  sym_source_file = 75,
  sym__expression = 76,
  sym_while_statement = 77,
  sym_increment_statement = 78,
  sym_decrement_statement = 79,
  sym_continue_statement = 80,
  sym_for_expression = 81,
  sym_call_expression = 82,
  sym_range_expression = 83,
  sym_arguments = 84,
  sym__top_level_declaration = 85,
  sym__type = 86,
  sym_array_type = 87,
  sym_let_declaration = 88,
  sym_reference_modifier = 89,
  sym_enum_declaration = 90,
  sym_enum_integral_type = 91,
  sym_enum_variant_list = 92,
  sym_enum_variant = 93,
  sym_field_declaration_list = 94,
  sym_field_declaration = 95,
  sym__field_identifier = 96,
  sym_ordered_field_declaration_list = 97,
  sym_unary_expression = 98,
  sym_return_statement = 99,
  sym_binary_expression = 100,
  sym__literal = 101,
  sym__pattern = 102,
  sym__literal_pattern = 103,
  sym_negative_literal = 104,
  sym_string_literal = 105,
  sym_function_declaration = 106,
  sym_parameters = 107,
  sym_parameter = 108,
  sym_block = 109,
  sym_if_statement = 110,
  sym_else_clause = 111,
  sym_boolean_literal = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_arguments_repeat1 = 114,
  aux_sym_arguments_repeat2 = 115,
  aux_sym_enum_variant_list_repeat1 = 116,
  aux_sym_enum_variant_list_repeat2 = 117,
  aux_sym_field_declaration_list_repeat1 = 118,
  aux_sym_field_declaration_list_repeat2 = 119,
  aux_sym_ordered_field_declaration_list_repeat1 = 120,
  aux_sym_string_literal_repeat1 = 121,
  aux_sym_parameters_repeat1 = 122,
  aux_sym_block_repeat1 = 123,
  alias_sym_field_identifier = 124,
  alias_sym_type_identifier = 125,
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
  [anon_sym_ref] = "ref",
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
  [sym_binary_literal] = "binary_literal",
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
  [sym_reference_modifier] = "reference_modifier",
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
  [aux_sym_ordered_field_declaration_list_repeat1] = "ordered_field_declaration_list_repeat1",
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
  [anon_sym_ref] = anon_sym_ref,
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
  [sym_binary_literal] = sym_binary_literal,
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
  [sym_reference_modifier] = sym_reference_modifier,
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
  [aux_sym_ordered_field_declaration_list_repeat1] = aux_sym_ordered_field_declaration_list_repeat1,
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
  [anon_sym_ref] = {
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
  [sym_binary_literal] = {
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
  [sym_reference_modifier] = {
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
  [aux_sym_ordered_field_declaration_list_repeat1] = {
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
  [12] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 3},
  [18] = {.index = 25, .length = 3},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 3},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 2},
  [26] = {.index = 39, .length = 2},
  [27] = {.index = 41, .length = 1},
  [28] = {.index = 42, .length = 3},
  [29] = {.index = 45, .length = 3},
  [30] = {.index = 48, .length = 4},
  [31] = {.index = 52, .length = 3},
  [32] = {.index = 55, .length = 2},
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
    {field_body, 2},
  [16] =
    {field_pattern, 1},
    {field_type, 3},
  [18] =
    {field_pattern, 1},
    {field_value, 3},
  [20] =
    {field_body, 1},
    {field_name, 0},
  [22] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [25] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [28] =
    {field_body, 3},
    {field_name, 2},
  [30] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [33] =
    {field_pattern, 2},
    {field_type, 4},
  [35] =
    {field_pattern, 2},
    {field_value, 4},
  [37] =
    {field_name, 0},
    {field_value, 2},
  [39] =
    {field_pattern, 0},
    {field_type, 2},
  [41] =
    {field_element, 1},
  [42] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [45] =
    {field_body, 1},
    {field_name, 0},
    {field_value, 3},
  [48] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [52] =
    {field_pattern, 2},
    {field_type, 4},
    {field_value, 6},
  [55] =
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
  [13] = {
    [0] = alias_sym_type_identifier,
  },
  [19] = {
    [2] = alias_sym_type_identifier,
  },
  [24] = {
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
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(109);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(92);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(92);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(51);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'z') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(12);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
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
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(78);
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
      if (lookahead == 'z') ADVANCE(79);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == '8') ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 67:
      if (lookahead == 'z') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 55, .external_lex_state = 2},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 5, .external_lex_state = 2},
  [5] = {.lex_state = 5, .external_lex_state = 2},
  [6] = {.lex_state = 5, .external_lex_state = 2},
  [7] = {.lex_state = 5, .external_lex_state = 2},
  [8] = {.lex_state = 5, .external_lex_state = 2},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 5, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 2},
  [12] = {.lex_state = 55, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 5, .external_lex_state = 2},
  [15] = {.lex_state = 5, .external_lex_state = 2},
  [16] = {.lex_state = 5, .external_lex_state = 2},
  [17] = {.lex_state = 5, .external_lex_state = 2},
  [18] = {.lex_state = 5, .external_lex_state = 2},
  [19] = {.lex_state = 55, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 5, .external_lex_state = 2},
  [23] = {.lex_state = 5, .external_lex_state = 2},
  [24] = {.lex_state = 5, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 2},
  [26] = {.lex_state = 55, .external_lex_state = 2},
  [27] = {.lex_state = 55, .external_lex_state = 2},
  [28] = {.lex_state = 55, .external_lex_state = 2},
  [29] = {.lex_state = 55, .external_lex_state = 2},
  [30] = {.lex_state = 55, .external_lex_state = 2},
  [31] = {.lex_state = 55, .external_lex_state = 2},
  [32] = {.lex_state = 55, .external_lex_state = 2},
  [33] = {.lex_state = 55, .external_lex_state = 2},
  [34] = {.lex_state = 55, .external_lex_state = 2},
  [35] = {.lex_state = 55, .external_lex_state = 2},
  [36] = {.lex_state = 55, .external_lex_state = 2},
  [37] = {.lex_state = 55, .external_lex_state = 2},
  [38] = {.lex_state = 55, .external_lex_state = 2},
  [39] = {.lex_state = 55, .external_lex_state = 2},
  [40] = {.lex_state = 6, .external_lex_state = 2},
  [41] = {.lex_state = 6, .external_lex_state = 2},
  [42] = {.lex_state = 6, .external_lex_state = 2},
  [43] = {.lex_state = 6, .external_lex_state = 2},
  [44] = {.lex_state = 6, .external_lex_state = 2},
  [45] = {.lex_state = 6, .external_lex_state = 2},
  [46] = {.lex_state = 6, .external_lex_state = 2},
  [47] = {.lex_state = 6, .external_lex_state = 2},
  [48] = {.lex_state = 6, .external_lex_state = 2},
  [49] = {.lex_state = 6, .external_lex_state = 2},
  [50] = {.lex_state = 6, .external_lex_state = 2},
  [51] = {.lex_state = 6, .external_lex_state = 2},
  [52] = {.lex_state = 6, .external_lex_state = 2},
  [53] = {.lex_state = 6, .external_lex_state = 2},
  [54] = {.lex_state = 6, .external_lex_state = 2},
  [55] = {.lex_state = 6, .external_lex_state = 2},
  [56] = {.lex_state = 6, .external_lex_state = 2},
  [57] = {.lex_state = 6, .external_lex_state = 2},
  [58] = {.lex_state = 6, .external_lex_state = 2},
  [59] = {.lex_state = 6, .external_lex_state = 2},
  [60] = {.lex_state = 6, .external_lex_state = 2},
  [61] = {.lex_state = 6, .external_lex_state = 2},
  [62] = {.lex_state = 6, .external_lex_state = 2},
  [63] = {.lex_state = 6, .external_lex_state = 2},
  [64] = {.lex_state = 6, .external_lex_state = 2},
  [65] = {.lex_state = 6, .external_lex_state = 2},
  [66] = {.lex_state = 6, .external_lex_state = 2},
  [67] = {.lex_state = 6, .external_lex_state = 2},
  [68] = {.lex_state = 6, .external_lex_state = 2},
  [69] = {.lex_state = 5, .external_lex_state = 2},
  [70] = {.lex_state = 9, .external_lex_state = 2},
  [71] = {.lex_state = 9, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 9, .external_lex_state = 2},
  [74] = {.lex_state = 9, .external_lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 2},
  [76] = {.lex_state = 9, .external_lex_state = 2},
  [77] = {.lex_state = 9, .external_lex_state = 2},
  [78] = {.lex_state = 55, .external_lex_state = 2},
  [79] = {.lex_state = 9, .external_lex_state = 2},
  [80] = {.lex_state = 9, .external_lex_state = 2},
  [81] = {.lex_state = 9, .external_lex_state = 2},
  [82] = {.lex_state = 9, .external_lex_state = 2},
  [83] = {.lex_state = 9, .external_lex_state = 2},
  [84] = {.lex_state = 9, .external_lex_state = 2},
  [85] = {.lex_state = 5, .external_lex_state = 2},
  [86] = {.lex_state = 5, .external_lex_state = 2},
  [87] = {.lex_state = 5, .external_lex_state = 2},
  [88] = {.lex_state = 5, .external_lex_state = 2},
  [89] = {.lex_state = 5, .external_lex_state = 2},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 10, .external_lex_state = 2},
  [107] = {.lex_state = 10, .external_lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 55, .external_lex_state = 2},
  [111] = {.lex_state = 10, .external_lex_state = 2},
  [112] = {.lex_state = 10, .external_lex_state = 2},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 10, .external_lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 10, .external_lex_state = 2},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 10, .external_lex_state = 2},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 55, .external_lex_state = 2},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 10, .external_lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 10, .external_lex_state = 2},
  [132] = {.lex_state = 10, .external_lex_state = 2},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 10, .external_lex_state = 2},
  [136] = {.lex_state = 55, .external_lex_state = 2},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 55, .external_lex_state = 2},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 55, .external_lex_state = 2},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 55, .external_lex_state = 2},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 55, .external_lex_state = 2},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 55, .external_lex_state = 2},
  [162] = {.lex_state = 55, .external_lex_state = 2},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 55, .external_lex_state = 2},
  [167] = {.lex_state = 55, .external_lex_state = 2},
  [168] = {.lex_state = 55, .external_lex_state = 2},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 55, .external_lex_state = 2},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 55, .external_lex_state = 2},
  [173] = {.lex_state = 55, .external_lex_state = 2},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 55, .external_lex_state = 2},
  [177] = {.lex_state = 55, .external_lex_state = 2},
  [178] = {.lex_state = 55, .external_lex_state = 2},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 55, .external_lex_state = 2},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 1, .external_lex_state = 2},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 55, .external_lex_state = 2},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 55, .external_lex_state = 2},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 5, .external_lex_state = 2},
  [228] = {.lex_state = 5, .external_lex_state = 2},
  [229] = {.lex_state = 5, .external_lex_state = 2},
  [230] = {.lex_state = 5, .external_lex_state = 2},
  [231] = {.lex_state = 5, .external_lex_state = 2},
  [232] = {.lex_state = 5, .external_lex_state = 2},
  [233] = {.lex_state = 5, .external_lex_state = 2},
  [234] = {.lex_state = 5, .external_lex_state = 2},
  [235] = {.lex_state = 5, .external_lex_state = 2},
  [236] = {.lex_state = 5, .external_lex_state = 2},
  [237] = {.lex_state = 5, .external_lex_state = 2},
  [238] = {.lex_state = 5, .external_lex_state = 2},
  [239] = {.lex_state = 5, .external_lex_state = 2},
  [240] = {.lex_state = 5, .external_lex_state = 2},
  [241] = {.lex_state = 5, .external_lex_state = 2},
  [242] = {.lex_state = 5, .external_lex_state = 2},
  [243] = {.lex_state = 5, .external_lex_state = 2},
  [244] = {.lex_state = 5, .external_lex_state = 2},
  [245] = {.lex_state = 5, .external_lex_state = 2},
  [246] = {.lex_state = 5, .external_lex_state = 2},
  [247] = {.lex_state = 5, .external_lex_state = 2},
  [248] = {.lex_state = 5, .external_lex_state = 2},
  [249] = {.lex_state = 5, .external_lex_state = 2},
  [250] = {.lex_state = 5, .external_lex_state = 2},
  [251] = {.lex_state = 5, .external_lex_state = 2},
  [252] = {.lex_state = 5, .external_lex_state = 2},
  [253] = {.lex_state = 5, .external_lex_state = 2},
  [254] = {.lex_state = 5, .external_lex_state = 2},
  [255] = {.lex_state = 5, .external_lex_state = 2},
  [256] = {.lex_state = 5, .external_lex_state = 2},
  [257] = {.lex_state = 5, .external_lex_state = 2},
  [258] = {.lex_state = 5, .external_lex_state = 2},
  [259] = {.lex_state = 5, .external_lex_state = 2},
  [260] = {.lex_state = 5, .external_lex_state = 2},
  [261] = {.lex_state = 5, .external_lex_state = 2},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 5, .external_lex_state = 2},
  [265] = {.lex_state = 5, .external_lex_state = 2},
  [266] = {.lex_state = 5, .external_lex_state = 2},
  [267] = {.lex_state = 5, .external_lex_state = 2},
  [268] = {.lex_state = 5, .external_lex_state = 2},
  [269] = {.lex_state = 5, .external_lex_state = 2},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 5, .external_lex_state = 2},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 5, .external_lex_state = 2},
  [276] = {.lex_state = 5, .external_lex_state = 2},
  [277] = {.lex_state = 5, .external_lex_state = 2},
  [278] = {.lex_state = 5, .external_lex_state = 2},
  [279] = {.lex_state = 5, .external_lex_state = 2},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 5, .external_lex_state = 2},
  [282] = {.lex_state = 5, .external_lex_state = 2},
  [283] = {.lex_state = 5, .external_lex_state = 2},
  [284] = {.lex_state = 5, .external_lex_state = 2},
  [285] = {.lex_state = 5, .external_lex_state = 2},
  [286] = {.lex_state = 5, .external_lex_state = 2},
  [287] = {.lex_state = 5, .external_lex_state = 2},
  [288] = {.lex_state = 5, .external_lex_state = 2},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 5, .external_lex_state = 2},
  [291] = {.lex_state = 5, .external_lex_state = 2},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 5, .external_lex_state = 2},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 5, .external_lex_state = 2},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 13},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 7},
  [312] = {.lex_state = 7},
  [313] = {.lex_state = 7},
  [314] = {.lex_state = 7},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 8, .external_lex_state = 3},
  [320] = {.lex_state = 8, .external_lex_state = 3},
  [321] = {.lex_state = 8, .external_lex_state = 3},
  [322] = {.lex_state = 8, .external_lex_state = 3},
  [323] = {.lex_state = 8, .external_lex_state = 3},
  [324] = {.lex_state = 13},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 7},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 13},
  [330] = {.lex_state = 13},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 8, .external_lex_state = 3},
  [334] = {.lex_state = 13},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 7},
  [337] = {.lex_state = 7},
  [338] = {.lex_state = 8, .external_lex_state = 3},
  [339] = {.lex_state = 13},
  [340] = {.lex_state = 8, .external_lex_state = 3},
  [341] = {.lex_state = 7},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 13},
  [344] = {.lex_state = 8, .external_lex_state = 3},
  [345] = {.lex_state = 7},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 4},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 13},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 55},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 55},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 55},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 7},
  [368] = {.lex_state = 55},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 55},
  [373] = {.lex_state = 4},
  [374] = {.lex_state = 55},
  [375] = {.lex_state = 55},
  [376] = {.lex_state = 55},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 2},
  [381] = {.lex_state = 7},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 2},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 13},
  [387] = {.lex_state = 13},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 9, .external_lex_state = 2},
  [392] = {.lex_state = 13},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 13},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 2},
  [397] = {.lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 2},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 9, .external_lex_state = 2},
  [407] = {.lex_state = 2},
  [408] = {.lex_state = 2},
  [409] = {.lex_state = 2},
  [410] = {.lex_state = 2},
  [411] = {.lex_state = 7},
  [412] = {.lex_state = 7},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 9, .external_lex_state = 2},
  [415] = {.lex_state = 7},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 7},
  [420] = {.lex_state = 7},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 7},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 7},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 7},
  [436] = {.lex_state = 7},
  [437] = {.lex_state = 7},
  [438] = {.lex_state = 7},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
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
    [anon_sym_ref] = ACTIONS(1),
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
    [sym_binary_literal] = ACTIONS(1),
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
    [sym_line_comment] = ACTIONS(3),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(426),
    [sym__expression] = STATE(130),
    [sym_while_statement] = STATE(409),
    [sym_increment_statement] = STATE(409),
    [sym_decrement_statement] = STATE(409),
    [sym_continue_statement] = STATE(409),
    [sym_for_expression] = STATE(196),
    [sym_call_expression] = STATE(196),
    [sym_range_expression] = STATE(196),
    [sym__top_level_declaration] = STATE(19),
    [sym_let_declaration] = STATE(409),
    [sym_reference_modifier] = STATE(419),
    [sym_enum_declaration] = STATE(409),
    [sym_unary_expression] = STATE(196),
    [sym_return_statement] = STATE(409),
    [sym_binary_expression] = STATE(196),
    [sym__literal] = STATE(196),
    [sym_string_literal] = STATE(153),
    [sym_function_declaration] = STATE(19),
    [sym_block] = STATE(409),
    [sym_if_statement] = STATE(409),
    [sym_boolean_literal] = STATE(153),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(9),
    [anon_sym_PLUS_PLUS] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(13),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_ref] = ACTIONS(23),
    [anon_sym_enum] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_return] = ACTIONS(31),
    [sym_integer_literal] = ACTIONS(33),
    [sym_binary_literal] = ACTIONS(35),
    [aux_sym_string_literal_token1] = ACTIONS(37),
    [sym_char_literal] = ACTIONS(35),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    STATE(197), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [90] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [180] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [270] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [360] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [447] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [534] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [621] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [708] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [795] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [882] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_while,
    ACTIONS(103), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(106), 1,
      anon_sym_DASH_DASH,
    ACTIONS(109), 1,
      anon_sym_continue,
    ACTIONS(112), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(118), 1,
      anon_sym_let,
    ACTIONS(121), 1,
      anon_sym_ref,
    ACTIONS(124), 1,
      anon_sym_enum,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      anon_sym_return,
    ACTIONS(136), 1,
      sym_integer_literal,
    ACTIONS(142), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 1,
      anon_sym_function,
    ACTIONS(148), 1,
      anon_sym_if,
    STATE(130), 1,
      sym__expression,
    STATE(419), 1,
      sym_reference_modifier,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(139), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(12), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(409), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [983] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1070] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1157] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1244] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1331] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1418] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1505] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(13), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_continue,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(25), 1,
      anon_sym_enum,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(39), 1,
      anon_sym_function,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym__expression,
    STATE(419), 1,
      sym_reference_modifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(12), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(409), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1606] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    STATE(175), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1690] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    STATE(191), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1774] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    STATE(206), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1858] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    STATE(215), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [1942] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    STATE(165), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [2026] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(57), 1,
      sym_mutable_specifier,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_integer_literal,
    ACTIONS(63), 1,
      sym_binary_literal,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    STATE(171), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(67), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(214), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
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
  [2110] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(31), 10,
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
  [2204] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(28), 10,
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
  [2298] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
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
  [2392] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_while,
    ACTIONS(214), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(217), 1,
      anon_sym_DASH_DASH,
    ACTIONS(220), 1,
      anon_sym_continue,
    ACTIONS(223), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(229), 1,
      anon_sym_let,
    ACTIONS(232), 1,
      anon_sym_ref,
    ACTIONS(235), 1,
      anon_sym_enum,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_DASH,
    ACTIONS(246), 1,
      anon_sym_return,
    ACTIONS(249), 1,
      sym_integer_literal,
    ACTIONS(255), 1,
      aux_sym_string_literal_token1,
    ACTIONS(258), 1,
      anon_sym_if,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(261), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(252), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
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
  [2486] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
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
  [2580] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
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
  [2674] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
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
  [2768] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
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
  [2862] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(33), 10,
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
  [2956] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
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
  [3050] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_ref,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_while,
    ACTIONS(172), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(174), 1,
      anon_sym_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_continue,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(192), 1,
      anon_sym_return,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(200), 1,
      anon_sym_if,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(35), 10,
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
  [3144] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(280), 22,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(284), 22,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3240] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(288), 22,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3288] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(292), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(290), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3359] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 16,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(318), 17,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3416] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(322), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(320), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3487] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(326), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(324), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3558] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(318), 15,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3619] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(318), 13,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(316), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3684] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(318), 12,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(316), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3751] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(330), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3798] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(318), 17,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3857] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(316), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(318), 19,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(332), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(334), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3959] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(338), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(336), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4030] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    ACTIONS(342), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(344), 1,
      anon_sym_DASH_DASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(346), 6,
      sym_float_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(340), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4105] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(350), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(348), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4176] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(316), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(318), 14,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4239] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(352), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(354), 19,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4292] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(358), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4339] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(362), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(360), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4410] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      anon_sym_DOT_DOT,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(308), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(310), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(312), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(306), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(366), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(364), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4481] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(370), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4527] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(374), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4573] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(378), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4619] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(382), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4665] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(386), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4711] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(390), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4757] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(394), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(398), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4849] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(402), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4895] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(406), 21,
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
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4941] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_for,
    ACTIONS(418), 1,
      sym_mutable_specifier,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(424), 1,
      sym_integer_literal,
    ACTIONS(427), 1,
      aux_sym_string_literal_token1,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(413), 2,
      anon_sym_DOT_DOT,
      sym_binary_literal,
    ACTIONS(430), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(433), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(415), 18,
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
  [5010] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      sym_mutable_specifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(354), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5075] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(442), 1,
      sym_mutable_specifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5137] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(442), 1,
      sym_mutable_specifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5199] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(442), 1,
      sym_mutable_specifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(388), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5258] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(456), 1,
      sym_mutable_specifier,
    ACTIONS(458), 1,
      anon_sym_DASH,
    STATE(112), 1,
      sym__literal_pattern,
    STATE(118), 1,
      sym__pattern,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(460), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(106), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(454), 18,
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
  [5314] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(466), 1,
      sym_mutable_specifier,
    ACTIONS(468), 1,
      anon_sym_DASH,
    STATE(317), 1,
      sym__literal_pattern,
    STATE(332), 1,
      sym__pattern,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(470), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(335), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(464), 18,
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
  [5370] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_DASH,
    STATE(111), 1,
      sym__pattern,
    STATE(112), 1,
      sym__literal_pattern,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(460), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(106), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(454), 18,
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
  [5423] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(420), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5476] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(190), 1,
      anon_sym_DASH,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    STATE(51), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(474), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(472), 7,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
  [5537] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(437), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5590] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(438), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5643] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(435), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5696] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_DASH,
    STATE(317), 1,
      sym__literal_pattern,
    STATE(327), 1,
      sym__pattern,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(470), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(335), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(464), 18,
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
  [5749] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5802] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(428), 1,
      sym__pattern,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(446), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
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
  [5855] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(476), 24,
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
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5893] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(480), 24,
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
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5931] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(484), 24,
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
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5969] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(488), 24,
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
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6007] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(492), 24,
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
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6045] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 5,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(280), 21,
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
      anon_sym_PERCENT,
  [6079] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 5,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(284), 21,
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
      anon_sym_PERCENT,
  [6113] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 5,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(288), 21,
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
      anon_sym_PERCENT,
  [6147] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_BSLASHn,
    STATE(302), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(316), 1,
      sym_field_declaration,
    STATE(365), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(434), 1,
      sym__field_identifier,
    ACTIONS(500), 18,
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
  [6192] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(318), 17,
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
  [6235] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(316), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(318), 19,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6274] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(318), 10,
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
  [6327] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(318), 12,
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
  [6376] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(318), 11,
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
  [6427] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(318), 13,
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
  [6474] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(352), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(354), 19,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6513] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 15,
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
  [6558] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(332), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(334), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(386), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6625] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(402), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6657] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(376), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(378), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6689] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(522), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6721] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(526), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6753] = 3,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(286), 23,
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
  [6785] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(390), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6817] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_else,
    STATE(176), 1,
      sym_else_clause,
    ACTIONS(534), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(532), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6853] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_COLON,
    ACTIONS(544), 1,
      anon_sym_EQ,
    ACTIONS(540), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(538), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6889] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(546), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6921] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(380), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(382), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6953] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(398), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [6985] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(394), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [7017] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(330), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [7049] = 3,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(278), 23,
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
  [7081] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(554), 1,
      anon_sym_COLON,
    ACTIONS(556), 1,
      anon_sym_EQ,
    ACTIONS(552), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(550), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7117] = 3,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(282), 23,
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
  [7149] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(358), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [7181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(558), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7213] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(374), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [7245] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(370), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [7277] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(406), 21,
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
      anon_sym_PERCENT,
      sym_identifier,
  [7309] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      anon_sym_EQ,
    ACTIONS(564), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(562), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7342] = 6,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(352), 19,
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
  [7379] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(574), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7410] = 7,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 16,
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
  [7449] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(484), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7480] = 15,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(582), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(584), 1,
      anon_sym_DASH_DASH,
    ACTIONS(588), 1,
      anon_sym_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(596), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(594), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7535] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(602), 1,
      anon_sym_EQ,
    ACTIONS(600), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(598), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7568] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(492), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7599] = 3,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(356), 22,
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
  [7630] = 11,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_AMP,
    ACTIONS(592), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(596), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 10,
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
  [7677] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(476), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7708] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(606), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7739] = 10,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_AMP,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(596), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 11,
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
  [7784] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(608), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7815] = 4,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(332), 21,
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
  [7848] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(356), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7879] = 3,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(328), 22,
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
  [7910] = 6,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(316), 19,
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
  [7947] = 8,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 14,
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
  [7988] = 12,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_AMP,
    ACTIONS(590), 1,
      anon_sym_PIPE,
    ACTIONS(592), 1,
      anon_sym_CARET,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(596), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8037] = 9,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_DOT_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_arguments,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(596), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(576), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 12,
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
  [8080] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(328), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8111] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(392), 21,
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
  [8141] = 3,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(380), 21,
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
  [8171] = 3,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(388), 21,
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
  [8201] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_arguments,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8257] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    STATE(349), 1,
      sym_array_type,
    STATE(351), 1,
      sym__type,
    ACTIONS(620), 18,
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
  [8293] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(432), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [8329] = 3,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(368), 21,
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
  [8359] = 3,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(372), 21,
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
  [8389] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(417), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [8425] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(630), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8477] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(383), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [8513] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_arguments,
    STATE(366), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(638), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(636), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8599] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      sym_identifier,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    STATE(86), 1,
      sym__type,
    STATE(89), 1,
      sym_array_type,
    ACTIONS(642), 18,
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
  [8635] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(646), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8665] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(652), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(650), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8695] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(433), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [8731] = 3,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(400), 21,
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
  [8761] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_arguments,
    STATE(363), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8817] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(658), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(656), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8847] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(662), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(660), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8877] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(666), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(664), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8907] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(439), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [8943] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(360), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8973] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_arguments,
    STATE(347), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9029] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(672), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(670), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9059] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(676), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(674), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9089] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(337), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [9125] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_arguments,
    STATE(359), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(682), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(680), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9211] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(686), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(684), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9241] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(364), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9271] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(688), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9323] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      sym_identifier,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym__type,
    STATE(89), 1,
      sym_array_type,
    ACTIONS(642), 18,
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
  [9359] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(690), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9389] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(413), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [9425] = 14,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(698), 1,
      anon_sym_DOT_DOT,
    ACTIONS(700), 1,
      anon_sym_DASH,
    ACTIONS(704), 1,
      aux_sym_string_literal_token1,
    ACTIONS(708), 1,
      sym_float_literal,
    STATE(208), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(702), 3,
      sym_integer_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9477] = 3,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(404), 21,
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
  [9507] = 3,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(396), 21,
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
  [9537] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(418), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [9573] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    STATE(349), 1,
      sym_array_type,
    STATE(373), 1,
      sym__type,
    ACTIONS(620), 18,
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
  [9609] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_arguments,
    STATE(357), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9665] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(714), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9695] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym__type,
    STATE(132), 1,
      sym_array_type,
    ACTIONS(720), 18,
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
  [9731] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_arguments,
    STATE(355), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9787] = 3,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(376), 21,
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
  [9817] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      sym_identifier,
    ACTIONS(628), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym_array_type,
    STATE(390), 1,
      sym__type,
    ACTIONS(626), 18,
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
  [9853] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(726), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9883] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 1,
      sym_identifier,
    ACTIONS(722), 1,
      anon_sym_LBRACK,
    STATE(125), 1,
      sym__type,
    STATE(132), 1,
      sym_array_type,
    ACTIONS(720), 18,
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
  [9919] = 3,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(384), 21,
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
  [9949] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_arguments,
    STATE(378), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10005] = 8,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 12,
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
  [10044] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    STATE(168), 1,
      sym_block,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10097] = 13,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(748), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10146] = 13,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(748), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10195] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_block,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10248] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(67), 1,
      sym_block,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10301] = 12,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10348] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(110), 1,
      sym_block,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10401] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10452] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(368), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(370), 17,
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
      anon_sym_PERCENT,
  [10483] = 13,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(748), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10532] = 6,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(316), 17,
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
  [10567] = 13,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(748), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10616] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    STATE(342), 1,
      sym_block,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10669] = 13,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(748), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10718] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    STATE(384), 1,
      sym_block,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10771] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(368), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(370), 17,
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
      anon_sym_PERCENT,
  [10802] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10853] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_arguments,
    STATE(299), 1,
      sym_block,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10906] = 6,
    ACTIONS(354), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(352), 17,
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
  [10941] = 4,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(332), 19,
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
  [10972] = 13,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(748), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11021] = 7,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 14,
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
  [11058] = 9,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 10,
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
  [11099] = 11,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11144] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(504), 1,
      anon_sym_DOT_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_SLASH,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(516), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_CARET,
    STATE(114), 1,
      sym_arguments,
    STATE(164), 1,
      sym_block,
    ACTIONS(508), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(512), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(520), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(616), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(614), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11197] = 10,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(316), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11240] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(384), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(386), 17,
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
      anon_sym_PERCENT,
  [11271] = 13,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(742), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_PIPE,
    ACTIONS(746), 1,
      anon_sym_CARET,
    STATE(289), 1,
      sym_arguments,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(740), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(748), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11320] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(102), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11366] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(137), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11412] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(100), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11458] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(200), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11504] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11550] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(126), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11596] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(203), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11642] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11688] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(211), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11734] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(202), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11780] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(205), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11826] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(199), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11872] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(94), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11918] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(99), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11964] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(98), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12010] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(97), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12056] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(96), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12102] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(101), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12148] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(95), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12194] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(139), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12240] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(128), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12286] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(145), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12332] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(134), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12378] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(53), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12424] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(144), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12470] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(143), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12516] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12562] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      sym_integer_literal,
    ACTIONS(37), 1,
      aux_sym_string_literal_token1,
    ACTIONS(766), 1,
      anon_sym_DASH,
    STATE(142), 1,
      sym__expression,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(35), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(196), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12608] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12654] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(223), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12700] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(42), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12746] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(219), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12792] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12838] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12884] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(212), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12930] = 3,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(328), 19,
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
  [12958] = 3,
    ACTIONS(358), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(356), 19,
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
  [12986] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(776), 1,
      sym_integer_literal,
    ACTIONS(778), 1,
      sym_float_literal,
    STATE(100), 1,
      sym__expression,
    ACTIONS(63), 2,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13034] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(226), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13080] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(156), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13126] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(49), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13172] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(48), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13218] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13264] = 3,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(368), 19,
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
  [13292] = 3,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(372), 19,
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
  [13320] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(217), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13366] = 3,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(278), 19,
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
  [13394] = 3,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(384), 19,
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
  [13422] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13468] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(45), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13514] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(179), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13560] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(44), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13606] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13652] = 3,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(282), 19,
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
  [13680] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(218), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13726] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(220), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13772] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(221), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13818] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(222), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13864] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(224), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13910] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(204), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13956] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(198), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14002] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(209), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14048] = 3,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(396), 19,
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
  [14076] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(50), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14122] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_for,
    ACTIONS(49), 1,
      anon_sym_DOT_DOT,
    ACTIONS(65), 1,
      aux_sym_string_literal_token1,
    ACTIONS(760), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_DASH,
    ACTIONS(764), 1,
      sym_integer_literal,
    STATE(213), 1,
      sym__expression,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(63), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(103), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14168] = 3,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(286), 19,
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
  [14196] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(178), 1,
      anon_sym_for,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT,
    ACTIONS(194), 1,
      sym_integer_literal,
    ACTIONS(198), 1,
      aux_sym_string_literal_token1,
    ACTIONS(774), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(202), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(63), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14242] = 3,
    ACTIONS(390), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(388), 19,
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
  [14270] = 3,
    ACTIONS(378), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(376), 19,
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
  [14298] = 3,
    ACTIONS(382), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(380), 19,
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
  [14326] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(392), 19,
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
  [14354] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(694), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_for,
    ACTIONS(702), 1,
      sym_integer_literal,
    ACTIONS(768), 1,
      anon_sym_DOT_DOT,
    ACTIONS(770), 1,
      anon_sym_DASH,
    ACTIONS(772), 1,
      aux_sym_string_literal_token1,
    STATE(210), 1,
      sym__expression,
    ACTIONS(706), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(270), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(708), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(274), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14400] = 3,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(400), 19,
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
  [14428] = 3,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(404), 19,
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
  [14456] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    ACTIONS(784), 1,
      anon_sym_EQ,
    STATE(329), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(780), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14475] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_BSLASHn,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(434), 1,
      sym__field_identifier,
    STATE(310), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14498] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [14510] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(434), 1,
      sym__field_identifier,
    ACTIONS(790), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(310), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14528] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(796), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(308), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14548] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [14560] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(372), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14580] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14600] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(434), 1,
      sym__field_identifier,
    ACTIONS(802), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(304), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14618] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      sym_identifier,
    STATE(434), 1,
      sym__field_identifier,
    ACTIONS(807), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(310), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14636] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [14648] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(307), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(811), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(314), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14683] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      sym_identifier,
    ACTIONS(813), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14698] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      sym_identifier,
    ACTIONS(818), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14713] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
    ACTIONS(820), 2,
      anon_sym_BSLASHn,
      sym_identifier,
  [14730] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(546), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14742] = 3,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(526), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14754] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(829), 2,
      sym__string_content,
      sym_escape_sequence,
  [14768] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(833), 2,
      sym__string_content,
      sym_escape_sequence,
  [14782] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(829), 2,
      sym__string_content,
      sym_escape_sequence,
  [14796] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(829), 2,
      sym__string_content,
      sym_escape_sequence,
  [14810] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(841), 2,
      sym__string_content,
      sym_escape_sequence,
  [14824] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14834] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_LF,
    ACTIONS(558), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14846] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(845), 1,
      sym_identifier,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    STATE(393), 1,
      sym_enum_variant_list,
    STATE(400), 1,
      sym_enum_integral_type,
  [14862] = 5,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(849), 1,
      anon_sym_COLON,
    ACTIONS(851), 1,
      anon_sym_EQ,
  [14878] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(853), 1,
      anon_sym_if,
    STATE(166), 2,
      sym_block,
      sym_if_statement,
  [14892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(857), 1,
      anon_sym_EQ,
    ACTIONS(855), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14904] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14914] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(861), 1,
      anon_sym_if,
    STATE(389), 2,
      sym_block,
      sym_if_statement,
  [14928] = 5,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_LF,
    ACTIONS(863), 1,
      anon_sym_COLON,
    ACTIONS(865), 1,
      anon_sym_EQ,
  [14944] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(829), 2,
      sym__string_content,
      sym_escape_sequence,
  [14958] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14968] = 3,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(522), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14980] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      sym_identifier,
    ACTIONS(873), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_enum_variant_list,
    STATE(402), 1,
      sym_enum_integral_type,
  [14996] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [15006] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    STATE(333), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(879), 2,
      sym__string_content,
      sym_escape_sequence,
  [15020] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15030] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    STATE(321), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(886), 2,
      sym__string_content,
      sym_escape_sequence,
  [15044] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACE,
    ACTIONS(888), 1,
      sym_identifier,
    STATE(181), 1,
      sym_enum_variant_list,
    STATE(395), 1,
      sym_enum_integral_type,
  [15060] = 5,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(890), 1,
      anon_sym_else,
    STATE(408), 1,
      sym_else_clause,
  [15076] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(892), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15086] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(896), 2,
      sym__string_content,
      sym_escape_sequence,
  [15100] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(899), 1,
      sym_identifier,
    STATE(403), 1,
      sym_enum_variant_list,
    STATE(404), 1,
      sym_enum_integral_type,
  [15116] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15129] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15142] = 3,
    ACTIONS(486), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(484), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15153] = 3,
    ACTIONS(494), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(492), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15164] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15177] = 4,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(908), 1,
      anon_sym_EQ,
  [15190] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15203] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(382), 1,
      sym_enum_variant_list,
  [15216] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_parameters_repeat1,
  [15229] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15242] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_DASH_GT,
    STATE(127), 1,
      sym_block,
  [15255] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15268] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    ACTIONS(927), 1,
      anon_sym_BSLASHn,
    STATE(358), 1,
      aux_sym_enum_variant_list_repeat2,
  [15281] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15294] = 3,
    ACTIONS(478), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15305] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(407), 1,
      sym_enum_variant_list,
  [15318] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      aux_sym_enum_variant_list_repeat2,
  [15331] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15344] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_enum_variant_list,
  [15357] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_BSLASHn,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_field_declaration_list_repeat2,
  [15370] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15383] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(405), 1,
      sym_field_declaration,
    STATE(434), 1,
      sym__field_identifier,
  [15396] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      aux_sym_enum_variant_list_repeat2,
  [15409] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15422] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACE,
    ACTIONS(915), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_enum_variant_list,
  [15435] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_parameters_repeat1,
  [15448] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(939), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      aux_sym_enum_variant_list_repeat2,
  [15461] = 4,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_LF,
    ACTIONS(941), 1,
      anon_sym_EQ,
  [15474] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(502), 1,
      anon_sym_BSLASHn,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_field_declaration_list_repeat2,
  [15487] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_BSLASHn,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      aux_sym_enum_variant_list_repeat2,
  [15500] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    ACTIONS(947), 1,
      anon_sym_BSLASHn,
    STATE(376), 1,
      aux_sym_field_declaration_list_repeat2,
  [15513] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_parameters_repeat1,
  [15526] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
  [15539] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(660), 1,
      anon_sym_SEMI,
    ACTIONS(662), 1,
      anon_sym_LF,
  [15549] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_LF,
  [15559] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15567] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_LF,
  [15577] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15585] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(664), 1,
      anon_sym_SEMI,
    ACTIONS(666), 1,
      anon_sym_LF,
  [15595] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
    ACTIONS(686), 1,
      anon_sym_LF,
  [15605] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(952), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15613] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15621] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15629] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(656), 1,
      anon_sym_SEMI,
    ACTIONS(658), 1,
      anon_sym_LF,
  [15639] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_block,
  [15649] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(956), 2,
      sym_float_literal,
      sym_integer_literal,
  [15657] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(958), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15665] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_SEMI,
    ACTIONS(692), 1,
      anon_sym_LF,
  [15675] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(960), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_enum_variant_list,
  [15693] = 3,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
  [15703] = 3,
    ACTIONS(364), 1,
      anon_sym_SEMI,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(530), 1,
      sym_line_comment,
  [15713] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(636), 1,
      anon_sym_SEMI,
    ACTIONS(638), 1,
      anon_sym_LF,
  [15723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(962), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_parameters,
  [15733] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    STATE(410), 1,
      sym_enum_variant_list,
  [15743] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(652), 1,
      anon_sym_LF,
  [15753] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_enum_variant_list,
  [15763] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(714), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      anon_sym_LF,
  [15773] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACE,
    STATE(398), 1,
      sym_enum_variant_list,
  [15783] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15791] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(964), 2,
      sym_float_literal,
      sym_integer_literal,
  [15799] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      anon_sym_SEMI,
    ACTIONS(648), 1,
      anon_sym_LF,
  [15809] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(682), 1,
      anon_sym_LF,
  [15819] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      anon_sym_SEMI,
  [15829] = 3,
    ACTIONS(530), 1,
      sym_line_comment,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    ACTIONS(672), 1,
      anon_sym_LF,
  [15839] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15847] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(548), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15855] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15863] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(966), 2,
      sym_float_literal,
      sym_integer_literal,
  [15871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15879] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [15886] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(968), 1,
      anon_sym_RBRACK,
  [15893] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
  [15900] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(972), 1,
      anon_sym_enum,
  [15907] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 1,
      anon_sym_in,
  [15914] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
  [15921] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 1,
      anon_sym_COLON,
  [15928] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(978), 1,
      anon_sym_enum,
  [15935] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [15942] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(980), 1,
      anon_sym_COLON,
  [15949] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      ts_builtin_sym_end,
  [15956] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
  [15963] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_COLON,
  [15970] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_COLON,
  [15977] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      sym_identifier,
  [15984] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_COLON,
  [15991] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 1,
      anon_sym_RBRACK,
  [15998] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      anon_sym_LBRACE,
  [16005] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 1,
      anon_sym_COLON,
  [16012] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 1,
      anon_sym_in,
  [16019] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_enum,
  [16026] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      anon_sym_in,
  [16033] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_in,
  [16040] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1008), 1,
      anon_sym_RBRACK,
  [16047] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
  [16054] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 447,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 621,
  [SMALL_STATE(10)] = 708,
  [SMALL_STATE(11)] = 795,
  [SMALL_STATE(12)] = 882,
  [SMALL_STATE(13)] = 983,
  [SMALL_STATE(14)] = 1070,
  [SMALL_STATE(15)] = 1157,
  [SMALL_STATE(16)] = 1244,
  [SMALL_STATE(17)] = 1331,
  [SMALL_STATE(18)] = 1418,
  [SMALL_STATE(19)] = 1505,
  [SMALL_STATE(20)] = 1606,
  [SMALL_STATE(21)] = 1690,
  [SMALL_STATE(22)] = 1774,
  [SMALL_STATE(23)] = 1858,
  [SMALL_STATE(24)] = 1942,
  [SMALL_STATE(25)] = 2026,
  [SMALL_STATE(26)] = 2110,
  [SMALL_STATE(27)] = 2204,
  [SMALL_STATE(28)] = 2298,
  [SMALL_STATE(29)] = 2392,
  [SMALL_STATE(30)] = 2486,
  [SMALL_STATE(31)] = 2580,
  [SMALL_STATE(32)] = 2674,
  [SMALL_STATE(33)] = 2768,
  [SMALL_STATE(34)] = 2862,
  [SMALL_STATE(35)] = 2956,
  [SMALL_STATE(36)] = 3050,
  [SMALL_STATE(37)] = 3144,
  [SMALL_STATE(38)] = 3192,
  [SMALL_STATE(39)] = 3240,
  [SMALL_STATE(40)] = 3288,
  [SMALL_STATE(41)] = 3359,
  [SMALL_STATE(42)] = 3416,
  [SMALL_STATE(43)] = 3487,
  [SMALL_STATE(44)] = 3558,
  [SMALL_STATE(45)] = 3619,
  [SMALL_STATE(46)] = 3684,
  [SMALL_STATE(47)] = 3751,
  [SMALL_STATE(48)] = 3798,
  [SMALL_STATE(49)] = 3857,
  [SMALL_STATE(50)] = 3910,
  [SMALL_STATE(51)] = 3959,
  [SMALL_STATE(52)] = 4030,
  [SMALL_STATE(53)] = 4105,
  [SMALL_STATE(54)] = 4176,
  [SMALL_STATE(55)] = 4239,
  [SMALL_STATE(56)] = 4292,
  [SMALL_STATE(57)] = 4339,
  [SMALL_STATE(58)] = 4410,
  [SMALL_STATE(59)] = 4481,
  [SMALL_STATE(60)] = 4527,
  [SMALL_STATE(61)] = 4573,
  [SMALL_STATE(62)] = 4619,
  [SMALL_STATE(63)] = 4665,
  [SMALL_STATE(64)] = 4711,
  [SMALL_STATE(65)] = 4757,
  [SMALL_STATE(66)] = 4803,
  [SMALL_STATE(67)] = 4849,
  [SMALL_STATE(68)] = 4895,
  [SMALL_STATE(69)] = 4941,
  [SMALL_STATE(70)] = 5010,
  [SMALL_STATE(71)] = 5075,
  [SMALL_STATE(72)] = 5137,
  [SMALL_STATE(73)] = 5199,
  [SMALL_STATE(74)] = 5258,
  [SMALL_STATE(75)] = 5314,
  [SMALL_STATE(76)] = 5370,
  [SMALL_STATE(77)] = 5423,
  [SMALL_STATE(78)] = 5476,
  [SMALL_STATE(79)] = 5537,
  [SMALL_STATE(80)] = 5590,
  [SMALL_STATE(81)] = 5643,
  [SMALL_STATE(82)] = 5696,
  [SMALL_STATE(83)] = 5749,
  [SMALL_STATE(84)] = 5802,
  [SMALL_STATE(85)] = 5855,
  [SMALL_STATE(86)] = 5893,
  [SMALL_STATE(87)] = 5931,
  [SMALL_STATE(88)] = 5969,
  [SMALL_STATE(89)] = 6007,
  [SMALL_STATE(90)] = 6045,
  [SMALL_STATE(91)] = 6079,
  [SMALL_STATE(92)] = 6113,
  [SMALL_STATE(93)] = 6147,
  [SMALL_STATE(94)] = 6192,
  [SMALL_STATE(95)] = 6235,
  [SMALL_STATE(96)] = 6274,
  [SMALL_STATE(97)] = 6327,
  [SMALL_STATE(98)] = 6376,
  [SMALL_STATE(99)] = 6427,
  [SMALL_STATE(100)] = 6474,
  [SMALL_STATE(101)] = 6513,
  [SMALL_STATE(102)] = 6558,
  [SMALL_STATE(103)] = 6593,
  [SMALL_STATE(104)] = 6625,
  [SMALL_STATE(105)] = 6657,
  [SMALL_STATE(106)] = 6689,
  [SMALL_STATE(107)] = 6721,
  [SMALL_STATE(108)] = 6753,
  [SMALL_STATE(109)] = 6785,
  [SMALL_STATE(110)] = 6817,
  [SMALL_STATE(111)] = 6853,
  [SMALL_STATE(112)] = 6889,
  [SMALL_STATE(113)] = 6921,
  [SMALL_STATE(114)] = 6953,
  [SMALL_STATE(115)] = 6985,
  [SMALL_STATE(116)] = 7017,
  [SMALL_STATE(117)] = 7049,
  [SMALL_STATE(118)] = 7081,
  [SMALL_STATE(119)] = 7117,
  [SMALL_STATE(120)] = 7149,
  [SMALL_STATE(121)] = 7181,
  [SMALL_STATE(122)] = 7213,
  [SMALL_STATE(123)] = 7245,
  [SMALL_STATE(124)] = 7277,
  [SMALL_STATE(125)] = 7309,
  [SMALL_STATE(126)] = 7342,
  [SMALL_STATE(127)] = 7379,
  [SMALL_STATE(128)] = 7410,
  [SMALL_STATE(129)] = 7449,
  [SMALL_STATE(130)] = 7480,
  [SMALL_STATE(131)] = 7535,
  [SMALL_STATE(132)] = 7568,
  [SMALL_STATE(133)] = 7599,
  [SMALL_STATE(134)] = 7630,
  [SMALL_STATE(135)] = 7677,
  [SMALL_STATE(136)] = 7708,
  [SMALL_STATE(137)] = 7739,
  [SMALL_STATE(138)] = 7784,
  [SMALL_STATE(139)] = 7815,
  [SMALL_STATE(140)] = 7848,
  [SMALL_STATE(141)] = 7879,
  [SMALL_STATE(142)] = 7910,
  [SMALL_STATE(143)] = 7947,
  [SMALL_STATE(144)] = 7988,
  [SMALL_STATE(145)] = 8037,
  [SMALL_STATE(146)] = 8080,
  [SMALL_STATE(147)] = 8111,
  [SMALL_STATE(148)] = 8141,
  [SMALL_STATE(149)] = 8171,
  [SMALL_STATE(150)] = 8201,
  [SMALL_STATE(151)] = 8257,
  [SMALL_STATE(152)] = 8293,
  [SMALL_STATE(153)] = 8329,
  [SMALL_STATE(154)] = 8359,
  [SMALL_STATE(155)] = 8389,
  [SMALL_STATE(156)] = 8425,
  [SMALL_STATE(157)] = 8477,
  [SMALL_STATE(158)] = 8513,
  [SMALL_STATE(159)] = 8569,
  [SMALL_STATE(160)] = 8599,
  [SMALL_STATE(161)] = 8635,
  [SMALL_STATE(162)] = 8665,
  [SMALL_STATE(163)] = 8695,
  [SMALL_STATE(164)] = 8731,
  [SMALL_STATE(165)] = 8761,
  [SMALL_STATE(166)] = 8817,
  [SMALL_STATE(167)] = 8847,
  [SMALL_STATE(168)] = 8877,
  [SMALL_STATE(169)] = 8907,
  [SMALL_STATE(170)] = 8943,
  [SMALL_STATE(171)] = 8973,
  [SMALL_STATE(172)] = 9029,
  [SMALL_STATE(173)] = 9059,
  [SMALL_STATE(174)] = 9089,
  [SMALL_STATE(175)] = 9125,
  [SMALL_STATE(176)] = 9181,
  [SMALL_STATE(177)] = 9211,
  [SMALL_STATE(178)] = 9241,
  [SMALL_STATE(179)] = 9271,
  [SMALL_STATE(180)] = 9323,
  [SMALL_STATE(181)] = 9359,
  [SMALL_STATE(182)] = 9389,
  [SMALL_STATE(183)] = 9425,
  [SMALL_STATE(184)] = 9477,
  [SMALL_STATE(185)] = 9507,
  [SMALL_STATE(186)] = 9537,
  [SMALL_STATE(187)] = 9573,
  [SMALL_STATE(188)] = 9609,
  [SMALL_STATE(189)] = 9665,
  [SMALL_STATE(190)] = 9695,
  [SMALL_STATE(191)] = 9731,
  [SMALL_STATE(192)] = 9787,
  [SMALL_STATE(193)] = 9817,
  [SMALL_STATE(194)] = 9853,
  [SMALL_STATE(195)] = 9883,
  [SMALL_STATE(196)] = 9919,
  [SMALL_STATE(197)] = 9949,
  [SMALL_STATE(198)] = 10005,
  [SMALL_STATE(199)] = 10044,
  [SMALL_STATE(200)] = 10097,
  [SMALL_STATE(201)] = 10146,
  [SMALL_STATE(202)] = 10195,
  [SMALL_STATE(203)] = 10248,
  [SMALL_STATE(204)] = 10301,
  [SMALL_STATE(205)] = 10348,
  [SMALL_STATE(206)] = 10401,
  [SMALL_STATE(207)] = 10452,
  [SMALL_STATE(208)] = 10483,
  [SMALL_STATE(209)] = 10532,
  [SMALL_STATE(210)] = 10567,
  [SMALL_STATE(211)] = 10616,
  [SMALL_STATE(212)] = 10669,
  [SMALL_STATE(213)] = 10718,
  [SMALL_STATE(214)] = 10771,
  [SMALL_STATE(215)] = 10802,
  [SMALL_STATE(216)] = 10853,
  [SMALL_STATE(217)] = 10906,
  [SMALL_STATE(218)] = 10941,
  [SMALL_STATE(219)] = 10972,
  [SMALL_STATE(220)] = 11021,
  [SMALL_STATE(221)] = 11058,
  [SMALL_STATE(222)] = 11099,
  [SMALL_STATE(223)] = 11144,
  [SMALL_STATE(224)] = 11197,
  [SMALL_STATE(225)] = 11240,
  [SMALL_STATE(226)] = 11271,
  [SMALL_STATE(227)] = 11320,
  [SMALL_STATE(228)] = 11366,
  [SMALL_STATE(229)] = 11412,
  [SMALL_STATE(230)] = 11458,
  [SMALL_STATE(231)] = 11504,
  [SMALL_STATE(232)] = 11550,
  [SMALL_STATE(233)] = 11596,
  [SMALL_STATE(234)] = 11642,
  [SMALL_STATE(235)] = 11688,
  [SMALL_STATE(236)] = 11734,
  [SMALL_STATE(237)] = 11780,
  [SMALL_STATE(238)] = 11826,
  [SMALL_STATE(239)] = 11872,
  [SMALL_STATE(240)] = 11918,
  [SMALL_STATE(241)] = 11964,
  [SMALL_STATE(242)] = 12010,
  [SMALL_STATE(243)] = 12056,
  [SMALL_STATE(244)] = 12102,
  [SMALL_STATE(245)] = 12148,
  [SMALL_STATE(246)] = 12194,
  [SMALL_STATE(247)] = 12240,
  [SMALL_STATE(248)] = 12286,
  [SMALL_STATE(249)] = 12332,
  [SMALL_STATE(250)] = 12378,
  [SMALL_STATE(251)] = 12424,
  [SMALL_STATE(252)] = 12470,
  [SMALL_STATE(253)] = 12516,
  [SMALL_STATE(254)] = 12562,
  [SMALL_STATE(255)] = 12608,
  [SMALL_STATE(256)] = 12654,
  [SMALL_STATE(257)] = 12700,
  [SMALL_STATE(258)] = 12746,
  [SMALL_STATE(259)] = 12792,
  [SMALL_STATE(260)] = 12838,
  [SMALL_STATE(261)] = 12884,
  [SMALL_STATE(262)] = 12930,
  [SMALL_STATE(263)] = 12958,
  [SMALL_STATE(264)] = 12986,
  [SMALL_STATE(265)] = 13034,
  [SMALL_STATE(266)] = 13080,
  [SMALL_STATE(267)] = 13126,
  [SMALL_STATE(268)] = 13172,
  [SMALL_STATE(269)] = 13218,
  [SMALL_STATE(270)] = 13264,
  [SMALL_STATE(271)] = 13292,
  [SMALL_STATE(272)] = 13320,
  [SMALL_STATE(273)] = 13366,
  [SMALL_STATE(274)] = 13394,
  [SMALL_STATE(275)] = 13422,
  [SMALL_STATE(276)] = 13468,
  [SMALL_STATE(277)] = 13514,
  [SMALL_STATE(278)] = 13560,
  [SMALL_STATE(279)] = 13606,
  [SMALL_STATE(280)] = 13652,
  [SMALL_STATE(281)] = 13680,
  [SMALL_STATE(282)] = 13726,
  [SMALL_STATE(283)] = 13772,
  [SMALL_STATE(284)] = 13818,
  [SMALL_STATE(285)] = 13864,
  [SMALL_STATE(286)] = 13910,
  [SMALL_STATE(287)] = 13956,
  [SMALL_STATE(288)] = 14002,
  [SMALL_STATE(289)] = 14048,
  [SMALL_STATE(290)] = 14076,
  [SMALL_STATE(291)] = 14122,
  [SMALL_STATE(292)] = 14168,
  [SMALL_STATE(293)] = 14196,
  [SMALL_STATE(294)] = 14242,
  [SMALL_STATE(295)] = 14270,
  [SMALL_STATE(296)] = 14298,
  [SMALL_STATE(297)] = 14326,
  [SMALL_STATE(298)] = 14354,
  [SMALL_STATE(299)] = 14400,
  [SMALL_STATE(300)] = 14428,
  [SMALL_STATE(301)] = 14456,
  [SMALL_STATE(302)] = 14475,
  [SMALL_STATE(303)] = 14498,
  [SMALL_STATE(304)] = 14510,
  [SMALL_STATE(305)] = 14528,
  [SMALL_STATE(306)] = 14548,
  [SMALL_STATE(307)] = 14560,
  [SMALL_STATE(308)] = 14580,
  [SMALL_STATE(309)] = 14600,
  [SMALL_STATE(310)] = 14618,
  [SMALL_STATE(311)] = 14636,
  [SMALL_STATE(312)] = 14648,
  [SMALL_STATE(313)] = 14668,
  [SMALL_STATE(314)] = 14683,
  [SMALL_STATE(315)] = 14698,
  [SMALL_STATE(316)] = 14713,
  [SMALL_STATE(317)] = 14730,
  [SMALL_STATE(318)] = 14742,
  [SMALL_STATE(319)] = 14754,
  [SMALL_STATE(320)] = 14768,
  [SMALL_STATE(321)] = 14782,
  [SMALL_STATE(322)] = 14796,
  [SMALL_STATE(323)] = 14810,
  [SMALL_STATE(324)] = 14824,
  [SMALL_STATE(325)] = 14834,
  [SMALL_STATE(326)] = 14846,
  [SMALL_STATE(327)] = 14862,
  [SMALL_STATE(328)] = 14878,
  [SMALL_STATE(329)] = 14892,
  [SMALL_STATE(330)] = 14904,
  [SMALL_STATE(331)] = 14914,
  [SMALL_STATE(332)] = 14928,
  [SMALL_STATE(333)] = 14944,
  [SMALL_STATE(334)] = 14958,
  [SMALL_STATE(335)] = 14968,
  [SMALL_STATE(336)] = 14980,
  [SMALL_STATE(337)] = 14996,
  [SMALL_STATE(338)] = 15006,
  [SMALL_STATE(339)] = 15020,
  [SMALL_STATE(340)] = 15030,
  [SMALL_STATE(341)] = 15044,
  [SMALL_STATE(342)] = 15060,
  [SMALL_STATE(343)] = 15076,
  [SMALL_STATE(344)] = 15086,
  [SMALL_STATE(345)] = 15100,
  [SMALL_STATE(346)] = 15116,
  [SMALL_STATE(347)] = 15129,
  [SMALL_STATE(348)] = 15142,
  [SMALL_STATE(349)] = 15153,
  [SMALL_STATE(350)] = 15164,
  [SMALL_STATE(351)] = 15177,
  [SMALL_STATE(352)] = 15190,
  [SMALL_STATE(353)] = 15203,
  [SMALL_STATE(354)] = 15216,
  [SMALL_STATE(355)] = 15229,
  [SMALL_STATE(356)] = 15242,
  [SMALL_STATE(357)] = 15255,
  [SMALL_STATE(358)] = 15268,
  [SMALL_STATE(359)] = 15281,
  [SMALL_STATE(360)] = 15294,
  [SMALL_STATE(361)] = 15305,
  [SMALL_STATE(362)] = 15318,
  [SMALL_STATE(363)] = 15331,
  [SMALL_STATE(364)] = 15344,
  [SMALL_STATE(365)] = 15357,
  [SMALL_STATE(366)] = 15370,
  [SMALL_STATE(367)] = 15383,
  [SMALL_STATE(368)] = 15396,
  [SMALL_STATE(369)] = 15409,
  [SMALL_STATE(370)] = 15422,
  [SMALL_STATE(371)] = 15435,
  [SMALL_STATE(372)] = 15448,
  [SMALL_STATE(373)] = 15461,
  [SMALL_STATE(374)] = 15474,
  [SMALL_STATE(375)] = 15487,
  [SMALL_STATE(376)] = 15500,
  [SMALL_STATE(377)] = 15513,
  [SMALL_STATE(378)] = 15526,
  [SMALL_STATE(379)] = 15539,
  [SMALL_STATE(380)] = 15549,
  [SMALL_STATE(381)] = 15559,
  [SMALL_STATE(382)] = 15567,
  [SMALL_STATE(383)] = 15577,
  [SMALL_STATE(384)] = 15585,
  [SMALL_STATE(385)] = 15595,
  [SMALL_STATE(386)] = 15605,
  [SMALL_STATE(387)] = 15613,
  [SMALL_STATE(388)] = 15621,
  [SMALL_STATE(389)] = 15629,
  [SMALL_STATE(390)] = 15639,
  [SMALL_STATE(391)] = 15649,
  [SMALL_STATE(392)] = 15657,
  [SMALL_STATE(393)] = 15665,
  [SMALL_STATE(394)] = 15675,
  [SMALL_STATE(395)] = 15683,
  [SMALL_STATE(396)] = 15693,
  [SMALL_STATE(397)] = 15703,
  [SMALL_STATE(398)] = 15713,
  [SMALL_STATE(399)] = 15723,
  [SMALL_STATE(400)] = 15733,
  [SMALL_STATE(401)] = 15743,
  [SMALL_STATE(402)] = 15753,
  [SMALL_STATE(403)] = 15763,
  [SMALL_STATE(404)] = 15773,
  [SMALL_STATE(405)] = 15783,
  [SMALL_STATE(406)] = 15791,
  [SMALL_STATE(407)] = 15799,
  [SMALL_STATE(408)] = 15809,
  [SMALL_STATE(409)] = 15819,
  [SMALL_STATE(410)] = 15829,
  [SMALL_STATE(411)] = 15839,
  [SMALL_STATE(412)] = 15847,
  [SMALL_STATE(413)] = 15855,
  [SMALL_STATE(414)] = 15863,
  [SMALL_STATE(415)] = 15871,
  [SMALL_STATE(416)] = 15879,
  [SMALL_STATE(417)] = 15886,
  [SMALL_STATE(418)] = 15893,
  [SMALL_STATE(419)] = 15900,
  [SMALL_STATE(420)] = 15907,
  [SMALL_STATE(421)] = 15914,
  [SMALL_STATE(422)] = 15921,
  [SMALL_STATE(423)] = 15928,
  [SMALL_STATE(424)] = 15935,
  [SMALL_STATE(425)] = 15942,
  [SMALL_STATE(426)] = 15949,
  [SMALL_STATE(427)] = 15956,
  [SMALL_STATE(428)] = 15963,
  [SMALL_STATE(429)] = 15970,
  [SMALL_STATE(430)] = 15977,
  [SMALL_STATE(431)] = 15984,
  [SMALL_STATE(432)] = 15991,
  [SMALL_STATE(433)] = 15998,
  [SMALL_STATE(434)] = 16005,
  [SMALL_STATE(435)] = 16012,
  [SMALL_STATE(436)] = 16019,
  [SMALL_STATE(437)] = 16026,
  [SMALL_STATE(438)] = 16033,
  [SMALL_STATE(439)] = 16040,
  [SMALL_STATE(440)] = 16047,
  [SMALL_STATE(441)] = 16054,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(230),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(436),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(63),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(238),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(260),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(259),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(194),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(436),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(336),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(293),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(320),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(237),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 28),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 28),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 15),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 15),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 23),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 23),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 31),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 31),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 21),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 21),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(412),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(415),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(83),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(414),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(411),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(338),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(411),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(90),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 27),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 27),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 13),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 13),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 26),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 26),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 22),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 22),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 30),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 30),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 25),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 20),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 20),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 18),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 18),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 29),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 12),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 12),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 7),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(422),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(301),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1), SHIFT(334),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 16),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 32),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_declaration_list, 2), REDUCE(sym_ordered_field_declaration_list, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(344),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(23),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2), SHIFT_REPEAT(367),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(313),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(309),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 24),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [982] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifier, 1),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
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
