#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 433
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 2
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 29

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
  anon_sym_COLON = 14,
  anon_sym_u8 = 15,
  anon_sym_i8 = 16,
  anon_sym_u16 = 17,
  anon_sym_i16 = 18,
  anon_sym_u32 = 19,
  anon_sym_i32 = 20,
  anon_sym_u64 = 21,
  anon_sym_i64 = 22,
  anon_sym_u128 = 23,
  anon_sym_i128 = 24,
  anon_sym_isize = 25,
  anon_sym_usize = 26,
  anon_sym_f32 = 27,
  anon_sym_f64 = 28,
  anon_sym_c_int = 29,
  anon_sym_bool = 30,
  anon_sym_String = 31,
  anon_sym_c_char = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_let = 35,
  anon_sym_EQ = 36,
  anon_sym_mut = 37,
  anon_sym_boxed = 38,
  anon_sym_enum = 39,
  anon_sym_LBRACE = 40,
  anon_sym_BSLASHn = 41,
  anon_sym_RBRACE = 42,
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
  anon_sym_PLUS_EQ = 57,
  anon_sym_STAR = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  sym_integer_literal = 61,
  sym_binary_literal = 62,
  aux_sym_string_literal_token1 = 63,
  anon_sym_DQUOTE = 64,
  sym_char_literal = 65,
  sym_escape_sequence = 66,
  anon_sym_function = 67,
  anon_sym_DASH_GT = 68,
  anon_sym_if = 69,
  anon_sym_else = 70,
  anon_sym_true = 71,
  anon_sym_false = 72,
  sym_line_comment = 73,
  sym__string_content = 74,
  sym_float_literal = 75,
  sym_source_file = 76,
  sym__expression = 77,
  sym_while_statement = 78,
  sym_increment_statement = 79,
  sym_decrement_statement = 80,
  sym_continue_statement = 81,
  sym_for_expression = 82,
  sym_call_expression = 83,
  sym_range_expression = 84,
  sym_arguments = 85,
  sym_argument = 86,
  sym__top_level_declaration = 87,
  sym__type = 88,
  sym_array_type = 89,
  sym_let_declaration = 90,
  sym_mutable_declaration = 91,
  sym_boxed_modifier = 92,
  sym_enum_declaration = 93,
  sym_enum_integral_type = 94,
  sym_enum_variant_list = 95,
  sym_enum_variant = 96,
  sym_field_declaration_list = 97,
  sym_field_declaration = 98,
  sym__field_identifier = 99,
  sym_ordered_field_declaration_list = 100,
  sym_mutable_specifier = 101,
  sym_unary_expression = 102,
  sym_return_statement = 103,
  sym_binary_expression = 104,
  sym__literal = 105,
  sym__pattern = 106,
  sym__literal_pattern = 107,
  sym_negative_literal = 108,
  sym_string_literal = 109,
  sym_function_declaration = 110,
  sym_parameters = 111,
  sym_parameter = 112,
  sym_block = 113,
  sym_if_statement = 114,
  sym_else_clause = 115,
  sym_boolean_literal = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_arguments_repeat1 = 118,
  aux_sym_arguments_repeat2 = 119,
  aux_sym_enum_variant_list_repeat1 = 120,
  aux_sym_enum_variant_list_repeat2 = 121,
  aux_sym_field_declaration_list_repeat1 = 122,
  aux_sym_field_declaration_list_repeat2 = 123,
  aux_sym_ordered_field_declaration_list_repeat1 = 124,
  aux_sym_string_literal_repeat1 = 125,
  aux_sym_parameters_repeat1 = 126,
  aux_sym_block_repeat1 = 127,
  alias_sym_field_identifier = 128,
  alias_sym_type_identifier = 129,
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
  [anon_sym_COLON] = ":",
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
  [anon_sym_EQ] = "=",
  [anon_sym_mut] = "mut",
  [anon_sym_boxed] = "boxed",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_PLUS_EQ] = "+=",
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
  [sym_argument] = "argument",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_let_declaration] = "let_declaration",
  [sym_mutable_declaration] = "mutable_declaration",
  [sym_boxed_modifier] = "boxed_modifier",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_integral_type] = "enum_integral_type",
  [sym_enum_variant_list] = "enum_variant_list",
  [sym_enum_variant] = "enum_variant",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym__field_identifier] = "_field_identifier",
  [sym_ordered_field_declaration_list] = "ordered_field_declaration_list",
  [sym_mutable_specifier] = "mutable_specifier",
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_boxed] = anon_sym_boxed,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
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
  [sym_argument] = sym_argument,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_let_declaration] = sym_let_declaration,
  [sym_mutable_declaration] = sym_mutable_declaration,
  [sym_boxed_modifier] = sym_boxed_modifier,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_enum_integral_type] = sym_enum_integral_type,
  [sym_enum_variant_list] = sym_enum_variant_list,
  [sym_enum_variant] = sym_enum_variant,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym__field_identifier] = sym__field_identifier,
  [sym_ordered_field_declaration_list] = sym_ordered_field_declaration_list,
  [sym_mutable_specifier] = sym_mutable_specifier,
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
  [anon_sym_COLON] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boxed] = {
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
  [anon_sym_PLUS_EQ] = {
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
  [sym_argument] = {
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
  [sym_mutable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_boxed_modifier] = {
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
  [sym_mutable_specifier] = {
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
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 3},
  [17] = {.index = 24, .length = 3},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 3},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 1},
  [24] = {.index = 35, .length = 3},
  [25] = {.index = 38, .length = 3},
  [26] = {.index = 41, .length = 2},
  [27] = {.index = 43, .length = 4},
  [28] = {.index = 47, .length = 2},
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
    {field_name, 0},
  [7] =
    {field_body, 2},
    {field_name, 1},
  [9] =
    {field_condition, 1},
    {field_consequence, 2},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_body, 2},
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
    {field_body, 3},
    {field_name, 2},
  [29] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [32] =
    {field_name, 0},
    {field_value, 2},
  [34] =
    {field_element, 1},
  [35] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [38] =
    {field_body, 1},
    {field_name, 0},
    {field_value, 3},
  [41] =
    {field_pattern, 0},
    {field_type, 2},
  [43] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [47] =
    {field_name, 0},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [7] = {
    [1] = alias_sym_type_identifier,
  },
  [12] = {
    [0] = alias_sym_type_identifier,
  },
  [18] = {
    [2] = alias_sym_type_identifier,
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
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(107);
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
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(110);
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
      if (lookahead == '8') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(93);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(93);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(93);
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
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead != 0) ADVANCE(108);
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
      if (lookahead == '}') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(104);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(100);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '&') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(112);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
      if (lookahead == '>') ADVANCE(109);
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
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(94);
      if (lookahead == '6') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(12);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(112);
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
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(54);
      if (lookahead == '6') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(57);
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
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 33:
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
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 58:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_mut);
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
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(93);
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
      ACCEPT_TOKEN(anon_sym_boxed);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(101);
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
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 55, .external_lex_state = 2},
  [2] = {.lex_state = 55, .external_lex_state = 2},
  [3] = {.lex_state = 55, .external_lex_state = 2},
  [4] = {.lex_state = 5, .external_lex_state = 2},
  [5] = {.lex_state = 5, .external_lex_state = 2},
  [6] = {.lex_state = 5, .external_lex_state = 2},
  [7] = {.lex_state = 5, .external_lex_state = 2},
  [8] = {.lex_state = 5, .external_lex_state = 2},
  [9] = {.lex_state = 55, .external_lex_state = 2},
  [10] = {.lex_state = 5, .external_lex_state = 2},
  [11] = {.lex_state = 5, .external_lex_state = 2},
  [12] = {.lex_state = 5, .external_lex_state = 2},
  [13] = {.lex_state = 55, .external_lex_state = 2},
  [14] = {.lex_state = 5, .external_lex_state = 2},
  [15] = {.lex_state = 55, .external_lex_state = 2},
  [16] = {.lex_state = 55, .external_lex_state = 2},
  [17] = {.lex_state = 55, .external_lex_state = 2},
  [18] = {.lex_state = 55, .external_lex_state = 2},
  [19] = {.lex_state = 55, .external_lex_state = 2},
  [20] = {.lex_state = 5, .external_lex_state = 2},
  [21] = {.lex_state = 5, .external_lex_state = 2},
  [22] = {.lex_state = 5, .external_lex_state = 2},
  [23] = {.lex_state = 5, .external_lex_state = 2},
  [24] = {.lex_state = 55, .external_lex_state = 2},
  [25] = {.lex_state = 55, .external_lex_state = 2},
  [26] = {.lex_state = 55, .external_lex_state = 2},
  [27] = {.lex_state = 5, .external_lex_state = 2},
  [28] = {.lex_state = 5, .external_lex_state = 2},
  [29] = {.lex_state = 5, .external_lex_state = 2},
  [30] = {.lex_state = 55, .external_lex_state = 2},
  [31] = {.lex_state = 5, .external_lex_state = 2},
  [32] = {.lex_state = 5, .external_lex_state = 2},
  [33] = {.lex_state = 5, .external_lex_state = 2},
  [34] = {.lex_state = 5, .external_lex_state = 2},
  [35] = {.lex_state = 5, .external_lex_state = 2},
  [36] = {.lex_state = 5, .external_lex_state = 2},
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
  [74] = {.lex_state = 55, .external_lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 2},
  [76] = {.lex_state = 9, .external_lex_state = 2},
  [77] = {.lex_state = 9, .external_lex_state = 2},
  [78] = {.lex_state = 9, .external_lex_state = 2},
  [79] = {.lex_state = 9, .external_lex_state = 2},
  [80] = {.lex_state = 9, .external_lex_state = 2},
  [81] = {.lex_state = 9, .external_lex_state = 2},
  [82] = {.lex_state = 9, .external_lex_state = 2},
  [83] = {.lex_state = 9, .external_lex_state = 2},
  [84] = {.lex_state = 5, .external_lex_state = 2},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 9, .external_lex_state = 2},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 10, .external_lex_state = 2},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 10, .external_lex_state = 2},
  [106] = {.lex_state = 10, .external_lex_state = 2},
  [107] = {.lex_state = 10, .external_lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 10, .external_lex_state = 2},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 55, .external_lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 10, .external_lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 55, .external_lex_state = 2},
  [122] = {.lex_state = 55, .external_lex_state = 2},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 55, .external_lex_state = 2},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 10, .external_lex_state = 2},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 55, .external_lex_state = 2},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 55, .external_lex_state = 2},
  [134] = {.lex_state = 10, .external_lex_state = 2},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 10, .external_lex_state = 2},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 10, .external_lex_state = 2},
  [140] = {.lex_state = 10, .external_lex_state = 2},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 55, .external_lex_state = 2},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 55, .external_lex_state = 2},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 55, .external_lex_state = 2},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 55, .external_lex_state = 2},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 55, .external_lex_state = 2},
  [158] = {.lex_state = 55, .external_lex_state = 2},
  [159] = {.lex_state = 55, .external_lex_state = 2},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 55, .external_lex_state = 2},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 55, .external_lex_state = 2},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 55, .external_lex_state = 2},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 55, .external_lex_state = 2},
  [170] = {.lex_state = 55, .external_lex_state = 2},
  [171] = {.lex_state = 55, .external_lex_state = 2},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 55, .external_lex_state = 2},
  [175] = {.lex_state = 55, .external_lex_state = 2},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 1, .external_lex_state = 2},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
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
  [262] = {.lex_state = 5, .external_lex_state = 2},
  [263] = {.lex_state = 5, .external_lex_state = 2},
  [264] = {.lex_state = 5, .external_lex_state = 2},
  [265] = {.lex_state = 5, .external_lex_state = 2},
  [266] = {.lex_state = 5, .external_lex_state = 2},
  [267] = {.lex_state = 5, .external_lex_state = 2},
  [268] = {.lex_state = 5, .external_lex_state = 2},
  [269] = {.lex_state = 5, .external_lex_state = 2},
  [270] = {.lex_state = 5, .external_lex_state = 2},
  [271] = {.lex_state = 5, .external_lex_state = 2},
  [272] = {.lex_state = 5, .external_lex_state = 2},
  [273] = {.lex_state = 5, .external_lex_state = 2},
  [274] = {.lex_state = 5, .external_lex_state = 2},
  [275] = {.lex_state = 5, .external_lex_state = 2},
  [276] = {.lex_state = 5, .external_lex_state = 2},
  [277] = {.lex_state = 5, .external_lex_state = 2},
  [278] = {.lex_state = 5, .external_lex_state = 2},
  [279] = {.lex_state = 5, .external_lex_state = 2},
  [280] = {.lex_state = 5, .external_lex_state = 2},
  [281] = {.lex_state = 5, .external_lex_state = 2},
  [282] = {.lex_state = 5, .external_lex_state = 2},
  [283] = {.lex_state = 5, .external_lex_state = 2},
  [284] = {.lex_state = 5, .external_lex_state = 2},
  [285] = {.lex_state = 5, .external_lex_state = 2},
  [286] = {.lex_state = 5, .external_lex_state = 2},
  [287] = {.lex_state = 5, .external_lex_state = 2},
  [288] = {.lex_state = 5, .external_lex_state = 2},
  [289] = {.lex_state = 5, .external_lex_state = 2},
  [290] = {.lex_state = 5, .external_lex_state = 2},
  [291] = {.lex_state = 5, .external_lex_state = 2},
  [292] = {.lex_state = 5, .external_lex_state = 2},
  [293] = {.lex_state = 5, .external_lex_state = 2},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 13},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 7},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 7},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 7},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 8, .external_lex_state = 3},
  [311] = {.lex_state = 8, .external_lex_state = 3},
  [312] = {.lex_state = 8, .external_lex_state = 3},
  [313] = {.lex_state = 8, .external_lex_state = 3},
  [314] = {.lex_state = 8, .external_lex_state = 3},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 13},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 8, .external_lex_state = 3},
  [319] = {.lex_state = 13},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 7},
  [323] = {.lex_state = 13},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 8, .external_lex_state = 3},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 13},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 8, .external_lex_state = 3},
  [335] = {.lex_state = 13},
  [336] = {.lex_state = 8, .external_lex_state = 3},
  [337] = {.lex_state = 2},
  [338] = {.lex_state = 13},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 55},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 13},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 55},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 55},
  [362] = {.lex_state = 55},
  [363] = {.lex_state = 55},
  [364] = {.lex_state = 55},
  [365] = {.lex_state = 55},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 55},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 9, .external_lex_state = 2},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 13},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 2},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 13},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 2},
  [387] = {.lex_state = 2},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 2},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 7},
  [393] = {.lex_state = 2},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 13},
  [397] = {.lex_state = 9, .external_lex_state = 2},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 2},
  [402] = {.lex_state = 13},
  [403] = {.lex_state = 2},
  [404] = {.lex_state = 7},
  [405] = {.lex_state = 9, .external_lex_state = 2},
  [406] = {.lex_state = 7},
  [407] = {.lex_state = 2},
  [408] = {.lex_state = 7},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 7},
  [411] = {.lex_state = 7},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 7},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 7},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 7},
  [427] = {.lex_state = 7},
  [428] = {.lex_state = 7},
  [429] = {.lex_state = 7},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
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
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_boxed] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_PLUS_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(414),
    [sym__expression] = STATE(130),
    [sym_while_statement] = STATE(401),
    [sym_increment_statement] = STATE(401),
    [sym_decrement_statement] = STATE(401),
    [sym_continue_statement] = STATE(401),
    [sym_for_expression] = STATE(168),
    [sym_call_expression] = STATE(168),
    [sym_range_expression] = STATE(168),
    [sym__top_level_declaration] = STATE(2),
    [sym_let_declaration] = STATE(401),
    [sym_mutable_declaration] = STATE(401),
    [sym_boxed_modifier] = STATE(411),
    [sym_enum_declaration] = STATE(401),
    [sym_unary_expression] = STATE(168),
    [sym_return_statement] = STATE(401),
    [sym_binary_expression] = STATE(168),
    [sym__literal] = STATE(168),
    [sym_string_literal] = STATE(151),
    [sym_function_declaration] = STATE(2),
    [sym_block] = STATE(401),
    [sym_if_statement] = STATE(401),
    [sym_boolean_literal] = STATE(151),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(9),
    [anon_sym_PLUS_PLUS] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(13),
    [anon_sym_continue] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_mut] = ACTIONS(23),
    [anon_sym_boxed] = ACTIONS(25),
    [anon_sym_enum] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_return] = ACTIONS(33),
    [sym_integer_literal] = ACTIONS(35),
    [sym_binary_literal] = ACTIONS(37),
    [aux_sym_string_literal_token1] = ACTIONS(39),
    [sym_char_literal] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(45),
    [sym_line_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
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
      anon_sym_mut,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(27), 1,
      anon_sym_enum,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(41), 1,
      anon_sym_function,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym__expression,
    STATE(411), 1,
      sym_boxed_modifier,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(3), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(401), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [105] = 28,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(60), 1,
      anon_sym_DASH_DASH,
    ACTIONS(63), 1,
      anon_sym_continue,
    ACTIONS(66), 1,
      anon_sym_for,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(72), 1,
      anon_sym_let,
    ACTIONS(75), 1,
      anon_sym_mut,
    ACTIONS(78), 1,
      anon_sym_boxed,
    ACTIONS(81), 1,
      anon_sym_enum,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(90), 1,
      anon_sym_return,
    ACTIONS(93), 1,
      sym_integer_literal,
    ACTIONS(99), 1,
      aux_sym_string_literal_token1,
    ACTIONS(102), 1,
      anon_sym_function,
    ACTIONS(105), 1,
      anon_sym_if,
    STATE(130), 1,
      sym__expression,
    STATE(411), 1,
      sym_boxed_modifier,
    ACTIONS(108), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(96), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(3), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(401), 10,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [210] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    STATE(144), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [297] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [384] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [471] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [558] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [642] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_while,
    ACTIONS(155), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH,
    ACTIONS(161), 1,
      anon_sym_continue,
    ACTIONS(164), 1,
      anon_sym_for,
    ACTIONS(167), 1,
      anon_sym_DOT_DOT,
    ACTIONS(170), 1,
      anon_sym_let,
    ACTIONS(173), 1,
      anon_sym_mut,
    ACTIONS(176), 1,
      anon_sym_boxed,
    ACTIONS(179), 1,
      anon_sym_enum,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(190), 1,
      anon_sym_return,
    ACTIONS(193), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      aux_sym_string_literal_token1,
    ACTIONS(202), 1,
      anon_sym_if,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(196), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(9), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [740] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [824] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [908] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [992] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(30), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1090] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [1174] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(16), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1272] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(9), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1370] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(9), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1468] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(17), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1566] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(9), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1664] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [1748] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [1832] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [1916] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2000] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(9), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2098] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(19), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2196] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(24), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2294] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2378] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2462] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2546] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_boxed,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(216), 1,
      anon_sym_while,
    ACTIONS(218), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(220), 1,
      anon_sym_DASH_DASH,
    ACTIONS(222), 1,
      anon_sym_continue,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(228), 1,
      anon_sym_let,
    ACTIONS(230), 1,
      anon_sym_mut,
    ACTIONS(232), 1,
      anon_sym_enum,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(240), 1,
      anon_sym_return,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(248), 1,
      anon_sym_if,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym__expression,
    STATE(418), 1,
      sym_boxed_modifier,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(9), 11,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2644] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    STATE(191), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2725] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    STATE(185), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2806] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    STATE(161), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2887] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    STATE(154), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [2968] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    STATE(150), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [3049] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      sym_integer_literal,
    ACTIONS(127), 1,
      sym_binary_literal,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    STATE(176), 1,
      sym__expression,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(408), 1,
      sym_negative_literal,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(131), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(186), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(121), 18,
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
  [3130] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(288), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3180] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(292), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(296), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3280] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(300), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(298), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3355] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(328), 15,
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
  [3420] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 14,
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
    ACTIONS(326), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3487] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    ACTIONS(332), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(334), 1,
      anon_sym_DASH_DASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(336), 6,
      sym_float_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(330), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3566] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(338), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(340), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3621] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(342), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3696] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 12,
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
    ACTIONS(326), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3767] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
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
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(346), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3891] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 17,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(328), 18,
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
      anon_sym_PLUS_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [3950] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(328), 17,
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
  [4013] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(356), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(354), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4088] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 19,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4137] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(326), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(328), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4192] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(364), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(362), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4267] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(368), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(366), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4342] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 13,
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
    ACTIONS(326), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4411] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(302), 1,
      anon_sym_DOT_DOT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    ACTIONS(312), 1,
      anon_sym_CARET,
    ACTIONS(320), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(324), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(306), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(318), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(322), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(314), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(372), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(370), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(61), 1,
      sym_arguments,
    ACTIONS(374), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4537] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4585] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4633] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4681] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(392), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4729] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(396), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4777] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(400), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(404), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4873] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(408), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(412), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [4969] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 18,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
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
    ACTIONS(416), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
  [5017] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_for,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(431), 1,
      sym_integer_literal,
    ACTIONS(434), 1,
      aux_sym_string_literal_token1,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(419), 1,
      sym__pattern,
    ACTIONS(423), 2,
      anon_sym_DOT_DOT,
      sym_binary_literal,
    ACTIONS(437), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(440), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(408), 3,
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
  [5083] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(75), 1,
      sym_mutable_specifier,
    STATE(350), 1,
      sym_parameter,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(409), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5151] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_mutable_specifier,
    STATE(380), 1,
      sym_parameter,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(409), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5216] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_mutable_specifier,
    STATE(380), 1,
      sym_parameter,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(409), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5281] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_mut,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(75), 1,
      sym_mutable_specifier,
    STATE(380), 1,
      sym_parameter,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(409), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5343] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(238), 1,
      anon_sym_DASH,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    STATE(47), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(461), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(459), 8,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_return,
      anon_sym_if,
  [5405] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(423), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5458] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(427), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5511] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_DASH,
    STATE(107), 1,
      sym__literal_pattern,
    STATE(118), 1,
      sym__pattern,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(469), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(465), 18,
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
  [5564] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(410), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5617] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(428), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5670] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_DASH,
    STATE(99), 1,
      sym__pattern,
    STATE(107), 1,
      sym__literal_pattern,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(469), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(105), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(465), 18,
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
  [5723] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(471), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_DASH,
    STATE(315), 1,
      sym__literal_pattern,
    STATE(321), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(477), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 18,
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
  [5776] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(471), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_DASH,
    STATE(315), 1,
      sym__literal_pattern,
    STATE(325), 1,
      sym__pattern,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(477), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(473), 18,
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
  [5829] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(443), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_DASH,
    STATE(404), 1,
      sym__literal_pattern,
    STATE(429), 1,
      sym__pattern,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(453), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(408), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(121), 18,
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
  [5882] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(479), 23,
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
      sym_integer_literal,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5919] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5954] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(292), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [5989] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 6,
      anon_sym_in,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(296), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [6024] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(338), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(340), 19,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6064] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 13,
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
  [6114] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 12,
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
  [6166] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(326), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(328), 19,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6206] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 5,
      sym_float_literal,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(499), 21,
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
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6240] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(374), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(376), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6276] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 15,
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
  [6324] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 11,
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
  [6378] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(328), 17,
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
      anon_sym_PLUS_EQ,
      sym_identifier,
  [6422] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(328), 10,
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
  [6478] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(416), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6511] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 1,
      anon_sym_COLON,
    ACTIONS(513), 1,
      anon_sym_EQ,
    ACTIONS(509), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(507), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6548] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(396), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6581] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(408), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6614] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(392), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6647] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(404), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6680] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(384), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6713] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 11,
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
    ACTIONS(515), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6746] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 11,
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
    ACTIONS(519), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6779] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 11,
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
    ACTIONS(523), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6812] = 3,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(294), 24,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6845] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 11,
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
    ACTIONS(529), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6878] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(412), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [6911] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      anon_sym_else,
    STATE(143), 1,
      sym_else_clause,
    ACTIONS(535), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(533), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6948] = 3,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(286), 24,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6981] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(360), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(400), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7047] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(378), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(380), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7080] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(539), 1,
      sym_identifier,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      anon_sym_BSLASHn,
    STATE(294), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(307), 1,
      sym_field_declaration,
    STATE(348), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(425), 1,
      sym__field_identifier,
    ACTIONS(543), 18,
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
  [7125] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(352), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7158] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(553), 1,
      anon_sym_EQ,
    ACTIONS(549), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(547), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7195] = 3,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(290), 24,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7228] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(388), 21,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_identifier,
  [7261] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(352), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(350), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7293] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(358), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7325] = 3,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(358), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [7357] = 7,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(326), 17,
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
      anon_sym_PLUS_EQ,
  [7397] = 9,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(563), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(561), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 12,
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
  [7441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(565), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7473] = 11,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_AMP,
    ACTIONS(569), 1,
      anon_sym_CARET,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(563), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(561), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 10,
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
  [7521] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 10,
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
    ACTIONS(571), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7553] = 10,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_AMP,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(563), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(561), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 11,
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
  [7599] = 15,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_AMP,
    ACTIONS(569), 1,
      anon_sym_CARET,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    ACTIONS(579), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(581), 1,
      anon_sym_DASH_DASH,
    ACTIONS(583), 1,
      anon_sym_PIPE,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(563), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(561), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(585), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7655] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(589), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7687] = 12,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_AMP,
    ACTIONS(569), 1,
      anon_sym_CARET,
    ACTIONS(583), 1,
      anon_sym_PIPE,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(563), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(561), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(593), 15,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7769] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      anon_sym_EQ,
    ACTIONS(597), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(595), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7803] = 4,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(374), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7837] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 10,
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
    ACTIONS(601), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7869] = 8,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(559), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(561), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(326), 14,
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
  [7911] = 6,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(326), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7949] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 10,
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
    ACTIONS(605), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7981] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(613), 1,
      anon_sym_EQ,
    ACTIONS(611), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(609), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8015] = 6,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(338), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8053] = 3,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(350), 23,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [8085] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(615), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8116] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_arguments,
    STATE(369), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8175] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(627), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8206] = 3,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(398), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8237] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(631), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8268] = 3,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(414), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8299] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(635), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8330] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_arguments,
    STATE(354), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8389] = 3,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(410), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8420] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_arguments,
    STATE(353), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8479] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(645), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8534] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_arguments,
    STATE(342), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8593] = 3,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(394), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8624] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_arguments,
    STATE(359), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(653), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(657), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8745] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(661), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8776] = 3,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(406), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8807] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_arguments,
    STATE(351), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8866] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(354), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8897] = 3,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(402), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8928] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(362), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8959] = 3,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(386), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8990] = 3,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(382), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(667), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9052] = 3,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(378), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9083] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(671), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(675), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9145] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(679), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9176] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(683), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9231] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_arguments,
    STATE(347), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9290] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(691), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(689), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9321] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(693), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9352] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_arguments,
    STATE(366), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9411] = 3,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(390), 22,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9442] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_COLON,
    ACTIONS(410), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(412), 17,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9474] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_arguments,
    STATE(220), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9530] = 13,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(713), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [9580] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(400), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [9616] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      sym_identifier,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      sym__type,
    STATE(139), 1,
      sym_array_type,
    ACTIONS(727), 18,
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
  [9652] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(317), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [9688] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(731), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9744] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9798] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      anon_sym_COLON,
    ACTIONS(410), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(412), 17,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9830] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_COLON,
    ACTIONS(378), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(380), 17,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [9862] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(421), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [9898] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      sym_identifier,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    STATE(139), 1,
      sym_array_type,
    STATE(140), 1,
      sym__type,
    ACTIONS(727), 18,
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
  [9934] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    STATE(337), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9990] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(735), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10044] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(111), 1,
      sym_block,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10100] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(376), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [10136] = 6,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(338), 18,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10172] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    STATE(160), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10228] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(430), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [10264] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(424), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [10300] = 14,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(741), 1,
      anon_sym_DOT_DOT,
    ACTIONS(743), 1,
      anon_sym_DASH,
    ACTIONS(747), 1,
      aux_sym_string_literal_token1,
    ACTIONS(751), 1,
      sym_float_literal,
    STATE(200), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(745), 3,
      sym_integer_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10352] = 13,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(713), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10402] = 13,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(713), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10452] = 4,
    ACTIONS(376), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(374), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10484] = 13,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(713), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10534] = 7,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(326), 15,
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
      anon_sym_PLUS_EQ,
  [10572] = 9,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(326), 10,
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
  [10614] = 11,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(326), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10660] = 10,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(326), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10704] = 13,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(713), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10754] = 12,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(326), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10802] = 8,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(326), 12,
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
  [10842] = 6,
    ACTIONS(328), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(326), 18,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [10878] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      sym_block,
    STATE(120), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10934] = 13,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(713), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [10984] = 13,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_DOT_DOT,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(707), 1,
      anon_sym_AMP,
    ACTIONS(709), 1,
      anon_sym_PIPE,
    ACTIONS(711), 1,
      anon_sym_CARET,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(715), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(705), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(717), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(713), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11034] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    STATE(167), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11090] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    STATE(339), 1,
      sym__type,
    STATE(346), 1,
      sym_array_type,
    ACTIONS(755), 18,
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
  [11126] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      sym_identifier,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    STATE(344), 1,
      sym__type,
    STATE(346), 1,
      sym_array_type,
    ACTIONS(755), 18,
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
  [11162] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_PLUS,
    ACTIONS(495), 1,
      anon_sym_SLASH,
    ACTIONS(497), 1,
      anon_sym_AMP,
    ACTIONS(503), 1,
      anon_sym_CARET,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    STATE(120), 1,
      sym_arguments,
    STATE(403), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(489), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(493), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(625), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(623), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [11218] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(416), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [11254] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      sym_identifier,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    STATE(301), 1,
      sym_array_type,
    STATE(379), 1,
      sym__type,
    ACTIONS(721), 18,
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
  [11290] = 3,
    ACTIONS(408), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(406), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11319] = 3,
    ACTIONS(404), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(402), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11348] = 3,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(358), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11377] = 3,
    ACTIONS(352), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(350), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11406] = 3,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(382), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11435] = 3,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(414), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11464] = 3,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(394), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11493] = 3,
    ACTIONS(392), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(390), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11522] = 3,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(290), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11551] = 3,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(386), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11580] = 3,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(294), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11609] = 3,
    ACTIONS(400), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(398), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11638] = 3,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(286), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11667] = 3,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(378), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11696] = 3,
    ACTIONS(412), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(410), 20,
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
      anon_sym_PLUS_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [11725] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(50), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11771] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(135), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11817] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(97), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11863] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(94), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11909] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(91), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11955] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(93), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12001] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(96), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12047] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(213), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12093] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(89), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12139] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(95), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12185] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(212), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12231] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(211), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12277] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(141), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12323] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(179), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12369] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(88), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12415] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(184), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12461] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(192), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12507] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(214), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12553] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(190), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12599] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(90), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12645] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(124), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12691] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(125), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12737] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12783] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12829] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(127), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12875] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(129), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12921] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(132), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12967] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(137), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13013] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(45), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13059] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT,
    ACTIONS(35), 1,
      sym_integer_literal,
    ACTIONS(39), 1,
      aux_sym_string_literal_token1,
    ACTIONS(761), 1,
      anon_sym_DASH,
    STATE(138), 1,
      sym__expression,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(37), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(168), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13105] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13151] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(195), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13197] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(199), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13243] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(202), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13289] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13335] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13381] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(775), 1,
      sym_integer_literal,
    ACTIONS(777), 1,
      sym_float_literal,
    STATE(88), 1,
      sym__expression,
    ACTIONS(127), 2,
      sym_binary_literal,
      sym_char_literal,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13429] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(194), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13475] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(53), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13521] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(153), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13567] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(46), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13613] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(42), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13659] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13705] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(41), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13751] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(49), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13797] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13843] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13889] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(203), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13935] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(204), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [13981] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(205), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14027] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(206), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14073] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(208), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14119] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(209), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14165] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(210), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14211] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_for,
    ACTIONS(226), 1,
      anon_sym_DOT_DOT,
    ACTIONS(242), 1,
      sym_integer_literal,
    ACTIONS(246), 1,
      aux_sym_string_literal_token1,
    ACTIONS(759), 1,
      anon_sym_DASH,
    STATE(44), 1,
      sym__expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(244), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(59), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14257] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(172), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14303] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_for,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT,
    ACTIONS(129), 1,
      aux_sym_string_literal_token1,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      sym_integer_literal,
    STATE(217), 1,
      sym__expression,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(127), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(115), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14349] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(207), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14395] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_for,
    ACTIONS(745), 1,
      sym_integer_literal,
    ACTIONS(769), 1,
      anon_sym_DOT_DOT,
    ACTIONS(771), 1,
      anon_sym_DASH,
    ACTIONS(773), 1,
      aux_sym_string_literal_token1,
    STATE(180), 1,
      sym__expression,
    ACTIONS(749), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(751), 3,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
    STATE(233), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [14441] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_BSLASHn,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(425), 1,
      sym__field_identifier,
    STATE(298), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14464] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(785), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_EQ,
    STATE(323), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
    ACTIONS(783), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14483] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [14495] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(300), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14515] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      sym_identifier,
    STATE(425), 1,
      sym__field_identifier,
    ACTIONS(798), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(298), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14533] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(425), 1,
      sym__field_identifier,
    ACTIONS(800), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(298), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14551] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(309), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14571] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [14583] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_BSLASHn,
      sym_identifier,
  [14595] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(304), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14615] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(309), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14635] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(425), 1,
      sym__field_identifier,
    ACTIONS(808), 2,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
    STATE(299), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [14653] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(810), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(308), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14668] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
    ACTIONS(812), 2,
      anon_sym_BSLASHn,
      sym_identifier,
  [14685] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      sym_identifier,
    ACTIONS(819), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(309), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14700] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      sym_identifier,
    ACTIONS(824), 2,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
    STATE(309), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [14715] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(826), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(828), 2,
      sym__string_content,
      sym_escape_sequence,
  [14729] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(832), 2,
      sym__string_content,
      sym_escape_sequence,
  [14743] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(828), 2,
      sym__string_content,
      sym_escape_sequence,
  [14757] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(828), 2,
      sym__string_content,
      sym_escape_sequence,
  [14771] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
    STATE(313), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(841), 2,
      sym__string_content,
      sym_escape_sequence,
  [14785] = 3,
    ACTIONS(525), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(523), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14797] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14807] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BSLASHn,
      sym_identifier,
  [14817] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    STATE(310), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(850), 2,
      sym__string_content,
      sym_escape_sequence,
  [14831] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(852), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_if,
    STATE(170), 2,
      sym_block,
      sym_if_statement,
  [14855] = 5,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      anon_sym_LF,
    ACTIONS(856), 1,
      anon_sym_COLON,
    ACTIONS(858), 1,
      anon_sym_EQ,
  [14871] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(860), 1,
      sym_identifier,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    STATE(388), 1,
      sym_enum_variant_list,
    STATE(390), 1,
      sym_enum_integral_type,
  [14887] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(866), 1,
      anon_sym_EQ,
    ACTIONS(864), 3,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [14899] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(868), 1,
      anon_sym_if,
    STATE(386), 2,
      sym_block,
      sym_if_statement,
  [14913] = 5,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(870), 1,
      anon_sym_COLON,
    ACTIONS(872), 1,
      anon_sym_EQ,
  [14929] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(876), 2,
      sym__string_content,
      sym_escape_sequence,
  [14943] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(529), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14955] = 3,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(515), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14967] = 3,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(519), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [14979] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(878), 1,
      sym_identifier,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_enum_variant_list,
    STATE(377), 1,
      sym_enum_integral_type,
  [14995] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(882), 1,
      sym_identifier,
    STATE(393), 1,
      sym_enum_variant_list,
    STATE(395), 1,
      sym_enum_integral_type,
  [15011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(884), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15021] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(886), 1,
      sym_identifier,
    STATE(157), 1,
      sym_enum_variant_list,
    STATE(394), 1,
      sym_enum_integral_type,
  [15037] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(888), 1,
      anon_sym_DQUOTE,
    STATE(311), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(828), 2,
      sym__string_content,
      sym_escape_sequence,
  [15051] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15061] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(894), 2,
      sym__string_content,
      sym_escape_sequence,
  [15075] = 5,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(533), 1,
      anon_sym_SEMI,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(896), 1,
      anon_sym_else,
    STATE(374), 1,
      sym_else_clause,
  [15091] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 4,
      anon_sym_EQ,
      anon_sym_BSLASHn,
      anon_sym_RBRACE,
      sym_identifier,
  [15101] = 4,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_LF,
    ACTIONS(900), 1,
      anon_sym_EQ,
  [15114] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15127] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15140] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15153] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(571), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15164] = 4,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(597), 1,
      anon_sym_LF,
    ACTIONS(912), 1,
      anon_sym_EQ,
  [15177] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(601), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15188] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(607), 1,
      anon_sym_LF,
    ACTIONS(605), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [15199] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15212] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_BSLASHn,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_field_declaration_list_repeat2,
  [15225] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(914), 1,
      anon_sym_COLON,
    STATE(383), 1,
      sym_enum_variant_list,
  [15238] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_parameters_repeat1,
  [15251] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15264] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 1,
      anon_sym_DASH_GT,
    STATE(131), 1,
      sym_block,
  [15277] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15290] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15303] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [15316] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(382), 1,
      sym_field_declaration,
    STATE(425), 1,
      sym__field_identifier,
  [15329] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(914), 1,
      anon_sym_COLON,
    STATE(407), 1,
      sym_enum_variant_list,
  [15342] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_ordered_field_declaration_list_repeat1,
  [15355] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15368] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(914), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_enum_variant_list,
  [15381] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(930), 1,
      anon_sym_BSLASHn,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [15394] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(933), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [15407] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [15420] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_BSLASHn,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      aux_sym_field_declaration_list_repeat2,
  [15433] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(939), 1,
      anon_sym_BSLASHn,
    STATE(365), 1,
      aux_sym_field_declaration_list_repeat2,
  [15446] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15459] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_BSLASHn,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_enum_variant_list_repeat2,
  [15472] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_parameters_repeat1,
  [15485] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_arguments_repeat2,
  [15498] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    ACTIONS(914), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_enum_variant_list,
  [15511] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    STATE(371), 1,
      aux_sym_parameters_repeat1,
  [15524] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(951), 2,
      sym_float_literal,
      sym_integer_literal,
  [15532] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      sym_parameters,
  [15542] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    ACTIONS(617), 1,
      anon_sym_LF,
  [15552] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LF,
  [15562] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(955), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_enum_variant_list,
  [15580] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15588] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(922), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_block,
  [15598] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(949), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15606] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      anon_sym_LF,
  [15616] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15624] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    ACTIONS(695), 1,
      anon_sym_LF,
  [15634] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(959), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15642] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    ACTIONS(659), 1,
      anon_sym_LF,
  [15652] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    ACTIONS(677), 1,
      anon_sym_LF,
  [15662] = 3,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
  [15672] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(637), 1,
      anon_sym_LF,
  [15682] = 3,
    ACTIONS(354), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      anon_sym_LF,
    ACTIONS(527), 1,
      sym_line_comment,
  [15692] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    STATE(381), 1,
      sym_enum_variant_list,
  [15702] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_SEMI,
    ACTIONS(633), 1,
      anon_sym_LF,
  [15712] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15720] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(655), 1,
      anon_sym_LF,
  [15730] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_enum_variant_list,
  [15740] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    STATE(391), 1,
      sym_enum_variant_list,
  [15750] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15758] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(963), 2,
      sym_float_literal,
      sym_integer_literal,
  [15766] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      anon_sym_LF,
  [15776] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    ACTIONS(681), 1,
      anon_sym_LF,
  [15786] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15794] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 1,
      anon_sym_SEMI,
  [15804] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [15812] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(669), 1,
      anon_sym_LF,
  [15822] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15830] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 2,
      sym_float_literal,
      sym_integer_literal,
  [15838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15846] = 3,
    ACTIONS(527), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
    ACTIONS(629), 1,
      anon_sym_LF,
  [15856] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 2,
      anon_sym_in,
      anon_sym_COLON,
  [15864] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
  [15871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 1,
      anon_sym_in,
  [15878] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 1,
      anon_sym_enum,
  [15885] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [15892] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(977), 1,
      anon_sym_COLON,
  [15899] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      ts_builtin_sym_end,
  [15906] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
  [15913] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
  [15920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [15927] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(983), 1,
      anon_sym_enum,
  [15934] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 1,
      anon_sym_COLON,
  [15941] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(987), 1,
      sym_identifier,
  [15948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 1,
      anon_sym_RBRACK,
  [15955] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [15962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(991), 1,
      anon_sym_COLON,
  [15969] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 1,
      anon_sym_RBRACK,
  [15976] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(995), 1,
      anon_sym_COLON,
  [15983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      anon_sym_enum,
  [15990] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(999), 1,
      anon_sym_in,
  [15997] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1001), 1,
      anon_sym_in,
  [16004] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1003), 1,
      anon_sym_in,
  [16011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
  [16018] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [16025] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 297,
  [SMALL_STATE(6)] = 384,
  [SMALL_STATE(7)] = 471,
  [SMALL_STATE(8)] = 558,
  [SMALL_STATE(9)] = 642,
  [SMALL_STATE(10)] = 740,
  [SMALL_STATE(11)] = 824,
  [SMALL_STATE(12)] = 908,
  [SMALL_STATE(13)] = 992,
  [SMALL_STATE(14)] = 1090,
  [SMALL_STATE(15)] = 1174,
  [SMALL_STATE(16)] = 1272,
  [SMALL_STATE(17)] = 1370,
  [SMALL_STATE(18)] = 1468,
  [SMALL_STATE(19)] = 1566,
  [SMALL_STATE(20)] = 1664,
  [SMALL_STATE(21)] = 1748,
  [SMALL_STATE(22)] = 1832,
  [SMALL_STATE(23)] = 1916,
  [SMALL_STATE(24)] = 2000,
  [SMALL_STATE(25)] = 2098,
  [SMALL_STATE(26)] = 2196,
  [SMALL_STATE(27)] = 2294,
  [SMALL_STATE(28)] = 2378,
  [SMALL_STATE(29)] = 2462,
  [SMALL_STATE(30)] = 2546,
  [SMALL_STATE(31)] = 2644,
  [SMALL_STATE(32)] = 2725,
  [SMALL_STATE(33)] = 2806,
  [SMALL_STATE(34)] = 2887,
  [SMALL_STATE(35)] = 2968,
  [SMALL_STATE(36)] = 3049,
  [SMALL_STATE(37)] = 3130,
  [SMALL_STATE(38)] = 3180,
  [SMALL_STATE(39)] = 3230,
  [SMALL_STATE(40)] = 3280,
  [SMALL_STATE(41)] = 3355,
  [SMALL_STATE(42)] = 3420,
  [SMALL_STATE(43)] = 3487,
  [SMALL_STATE(44)] = 3566,
  [SMALL_STATE(45)] = 3621,
  [SMALL_STATE(46)] = 3696,
  [SMALL_STATE(47)] = 3767,
  [SMALL_STATE(48)] = 3842,
  [SMALL_STATE(49)] = 3891,
  [SMALL_STATE(50)] = 3950,
  [SMALL_STATE(51)] = 4013,
  [SMALL_STATE(52)] = 4088,
  [SMALL_STATE(53)] = 4137,
  [SMALL_STATE(54)] = 4192,
  [SMALL_STATE(55)] = 4267,
  [SMALL_STATE(56)] = 4342,
  [SMALL_STATE(57)] = 4411,
  [SMALL_STATE(58)] = 4486,
  [SMALL_STATE(59)] = 4537,
  [SMALL_STATE(60)] = 4585,
  [SMALL_STATE(61)] = 4633,
  [SMALL_STATE(62)] = 4681,
  [SMALL_STATE(63)] = 4729,
  [SMALL_STATE(64)] = 4777,
  [SMALL_STATE(65)] = 4825,
  [SMALL_STATE(66)] = 4873,
  [SMALL_STATE(67)] = 4921,
  [SMALL_STATE(68)] = 4969,
  [SMALL_STATE(69)] = 5017,
  [SMALL_STATE(70)] = 5083,
  [SMALL_STATE(71)] = 5151,
  [SMALL_STATE(72)] = 5216,
  [SMALL_STATE(73)] = 5281,
  [SMALL_STATE(74)] = 5343,
  [SMALL_STATE(75)] = 5405,
  [SMALL_STATE(76)] = 5458,
  [SMALL_STATE(77)] = 5511,
  [SMALL_STATE(78)] = 5564,
  [SMALL_STATE(79)] = 5617,
  [SMALL_STATE(80)] = 5670,
  [SMALL_STATE(81)] = 5723,
  [SMALL_STATE(82)] = 5776,
  [SMALL_STATE(83)] = 5829,
  [SMALL_STATE(84)] = 5882,
  [SMALL_STATE(85)] = 5919,
  [SMALL_STATE(86)] = 5954,
  [SMALL_STATE(87)] = 5989,
  [SMALL_STATE(88)] = 6024,
  [SMALL_STATE(89)] = 6064,
  [SMALL_STATE(90)] = 6114,
  [SMALL_STATE(91)] = 6166,
  [SMALL_STATE(92)] = 6206,
  [SMALL_STATE(93)] = 6240,
  [SMALL_STATE(94)] = 6276,
  [SMALL_STATE(95)] = 6324,
  [SMALL_STATE(96)] = 6378,
  [SMALL_STATE(97)] = 6422,
  [SMALL_STATE(98)] = 6478,
  [SMALL_STATE(99)] = 6511,
  [SMALL_STATE(100)] = 6548,
  [SMALL_STATE(101)] = 6581,
  [SMALL_STATE(102)] = 6614,
  [SMALL_STATE(103)] = 6647,
  [SMALL_STATE(104)] = 6680,
  [SMALL_STATE(105)] = 6713,
  [SMALL_STATE(106)] = 6746,
  [SMALL_STATE(107)] = 6779,
  [SMALL_STATE(108)] = 6812,
  [SMALL_STATE(109)] = 6845,
  [SMALL_STATE(110)] = 6878,
  [SMALL_STATE(111)] = 6911,
  [SMALL_STATE(112)] = 6948,
  [SMALL_STATE(113)] = 6981,
  [SMALL_STATE(114)] = 7014,
  [SMALL_STATE(115)] = 7047,
  [SMALL_STATE(116)] = 7080,
  [SMALL_STATE(117)] = 7125,
  [SMALL_STATE(118)] = 7158,
  [SMALL_STATE(119)] = 7195,
  [SMALL_STATE(120)] = 7228,
  [SMALL_STATE(121)] = 7261,
  [SMALL_STATE(122)] = 7293,
  [SMALL_STATE(123)] = 7325,
  [SMALL_STATE(124)] = 7357,
  [SMALL_STATE(125)] = 7397,
  [SMALL_STATE(126)] = 7441,
  [SMALL_STATE(127)] = 7473,
  [SMALL_STATE(128)] = 7521,
  [SMALL_STATE(129)] = 7553,
  [SMALL_STATE(130)] = 7599,
  [SMALL_STATE(131)] = 7655,
  [SMALL_STATE(132)] = 7687,
  [SMALL_STATE(133)] = 7737,
  [SMALL_STATE(134)] = 7769,
  [SMALL_STATE(135)] = 7803,
  [SMALL_STATE(136)] = 7837,
  [SMALL_STATE(137)] = 7869,
  [SMALL_STATE(138)] = 7911,
  [SMALL_STATE(139)] = 7949,
  [SMALL_STATE(140)] = 7981,
  [SMALL_STATE(141)] = 8015,
  [SMALL_STATE(142)] = 8053,
  [SMALL_STATE(143)] = 8085,
  [SMALL_STATE(144)] = 8116,
  [SMALL_STATE(145)] = 8175,
  [SMALL_STATE(146)] = 8206,
  [SMALL_STATE(147)] = 8237,
  [SMALL_STATE(148)] = 8268,
  [SMALL_STATE(149)] = 8299,
  [SMALL_STATE(150)] = 8330,
  [SMALL_STATE(151)] = 8389,
  [SMALL_STATE(152)] = 8420,
  [SMALL_STATE(153)] = 8479,
  [SMALL_STATE(154)] = 8534,
  [SMALL_STATE(155)] = 8593,
  [SMALL_STATE(156)] = 8624,
  [SMALL_STATE(157)] = 8683,
  [SMALL_STATE(158)] = 8714,
  [SMALL_STATE(159)] = 8745,
  [SMALL_STATE(160)] = 8776,
  [SMALL_STATE(161)] = 8807,
  [SMALL_STATE(162)] = 8866,
  [SMALL_STATE(163)] = 8897,
  [SMALL_STATE(164)] = 8928,
  [SMALL_STATE(165)] = 8959,
  [SMALL_STATE(166)] = 8990,
  [SMALL_STATE(167)] = 9021,
  [SMALL_STATE(168)] = 9052,
  [SMALL_STATE(169)] = 9083,
  [SMALL_STATE(170)] = 9114,
  [SMALL_STATE(171)] = 9145,
  [SMALL_STATE(172)] = 9176,
  [SMALL_STATE(173)] = 9231,
  [SMALL_STATE(174)] = 9290,
  [SMALL_STATE(175)] = 9321,
  [SMALL_STATE(176)] = 9352,
  [SMALL_STATE(177)] = 9411,
  [SMALL_STATE(178)] = 9442,
  [SMALL_STATE(179)] = 9474,
  [SMALL_STATE(180)] = 9530,
  [SMALL_STATE(181)] = 9580,
  [SMALL_STATE(182)] = 9616,
  [SMALL_STATE(183)] = 9652,
  [SMALL_STATE(184)] = 9688,
  [SMALL_STATE(185)] = 9744,
  [SMALL_STATE(186)] = 9798,
  [SMALL_STATE(187)] = 9830,
  [SMALL_STATE(188)] = 9862,
  [SMALL_STATE(189)] = 9898,
  [SMALL_STATE(190)] = 9934,
  [SMALL_STATE(191)] = 9990,
  [SMALL_STATE(192)] = 10044,
  [SMALL_STATE(193)] = 10100,
  [SMALL_STATE(194)] = 10136,
  [SMALL_STATE(195)] = 10172,
  [SMALL_STATE(196)] = 10228,
  [SMALL_STATE(197)] = 10264,
  [SMALL_STATE(198)] = 10300,
  [SMALL_STATE(199)] = 10352,
  [SMALL_STATE(200)] = 10402,
  [SMALL_STATE(201)] = 10452,
  [SMALL_STATE(202)] = 10484,
  [SMALL_STATE(203)] = 10534,
  [SMALL_STATE(204)] = 10572,
  [SMALL_STATE(205)] = 10614,
  [SMALL_STATE(206)] = 10660,
  [SMALL_STATE(207)] = 10704,
  [SMALL_STATE(208)] = 10754,
  [SMALL_STATE(209)] = 10802,
  [SMALL_STATE(210)] = 10842,
  [SMALL_STATE(211)] = 10878,
  [SMALL_STATE(212)] = 10934,
  [SMALL_STATE(213)] = 10984,
  [SMALL_STATE(214)] = 11034,
  [SMALL_STATE(215)] = 11090,
  [SMALL_STATE(216)] = 11126,
  [SMALL_STATE(217)] = 11162,
  [SMALL_STATE(218)] = 11218,
  [SMALL_STATE(219)] = 11254,
  [SMALL_STATE(220)] = 11290,
  [SMALL_STATE(221)] = 11319,
  [SMALL_STATE(222)] = 11348,
  [SMALL_STATE(223)] = 11377,
  [SMALL_STATE(224)] = 11406,
  [SMALL_STATE(225)] = 11435,
  [SMALL_STATE(226)] = 11464,
  [SMALL_STATE(227)] = 11493,
  [SMALL_STATE(228)] = 11522,
  [SMALL_STATE(229)] = 11551,
  [SMALL_STATE(230)] = 11580,
  [SMALL_STATE(231)] = 11609,
  [SMALL_STATE(232)] = 11638,
  [SMALL_STATE(233)] = 11667,
  [SMALL_STATE(234)] = 11696,
  [SMALL_STATE(235)] = 11725,
  [SMALL_STATE(236)] = 11771,
  [SMALL_STATE(237)] = 11817,
  [SMALL_STATE(238)] = 11863,
  [SMALL_STATE(239)] = 11909,
  [SMALL_STATE(240)] = 11955,
  [SMALL_STATE(241)] = 12001,
  [SMALL_STATE(242)] = 12047,
  [SMALL_STATE(243)] = 12093,
  [SMALL_STATE(244)] = 12139,
  [SMALL_STATE(245)] = 12185,
  [SMALL_STATE(246)] = 12231,
  [SMALL_STATE(247)] = 12277,
  [SMALL_STATE(248)] = 12323,
  [SMALL_STATE(249)] = 12369,
  [SMALL_STATE(250)] = 12415,
  [SMALL_STATE(251)] = 12461,
  [SMALL_STATE(252)] = 12507,
  [SMALL_STATE(253)] = 12553,
  [SMALL_STATE(254)] = 12599,
  [SMALL_STATE(255)] = 12645,
  [SMALL_STATE(256)] = 12691,
  [SMALL_STATE(257)] = 12737,
  [SMALL_STATE(258)] = 12783,
  [SMALL_STATE(259)] = 12829,
  [SMALL_STATE(260)] = 12875,
  [SMALL_STATE(261)] = 12921,
  [SMALL_STATE(262)] = 12967,
  [SMALL_STATE(263)] = 13013,
  [SMALL_STATE(264)] = 13059,
  [SMALL_STATE(265)] = 13105,
  [SMALL_STATE(266)] = 13151,
  [SMALL_STATE(267)] = 13197,
  [SMALL_STATE(268)] = 13243,
  [SMALL_STATE(269)] = 13289,
  [SMALL_STATE(270)] = 13335,
  [SMALL_STATE(271)] = 13381,
  [SMALL_STATE(272)] = 13429,
  [SMALL_STATE(273)] = 13475,
  [SMALL_STATE(274)] = 13521,
  [SMALL_STATE(275)] = 13567,
  [SMALL_STATE(276)] = 13613,
  [SMALL_STATE(277)] = 13659,
  [SMALL_STATE(278)] = 13705,
  [SMALL_STATE(279)] = 13751,
  [SMALL_STATE(280)] = 13797,
  [SMALL_STATE(281)] = 13843,
  [SMALL_STATE(282)] = 13889,
  [SMALL_STATE(283)] = 13935,
  [SMALL_STATE(284)] = 13981,
  [SMALL_STATE(285)] = 14027,
  [SMALL_STATE(286)] = 14073,
  [SMALL_STATE(287)] = 14119,
  [SMALL_STATE(288)] = 14165,
  [SMALL_STATE(289)] = 14211,
  [SMALL_STATE(290)] = 14257,
  [SMALL_STATE(291)] = 14303,
  [SMALL_STATE(292)] = 14349,
  [SMALL_STATE(293)] = 14395,
  [SMALL_STATE(294)] = 14441,
  [SMALL_STATE(295)] = 14464,
  [SMALL_STATE(296)] = 14483,
  [SMALL_STATE(297)] = 14495,
  [SMALL_STATE(298)] = 14515,
  [SMALL_STATE(299)] = 14533,
  [SMALL_STATE(300)] = 14551,
  [SMALL_STATE(301)] = 14571,
  [SMALL_STATE(302)] = 14583,
  [SMALL_STATE(303)] = 14595,
  [SMALL_STATE(304)] = 14615,
  [SMALL_STATE(305)] = 14635,
  [SMALL_STATE(306)] = 14653,
  [SMALL_STATE(307)] = 14668,
  [SMALL_STATE(308)] = 14685,
  [SMALL_STATE(309)] = 14700,
  [SMALL_STATE(310)] = 14715,
  [SMALL_STATE(311)] = 14729,
  [SMALL_STATE(312)] = 14743,
  [SMALL_STATE(313)] = 14757,
  [SMALL_STATE(314)] = 14771,
  [SMALL_STATE(315)] = 14785,
  [SMALL_STATE(316)] = 14797,
  [SMALL_STATE(317)] = 14807,
  [SMALL_STATE(318)] = 14817,
  [SMALL_STATE(319)] = 14831,
  [SMALL_STATE(320)] = 14841,
  [SMALL_STATE(321)] = 14855,
  [SMALL_STATE(322)] = 14871,
  [SMALL_STATE(323)] = 14887,
  [SMALL_STATE(324)] = 14899,
  [SMALL_STATE(325)] = 14913,
  [SMALL_STATE(326)] = 14929,
  [SMALL_STATE(327)] = 14943,
  [SMALL_STATE(328)] = 14955,
  [SMALL_STATE(329)] = 14967,
  [SMALL_STATE(330)] = 14979,
  [SMALL_STATE(331)] = 14995,
  [SMALL_STATE(332)] = 15011,
  [SMALL_STATE(333)] = 15021,
  [SMALL_STATE(334)] = 15037,
  [SMALL_STATE(335)] = 15051,
  [SMALL_STATE(336)] = 15061,
  [SMALL_STATE(337)] = 15075,
  [SMALL_STATE(338)] = 15091,
  [SMALL_STATE(339)] = 15101,
  [SMALL_STATE(340)] = 15114,
  [SMALL_STATE(341)] = 15127,
  [SMALL_STATE(342)] = 15140,
  [SMALL_STATE(343)] = 15153,
  [SMALL_STATE(344)] = 15164,
  [SMALL_STATE(345)] = 15177,
  [SMALL_STATE(346)] = 15188,
  [SMALL_STATE(347)] = 15199,
  [SMALL_STATE(348)] = 15212,
  [SMALL_STATE(349)] = 15225,
  [SMALL_STATE(350)] = 15238,
  [SMALL_STATE(351)] = 15251,
  [SMALL_STATE(352)] = 15264,
  [SMALL_STATE(353)] = 15277,
  [SMALL_STATE(354)] = 15290,
  [SMALL_STATE(355)] = 15303,
  [SMALL_STATE(356)] = 15316,
  [SMALL_STATE(357)] = 15329,
  [SMALL_STATE(358)] = 15342,
  [SMALL_STATE(359)] = 15355,
  [SMALL_STATE(360)] = 15368,
  [SMALL_STATE(361)] = 15381,
  [SMALL_STATE(362)] = 15394,
  [SMALL_STATE(363)] = 15407,
  [SMALL_STATE(364)] = 15420,
  [SMALL_STATE(365)] = 15433,
  [SMALL_STATE(366)] = 15446,
  [SMALL_STATE(367)] = 15459,
  [SMALL_STATE(368)] = 15472,
  [SMALL_STATE(369)] = 15485,
  [SMALL_STATE(370)] = 15498,
  [SMALL_STATE(371)] = 15511,
  [SMALL_STATE(372)] = 15524,
  [SMALL_STATE(373)] = 15532,
  [SMALL_STATE(374)] = 15542,
  [SMALL_STATE(375)] = 15552,
  [SMALL_STATE(376)] = 15562,
  [SMALL_STATE(377)] = 15570,
  [SMALL_STATE(378)] = 15580,
  [SMALL_STATE(379)] = 15588,
  [SMALL_STATE(380)] = 15598,
  [SMALL_STATE(381)] = 15606,
  [SMALL_STATE(382)] = 15616,
  [SMALL_STATE(383)] = 15624,
  [SMALL_STATE(384)] = 15634,
  [SMALL_STATE(385)] = 15642,
  [SMALL_STATE(386)] = 15652,
  [SMALL_STATE(387)] = 15662,
  [SMALL_STATE(388)] = 15672,
  [SMALL_STATE(389)] = 15682,
  [SMALL_STATE(390)] = 15692,
  [SMALL_STATE(391)] = 15702,
  [SMALL_STATE(392)] = 15712,
  [SMALL_STATE(393)] = 15720,
  [SMALL_STATE(394)] = 15730,
  [SMALL_STATE(395)] = 15740,
  [SMALL_STATE(396)] = 15750,
  [SMALL_STATE(397)] = 15758,
  [SMALL_STATE(398)] = 15766,
  [SMALL_STATE(399)] = 15776,
  [SMALL_STATE(400)] = 15786,
  [SMALL_STATE(401)] = 15794,
  [SMALL_STATE(402)] = 15804,
  [SMALL_STATE(403)] = 15812,
  [SMALL_STATE(404)] = 15822,
  [SMALL_STATE(405)] = 15830,
  [SMALL_STATE(406)] = 15838,
  [SMALL_STATE(407)] = 15846,
  [SMALL_STATE(408)] = 15856,
  [SMALL_STATE(409)] = 15864,
  [SMALL_STATE(410)] = 15871,
  [SMALL_STATE(411)] = 15878,
  [SMALL_STATE(412)] = 15885,
  [SMALL_STATE(413)] = 15892,
  [SMALL_STATE(414)] = 15899,
  [SMALL_STATE(415)] = 15906,
  [SMALL_STATE(416)] = 15913,
  [SMALL_STATE(417)] = 15920,
  [SMALL_STATE(418)] = 15927,
  [SMALL_STATE(419)] = 15934,
  [SMALL_STATE(420)] = 15941,
  [SMALL_STATE(421)] = 15948,
  [SMALL_STATE(422)] = 15955,
  [SMALL_STATE(423)] = 15962,
  [SMALL_STATE(424)] = 15969,
  [SMALL_STATE(425)] = 15976,
  [SMALL_STATE(426)] = 15983,
  [SMALL_STATE(427)] = 15990,
  [SMALL_STATE(428)] = 15997,
  [SMALL_STATE(429)] = 16004,
  [SMALL_STATE(430)] = 16011,
  [SMALL_STATE(431)] = 16018,
  [SMALL_STATE(432)] = 16025,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(375),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(420),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(252),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(270),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(159),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(426),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(333),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(289),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(318),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(251),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(37),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 14),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 14),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 14),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 24),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 24),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 6, .production_id = 24),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 6, .production_id = 24),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 20),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(404),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(406),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(405),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(408),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(336),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(408),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(85),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2, .production_id = 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, .production_id = 6),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_specifier, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_specifier, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 2, .production_id = 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 23),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 23),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 16),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 27),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 27),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 13),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 12),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 12),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 17),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 7),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 11),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 22),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 25),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 19),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 18),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 6),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(413),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1), SHIFT(335),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(295),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(311),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_field_declaration_list, 2), REDUCE(sym_ordered_field_declaration_list, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 28),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 15),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2), SHIFT_REPEAT(356),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_field_declaration_list_repeat1, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(31),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(306),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(305),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 26),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 13),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 21),
  [979] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boxed_modifier, 1),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
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
