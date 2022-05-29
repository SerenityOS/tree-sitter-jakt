#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 442
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 2
#define TOKEN_COUNT 74
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
  aux_sym_string_literal_token1 = 61,
  anon_sym_DQUOTE = 62,
  sym_char_literal = 63,
  sym_escape_sequence = 64,
  anon_sym_function = 65,
  anon_sym_DASH_GT = 66,
  anon_sym_if = 67,
  anon_sym_else = 68,
  anon_sym_true = 69,
  anon_sym_false = 70,
  sym_line_comment = 71,
  sym__string_content = 72,
  sym_float_literal = 73,
  sym_source_file = 74,
  sym__expression = 75,
  sym_while_statement = 76,
  sym_increment_statement = 77,
  sym_decrement_statement = 78,
  sym_continue_statement = 79,
  sym_for_expression = 80,
  sym_call_expression = 81,
  sym_range_expression = 82,
  sym_arguments = 83,
  sym__top_level_declaration = 84,
  sym__type = 85,
  sym_array_type = 86,
  sym_let_declaration = 87,
  sym_reference_modifier = 88,
  sym_enum_declaration = 89,
  sym_enum_integral_type = 90,
  sym_enum_variant_list = 91,
  sym_enum_variant = 92,
  sym_field_declaration_list = 93,
  sym_field_declaration = 94,
  sym__field_identifier = 95,
  sym_ordered_field_declaration_list = 96,
  sym_unary_expression = 97,
  sym_return_statement = 98,
  sym_binary_expression = 99,
  sym__literal = 100,
  sym__pattern = 101,
  sym__literal_pattern = 102,
  sym_negative_literal = 103,
  sym_string_literal = 104,
  sym_function_declaration = 105,
  sym_parameters = 106,
  sym_parameter = 107,
  sym_block = 108,
  sym_if_statement = 109,
  sym_else_clause = 110,
  sym_boolean_literal = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_arguments_repeat1 = 113,
  aux_sym_arguments_repeat2 = 114,
  aux_sym_enum_variant_list_repeat1 = 115,
  aux_sym_enum_variant_list_repeat2 = 116,
  aux_sym_field_declaration_list_repeat1 = 117,
  aux_sym_field_declaration_list_repeat2 = 118,
  aux_sym_ordered_field_declaration_list_repeat1 = 119,
  aux_sym_string_literal_repeat1 = 120,
  aux_sym_parameters_repeat1 = 121,
  aux_sym_block_repeat1 = 122,
  alias_sym_field_identifier = 123,
  alias_sym_type_identifier = 124,
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
  [1] = {.lex_state = 52, .external_lex_state = 2},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 6, .external_lex_state = 2},
  [5] = {.lex_state = 6, .external_lex_state = 2},
  [6] = {.lex_state = 6, .external_lex_state = 2},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 52, .external_lex_state = 2},
  [9] = {.lex_state = 6, .external_lex_state = 2},
  [10] = {.lex_state = 6, .external_lex_state = 2},
  [11] = {.lex_state = 6, .external_lex_state = 2},
  [12] = {.lex_state = 6, .external_lex_state = 2},
  [13] = {.lex_state = 6, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 6, .external_lex_state = 2},
  [18] = {.lex_state = 52, .external_lex_state = 2},
  [19] = {.lex_state = 6, .external_lex_state = 2},
  [20] = {.lex_state = 6, .external_lex_state = 2},
  [21] = {.lex_state = 6, .external_lex_state = 2},
  [22] = {.lex_state = 6, .external_lex_state = 2},
  [23] = {.lex_state = 6, .external_lex_state = 2},
  [24] = {.lex_state = 6, .external_lex_state = 2},
  [25] = {.lex_state = 6, .external_lex_state = 2},
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
  [65] = {.lex_state = 7, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 7, .external_lex_state = 2},
  [69] = {.lex_state = 6, .external_lex_state = 2},
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
  [84] = {.lex_state = 52, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 6, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
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
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 1},
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
  [121] = {.lex_state = 9, .external_lex_state = 2},
  [122] = {.lex_state = 9, .external_lex_state = 2},
  [123] = {.lex_state = 9, .external_lex_state = 2},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 9, .external_lex_state = 2},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 9, .external_lex_state = 2},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 9, .external_lex_state = 2},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 52, .external_lex_state = 2},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 9, .external_lex_state = 2},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 9, .external_lex_state = 2},
  [147] = {.lex_state = 9, .external_lex_state = 2},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 9, .external_lex_state = 2},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 52, .external_lex_state = 2},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 9, .external_lex_state = 2},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 52, .external_lex_state = 2},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 52, .external_lex_state = 2},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 52, .external_lex_state = 2},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 52, .external_lex_state = 2},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 52, .external_lex_state = 2},
  [188] = {.lex_state = 52, .external_lex_state = 2},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 52, .external_lex_state = 2},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 52, .external_lex_state = 2},
  [195] = {.lex_state = 52, .external_lex_state = 2},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 52, .external_lex_state = 2},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 52, .external_lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 52, .external_lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 52, .external_lex_state = 2},
  [209] = {.lex_state = 52, .external_lex_state = 2},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 52, .external_lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 52, .external_lex_state = 2},
  [215] = {.lex_state = 52, .external_lex_state = 2},
  [216] = {.lex_state = 52, .external_lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 52, .external_lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2, .external_lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
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
  [298] = {.lex_state = 6, .external_lex_state = 2},
  [299] = {.lex_state = 6, .external_lex_state = 2},
  [300] = {.lex_state = 6, .external_lex_state = 2},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 12},
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
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 8},
  [315] = {.lex_state = 8},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 1, .external_lex_state = 3},
  [318] = {.lex_state = 8},
  [319] = {.lex_state = 12},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 12},
  [323] = {.lex_state = 1, .external_lex_state = 3},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 5},
  [326] = {.lex_state = 5},
  [327] = {.lex_state = 8},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 12},
  [330] = {.lex_state = 8},
  [331] = {.lex_state = 12},
  [332] = {.lex_state = 1, .external_lex_state = 3},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 1, .external_lex_state = 3},
  [335] = {.lex_state = 8},
  [336] = {.lex_state = 1, .external_lex_state = 3},
  [337] = {.lex_state = 12},
  [338] = {.lex_state = 1, .external_lex_state = 3},
  [339] = {.lex_state = 1, .external_lex_state = 3},
  [340] = {.lex_state = 5},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 1, .external_lex_state = 3},
  [343] = {.lex_state = 1, .external_lex_state = 3},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 12},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 12},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 52},
  [353] = {.lex_state = 52},
  [354] = {.lex_state = 52},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 5},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 5},
  [363] = {.lex_state = 5},
  [364] = {.lex_state = 52},
  [365] = {.lex_state = 52},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 52},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 52},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 52},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 12},
  [380] = {.lex_state = 12},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0, .external_lex_state = 2},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 12},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 1},
  [402] = {.lex_state = 12},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0, .external_lex_state = 2},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 8},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 8},
  [412] = {.lex_state = 8},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 2},
  [415] = {.lex_state = 8},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 8},
  [420] = {.lex_state = 8},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 8},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 8},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 8},
  [436] = {.lex_state = 8},
  [437] = {.lex_state = 8},
  [438] = {.lex_state = 8},
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
    [sym_source_file] = STATE(426),
    [sym__expression] = STATE(136),
    [sym_while_statement] = STATE(408),
    [sym_increment_statement] = STATE(408),
    [sym_decrement_statement] = STATE(408),
    [sym_continue_statement] = STATE(408),
    [sym_for_expression] = STATE(145),
    [sym_call_expression] = STATE(145),
    [sym_range_expression] = STATE(145),
    [sym__top_level_declaration] = STATE(18),
    [sym_let_declaration] = STATE(408),
    [sym_reference_modifier] = STATE(419),
    [sym_enum_declaration] = STATE(408),
    [sym_unary_expression] = STATE(145),
    [sym_return_statement] = STATE(408),
    [sym_binary_expression] = STATE(145),
    [sym__literal] = STATE(145),
    [sym_string_literal] = STATE(171),
    [sym_function_declaration] = STATE(18),
    [sym_block] = STATE(408),
    [sym_if_statement] = STATE(408),
    [sym_boolean_literal] = STATE(171),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
    [anon_sym_DASH_DASH] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_ref] = ACTIONS(21),
    [anon_sym_enum] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(31),
    [aux_sym_string_literal_token1] = ACTIONS(33),
    [sym_char_literal] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(169), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [486] = 25,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(90), 1,
      anon_sym_DASH_DASH,
    ACTIONS(93), 1,
      anon_sym_continue,
    ACTIONS(96), 1,
      anon_sym_for,
    ACTIONS(99), 1,
      anon_sym_DOT_DOT,
    ACTIONS(102), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      anon_sym_ref,
    ACTIONS(108), 1,
      anon_sym_enum,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(117), 1,
      anon_sym_return,
    ACTIONS(123), 1,
      aux_sym_string_literal_token1,
    ACTIONS(126), 1,
      anon_sym_function,
    ACTIONS(129), 1,
      anon_sym_if,
    STATE(136), 1,
      sym__expression,
    STATE(419), 1,
      sym_reference_modifier,
    ACTIONS(132), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(120), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(8), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(408), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [581] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [660] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [739] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [818] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [897] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [976] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1055] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1134] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1213] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1292] = 25,
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
      anon_sym_ref,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(35), 1,
      anon_sym_function,
    ACTIONS(37), 1,
      anon_sym_if,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym__expression,
    STATE(419), 1,
      sym_reference_modifier,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(8), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(408), 9,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1387] = 17,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1466] = 16,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(137), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1542] = 16,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(148), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1618] = 16,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(186), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1694] = 16,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(156), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1770] = 16,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(198), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1846] = 16,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(53), 1,
      sym_mutable_specifier,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    STATE(175), 1,
      sym__expression,
    STATE(411), 1,
      sym_negative_literal,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(192), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(57), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(51), 18,
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
  [1922] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2010] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2098] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2186] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2274] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2362] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2450] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2538] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2626] = 23,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_while,
    ACTIONS(211), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(214), 1,
      anon_sym_DASH_DASH,
    ACTIONS(217), 1,
      anon_sym_continue,
    ACTIONS(220), 1,
      anon_sym_for,
    ACTIONS(223), 1,
      anon_sym_DOT_DOT,
    ACTIONS(226), 1,
      anon_sym_let,
    ACTIONS(229), 1,
      anon_sym_ref,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(243), 1,
      anon_sym_return,
    ACTIONS(249), 1,
      aux_sym_string_literal_token1,
    ACTIONS(252), 1,
      anon_sym_if,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(255), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(246), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2714] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2802] = 23,
    ACTIONS(21), 1,
      anon_sym_ref,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_while,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 1,
      anon_sym_DASH_DASH,
    ACTIONS(165), 1,
      anon_sym_continue,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(171), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_enum,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_return,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(187), 1,
      anon_sym_if,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym__expression,
    STATE(423), 1,
      sym_reference_modifier,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
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
  [2890] = 2,
    ACTIONS(262), 16,
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
  [2934] = 2,
    ACTIONS(266), 16,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(268), 23,
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
  [2978] = 2,
    ACTIONS(270), 16,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(272), 23,
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
  [3022] = 13,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(276), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(274), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3087] = 3,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(298), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(300), 22,
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
  [3132] = 2,
    ACTIONS(302), 16,
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
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(304), 22,
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
  [3175] = 5,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(306), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(308), 20,
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
  [3224] = 13,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
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
    ACTIONS(310), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3289] = 13,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
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
    ACTIONS(314), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3354] = 7,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(308), 17,
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
  [3407] = 2,
    ACTIONS(318), 16,
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
  [3450] = 5,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(322), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(324), 20,
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
  [3499] = 11,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(308), 12,
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
    ACTIONS(306), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3560] = 15,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    ACTIONS(328), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(330), 1,
      anon_sym_DASH_DASH,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(332), 6,
      sym_float_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(326), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3629] = 13,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(334), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3694] = 9,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(308), 14,
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
  [3751] = 13,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
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
    ACTIONS(338), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3816] = 13,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(344), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(342), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3881] = 10,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(308), 13,
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
  [3940] = 8,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(308), 15,
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
  [3995] = 6,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(308), 17,
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
  [4046] = 13,
    ACTIONS(278), 1,
      anon_sym_DOT_DOT,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_AMP,
    ACTIONS(286), 1,
      anon_sym_PIPE,
    ACTIONS(288), 1,
      anon_sym_CARET,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(282), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(294), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(296), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(290), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(348), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(346), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4111] = 2,
    ACTIONS(350), 15,
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
  [4153] = 2,
    ACTIONS(354), 15,
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
  [4195] = 2,
    ACTIONS(358), 15,
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
  [4237] = 2,
    ACTIONS(362), 15,
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
  [4279] = 2,
    ACTIONS(366), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(368), 22,
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
  [4321] = 2,
    ACTIONS(370), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(372), 22,
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
  [4363] = 2,
    ACTIONS(374), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(376), 22,
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
  [4405] = 2,
    ACTIONS(378), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(380), 22,
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
  [4447] = 2,
    ACTIONS(382), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(384), 22,
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
  [4489] = 2,
    ACTIONS(386), 15,
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
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(388), 22,
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
  [4531] = 13,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_for,
    ACTIONS(395), 1,
      anon_sym_DOT_DOT,
    ACTIONS(400), 1,
      sym_mutable_specifier,
    ACTIONS(403), 1,
      anon_sym_DASH,
    ACTIONS(409), 1,
      aux_sym_string_literal_token1,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(431), 1,
      sym__pattern,
    ACTIONS(412), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    ACTIONS(406), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(397), 18,
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
  [4594] = 13,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      sym_mutable_specifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(374), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [4656] = 12,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(421), 1,
      sym_mutable_specifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [4715] = 12,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(421), 1,
      sym_mutable_specifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [4774] = 11,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(421), 1,
      sym_mutable_specifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(390), 1,
      sym_parameter,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(425), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [4830] = 10,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(431), 1,
      sym_identifier,
    ACTIONS(435), 1,
      sym_mutable_specifier,
    ACTIONS(437), 1,
      anon_sym_DASH,
    STATE(321), 1,
      sym__pattern,
    STATE(324), 1,
      sym__literal_pattern,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(439), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(326), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(433), 18,
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
  [4883] = 10,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(445), 1,
      sym_mutable_specifier,
    ACTIONS(447), 1,
      anon_sym_DASH,
    STATE(123), 1,
      sym__literal_pattern,
    STATE(130), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(449), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(121), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(443), 18,
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
  [4936] = 9,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(437), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [4986] = 9,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(431), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_DASH,
    STATE(320), 1,
      sym__pattern,
    STATE(324), 1,
      sym__literal_pattern,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(439), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(326), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(433), 18,
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
  [5036] = 9,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(428), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [5086] = 9,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(435), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [5136] = 9,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(447), 1,
      anon_sym_DASH,
    STATE(123), 1,
      sym__literal_pattern,
    STATE(133), 1,
      sym__pattern,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(449), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(121), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(443), 18,
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
  [5186] = 9,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(418), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [5236] = 9,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(438), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [5286] = 9,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_DASH,
    STATE(412), 1,
      sym__literal_pattern,
    STATE(420), 1,
      sym__pattern,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(425), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(411), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(51), 18,
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
  [5336] = 12,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    STATE(53), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(453), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(451), 7,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
  [5391] = 2,
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
  [5425] = 2,
    ACTIONS(461), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(459), 23,
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
  [5459] = 2,
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
  [5493] = 2,
    ACTIONS(469), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(467), 23,
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
  [5527] = 2,
    ACTIONS(473), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(471), 23,
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
  [5561] = 2,
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
  [5592] = 2,
    ACTIONS(270), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(272), 22,
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
  [5623] = 2,
    ACTIONS(266), 4,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
    ACTIONS(268), 22,
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
  [5654] = 5,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(322), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(324), 20,
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
  [5690] = 7,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(308), 15,
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
  [5730] = 5,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(308), 20,
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
  [5766] = 3,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(300), 22,
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
  [5798] = 11,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(306), 2,
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
    ACTIONS(308), 10,
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
  [5846] = 8,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    ACTIONS(497), 1,
      anon_sym_BSLASHn,
    STATE(301), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(316), 1,
      sym_field_declaration,
    STATE(373), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(432), 1,
      sym__field_identifier,
    ACTIONS(495), 18,
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
  [5888] = 9,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(306), 2,
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
    ACTIONS(308), 12,
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
  [5932] = 10,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(306), 2,
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
    ACTIONS(308), 11,
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
  [5978] = 8,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(306), 2,
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
    ACTIONS(308), 13,
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
  [6020] = 6,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(308), 17,
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
  [6058] = 2,
    ACTIONS(374), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(376), 22,
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
  [6087] = 2,
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
  [6116] = 2,
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
  [6145] = 2,
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
  [6174] = 2,
    ACTIONS(268), 1,
      anon_sym_LF,
    ACTIONS(266), 23,
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
  [6203] = 2,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 22,
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
  [6232] = 2,
    ACTIONS(366), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(368), 22,
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
  [6261] = 2,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(270), 23,
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
  [6290] = 2,
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
  [6319] = 2,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(388), 22,
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
  [6348] = 2,
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
  [6377] = 2,
    ACTIONS(370), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(372), 22,
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
  [6406] = 2,
    ACTIONS(378), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(380), 22,
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
  [6435] = 2,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(304), 22,
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
  [6464] = 2,
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
  [6493] = 2,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(302), 22,
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
  [6521] = 6,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 16,
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
  [6557] = 5,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(306), 19,
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
  [6591] = 2,
    ACTIONS(507), 11,
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
    ACTIONS(505), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6619] = 2,
    ACTIONS(511), 11,
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
    ACTIONS(509), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6647] = 2,
    ACTIONS(515), 11,
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
    ACTIONS(513), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6675] = 7,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(517), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 14,
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
  [6713] = 11,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_AMP,
    ACTIONS(521), 1,
      anon_sym_PIPE,
    ACTIONS(523), 1,
      anon_sym_CARET,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(517), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [6759] = 2,
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
  [6787] = 2,
    ACTIONS(529), 11,
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
    ACTIONS(527), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6815] = 9,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_AMP,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(517), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 11,
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
  [6857] = 10,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_AMP,
    ACTIONS(523), 1,
      anon_sym_CARET,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(517), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 10,
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
  [6901] = 4,
    ACTIONS(535), 1,
      anon_sym_COLON,
    ACTIONS(537), 1,
      anon_sym_EQ,
    ACTIONS(533), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(531), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6933] = 5,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(322), 19,
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
  [6967] = 3,
    ACTIONS(300), 1,
      anon_sym_LF,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(298), 21,
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
  [6997] = 4,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(545), 1,
      anon_sym_EQ,
    ACTIONS(541), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(539), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7029] = 8,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(517), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 12,
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
  [7069] = 4,
    ACTIONS(551), 1,
      anon_sym_else,
    STATE(201), 1,
      sym_else_clause,
    ACTIONS(549), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(547), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7101] = 14,
    ACTIONS(499), 1,
      anon_sym_DOT_DOT,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_AMP,
    ACTIONS(521), 1,
      anon_sym_PIPE,
    ACTIONS(523), 1,
      anon_sym_CARET,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    ACTIONS(557), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(559), 1,
      anon_sym_DASH_DASH,
    STATE(179), 1,
      sym_arguments,
    ACTIONS(517), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(525), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(503), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(561), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7153] = 14,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      sym_arguments,
    STATE(366), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7204] = 2,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(370), 21,
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
  [7231] = 5,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
      sym_array_type,
    STATE(164), 1,
      sym__type,
    ACTIONS(571), 18,
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
  [7264] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(427), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [7297] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(441), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [7330] = 2,
    ACTIONS(469), 10,
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
    ACTIONS(467), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7357] = 2,
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
  [7384] = 14,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_arguments,
    STATE(350), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7435] = 2,
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
  [7462] = 2,
    ACTIONS(461), 10,
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
    ACTIONS(459), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7489] = 2,
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
    ACTIONS(455), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7516] = 14,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      sym_arguments,
    STATE(356), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7567] = 12,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(587), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7614] = 14,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_arguments,
    STATE(358), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7665] = 12,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(593), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7712] = 5,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    STATE(347), 1,
      sym__type,
    STATE(359), 1,
      sym_array_type,
    ACTIONS(597), 18,
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
  [7745] = 3,
    ACTIONS(605), 1,
      anon_sym_EQ,
    ACTIONS(603), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(601), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7774] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(421), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [7807] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(417), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [7840] = 14,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      sym_arguments,
    STATE(371), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7891] = 2,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(382), 21,
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
  [7918] = 2,
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
  [7945] = 5,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_array_type,
    STATE(87), 1,
      sym__type,
    ACTIONS(611), 18,
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
  [7978] = 5,
    ACTIONS(609), 1,
      sym_identifier,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_array_type,
    STATE(89), 1,
      sym__type,
    ACTIONS(611), 18,
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
  [8011] = 2,
    ACTIONS(79), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(615), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8038] = 5,
    ACTIONS(595), 1,
      sym_identifier,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    STATE(359), 1,
      sym_array_type,
    STATE(362), 1,
      sym__type,
    ACTIONS(597), 18,
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
  [8071] = 5,
    ACTIONS(569), 1,
      sym_identifier,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(147), 1,
      sym_array_type,
    STATE(153), 1,
      sym__type,
    ACTIONS(571), 18,
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
  [8104] = 3,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(619), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(617), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8133] = 14,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_arguments,
    STATE(378), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8184] = 2,
    ACTIONS(627), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(629), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8211] = 2,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(378), 21,
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
  [8238] = 2,
    ACTIONS(304), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(302), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8265] = 14,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_arguments,
    STATE(372), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8316] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(395), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [8349] = 2,
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
  [8376] = 2,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(386), 21,
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
  [8403] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(389), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [8436] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(327), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [8469] = 14,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      sym_arguments,
    STATE(376), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8520] = 2,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(374), 21,
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
  [8547] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(388), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [8580] = 2,
    ACTIONS(637), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(639), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8607] = 2,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(366), 21,
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
  [8634] = 2,
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
    ACTIONS(318), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8661] = 5,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(305), 1,
      sym_array_type,
    STATE(440), 1,
      sym__type,
    ACTIONS(577), 18,
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
  [8694] = 12,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(653), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8740] = 8,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 10,
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
  [8778] = 11,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8822] = 13,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    STATE(143), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8870] = 12,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(659), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8916] = 2,
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
    ACTIONS(661), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8942] = 2,
    ACTIONS(667), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(665), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8968] = 3,
    ACTIONS(529), 1,
      anon_sym_COLON,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 18,
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
  [8996] = 12,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(276), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(653), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9042] = 2,
    ACTIONS(671), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(669), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9068] = 3,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(352), 18,
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
  [9096] = 5,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(322), 17,
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
  [9128] = 2,
    ACTIONS(675), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(673), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9154] = 2,
    ACTIONS(679), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(677), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9180] = 13,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_arguments,
    STATE(229), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9228] = 3,
    ACTIONS(515), 1,
      anon_sym_COLON,
    ACTIONS(354), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(356), 18,
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
  [9256] = 12,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9302] = 13,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    STATE(344), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9350] = 13,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_block,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9398] = 2,
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
    ACTIONS(687), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9424] = 13,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    STATE(135), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9472] = 2,
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
    ACTIONS(691), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9498] = 12,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(653), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9544] = 3,
    ACTIONS(300), 1,
      anon_sym_LF,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(298), 19,
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
  [9572] = 2,
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
    ACTIONS(695), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9598] = 6,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 14,
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
  [9632] = 2,
    ACTIONS(316), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(314), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9658] = 2,
    ACTIONS(312), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(310), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9684] = 13,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_block,
    STATE(109), 1,
      sym_arguments,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9732] = 12,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(336), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(653), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9778] = 2,
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
    ACTIONS(699), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9804] = 10,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9846] = 2,
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
    ACTIONS(703), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9872] = 2,
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
    ACTIONS(707), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9898] = 2,
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
    ACTIONS(711), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9924] = 9,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9964] = 12,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(653), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10010] = 7,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(306), 12,
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
  [10046] = 12,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(653), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10092] = 5,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(306), 17,
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
  [10124] = 13,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    STATE(382), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10172] = 13,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_DOT_DOT,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_PIPE,
    ACTIONS(487), 1,
      anon_sym_CARET,
    STATE(109), 1,
      sym_arguments,
    STATE(212), 1,
      sym_block,
    ACTIONS(479), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(567), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(565), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10220] = 2,
    ACTIONS(717), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(715), 12,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10246] = 12,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(641), 1,
      anon_sym_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(647), 1,
      anon_sym_AMP,
    ACTIONS(649), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_CARET,
    STATE(234), 1,
      sym_arguments,
    ACTIONS(645), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(655), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(657), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(653), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10292] = 13,
    ACTIONS(451), 1,
      anon_sym_SEMI,
    ACTIONS(453), 1,
      anon_sym_LF,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(723), 1,
      anon_sym_DOT_DOT,
    ACTIONS(725), 1,
      anon_sym_DASH,
    ACTIONS(729), 1,
      aux_sym_string_literal_token1,
    ACTIONS(733), 1,
      sym_float_literal,
    STATE(204), 1,
      sym__expression,
    ACTIONS(727), 2,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10340] = 2,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(370), 19,
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
  [10365] = 2,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(374), 19,
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
  [10390] = 2,
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
  [10415] = 2,
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
  [10440] = 2,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(378), 19,
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
  [10465] = 2,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(382), 19,
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
  [10490] = 2,
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
  [10515] = 2,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(366), 19,
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
  [10540] = 2,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(270), 19,
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
  [10565] = 2,
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
  [10590] = 2,
    ACTIONS(268), 1,
      anon_sym_LF,
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
  [10615] = 2,
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
  [10640] = 2,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(302), 19,
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
  [10665] = 2,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(386), 19,
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
  [10690] = 2,
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
  [10715] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(96), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10755] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(134), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10795] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(94), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10835] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10875] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(45), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10915] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(93), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10955] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(44), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10995] = 11,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    ACTIONS(739), 1,
      sym_char_literal,
    STATE(93), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(745), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11037] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(97), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11077] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(220), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11117] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(218), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11157] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(225), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11197] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(151), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11237] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(211), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11277] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11317] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11357] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11397] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(102), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11437] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(101), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11477] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11517] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(99), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11557] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(131), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11597] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(49), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11637] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(210), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11677] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11717] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(196), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11757] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(199), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11797] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(200), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11837] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(202), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11877] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(223), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11917] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(193), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11957] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11997] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12037] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12077] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12117] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(185), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12157] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(222), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12197] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12237] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(190), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12277] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(205), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12317] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(207), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12357] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(183), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12397] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(213), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12437] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(217), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12477] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(184), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12517] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(219), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12557] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(221), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12597] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(48), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12637] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(120), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12677] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(132), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12717] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(119), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12757] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12797] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(124), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12837] = 10,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(721), 1,
      anon_sym_for,
    ACTIONS(747), 1,
      anon_sym_DOT_DOT,
    ACTIONS(749), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      aux_sym_string_literal_token1,
    STATE(182), 1,
      sym__expression,
    ACTIONS(731), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(241), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(733), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(236), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12877] = 10,
    ACTIONS(43), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_DOT_DOT,
    ACTIONS(59), 1,
      aux_sym_string_literal_token1,
    ACTIONS(735), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_DASH,
    STATE(149), 1,
      sym__expression,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(739), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(111), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12917] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(129), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12957] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(125), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12997] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(33), 1,
      aux_sym_string_literal_token1,
    ACTIONS(741), 1,
      anon_sym_DASH,
    STATE(128), 1,
      sym__expression,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(31), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(145), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13037] = 10,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_for,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT,
    ACTIONS(185), 1,
      aux_sym_string_literal_token1,
    ACTIONS(743), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym__expression,
    ACTIONS(189), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(183), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(60), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13077] = 6,
    ACTIONS(497), 1,
      anon_sym_BSLASHn,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(432), 1,
      sym__field_identifier,
    STATE(310), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [13097] = 4,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      anon_sym_EQ,
    STATE(331), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(757), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13113] = 5,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13130] = 4,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(432), 1,
      sym__field_identifier,
    ACTIONS(769), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(311), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [13145] = 1,
    ACTIONS(457), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [13154] = 1,
    ACTIONS(461), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [13163] = 5,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13180] = 5,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(303), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13197] = 5,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(307), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13214] = 4,
    ACTIONS(777), 1,
      sym_identifier,
    STATE(432), 1,
      sym__field_identifier,
    ACTIONS(780), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(310), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [13229] = 4,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(432), 1,
      sym__field_identifier,
    ACTIONS(782), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(310), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [13244] = 1,
    ACTIONS(469), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [13253] = 3,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(784), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13265] = 3,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(786), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(313), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13277] = 3,
    ACTIONS(788), 1,
      sym_identifier,
    ACTIONS(791), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(315), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [13289] = 4,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
    ACTIONS(793), 2,
      anon_sym_BSLASHn,
      sym_identifier,
  [13303] = 3,
    ACTIONS(800), 1,
      anon_sym_DQUOTE,
    STATE(332), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(802), 2,
      sym__string_content,
      sym_escape_sequence,
  [13314] = 4,
    ACTIONS(804), 1,
      sym_identifier,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    STATE(403), 1,
      sym_enum_variant_list,
    STATE(404), 1,
      sym_enum_integral_type,
  [13327] = 1,
    ACTIONS(808), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13334] = 4,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(810), 1,
      anon_sym_COLON,
    ACTIONS(812), 1,
      anon_sym_EQ,
  [13347] = 4,
    ACTIONS(531), 1,
      anon_sym_SEMI,
    ACTIONS(533), 1,
      anon_sym_LF,
    ACTIONS(814), 1,
      anon_sym_COLON,
    ACTIONS(816), 1,
      anon_sym_EQ,
  [13360] = 1,
    ACTIONS(818), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13367] = 3,
    ACTIONS(820), 1,
      anon_sym_DQUOTE,
    STATE(336), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(822), 2,
      sym__string_content,
      sym_escape_sequence,
  [13378] = 2,
    ACTIONS(515), 1,
      anon_sym_LF,
    ACTIONS(513), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13387] = 2,
    ACTIONS(511), 1,
      anon_sym_LF,
    ACTIONS(509), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13396] = 2,
    ACTIONS(507), 1,
      anon_sym_LF,
    ACTIONS(505), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13405] = 1,
    ACTIONS(824), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [13412] = 4,
    ACTIONS(826), 1,
      sym_identifier,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(224), 1,
      sym_enum_variant_list,
    STATE(405), 1,
      sym_enum_integral_type,
  [13425] = 1,
    ACTIONS(830), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13432] = 3,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(833), 1,
      anon_sym_if,
    STATE(187), 2,
      sym_block,
      sym_if_statement,
  [13443] = 2,
    ACTIONS(837), 1,
      anon_sym_EQ,
    ACTIONS(835), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13452] = 3,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(841), 2,
      sym__string_content,
      sym_escape_sequence,
  [13463] = 3,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(843), 1,
      anon_sym_if,
    STATE(401), 2,
      sym_block,
      sym_if_statement,
  [13474] = 3,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(841), 2,
      sym__string_content,
      sym_escape_sequence,
  [13485] = 4,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(847), 1,
      sym_identifier,
    STATE(400), 1,
      sym_enum_integral_type,
    STATE(407), 1,
      sym_enum_variant_list,
  [13498] = 3,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(841), 2,
      sym__string_content,
      sym_escape_sequence,
  [13509] = 1,
    ACTIONS(851), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13516] = 3,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(841), 2,
      sym__string_content,
      sym_escape_sequence,
  [13527] = 3,
    ACTIONS(855), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(857), 2,
      sym__string_content,
      sym_escape_sequence,
  [13538] = 2,
    ACTIONS(529), 1,
      anon_sym_LF,
    ACTIONS(527), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [13547] = 4,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(859), 1,
      sym_identifier,
    STATE(203), 1,
      sym_enum_variant_list,
    STATE(398), 1,
      sym_enum_integral_type,
  [13560] = 3,
    ACTIONS(861), 1,
      anon_sym_DQUOTE,
    STATE(342), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(863), 2,
      sym__string_content,
      sym_escape_sequence,
  [13571] = 3,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    STATE(338), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(868), 2,
      sym__string_content,
      sym_escape_sequence,
  [13582] = 4,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(870), 1,
      anon_sym_else,
    STATE(381), 1,
      sym_else_clause,
  [13595] = 1,
    ACTIONS(872), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [13602] = 3,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      anon_sym_COLON,
    STATE(384), 1,
      sym_enum_variant_list,
  [13612] = 3,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(876), 1,
      anon_sym_EQ,
  [13622] = 3,
    ACTIONS(878), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [13632] = 3,
    ACTIONS(883), 1,
      anon_sym_LBRACE,
    ACTIONS(885), 1,
      anon_sym_DASH_GT,
    STATE(166), 1,
      sym_block,
  [13642] = 3,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13652] = 3,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(351), 1,
      aux_sym_parameters_repeat1,
  [13662] = 3,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_enum_variant_list_repeat2,
  [13672] = 3,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    ACTIONS(892), 1,
      anon_sym_BSLASHn,
    STATE(353), 1,
      aux_sym_field_declaration_list_repeat2,
  [13682] = 3,
    ACTIONS(497), 1,
      anon_sym_BSLASHn,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_field_declaration_list_repeat2,
  [13692] = 3,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [13702] = 3,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(899), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13712] = 3,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_enum_variant_list,
  [13722] = 3,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13732] = 2,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(455), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13740] = 2,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(459), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13748] = 3,
    ACTIONS(753), 1,
      sym_identifier,
    STATE(383), 1,
      sym_field_declaration,
    STATE(432), 1,
      sym__field_identifier,
  [13758] = 3,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(901), 1,
      anon_sym_EQ,
  [13768] = 2,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(467), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [13776] = 3,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_enum_variant_list_repeat2,
  [13786] = 3,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    ACTIONS(905), 1,
      anon_sym_BSLASHn,
    STATE(365), 1,
      aux_sym_enum_variant_list_repeat2,
  [13796] = 3,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13806] = 3,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_enum_variant_list_repeat2,
  [13816] = 3,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      anon_sym_COLON,
    STATE(385), 1,
      sym_enum_variant_list,
  [13826] = 3,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13836] = 3,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      anon_sym_COLON,
    STATE(195), 1,
      sym_enum_variant_list,
  [13846] = 3,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13856] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13866] = 3,
    ACTIONS(497), 1,
      anon_sym_BSLASHn,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_field_declaration_list_repeat2,
  [13876] = 3,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_parameters_repeat1,
  [13886] = 3,
    ACTIONS(765), 1,
      anon_sym_BSLASHn,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_enum_variant_list_repeat2,
  [13896] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13906] = 3,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_parameters_repeat1,
  [13916] = 3,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
  [13926] = 1,
    ACTIONS(925), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13931] = 1,
    ACTIONS(927), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [13936] = 2,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_LF,
  [13943] = 2,
    ACTIONS(699), 1,
      anon_sym_SEMI,
    ACTIONS(701), 1,
      anon_sym_LF,
  [13950] = 1,
    ACTIONS(881), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13955] = 2,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_LF,
  [13962] = 2,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    ACTIONS(709), 1,
      anon_sym_LF,
  [13969] = 2,
    ACTIONS(669), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LF,
  [13976] = 2,
    ACTIONS(673), 1,
      anon_sym_SEMI,
    ACTIONS(675), 1,
      anon_sym_LF,
  [13983] = 1,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13988] = 1,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13993] = 1,
    ACTIONS(890), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13998] = 1,
    ACTIONS(929), 2,
      sym_float_literal,
      sym_integer_literal,
  [14003] = 2,
    ACTIONS(665), 1,
      anon_sym_SEMI,
    ACTIONS(667), 1,
      anon_sym_LF,
  [14010] = 2,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    ACTIONS(713), 1,
      anon_sym_LF,
  [14017] = 1,
    ACTIONS(931), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [14022] = 2,
    ACTIONS(883), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_block,
  [14029] = 2,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(312), 1,
      anon_sym_LF,
  [14036] = 2,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_LF,
  [14043] = 2,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_enum_variant_list,
  [14050] = 2,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_parameters,
  [14057] = 2,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    STATE(386), 1,
      sym_enum_variant_list,
  [14064] = 2,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LF,
  [14071] = 1,
    ACTIONS(935), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [14076] = 2,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    ACTIONS(693), 1,
      anon_sym_LF,
  [14083] = 2,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    STATE(393), 1,
      sym_enum_variant_list,
  [14090] = 2,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_enum_variant_list,
  [14097] = 1,
    ACTIONS(937), 2,
      sym_float_literal,
      sym_integer_literal,
  [14102] = 2,
    ACTIONS(715), 1,
      anon_sym_SEMI,
    ACTIONS(717), 1,
      anon_sym_LF,
  [14109] = 2,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_SEMI,
  [14116] = 1,
    ACTIONS(529), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14121] = 2,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(697), 1,
      anon_sym_LF,
  [14128] = 1,
    ACTIONS(507), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14133] = 1,
    ACTIONS(515), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14138] = 2,
    ACTIONS(703), 1,
      anon_sym_SEMI,
    ACTIONS(705), 1,
      anon_sym_LF,
  [14145] = 1,
    ACTIONS(939), 2,
      sym_float_literal,
      sym_integer_literal,
  [14150] = 1,
    ACTIONS(511), 2,
      anon_sym_in,
      anon_sym_COLON,
  [14155] = 1,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [14159] = 1,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
  [14163] = 1,
    ACTIONS(943), 1,
      anon_sym_COLON,
  [14167] = 1,
    ACTIONS(945), 1,
      anon_sym_enum,
  [14171] = 1,
    ACTIONS(947), 1,
      anon_sym_in,
  [14175] = 1,
    ACTIONS(949), 1,
      anon_sym_LBRACE,
  [14179] = 1,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
  [14183] = 1,
    ACTIONS(951), 1,
      anon_sym_enum,
  [14187] = 1,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
  [14191] = 1,
    ACTIONS(953), 1,
      anon_sym_COLON,
  [14195] = 1,
    ACTIONS(955), 1,
      ts_builtin_sym_end,
  [14199] = 1,
    ACTIONS(957), 1,
      anon_sym_RBRACK,
  [14203] = 1,
    ACTIONS(959), 1,
      anon_sym_COLON,
  [14207] = 1,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
  [14211] = 1,
    ACTIONS(961), 1,
      sym_identifier,
  [14215] = 1,
    ACTIONS(963), 1,
      anon_sym_COLON,
  [14219] = 1,
    ACTIONS(965), 1,
      anon_sym_COLON,
  [14223] = 1,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [14227] = 1,
    ACTIONS(967), 1,
      anon_sym_COLON,
  [14231] = 1,
    ACTIONS(969), 1,
      anon_sym_in,
  [14235] = 1,
    ACTIONS(971), 1,
      anon_sym_enum,
  [14239] = 1,
    ACTIONS(973), 1,
      anon_sym_in,
  [14243] = 1,
    ACTIONS(975), 1,
      anon_sym_in,
  [14247] = 1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
  [14251] = 1,
    ACTIONS(979), 1,
      anon_sym_RBRACK,
  [14255] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 581,
  [SMALL_STATE(10)] = 660,
  [SMALL_STATE(11)] = 739,
  [SMALL_STATE(12)] = 818,
  [SMALL_STATE(13)] = 897,
  [SMALL_STATE(14)] = 976,
  [SMALL_STATE(15)] = 1055,
  [SMALL_STATE(16)] = 1134,
  [SMALL_STATE(17)] = 1213,
  [SMALL_STATE(18)] = 1292,
  [SMALL_STATE(19)] = 1387,
  [SMALL_STATE(20)] = 1466,
  [SMALL_STATE(21)] = 1542,
  [SMALL_STATE(22)] = 1618,
  [SMALL_STATE(23)] = 1694,
  [SMALL_STATE(24)] = 1770,
  [SMALL_STATE(25)] = 1846,
  [SMALL_STATE(26)] = 1922,
  [SMALL_STATE(27)] = 2010,
  [SMALL_STATE(28)] = 2098,
  [SMALL_STATE(29)] = 2186,
  [SMALL_STATE(30)] = 2274,
  [SMALL_STATE(31)] = 2362,
  [SMALL_STATE(32)] = 2450,
  [SMALL_STATE(33)] = 2538,
  [SMALL_STATE(34)] = 2626,
  [SMALL_STATE(35)] = 2714,
  [SMALL_STATE(36)] = 2802,
  [SMALL_STATE(37)] = 2890,
  [SMALL_STATE(38)] = 2934,
  [SMALL_STATE(39)] = 2978,
  [SMALL_STATE(40)] = 3022,
  [SMALL_STATE(41)] = 3087,
  [SMALL_STATE(42)] = 3132,
  [SMALL_STATE(43)] = 3175,
  [SMALL_STATE(44)] = 3224,
  [SMALL_STATE(45)] = 3289,
  [SMALL_STATE(46)] = 3354,
  [SMALL_STATE(47)] = 3407,
  [SMALL_STATE(48)] = 3450,
  [SMALL_STATE(49)] = 3499,
  [SMALL_STATE(50)] = 3560,
  [SMALL_STATE(51)] = 3629,
  [SMALL_STATE(52)] = 3694,
  [SMALL_STATE(53)] = 3751,
  [SMALL_STATE(54)] = 3816,
  [SMALL_STATE(55)] = 3881,
  [SMALL_STATE(56)] = 3940,
  [SMALL_STATE(57)] = 3995,
  [SMALL_STATE(58)] = 4046,
  [SMALL_STATE(59)] = 4111,
  [SMALL_STATE(60)] = 4153,
  [SMALL_STATE(61)] = 4195,
  [SMALL_STATE(62)] = 4237,
  [SMALL_STATE(63)] = 4279,
  [SMALL_STATE(64)] = 4321,
  [SMALL_STATE(65)] = 4363,
  [SMALL_STATE(66)] = 4405,
  [SMALL_STATE(67)] = 4447,
  [SMALL_STATE(68)] = 4489,
  [SMALL_STATE(69)] = 4531,
  [SMALL_STATE(70)] = 4594,
  [SMALL_STATE(71)] = 4656,
  [SMALL_STATE(72)] = 4715,
  [SMALL_STATE(73)] = 4774,
  [SMALL_STATE(74)] = 4830,
  [SMALL_STATE(75)] = 4883,
  [SMALL_STATE(76)] = 4936,
  [SMALL_STATE(77)] = 4986,
  [SMALL_STATE(78)] = 5036,
  [SMALL_STATE(79)] = 5086,
  [SMALL_STATE(80)] = 5136,
  [SMALL_STATE(81)] = 5186,
  [SMALL_STATE(82)] = 5236,
  [SMALL_STATE(83)] = 5286,
  [SMALL_STATE(84)] = 5336,
  [SMALL_STATE(85)] = 5391,
  [SMALL_STATE(86)] = 5425,
  [SMALL_STATE(87)] = 5459,
  [SMALL_STATE(88)] = 5493,
  [SMALL_STATE(89)] = 5527,
  [SMALL_STATE(90)] = 5561,
  [SMALL_STATE(91)] = 5592,
  [SMALL_STATE(92)] = 5623,
  [SMALL_STATE(93)] = 5654,
  [SMALL_STATE(94)] = 5690,
  [SMALL_STATE(95)] = 5730,
  [SMALL_STATE(96)] = 5766,
  [SMALL_STATE(97)] = 5798,
  [SMALL_STATE(98)] = 5846,
  [SMALL_STATE(99)] = 5888,
  [SMALL_STATE(100)] = 5932,
  [SMALL_STATE(101)] = 5978,
  [SMALL_STATE(102)] = 6020,
  [SMALL_STATE(103)] = 6058,
  [SMALL_STATE(104)] = 6087,
  [SMALL_STATE(105)] = 6116,
  [SMALL_STATE(106)] = 6145,
  [SMALL_STATE(107)] = 6174,
  [SMALL_STATE(108)] = 6203,
  [SMALL_STATE(109)] = 6232,
  [SMALL_STATE(110)] = 6261,
  [SMALL_STATE(111)] = 6290,
  [SMALL_STATE(112)] = 6319,
  [SMALL_STATE(113)] = 6348,
  [SMALL_STATE(114)] = 6377,
  [SMALL_STATE(115)] = 6406,
  [SMALL_STATE(116)] = 6435,
  [SMALL_STATE(117)] = 6464,
  [SMALL_STATE(118)] = 6493,
  [SMALL_STATE(119)] = 6521,
  [SMALL_STATE(120)] = 6557,
  [SMALL_STATE(121)] = 6591,
  [SMALL_STATE(122)] = 6619,
  [SMALL_STATE(123)] = 6647,
  [SMALL_STATE(124)] = 6675,
  [SMALL_STATE(125)] = 6713,
  [SMALL_STATE(126)] = 6759,
  [SMALL_STATE(127)] = 6787,
  [SMALL_STATE(128)] = 6815,
  [SMALL_STATE(129)] = 6857,
  [SMALL_STATE(130)] = 6901,
  [SMALL_STATE(131)] = 6933,
  [SMALL_STATE(132)] = 6967,
  [SMALL_STATE(133)] = 6997,
  [SMALL_STATE(134)] = 7029,
  [SMALL_STATE(135)] = 7069,
  [SMALL_STATE(136)] = 7101,
  [SMALL_STATE(137)] = 7153,
  [SMALL_STATE(138)] = 7204,
  [SMALL_STATE(139)] = 7231,
  [SMALL_STATE(140)] = 7264,
  [SMALL_STATE(141)] = 7297,
  [SMALL_STATE(142)] = 7330,
  [SMALL_STATE(143)] = 7357,
  [SMALL_STATE(144)] = 7384,
  [SMALL_STATE(145)] = 7435,
  [SMALL_STATE(146)] = 7462,
  [SMALL_STATE(147)] = 7489,
  [SMALL_STATE(148)] = 7516,
  [SMALL_STATE(149)] = 7567,
  [SMALL_STATE(150)] = 7614,
  [SMALL_STATE(151)] = 7665,
  [SMALL_STATE(152)] = 7712,
  [SMALL_STATE(153)] = 7745,
  [SMALL_STATE(154)] = 7774,
  [SMALL_STATE(155)] = 7807,
  [SMALL_STATE(156)] = 7840,
  [SMALL_STATE(157)] = 7891,
  [SMALL_STATE(158)] = 7918,
  [SMALL_STATE(159)] = 7945,
  [SMALL_STATE(160)] = 7978,
  [SMALL_STATE(161)] = 8011,
  [SMALL_STATE(162)] = 8038,
  [SMALL_STATE(163)] = 8071,
  [SMALL_STATE(164)] = 8104,
  [SMALL_STATE(165)] = 8133,
  [SMALL_STATE(166)] = 8184,
  [SMALL_STATE(167)] = 8211,
  [SMALL_STATE(168)] = 8238,
  [SMALL_STATE(169)] = 8265,
  [SMALL_STATE(170)] = 8316,
  [SMALL_STATE(171)] = 8349,
  [SMALL_STATE(172)] = 8376,
  [SMALL_STATE(173)] = 8403,
  [SMALL_STATE(174)] = 8436,
  [SMALL_STATE(175)] = 8469,
  [SMALL_STATE(176)] = 8520,
  [SMALL_STATE(177)] = 8547,
  [SMALL_STATE(178)] = 8580,
  [SMALL_STATE(179)] = 8607,
  [SMALL_STATE(180)] = 8634,
  [SMALL_STATE(181)] = 8661,
  [SMALL_STATE(182)] = 8694,
  [SMALL_STATE(183)] = 8740,
  [SMALL_STATE(184)] = 8778,
  [SMALL_STATE(185)] = 8822,
  [SMALL_STATE(186)] = 8870,
  [SMALL_STATE(187)] = 8916,
  [SMALL_STATE(188)] = 8942,
  [SMALL_STATE(189)] = 8968,
  [SMALL_STATE(190)] = 8996,
  [SMALL_STATE(191)] = 9042,
  [SMALL_STATE(192)] = 9068,
  [SMALL_STATE(193)] = 9096,
  [SMALL_STATE(194)] = 9128,
  [SMALL_STATE(195)] = 9154,
  [SMALL_STATE(196)] = 9180,
  [SMALL_STATE(197)] = 9228,
  [SMALL_STATE(198)] = 9256,
  [SMALL_STATE(199)] = 9302,
  [SMALL_STATE(200)] = 9350,
  [SMALL_STATE(201)] = 9398,
  [SMALL_STATE(202)] = 9424,
  [SMALL_STATE(203)] = 9472,
  [SMALL_STATE(204)] = 9498,
  [SMALL_STATE(205)] = 9544,
  [SMALL_STATE(206)] = 9572,
  [SMALL_STATE(207)] = 9598,
  [SMALL_STATE(208)] = 9632,
  [SMALL_STATE(209)] = 9658,
  [SMALL_STATE(210)] = 9684,
  [SMALL_STATE(211)] = 9732,
  [SMALL_STATE(212)] = 9778,
  [SMALL_STATE(213)] = 9804,
  [SMALL_STATE(214)] = 9846,
  [SMALL_STATE(215)] = 9872,
  [SMALL_STATE(216)] = 9898,
  [SMALL_STATE(217)] = 9924,
  [SMALL_STATE(218)] = 9964,
  [SMALL_STATE(219)] = 10010,
  [SMALL_STATE(220)] = 10046,
  [SMALL_STATE(221)] = 10092,
  [SMALL_STATE(222)] = 10124,
  [SMALL_STATE(223)] = 10172,
  [SMALL_STATE(224)] = 10220,
  [SMALL_STATE(225)] = 10246,
  [SMALL_STATE(226)] = 10292,
  [SMALL_STATE(227)] = 10340,
  [SMALL_STATE(228)] = 10365,
  [SMALL_STATE(229)] = 10390,
  [SMALL_STATE(230)] = 10415,
  [SMALL_STATE(231)] = 10440,
  [SMALL_STATE(232)] = 10465,
  [SMALL_STATE(233)] = 10490,
  [SMALL_STATE(234)] = 10515,
  [SMALL_STATE(235)] = 10540,
  [SMALL_STATE(236)] = 10565,
  [SMALL_STATE(237)] = 10590,
  [SMALL_STATE(238)] = 10615,
  [SMALL_STATE(239)] = 10640,
  [SMALL_STATE(240)] = 10665,
  [SMALL_STATE(241)] = 10690,
  [SMALL_STATE(242)] = 10715,
  [SMALL_STATE(243)] = 10755,
  [SMALL_STATE(244)] = 10795,
  [SMALL_STATE(245)] = 10835,
  [SMALL_STATE(246)] = 10875,
  [SMALL_STATE(247)] = 10915,
  [SMALL_STATE(248)] = 10955,
  [SMALL_STATE(249)] = 10995,
  [SMALL_STATE(250)] = 11037,
  [SMALL_STATE(251)] = 11077,
  [SMALL_STATE(252)] = 11117,
  [SMALL_STATE(253)] = 11157,
  [SMALL_STATE(254)] = 11197,
  [SMALL_STATE(255)] = 11237,
  [SMALL_STATE(256)] = 11277,
  [SMALL_STATE(257)] = 11317,
  [SMALL_STATE(258)] = 11357,
  [SMALL_STATE(259)] = 11397,
  [SMALL_STATE(260)] = 11437,
  [SMALL_STATE(261)] = 11477,
  [SMALL_STATE(262)] = 11517,
  [SMALL_STATE(263)] = 11557,
  [SMALL_STATE(264)] = 11597,
  [SMALL_STATE(265)] = 11637,
  [SMALL_STATE(266)] = 11677,
  [SMALL_STATE(267)] = 11717,
  [SMALL_STATE(268)] = 11757,
  [SMALL_STATE(269)] = 11797,
  [SMALL_STATE(270)] = 11837,
  [SMALL_STATE(271)] = 11877,
  [SMALL_STATE(272)] = 11917,
  [SMALL_STATE(273)] = 11957,
  [SMALL_STATE(274)] = 11997,
  [SMALL_STATE(275)] = 12037,
  [SMALL_STATE(276)] = 12077,
  [SMALL_STATE(277)] = 12117,
  [SMALL_STATE(278)] = 12157,
  [SMALL_STATE(279)] = 12197,
  [SMALL_STATE(280)] = 12237,
  [SMALL_STATE(281)] = 12277,
  [SMALL_STATE(282)] = 12317,
  [SMALL_STATE(283)] = 12357,
  [SMALL_STATE(284)] = 12397,
  [SMALL_STATE(285)] = 12437,
  [SMALL_STATE(286)] = 12477,
  [SMALL_STATE(287)] = 12517,
  [SMALL_STATE(288)] = 12557,
  [SMALL_STATE(289)] = 12597,
  [SMALL_STATE(290)] = 12637,
  [SMALL_STATE(291)] = 12677,
  [SMALL_STATE(292)] = 12717,
  [SMALL_STATE(293)] = 12757,
  [SMALL_STATE(294)] = 12797,
  [SMALL_STATE(295)] = 12837,
  [SMALL_STATE(296)] = 12877,
  [SMALL_STATE(297)] = 12917,
  [SMALL_STATE(298)] = 12957,
  [SMALL_STATE(299)] = 12997,
  [SMALL_STATE(300)] = 13037,
  [SMALL_STATE(301)] = 13077,
  [SMALL_STATE(302)] = 13097,
  [SMALL_STATE(303)] = 13113,
  [SMALL_STATE(304)] = 13130,
  [SMALL_STATE(305)] = 13145,
  [SMALL_STATE(306)] = 13154,
  [SMALL_STATE(307)] = 13163,
  [SMALL_STATE(308)] = 13180,
  [SMALL_STATE(309)] = 13197,
  [SMALL_STATE(310)] = 13214,
  [SMALL_STATE(311)] = 13229,
  [SMALL_STATE(312)] = 13244,
  [SMALL_STATE(313)] = 13253,
  [SMALL_STATE(314)] = 13265,
  [SMALL_STATE(315)] = 13277,
  [SMALL_STATE(316)] = 13289,
  [SMALL_STATE(317)] = 13303,
  [SMALL_STATE(318)] = 13314,
  [SMALL_STATE(319)] = 13327,
  [SMALL_STATE(320)] = 13334,
  [SMALL_STATE(321)] = 13347,
  [SMALL_STATE(322)] = 13360,
  [SMALL_STATE(323)] = 13367,
  [SMALL_STATE(324)] = 13378,
  [SMALL_STATE(325)] = 13387,
  [SMALL_STATE(326)] = 13396,
  [SMALL_STATE(327)] = 13405,
  [SMALL_STATE(328)] = 13412,
  [SMALL_STATE(329)] = 13425,
  [SMALL_STATE(330)] = 13432,
  [SMALL_STATE(331)] = 13443,
  [SMALL_STATE(332)] = 13452,
  [SMALL_STATE(333)] = 13463,
  [SMALL_STATE(334)] = 13474,
  [SMALL_STATE(335)] = 13485,
  [SMALL_STATE(336)] = 13498,
  [SMALL_STATE(337)] = 13509,
  [SMALL_STATE(338)] = 13516,
  [SMALL_STATE(339)] = 13527,
  [SMALL_STATE(340)] = 13538,
  [SMALL_STATE(341)] = 13547,
  [SMALL_STATE(342)] = 13560,
  [SMALL_STATE(343)] = 13571,
  [SMALL_STATE(344)] = 13582,
  [SMALL_STATE(345)] = 13595,
  [SMALL_STATE(346)] = 13602,
  [SMALL_STATE(347)] = 13612,
  [SMALL_STATE(348)] = 13622,
  [SMALL_STATE(349)] = 13632,
  [SMALL_STATE(350)] = 13642,
  [SMALL_STATE(351)] = 13652,
  [SMALL_STATE(352)] = 13662,
  [SMALL_STATE(353)] = 13672,
  [SMALL_STATE(354)] = 13682,
  [SMALL_STATE(355)] = 13692,
  [SMALL_STATE(356)] = 13702,
  [SMALL_STATE(357)] = 13712,
  [SMALL_STATE(358)] = 13722,
  [SMALL_STATE(359)] = 13732,
  [SMALL_STATE(360)] = 13740,
  [SMALL_STATE(361)] = 13748,
  [SMALL_STATE(362)] = 13758,
  [SMALL_STATE(363)] = 13768,
  [SMALL_STATE(364)] = 13776,
  [SMALL_STATE(365)] = 13786,
  [SMALL_STATE(366)] = 13796,
  [SMALL_STATE(367)] = 13806,
  [SMALL_STATE(368)] = 13816,
  [SMALL_STATE(369)] = 13826,
  [SMALL_STATE(370)] = 13836,
  [SMALL_STATE(371)] = 13846,
  [SMALL_STATE(372)] = 13856,
  [SMALL_STATE(373)] = 13866,
  [SMALL_STATE(374)] = 13876,
  [SMALL_STATE(375)] = 13886,
  [SMALL_STATE(376)] = 13896,
  [SMALL_STATE(377)] = 13906,
  [SMALL_STATE(378)] = 13916,
  [SMALL_STATE(379)] = 13926,
  [SMALL_STATE(380)] = 13931,
  [SMALL_STATE(381)] = 13936,
  [SMALL_STATE(382)] = 13943,
  [SMALL_STATE(383)] = 13950,
  [SMALL_STATE(384)] = 13955,
  [SMALL_STATE(385)] = 13962,
  [SMALL_STATE(386)] = 13969,
  [SMALL_STATE(387)] = 13976,
  [SMALL_STATE(388)] = 13983,
  [SMALL_STATE(389)] = 13988,
  [SMALL_STATE(390)] = 13993,
  [SMALL_STATE(391)] = 13998,
  [SMALL_STATE(392)] = 14003,
  [SMALL_STATE(393)] = 14010,
  [SMALL_STATE(394)] = 14017,
  [SMALL_STATE(395)] = 14022,
  [SMALL_STATE(396)] = 14029,
  [SMALL_STATE(397)] = 14036,
  [SMALL_STATE(398)] = 14043,
  [SMALL_STATE(399)] = 14050,
  [SMALL_STATE(400)] = 14057,
  [SMALL_STATE(401)] = 14064,
  [SMALL_STATE(402)] = 14071,
  [SMALL_STATE(403)] = 14076,
  [SMALL_STATE(404)] = 14083,
  [SMALL_STATE(405)] = 14090,
  [SMALL_STATE(406)] = 14097,
  [SMALL_STATE(407)] = 14102,
  [SMALL_STATE(408)] = 14109,
  [SMALL_STATE(409)] = 14116,
  [SMALL_STATE(410)] = 14121,
  [SMALL_STATE(411)] = 14128,
  [SMALL_STATE(412)] = 14133,
  [SMALL_STATE(413)] = 14138,
  [SMALL_STATE(414)] = 14145,
  [SMALL_STATE(415)] = 14150,
  [SMALL_STATE(416)] = 14155,
  [SMALL_STATE(417)] = 14159,
  [SMALL_STATE(418)] = 14163,
  [SMALL_STATE(419)] = 14167,
  [SMALL_STATE(420)] = 14171,
  [SMALL_STATE(421)] = 14175,
  [SMALL_STATE(422)] = 14179,
  [SMALL_STATE(423)] = 14183,
  [SMALL_STATE(424)] = 14187,
  [SMALL_STATE(425)] = 14191,
  [SMALL_STATE(426)] = 14195,
  [SMALL_STATE(427)] = 14199,
  [SMALL_STATE(428)] = 14203,
  [SMALL_STATE(429)] = 14207,
  [SMALL_STATE(430)] = 14211,
  [SMALL_STATE(431)] = 14215,
  [SMALL_STATE(432)] = 14219,
  [SMALL_STATE(433)] = 14223,
  [SMALL_STATE(434)] = 14227,
  [SMALL_STATE(435)] = 14231,
  [SMALL_STATE(436)] = 14235,
  [SMALL_STATE(437)] = 14239,
  [SMALL_STATE(438)] = 14243,
  [SMALL_STATE(439)] = 14247,
  [SMALL_STATE(440)] = 14251,
  [SMALL_STATE(441)] = 14255,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(387),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(436),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(323),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(271),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(246),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(248),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(194),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(436),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(341),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(289),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(317),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(270),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 31),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 31),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 15),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 15),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 23),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 23),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 28),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 28),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 21),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 21),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(412),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(415),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(414),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(411),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(339),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(92),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 13),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 13),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 14),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 27),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 27),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 26),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 26),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 29),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 25),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 22),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 22),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 17),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 30),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 30),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 20),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 20),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 18),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 18),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 12),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 12),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 7),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(434),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(302),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1), SHIFT(319),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 32),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_declaration_list, 2), REDUCE(sym_ordered_field_declaration_list, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 16),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(342),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2), SHIFT_REPEAT(361),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(304),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(314),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(24),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [955] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 24),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifier, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
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
