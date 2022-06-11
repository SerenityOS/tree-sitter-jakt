#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 602
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 2
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 36

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_while = 4,
  anon_sym_PLUS_PLUS = 5,
  anon_sym_DASH_DASH = 6,
  sym_continue_statement = 7,
  anon_sym_throw = 8,
  anon_sym_for = 9,
  anon_sym_in = 10,
  anon_sym_DOT_DOT = 11,
  anon_sym_DOT = 12,
  anon_sym_COLON_COLON = 13,
  anon_sym_is = 14,
  anon_sym_as_QMARK = 15,
  anon_sym_as_BANG = 16,
  anon_sym_u8 = 17,
  anon_sym_i8 = 18,
  anon_sym_u16 = 19,
  anon_sym_i16 = 20,
  anon_sym_u32 = 21,
  anon_sym_i32 = 22,
  anon_sym_u64 = 23,
  anon_sym_i64 = 24,
  anon_sym_u128 = 25,
  anon_sym_i128 = 26,
  anon_sym_isize = 27,
  anon_sym_usize = 28,
  anon_sym_uz = 29,
  anon_sym_f32 = 30,
  anon_sym_f64 = 31,
  anon_sym_c_int = 32,
  anon_sym_bool = 33,
  anon_sym_String = 34,
  anon_sym_c_char = 35,
  anon_sym_LPAREN = 36,
  anon_sym_COMMA = 37,
  anon_sym_RPAREN = 38,
  anon_sym_COLON = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  anon_sym_let = 42,
  anon_sym_EQ = 43,
  anon_sym_mut = 44,
  anon_sym_boxed = 45,
  anon_sym_enum = 46,
  anon_sym_LBRACE = 47,
  anon_sym_RBRACE = 48,
  anon_sym_struct = 49,
  anon_sym_class = 50,
  anon_sym_DASH = 51,
  anon_sym_return = 52,
  anon_sym_AMP = 53,
  anon_sym_PIPE = 54,
  anon_sym_CARET = 55,
  anon_sym_EQ_EQ = 56,
  anon_sym_BANG_EQ = 57,
  anon_sym_LT = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_GT = 60,
  anon_sym_GT_EQ = 61,
  anon_sym_LT_LT = 62,
  anon_sym_GT_GT = 63,
  anon_sym_PLUS = 64,
  anon_sym_PLUS_EQ = 65,
  anon_sym_STAR = 66,
  anon_sym_SLASH = 67,
  anon_sym_PERCENT = 68,
  sym_integer_literal = 69,
  sym_binary_literal = 70,
  aux_sym_string_literal_token1 = 71,
  anon_sym_DQUOTE = 72,
  sym_char_literal = 73,
  sym_byte_literal = 74,
  sym_escape_sequence = 75,
  anon_sym_function = 76,
  anon_sym_DASH_GT = 77,
  sym_throws_specifier = 78,
  anon_sym_EQ_GT = 79,
  sym_anonymous_specifier = 80,
  anon_sym_if = 81,
  anon_sym_else = 82,
  anon_sym_true = 83,
  anon_sym_false = 84,
  sym_line_comment = 85,
  sym__string_content = 86,
  sym_float_literal = 87,
  sym_source_file = 88,
  sym__expression = 89,
  sym_while_statement = 90,
  sym_increment_statement = 91,
  sym_decrement_statement = 92,
  sym_throw_statement = 93,
  sym_for_expression = 94,
  sym_call_expression = 95,
  sym_range_expression = 96,
  sym_field_expression = 97,
  sym_static_member_expression = 98,
  sym_is_expression = 99,
  sym_type_conversion_expression = 100,
  sym_arguments = 101,
  sym_argument = 102,
  sym__top_level_declaration = 103,
  sym__type = 104,
  sym_array_type = 105,
  sym_let_declaration = 106,
  sym_mutable_declaration = 107,
  sym_boxed_specifier = 108,
  sym_enum_declaration = 109,
  sym_enum_integral_type = 110,
  sym_enum_variant_list = 111,
  sym_enum_variant = 112,
  sym_field_declaration_list = 113,
  sym_field_declaration = 114,
  sym__field_identifier = 115,
  sym_ordered_field_declaration_list = 116,
  sym_struct_declaration = 117,
  sym_class_declaration = 118,
  sym_unary_expression = 119,
  sym_return_statement = 120,
  sym_binary_expression = 121,
  sym__literal = 122,
  sym__pattern = 123,
  sym__literal_pattern = 124,
  sym_negative_literal = 125,
  sym_string_literal = 126,
  sym_function_declaration = 127,
  sym_return_expression = 128,
  sym_parameters = 129,
  sym_parameter = 130,
  sym_block = 131,
  sym_if_statement = 132,
  sym_else_clause = 133,
  sym_boolean_literal = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym_arguments_repeat1 = 136,
  aux_sym_arguments_repeat2 = 137,
  aux_sym_enum_variant_list_repeat1 = 138,
  aux_sym_enum_variant_list_repeat2 = 139,
  aux_sym_field_declaration_list_repeat1 = 140,
  aux_sym_field_declaration_list_repeat2 = 141,
  aux_sym_string_literal_repeat1 = 142,
  aux_sym_parameters_repeat1 = 143,
  aux_sym_block_repeat1 = 144,
  alias_sym_field_identifier = 145,
  alias_sym_type_identifier = 146,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_while] = "while",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [sym_continue_statement] = "continue_statement",
  [anon_sym_throw] = "throw",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_is] = "is",
  [anon_sym_as_QMARK] = "as\?",
  [anon_sym_as_BANG] = "as!",
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
  [anon_sym_uz] = "primitive_type",
  [anon_sym_f32] = "primitive_type",
  [anon_sym_f64] = "primitive_type",
  [anon_sym_c_int] = "primitive_type",
  [anon_sym_bool] = "primitive_type",
  [anon_sym_String] = "primitive_type",
  [anon_sym_c_char] = "primitive_type",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_mut] = "mut",
  [anon_sym_boxed] = "boxed",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_struct] = "struct",
  [anon_sym_class] = "class",
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
  [sym_byte_literal] = "byte_literal",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [sym_throws_specifier] = "throws_specifier",
  [anon_sym_EQ_GT] = "=>",
  [sym_anonymous_specifier] = "anonymous_specifier",
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
  [sym_throw_statement] = "throw_statement",
  [sym_for_expression] = "for_expression",
  [sym_call_expression] = "call_expression",
  [sym_range_expression] = "range_expression",
  [sym_field_expression] = "field_expression",
  [sym_static_member_expression] = "static_member_expression",
  [sym_is_expression] = "is_expression",
  [sym_type_conversion_expression] = "type_conversion_expression",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_let_declaration] = "let_declaration",
  [sym_mutable_declaration] = "mutable_declaration",
  [sym_boxed_specifier] = "boxed_specifier",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_integral_type] = "enum_integral_type",
  [sym_enum_variant_list] = "enum_variant_list",
  [sym_enum_variant] = "enum_variant",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym__field_identifier] = "_field_identifier",
  [sym_ordered_field_declaration_list] = "ordered_field_declaration_list",
  [sym_struct_declaration] = "struct_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_unary_expression] = "unary_expression",
  [sym_return_statement] = "return_statement",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym__pattern] = "_pattern",
  [sym__literal_pattern] = "_literal_pattern",
  [sym_negative_literal] = "negative_literal",
  [sym_string_literal] = "string_literal",
  [sym_function_declaration] = "function_declaration",
  [sym_return_expression] = "return_expression",
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
  [sym_continue_statement] = sym_continue_statement,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_as_QMARK] = anon_sym_as_QMARK,
  [anon_sym_as_BANG] = anon_sym_as_BANG,
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
  [anon_sym_uz] = anon_sym_u8,
  [anon_sym_f32] = anon_sym_u8,
  [anon_sym_f64] = anon_sym_u8,
  [anon_sym_c_int] = anon_sym_u8,
  [anon_sym_bool] = anon_sym_u8,
  [anon_sym_String] = anon_sym_u8,
  [anon_sym_c_char] = anon_sym_u8,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_boxed] = anon_sym_boxed,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_class] = anon_sym_class,
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
  [sym_byte_literal] = sym_byte_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_throws_specifier] = sym_throws_specifier,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_anonymous_specifier] = sym_anonymous_specifier,
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
  [sym_throw_statement] = sym_throw_statement,
  [sym_for_expression] = sym_for_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_range_expression] = sym_range_expression,
  [sym_field_expression] = sym_field_expression,
  [sym_static_member_expression] = sym_static_member_expression,
  [sym_is_expression] = sym_is_expression,
  [sym_type_conversion_expression] = sym_type_conversion_expression,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_let_declaration] = sym_let_declaration,
  [sym_mutable_declaration] = sym_mutable_declaration,
  [sym_boxed_specifier] = sym_boxed_specifier,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_enum_integral_type] = sym_enum_integral_type,
  [sym_enum_variant_list] = sym_enum_variant_list,
  [sym_enum_variant] = sym_enum_variant,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym__field_identifier] = sym__field_identifier,
  [sym_ordered_field_declaration_list] = sym_ordered_field_declaration_list,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_unary_expression] = sym_unary_expression,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym__pattern] = sym__pattern,
  [sym__literal_pattern] = sym__literal_pattern,
  [sym_negative_literal] = sym_negative_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_function_declaration] = sym_function_declaration,
  [sym_return_expression] = sym_return_expression,
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
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_throw] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_BANG] = {
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
  [anon_sym_uz] = {
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
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
  [sym_byte_literal] = {
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
  [sym_throws_specifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_anonymous_specifier] = {
    .visible = true,
    .named = true,
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
  [sym_throw_statement] = {
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
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_static_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_is_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_conversion_expression] = {
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
  [sym_boxed_specifier] = {
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
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
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
  [sym_return_expression] = {
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
  field_field = 7,
  field_function = 8,
  field_label = 9,
  field_left = 10,
  field_name = 11,
  field_operator = 12,
  field_parameters = 13,
  field_pattern = 14,
  field_return_type = 15,
  field_right = 16,
  field_throws = 17,
  field_type = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_field] = "field",
  [field_function] = "function",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_throws] = "throws",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 2},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 2},
  [14] = {.index = 16, .length = 1},
  [15] = {.index = 17, .length = 3},
  [16] = {.index = 20, .length = 1},
  [18] = {.index = 21, .length = 2},
  [19] = {.index = 23, .length = 2},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 3},
  [22] = {.index = 30, .length = 3},
  [23] = {.index = 33, .length = 2},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 3},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 4},
  [28] = {.index = 44, .length = 1},
  [29] = {.index = 45, .length = 1},
  [30] = {.index = 46, .length = 3},
  [31] = {.index = 49, .length = 3},
  [32] = {.index = 52, .length = 2},
  [33] = {.index = 54, .length = 2},
  [34] = {.index = 56, .length = 4},
  [35] = {.index = 60, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_pattern, 1},
  [2] =
    {field_body, 1},
  [3] =
    {field_arguments, 1},
    {field_function, 0},
  [5] =
    {field_body, 2},
    {field_condition, 1},
  [7] =
    {field_name, 0},
  [8] =
    {field_body, 2},
    {field_name, 1},
  [10] =
    {field_condition, 1},
    {field_consequence, 2},
  [12] =
    {field_field, 2},
    {field_value, 0},
  [14] =
    {field_left, 0},
    {field_right, 2},
  [16] =
    {field_left, 0},
  [17] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [20] =
    {field_body, 2},
  [21] =
    {field_pattern, 1},
    {field_type, 3},
  [23] =
    {field_pattern, 1},
    {field_value, 3},
  [25] =
    {field_body, 1},
    {field_name, 0},
  [27] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [30] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [33] =
    {field_body, 3},
    {field_name, 2},
  [35] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [38] =
    {field_name, 0},
    {field_value, 2},
  [40] =
    {field_body, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_throws, 3},
  [44] =
    {field_label, 0},
  [45] =
    {field_element, 1},
  [46] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [49] =
    {field_body, 1},
    {field_name, 0},
    {field_value, 3},
  [52] =
    {field_name, 0},
    {field_type, 2},
  [54] =
    {field_pattern, 0},
    {field_type, 2},
  [56] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [60] =
    {field_body, 6},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 5},
    {field_throws, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_identifier,
  },
  [8] = {
    [1] = alias_sym_type_identifier,
  },
  [11] = {
    [0] = alias_sym_field_identifier,
  },
  [17] = {
    [0] = alias_sym_type_identifier,
  },
  [23] = {
    [2] = alias_sym_type_identifier,
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
                  ? (c < 'c'
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
                ? (c < 'b'
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

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'c'
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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
      if (eof) ADVANCE(67);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(133);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(133);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(133);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(133);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(133);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(133);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(133);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(124);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(133);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(109);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8' ||
          lookahead == 'z') ADVANCE(109);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(26);
      if (lookahead == '6') ADVANCE(109);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(109);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(127);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(126);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(57);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(59);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'z') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == '{') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 64:
      if (eof) ADVANCE(67);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(69);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(133);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '+') ADVANCE(103);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '^') ADVANCE(94);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(133);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(133);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_as_QMARK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_as_BANG);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '>') ADVANCE(126);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(110);
      if (lookahead == '6') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(118);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_byte_literal);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '?') ADVANCE(75);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(14);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(121);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(133);
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
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == '6') ADVANCE(30);
      if (lookahead == '8') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(43);
      if (lookahead == '8') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'z') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == '6') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == '4') ADVANCE(77);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_uz);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == '8') ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 67:
      if (lookahead == 'z') ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == '8') ADVANCE(98);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 78:
      if (lookahead == 'z') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_anonymous_specifier);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 96:
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_boxed);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_throw);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_throws_specifier);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 66, .external_lex_state = 2},
  [2] = {.lex_state = 66, .external_lex_state = 2},
  [3] = {.lex_state = 66, .external_lex_state = 2},
  [4] = {.lex_state = 66, .external_lex_state = 2},
  [5] = {.lex_state = 66, .external_lex_state = 2},
  [6] = {.lex_state = 66, .external_lex_state = 2},
  [7] = {.lex_state = 66, .external_lex_state = 2},
  [8] = {.lex_state = 66, .external_lex_state = 2},
  [9] = {.lex_state = 66, .external_lex_state = 2},
  [10] = {.lex_state = 66, .external_lex_state = 2},
  [11] = {.lex_state = 66, .external_lex_state = 2},
  [12] = {.lex_state = 66, .external_lex_state = 2},
  [13] = {.lex_state = 66, .external_lex_state = 2},
  [14] = {.lex_state = 66, .external_lex_state = 2},
  [15] = {.lex_state = 66, .external_lex_state = 2},
  [16] = {.lex_state = 66, .external_lex_state = 2},
  [17] = {.lex_state = 66, .external_lex_state = 2},
  [18] = {.lex_state = 66, .external_lex_state = 2},
  [19] = {.lex_state = 66, .external_lex_state = 2},
  [20] = {.lex_state = 66, .external_lex_state = 2},
  [21] = {.lex_state = 7, .external_lex_state = 2},
  [22] = {.lex_state = 7, .external_lex_state = 2},
  [23] = {.lex_state = 7, .external_lex_state = 2},
  [24] = {.lex_state = 7, .external_lex_state = 2},
  [25] = {.lex_state = 7, .external_lex_state = 2},
  [26] = {.lex_state = 7, .external_lex_state = 2},
  [27] = {.lex_state = 7, .external_lex_state = 2},
  [28] = {.lex_state = 7, .external_lex_state = 2},
  [29] = {.lex_state = 7, .external_lex_state = 2},
  [30] = {.lex_state = 7, .external_lex_state = 2},
  [31] = {.lex_state = 7, .external_lex_state = 2},
  [32] = {.lex_state = 9, .external_lex_state = 2},
  [33] = {.lex_state = 7, .external_lex_state = 2},
  [34] = {.lex_state = 7, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 2},
  [36] = {.lex_state = 7, .external_lex_state = 2},
  [37] = {.lex_state = 9, .external_lex_state = 2},
  [38] = {.lex_state = 9, .external_lex_state = 2},
  [39] = {.lex_state = 9, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 7, .external_lex_state = 2},
  [42] = {.lex_state = 9, .external_lex_state = 2},
  [43] = {.lex_state = 7, .external_lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 2},
  [45] = {.lex_state = 7, .external_lex_state = 2},
  [46] = {.lex_state = 7, .external_lex_state = 2},
  [47] = {.lex_state = 7, .external_lex_state = 2},
  [48] = {.lex_state = 9, .external_lex_state = 2},
  [49] = {.lex_state = 7, .external_lex_state = 2},
  [50] = {.lex_state = 7, .external_lex_state = 2},
  [51] = {.lex_state = 7, .external_lex_state = 2},
  [52] = {.lex_state = 7, .external_lex_state = 2},
  [53] = {.lex_state = 7, .external_lex_state = 2},
  [54] = {.lex_state = 7, .external_lex_state = 2},
  [55] = {.lex_state = 65, .external_lex_state = 2},
  [56] = {.lex_state = 65, .external_lex_state = 2},
  [57] = {.lex_state = 65, .external_lex_state = 2},
  [58] = {.lex_state = 65, .external_lex_state = 2},
  [59] = {.lex_state = 65, .external_lex_state = 2},
  [60] = {.lex_state = 65, .external_lex_state = 2},
  [61] = {.lex_state = 65, .external_lex_state = 2},
  [62] = {.lex_state = 65, .external_lex_state = 2},
  [63] = {.lex_state = 9, .external_lex_state = 2},
  [64] = {.lex_state = 65, .external_lex_state = 2},
  [65] = {.lex_state = 65, .external_lex_state = 2},
  [66] = {.lex_state = 65, .external_lex_state = 2},
  [67] = {.lex_state = 65, .external_lex_state = 2},
  [68] = {.lex_state = 65, .external_lex_state = 2},
  [69] = {.lex_state = 65, .external_lex_state = 2},
  [70] = {.lex_state = 65, .external_lex_state = 2},
  [71] = {.lex_state = 65, .external_lex_state = 2},
  [72] = {.lex_state = 65, .external_lex_state = 2},
  [73] = {.lex_state = 65, .external_lex_state = 2},
  [74] = {.lex_state = 65, .external_lex_state = 2},
  [75] = {.lex_state = 65, .external_lex_state = 2},
  [76] = {.lex_state = 65, .external_lex_state = 2},
  [77] = {.lex_state = 65, .external_lex_state = 2},
  [78] = {.lex_state = 65, .external_lex_state = 2},
  [79] = {.lex_state = 65, .external_lex_state = 2},
  [80] = {.lex_state = 65, .external_lex_state = 2},
  [81] = {.lex_state = 65, .external_lex_state = 2},
  [82] = {.lex_state = 65, .external_lex_state = 2},
  [83] = {.lex_state = 65, .external_lex_state = 2},
  [84] = {.lex_state = 65, .external_lex_state = 2},
  [85] = {.lex_state = 65, .external_lex_state = 2},
  [86] = {.lex_state = 65, .external_lex_state = 2},
  [87] = {.lex_state = 65, .external_lex_state = 2},
  [88] = {.lex_state = 65, .external_lex_state = 2},
  [89] = {.lex_state = 65, .external_lex_state = 2},
  [90] = {.lex_state = 65, .external_lex_state = 2},
  [91] = {.lex_state = 65, .external_lex_state = 2},
  [92] = {.lex_state = 65, .external_lex_state = 2},
  [93] = {.lex_state = 65, .external_lex_state = 2},
  [94] = {.lex_state = 65, .external_lex_state = 2},
  [95] = {.lex_state = 65, .external_lex_state = 2},
  [96] = {.lex_state = 65, .external_lex_state = 2},
  [97] = {.lex_state = 65, .external_lex_state = 2},
  [98] = {.lex_state = 65, .external_lex_state = 2},
  [99] = {.lex_state = 65, .external_lex_state = 2},
  [100] = {.lex_state = 65, .external_lex_state = 2},
  [101] = {.lex_state = 65, .external_lex_state = 2},
  [102] = {.lex_state = 65, .external_lex_state = 2},
  [103] = {.lex_state = 65, .external_lex_state = 2},
  [104] = {.lex_state = 65, .external_lex_state = 2},
  [105] = {.lex_state = 65, .external_lex_state = 2},
  [106] = {.lex_state = 65, .external_lex_state = 2},
  [107] = {.lex_state = 65, .external_lex_state = 2},
  [108] = {.lex_state = 65, .external_lex_state = 2},
  [109] = {.lex_state = 65, .external_lex_state = 2},
  [110] = {.lex_state = 65, .external_lex_state = 2},
  [111] = {.lex_state = 65, .external_lex_state = 2},
  [112] = {.lex_state = 65, .external_lex_state = 2},
  [113] = {.lex_state = 65, .external_lex_state = 2},
  [114] = {.lex_state = 65, .external_lex_state = 2},
  [115] = {.lex_state = 65, .external_lex_state = 2},
  [116] = {.lex_state = 65, .external_lex_state = 2},
  [117] = {.lex_state = 65, .external_lex_state = 2},
  [118] = {.lex_state = 65, .external_lex_state = 2},
  [119] = {.lex_state = 65, .external_lex_state = 2},
  [120] = {.lex_state = 66, .external_lex_state = 2},
  [121] = {.lex_state = 10, .external_lex_state = 2},
  [122] = {.lex_state = 10, .external_lex_state = 2},
  [123] = {.lex_state = 10, .external_lex_state = 2},
  [124] = {.lex_state = 10, .external_lex_state = 2},
  [125] = {.lex_state = 10, .external_lex_state = 2},
  [126] = {.lex_state = 10, .external_lex_state = 2},
  [127] = {.lex_state = 10, .external_lex_state = 2},
  [128] = {.lex_state = 10, .external_lex_state = 2},
  [129] = {.lex_state = 10, .external_lex_state = 2},
  [130] = {.lex_state = 10, .external_lex_state = 2},
  [131] = {.lex_state = 10, .external_lex_state = 2},
  [132] = {.lex_state = 10, .external_lex_state = 2},
  [133] = {.lex_state = 10, .external_lex_state = 2},
  [134] = {.lex_state = 10, .external_lex_state = 2},
  [135] = {.lex_state = 10, .external_lex_state = 2},
  [136] = {.lex_state = 10, .external_lex_state = 2},
  [137] = {.lex_state = 10, .external_lex_state = 2},
  [138] = {.lex_state = 10, .external_lex_state = 2},
  [139] = {.lex_state = 10, .external_lex_state = 2},
  [140] = {.lex_state = 10, .external_lex_state = 2},
  [141] = {.lex_state = 10, .external_lex_state = 2},
  [142] = {.lex_state = 10, .external_lex_state = 2},
  [143] = {.lex_state = 10, .external_lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 66, .external_lex_state = 2},
  [146] = {.lex_state = 66, .external_lex_state = 2},
  [147] = {.lex_state = 66, .external_lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 66, .external_lex_state = 2},
  [150] = {.lex_state = 66, .external_lex_state = 2},
  [151] = {.lex_state = 66, .external_lex_state = 2},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 66, .external_lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 66, .external_lex_state = 2},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 66, .external_lex_state = 2},
  [169] = {.lex_state = 66, .external_lex_state = 2},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 66, .external_lex_state = 2},
  [172] = {.lex_state = 66, .external_lex_state = 2},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 66, .external_lex_state = 2},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 66, .external_lex_state = 2},
  [183] = {.lex_state = 66, .external_lex_state = 2},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 66, .external_lex_state = 2},
  [189] = {.lex_state = 66, .external_lex_state = 2},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 66, .external_lex_state = 2},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 66, .external_lex_state = 2},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 66, .external_lex_state = 2},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 66, .external_lex_state = 2},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 66, .external_lex_state = 2},
  [225] = {.lex_state = 66, .external_lex_state = 2},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 66, .external_lex_state = 2},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 66, .external_lex_state = 2},
  [242] = {.lex_state = 4, .external_lex_state = 2},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 66, .external_lex_state = 2},
  [246] = {.lex_state = 66, .external_lex_state = 2},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 66, .external_lex_state = 2},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 66, .external_lex_state = 2},
  [260] = {.lex_state = 66, .external_lex_state = 2},
  [261] = {.lex_state = 66, .external_lex_state = 2},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 66, .external_lex_state = 2},
  [264] = {.lex_state = 66, .external_lex_state = 2},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 66, .external_lex_state = 2},
  [282] = {.lex_state = 66, .external_lex_state = 2},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 66, .external_lex_state = 2},
  [285] = {.lex_state = 66, .external_lex_state = 2},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 66, .external_lex_state = 2},
  [289] = {.lex_state = 66, .external_lex_state = 2},
  [290] = {.lex_state = 66, .external_lex_state = 2},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 66, .external_lex_state = 2},
  [293] = {.lex_state = 66, .external_lex_state = 2},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 66, .external_lex_state = 2},
  [296] = {.lex_state = 66, .external_lex_state = 2},
  [297] = {.lex_state = 6},
  [298] = {.lex_state = 66, .external_lex_state = 2},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 9, .external_lex_state = 2},
  [303] = {.lex_state = 9, .external_lex_state = 2},
  [304] = {.lex_state = 9, .external_lex_state = 2},
  [305] = {.lex_state = 9, .external_lex_state = 2},
  [306] = {.lex_state = 9, .external_lex_state = 2},
  [307] = {.lex_state = 9, .external_lex_state = 2},
  [308] = {.lex_state = 9, .external_lex_state = 2},
  [309] = {.lex_state = 9, .external_lex_state = 2},
  [310] = {.lex_state = 9, .external_lex_state = 2},
  [311] = {.lex_state = 9, .external_lex_state = 2},
  [312] = {.lex_state = 9, .external_lex_state = 2},
  [313] = {.lex_state = 9, .external_lex_state = 2},
  [314] = {.lex_state = 9, .external_lex_state = 2},
  [315] = {.lex_state = 9, .external_lex_state = 2},
  [316] = {.lex_state = 9, .external_lex_state = 2},
  [317] = {.lex_state = 9, .external_lex_state = 2},
  [318] = {.lex_state = 9, .external_lex_state = 2},
  [319] = {.lex_state = 9, .external_lex_state = 2},
  [320] = {.lex_state = 9, .external_lex_state = 2},
  [321] = {.lex_state = 9, .external_lex_state = 2},
  [322] = {.lex_state = 9, .external_lex_state = 2},
  [323] = {.lex_state = 9, .external_lex_state = 2},
  [324] = {.lex_state = 9, .external_lex_state = 2},
  [325] = {.lex_state = 9, .external_lex_state = 2},
  [326] = {.lex_state = 9, .external_lex_state = 2},
  [327] = {.lex_state = 9, .external_lex_state = 2},
  [328] = {.lex_state = 9, .external_lex_state = 2},
  [329] = {.lex_state = 9, .external_lex_state = 2},
  [330] = {.lex_state = 9, .external_lex_state = 2},
  [331] = {.lex_state = 9, .external_lex_state = 2},
  [332] = {.lex_state = 9, .external_lex_state = 2},
  [333] = {.lex_state = 9, .external_lex_state = 2},
  [334] = {.lex_state = 9, .external_lex_state = 2},
  [335] = {.lex_state = 9, .external_lex_state = 2},
  [336] = {.lex_state = 9, .external_lex_state = 2},
  [337] = {.lex_state = 9, .external_lex_state = 2},
  [338] = {.lex_state = 9, .external_lex_state = 2},
  [339] = {.lex_state = 9, .external_lex_state = 2},
  [340] = {.lex_state = 9, .external_lex_state = 2},
  [341] = {.lex_state = 9, .external_lex_state = 2},
  [342] = {.lex_state = 9, .external_lex_state = 2},
  [343] = {.lex_state = 9, .external_lex_state = 2},
  [344] = {.lex_state = 9, .external_lex_state = 2},
  [345] = {.lex_state = 9, .external_lex_state = 2},
  [346] = {.lex_state = 9, .external_lex_state = 2},
  [347] = {.lex_state = 9, .external_lex_state = 2},
  [348] = {.lex_state = 9, .external_lex_state = 2},
  [349] = {.lex_state = 9, .external_lex_state = 2},
  [350] = {.lex_state = 9, .external_lex_state = 2},
  [351] = {.lex_state = 9, .external_lex_state = 2},
  [352] = {.lex_state = 9, .external_lex_state = 2},
  [353] = {.lex_state = 9, .external_lex_state = 2},
  [354] = {.lex_state = 9, .external_lex_state = 2},
  [355] = {.lex_state = 9, .external_lex_state = 2},
  [356] = {.lex_state = 9, .external_lex_state = 2},
  [357] = {.lex_state = 9, .external_lex_state = 2},
  [358] = {.lex_state = 9, .external_lex_state = 2},
  [359] = {.lex_state = 9, .external_lex_state = 2},
  [360] = {.lex_state = 9, .external_lex_state = 2},
  [361] = {.lex_state = 9, .external_lex_state = 2},
  [362] = {.lex_state = 9, .external_lex_state = 2},
  [363] = {.lex_state = 9, .external_lex_state = 2},
  [364] = {.lex_state = 9, .external_lex_state = 2},
  [365] = {.lex_state = 9, .external_lex_state = 2},
  [366] = {.lex_state = 9, .external_lex_state = 2},
  [367] = {.lex_state = 9, .external_lex_state = 2},
  [368] = {.lex_state = 9, .external_lex_state = 2},
  [369] = {.lex_state = 9, .external_lex_state = 2},
  [370] = {.lex_state = 9, .external_lex_state = 2},
  [371] = {.lex_state = 9, .external_lex_state = 2},
  [372] = {.lex_state = 9, .external_lex_state = 2},
  [373] = {.lex_state = 9, .external_lex_state = 2},
  [374] = {.lex_state = 9, .external_lex_state = 2},
  [375] = {.lex_state = 9, .external_lex_state = 2},
  [376] = {.lex_state = 9, .external_lex_state = 2},
  [377] = {.lex_state = 9, .external_lex_state = 2},
  [378] = {.lex_state = 9, .external_lex_state = 2},
  [379] = {.lex_state = 9, .external_lex_state = 2},
  [380] = {.lex_state = 9, .external_lex_state = 2},
  [381] = {.lex_state = 9, .external_lex_state = 2},
  [382] = {.lex_state = 9, .external_lex_state = 2},
  [383] = {.lex_state = 9, .external_lex_state = 2},
  [384] = {.lex_state = 9, .external_lex_state = 2},
  [385] = {.lex_state = 9, .external_lex_state = 2},
  [386] = {.lex_state = 9, .external_lex_state = 2},
  [387] = {.lex_state = 9, .external_lex_state = 2},
  [388] = {.lex_state = 9, .external_lex_state = 2},
  [389] = {.lex_state = 5},
  [390] = {.lex_state = 15},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 15},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 15},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 15},
  [404] = {.lex_state = 15},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 5},
  [411] = {.lex_state = 5},
  [412] = {.lex_state = 5},
  [413] = {.lex_state = 7},
  [414] = {.lex_state = 7},
  [415] = {.lex_state = 15},
  [416] = {.lex_state = 5},
  [417] = {.lex_state = 7},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 5},
  [420] = {.lex_state = 5},
  [421] = {.lex_state = 15},
  [422] = {.lex_state = 4},
  [423] = {.lex_state = 5},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 5},
  [426] = {.lex_state = 5},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 5},
  [430] = {.lex_state = 4},
  [431] = {.lex_state = 5},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 4},
  [434] = {.lex_state = 5},
  [435] = {.lex_state = 15},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 5},
  [438] = {.lex_state = 5},
  [439] = {.lex_state = 5},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 2},
  [442] = {.lex_state = 6, .external_lex_state = 3},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 6, .external_lex_state = 3},
  [446] = {.lex_state = 5},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 2},
  [449] = {.lex_state = 4},
  [450] = {.lex_state = 6, .external_lex_state = 3},
  [451] = {.lex_state = 15},
  [452] = {.lex_state = 4},
  [453] = {.lex_state = 15},
  [454] = {.lex_state = 6, .external_lex_state = 3},
  [455] = {.lex_state = 6, .external_lex_state = 3},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 7},
  [458] = {.lex_state = 6, .external_lex_state = 3},
  [459] = {.lex_state = 6, .external_lex_state = 3},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 4},
  [462] = {.lex_state = 2},
  [463] = {.lex_state = 5},
  [464] = {.lex_state = 4},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 6, .external_lex_state = 3},
  [467] = {.lex_state = 6, .external_lex_state = 3},
  [468] = {.lex_state = 6, .external_lex_state = 3},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 6, .external_lex_state = 3},
  [471] = {.lex_state = 6, .external_lex_state = 3},
  [472] = {.lex_state = 5},
  [473] = {.lex_state = 2},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 4},
  [476] = {.lex_state = 6, .external_lex_state = 3},
  [477] = {.lex_state = 5},
  [478] = {.lex_state = 6, .external_lex_state = 3},
  [479] = {.lex_state = 6, .external_lex_state = 3},
  [480] = {.lex_state = 7},
  [481] = {.lex_state = 5},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 2},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 15},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 2},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 2},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 2},
  [509] = {.lex_state = 2},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 4},
  [512] = {.lex_state = 4},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 2},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 2},
  [526] = {.lex_state = 15},
  [527] = {.lex_state = 7, .external_lex_state = 2},
  [528] = {.lex_state = 2},
  [529] = {.lex_state = 15},
  [530] = {.lex_state = 15},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 15},
  [533] = {.lex_state = 15},
  [534] = {.lex_state = 7, .external_lex_state = 2},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 15},
  [538] = {.lex_state = 2},
  [539] = {.lex_state = 15},
  [540] = {.lex_state = 15},
  [541] = {.lex_state = 15},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 2},
  [544] = {.lex_state = 2},
  [545] = {.lex_state = 7, .external_lex_state = 2},
  [546] = {.lex_state = 2},
  [547] = {.lex_state = 2},
  [548] = {.lex_state = 2},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 15},
  [553] = {.lex_state = 15},
  [554] = {.lex_state = 2},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 2},
  [557] = {.lex_state = 15},
  [558] = {.lex_state = 2},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 15},
  [561] = {.lex_state = 2},
  [562] = {.lex_state = 2},
  [563] = {.lex_state = 2},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 15},
  [566] = {.lex_state = 15},
  [567] = {.lex_state = 2},
  [568] = {.lex_state = 2},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 2},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 15},
  [575] = {.lex_state = 15},
  [576] = {.lex_state = 15},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 15},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 15},
  [581] = {.lex_state = 15},
  [582] = {.lex_state = 15},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 15},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 15},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 2},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 15},
  [593] = {.lex_state = 15},
  [594] = {.lex_state = 15},
  [595] = {.lex_state = 15},
  [596] = {.lex_state = 15},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 15},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 15},
  [601] = {.lex_state = 0},
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
    [sym_continue_statement] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_as_QMARK] = ACTIONS(1),
    [anon_sym_as_BANG] = ACTIONS(1),
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
    [anon_sym_uz] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_c_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_c_char] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_boxed] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
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
    [sym_byte_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_throws_specifier] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_anonymous_specifier] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(591),
    [sym__expression] = STATE(231),
    [sym_while_statement] = STATE(538),
    [sym_increment_statement] = STATE(538),
    [sym_decrement_statement] = STATE(538),
    [sym_throw_statement] = STATE(538),
    [sym_for_expression] = STATE(244),
    [sym_call_expression] = STATE(244),
    [sym_range_expression] = STATE(244),
    [sym_field_expression] = STATE(244),
    [sym_static_member_expression] = STATE(244),
    [sym_is_expression] = STATE(244),
    [sym_type_conversion_expression] = STATE(244),
    [sym__top_level_declaration] = STATE(2),
    [sym_let_declaration] = STATE(538),
    [sym_mutable_declaration] = STATE(538),
    [sym_boxed_specifier] = STATE(598),
    [sym_enum_declaration] = STATE(538),
    [sym_struct_declaration] = STATE(538),
    [sym_class_declaration] = STATE(538),
    [sym_unary_expression] = STATE(244),
    [sym_return_statement] = STATE(538),
    [sym_binary_expression] = STATE(244),
    [sym__literal] = STATE(244),
    [sym_string_literal] = STATE(255),
    [sym_function_declaration] = STATE(2),
    [sym_block] = STATE(538),
    [sym_if_statement] = STATE(538),
    [sym_boolean_literal] = STATE(255),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(9),
    [anon_sym_PLUS_PLUS] = ACTIONS(11),
    [anon_sym_DASH_DASH] = ACTIONS(13),
    [sym_continue_statement] = ACTIONS(15),
    [anon_sym_throw] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_mut] = ACTIONS(25),
    [anon_sym_boxed] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_class] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [sym_integer_literal] = ACTIONS(41),
    [sym_binary_literal] = ACTIONS(43),
    [aux_sym_string_literal_token1] = ACTIONS(45),
    [sym_char_literal] = ACTIONS(43),
    [sym_byte_literal] = ACTIONS(43),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [sym_float_literal] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
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
      sym_continue_statement,
    ACTIONS(17), 1,
      anon_sym_throw,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_mut,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(29), 1,
      anon_sym_enum,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_struct,
    ACTIONS(35), 1,
      anon_sym_class,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(47), 1,
      anon_sym_function,
    ACTIONS(49), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      sym__expression,
    STATE(598), 1,
      sym_boxed_specifier,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(3), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(538), 12,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [121] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_while,
    ACTIONS(63), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(66), 1,
      anon_sym_DASH_DASH,
    ACTIONS(69), 1,
      sym_continue_statement,
    ACTIONS(72), 1,
      anon_sym_throw,
    ACTIONS(75), 1,
      anon_sym_for,
    ACTIONS(78), 1,
      anon_sym_DOT_DOT,
    ACTIONS(81), 1,
      anon_sym_let,
    ACTIONS(84), 1,
      anon_sym_mut,
    ACTIONS(87), 1,
      anon_sym_boxed,
    ACTIONS(90), 1,
      anon_sym_enum,
    ACTIONS(93), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_struct,
    ACTIONS(99), 1,
      anon_sym_class,
    ACTIONS(102), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_return,
    ACTIONS(108), 1,
      sym_integer_literal,
    ACTIONS(114), 1,
      aux_sym_string_literal_token1,
    ACTIONS(117), 1,
      anon_sym_function,
    ACTIONS(120), 1,
      anon_sym_if,
    STATE(231), 1,
      sym__expression,
    STATE(598), 1,
      sym_boxed_specifier,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(3), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(111), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(538), 12,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [242] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [356] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(170), 1,
      sym_continue_statement,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(4), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [470] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(174), 1,
      sym_continue_statement,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(14), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [584] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(178), 1,
      sym_continue_statement,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(8), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [698] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [812] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(184), 1,
      sym_continue_statement,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(15), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [926] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(188), 1,
      sym_continue_statement,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(11), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1040] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1154] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_while,
    ACTIONS(200), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(203), 1,
      anon_sym_DASH_DASH,
    ACTIONS(206), 1,
      sym_continue_statement,
    ACTIONS(209), 1,
      anon_sym_throw,
    ACTIONS(212), 1,
      anon_sym_for,
    ACTIONS(215), 1,
      anon_sym_DOT_DOT,
    ACTIONS(218), 1,
      anon_sym_let,
    ACTIONS(221), 1,
      anon_sym_mut,
    ACTIONS(224), 1,
      anon_sym_boxed,
    ACTIONS(227), 1,
      anon_sym_enum,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 1,
      anon_sym_struct,
    ACTIONS(238), 1,
      anon_sym_class,
    ACTIONS(241), 1,
      anon_sym_DASH,
    ACTIONS(244), 1,
      anon_sym_return,
    ACTIONS(247), 1,
      sym_integer_literal,
    ACTIONS(253), 1,
      aux_sym_string_literal_token1,
    ACTIONS(256), 1,
      anon_sym_if,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(259), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(250), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1268] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(262), 1,
      sym_continue_statement,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(17), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1382] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1496] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1610] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1724] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1838] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(134), 1,
      sym_continue_statement,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(12), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1952] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(276), 1,
      sym_continue_statement,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(18), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2066] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_boxed,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_while,
    ACTIONS(130), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(142), 1,
      anon_sym_let,
    ACTIONS(144), 1,
      anon_sym_mut,
    ACTIONS(146), 1,
      anon_sym_enum,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_struct,
    ACTIONS(154), 1,
      anon_sym_class,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_return,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(166), 1,
      anon_sym_if,
    ACTIONS(280), 1,
      sym_continue_statement,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym__expression,
    STATE(584), 1,
      sym_boxed_specifier,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(16), 13,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_throw_statement,
      sym_let_declaration,
      sym_mutable_declaration,
      sym_enum_declaration,
      sym_struct_declaration,
      sym_class_declaration,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2180] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(292), 1,
      anon_sym_is,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(294), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(308), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(298), 6,
      sym_float_literal,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(284), 22,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2275] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(322), 23,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(320), 27,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2342] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 19,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(324), 26,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2417] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(330), 21,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(328), 27,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2488] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(312), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 15,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
    ACTIONS(324), 25,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2569] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(326), 21,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(324), 27,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2640] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(292), 1,
      anon_sym_is,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(294), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(308), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(334), 6,
      sym_float_literal,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(332), 22,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2735] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 17,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
    ACTIONS(324), 25,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2814] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_PIPE,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(312), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 12,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(324), 25,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2901] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(312), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 14,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(324), 25,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2984] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(306), 1,
      anon_sym_CARET,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    ACTIONS(318), 1,
      anon_sym_SLASH,
    STATE(36), 1,
      sym_arguments,
    ACTIONS(300), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(312), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(316), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 13,
      sym_float_literal,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(324), 25,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3069] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    STATE(230), 1,
      sym__expression,
    STATE(520), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(539), 1,
      sym_negative_literal,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(352), 2,
      sym_binary_literal,
      sym_byte_literal,
    ACTIONS(356), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(275), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(360), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(364), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3285] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(368), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3345] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(372), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3405] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym__expression,
    STATE(522), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(539), 1,
      sym_negative_literal,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(352), 2,
      sym_binary_literal,
      sym_byte_literal,
    ACTIONS(356), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(275), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [3501] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expression,
    STATE(521), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(539), 1,
      sym_negative_literal,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(352), 2,
      sym_binary_literal,
      sym_byte_literal,
    ACTIONS(356), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(121), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(275), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [3597] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym__expression,
    STATE(506), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(539), 1,
      sym_negative_literal,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(352), 2,
      sym_binary_literal,
      sym_byte_literal,
    ACTIONS(356), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(126), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(275), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [3693] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(384), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(382), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3753] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(388), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(386), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3813] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym__expression,
    STATE(501), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(539), 1,
      sym_negative_literal,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(352), 2,
      sym_binary_literal,
      sym_byte_literal,
    ACTIONS(356), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(275), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [3909] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(392), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3969] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(396), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(400), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4089] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(404), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4149] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(408), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4209] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym__expression,
    STATE(496), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(539), 1,
      sym_negative_literal,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(352), 2,
      sym_binary_literal,
      sym_byte_literal,
    ACTIONS(356), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(124), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(275), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4305] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(414), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4365] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(418), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4425] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(424), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(422), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4485] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(426), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4545] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(430), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 24,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(434), 28,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4665] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 21,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
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
      sym_byte_literal,
    ACTIONS(324), 22,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4738] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_PLUS_EQ,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 18,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
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
      sym_byte_literal,
    ACTIONS(324), 20,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4817] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(456), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_CARET,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 16,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(324), 20,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4900] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(456), 1,
      anon_sym_AMP,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 17,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(324), 20,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [4981] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(456), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 15,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(324), 20,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5066] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_PLUS_EQ,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(324), 20,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(326), 20,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [5143] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(324), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(326), 23,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [5212] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(328), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(330), 23,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [5281] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      sym_integer_literal,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    STATE(297), 1,
      sym__expression,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(539), 1,
      sym_negative_literal,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(352), 2,
      sym_binary_literal,
      sym_byte_literal,
    ACTIONS(356), 2,
      sym_float_literal,
      sym_char_literal,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(129), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    STATE(275), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5372] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(456), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      anon_sym_is,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(466), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(298), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(284), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5465] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(438), 1,
      anon_sym_DOT_DOT,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(456), 1,
      anon_sym_AMP,
    ACTIONS(458), 1,
      anon_sym_CARET,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      anon_sym_is,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(446), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(450), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(452), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(466), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(468), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(472), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(474), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5558] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON_COLON,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(320), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(322), 25,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [5623] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(362), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [5681] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 19,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(326), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [5757] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(366), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [5815] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(370), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [5873] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(298), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(284), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5965] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(374), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [6023] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(320), 22,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(322), 25,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [6087] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(510), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(508), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6179] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    ACTIONS(516), 1,
      anon_sym_DASH_DASH,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(514), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(512), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6273] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(520), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(518), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6365] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 21,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(326), 21,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [6437] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(436), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [6495] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(432), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [6553] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 18,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
    ACTIONS(324), 19,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6631] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(428), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [6689] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(524), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(522), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6781] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(388), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [6839] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 16,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
    ACTIONS(324), 19,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [6921] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(410), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [6979] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_AMP,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
    ACTIONS(324), 19,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7059] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(402), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [7117] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(528), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(526), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7209] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(326), 15,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(324), 19,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7293] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(398), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [7351] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(394), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [7409] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(384), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [7467] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(532), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(530), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7559] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(536), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(534), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(416), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [7709] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(406), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [7767] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(420), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [7825] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(492), 1,
      anon_sym_is,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    ACTIONS(500), 1,
      anon_sym_CARET,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(488), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(494), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(504), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(506), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(502), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(540), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(538), 16,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [7917] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(328), 22,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(330), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [7985] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_DOT_DOT,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_arguments,
    ACTIONS(324), 22,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(326), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 24,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(424), 26,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
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
      sym_byte_literal,
  [8111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(384), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(394), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(428), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8282] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(398), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8339] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(370), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8396] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(368), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(370), 25,
      sym_float_literal,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8455] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(410), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8512] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(388), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(366), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8626] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(424), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(374), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8740] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(436), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8797] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(420), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8854] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(432), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8911] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(416), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [8968] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(362), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [9025] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(406), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [9082] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 23,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_is,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
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
    ACTIONS(402), 26,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
      sym_byte_literal,
  [9139] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(156), 1,
      anon_sym_DASH,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(82), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(548), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(546), 11,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_return,
      anon_sym_if,
  [9209] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(498), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9276] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9343] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(484), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9410] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(494), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9477] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9544] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(504), 1,
      aux_sym_arguments_repeat2,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9611] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      sym_anonymous_specifier,
    STATE(503), 1,
      sym_parameter,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(583), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9677] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(582), 1,
      anon_sym_DASH,
    ACTIONS(588), 1,
      aux_sym_string_literal_token1,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(580), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(591), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(585), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(577), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9739] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(599), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(594), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(128), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9801] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      sym_anonymous_specifier,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      sym_parameter,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(583), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9864] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      sym_anonymous_specifier,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      sym_parameter,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(583), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9927] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    ACTIONS(572), 1,
      sym_anonymous_specifier,
    STATE(531), 1,
      sym_parameter,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(583), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [9987] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(594), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10041] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(593), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10095] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(604), 1,
      anon_sym_DASH,
    STATE(464), 1,
      sym__pattern,
    STATE(469), 1,
      sym__literal_pattern,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(606), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(449), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(602), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10149] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(600), 1,
      sym_identifier,
    ACTIONS(604), 1,
      anon_sym_DASH,
    STATE(452), 1,
      sym__pattern,
    STATE(469), 1,
      sym__literal_pattern,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(606), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(449), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(602), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10203] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(595), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10257] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(592), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10311] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(612), 1,
      anon_sym_DASH,
    ACTIONS(616), 1,
      aux_sym_string_literal_token1,
    STATE(149), 1,
      sym__literal_pattern,
    STATE(153), 1,
      sym__pattern,
    ACTIONS(618), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(614), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(151), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(610), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10365] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(612), 1,
      anon_sym_DASH,
    ACTIONS(616), 1,
      aux_sym_string_literal_token1,
    STATE(149), 1,
      sym__literal_pattern,
    STATE(156), 1,
      sym__pattern,
    ACTIONS(618), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(614), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(151), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(610), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10419] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(580), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10473] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(596), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10527] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(533), 1,
      sym__literal_pattern,
    STATE(587), 1,
      sym__pattern,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(556), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(539), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(342), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [10581] = 3,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(434), 28,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [10618] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(436), 12,
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
      sym_byte_literal,
    ACTIONS(434), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10655] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 12,
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
      sym_byte_literal,
    ACTIONS(408), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10692] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(428), 12,
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
      sym_byte_literal,
    ACTIONS(426), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10729] = 3,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(426), 28,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [10766] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 12,
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
      sym_byte_literal,
    ACTIONS(622), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 12,
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
      sym_byte_literal,
    ACTIONS(626), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10840] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(632), 12,
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
      sym_byte_literal,
    ACTIONS(630), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10877] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 6,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(428), 23,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [10914] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      anon_sym_EQ,
    ACTIONS(636), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(634), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10955] = 3,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(408), 28,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [10992] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(408), 6,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(410), 23,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [11029] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(648), 1,
      anon_sym_EQ,
    ACTIONS(644), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(642), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [11070] = 8,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(328), 23,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
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
      sym_identifier,
  [11117] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(434), 6,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(436), 23,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [11154] = 8,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(324), 23,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
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
      sym_identifier,
  [11201] = 10,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 17,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
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
      sym_identifier,
  [11252] = 14,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 12,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_identifier,
  [11311] = 12,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 14,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_identifier,
  [11366] = 13,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(666), 1,
      anon_sym_CARET,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 13,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_identifier,
  [11423] = 11,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 15,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      sym_identifier,
  [11476] = 9,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 20,
      anon_sym_SEMI,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_RBRACE,
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
      sym_identifier,
  [11525] = 17,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(284), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11590] = 6,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(320), 25,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [11633] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(678), 12,
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
      sym_byte_literal,
    ACTIONS(676), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [11670] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(684), 1,
      anon_sym_else,
    STATE(290), 1,
      sym_else_clause,
    ACTIONS(682), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(680), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [11711] = 12,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_AMP,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(698), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(694), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 13,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11765] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 11,
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
      sym_byte_literal,
    ACTIONS(702), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [11801] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 11,
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
      sym_byte_literal,
    ACTIONS(706), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [11837] = 17,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    ACTIONS(712), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(710), 2,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [11901] = 3,
    ACTIONS(424), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(422), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [11937] = 3,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(418), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [11973] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 11,
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
      sym_byte_literal,
    ACTIONS(714), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [12009] = 3,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(404), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12045] = 3,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(400), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12081] = 3,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(386), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12117] = 3,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(396), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12153] = 3,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(434), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 10,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(430), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [12225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 10,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(720), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [12261] = 3,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(372), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12297] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(392), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12333] = 3,
    ACTIONS(428), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(426), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12369] = 3,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(382), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12405] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 10,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(360), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [12441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(722), 10,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(724), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [12477] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(494), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [12549] = 8,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(324), 22,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [12595] = 10,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(694), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 16,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [12645] = 14,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_AMP,
    ACTIONS(758), 1,
      anon_sym_PIPE,
    ACTIONS(760), 1,
      anon_sym_CARET,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(698), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(694), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 11,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [12703] = 13,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_AMP,
    ACTIONS(760), 1,
      anon_sym_CARET,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(698), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(694), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 12,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [12759] = 3,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(368), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12795] = 3,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(408), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12831] = 3,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(364), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12867] = 3,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(414), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [12903] = 11,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(698), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(694), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 14,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [12955] = 9,
    ACTIONS(326), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(324), 19,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [13003] = 17,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    ACTIONS(764), 1,
      anon_sym_LF,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(762), 2,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [13067] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(498), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13139] = 17,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_AMP,
    ACTIONS(758), 1,
      anon_sym_PIPE,
    ACTIONS(760), 1,
      anon_sym_CARET,
    ACTIONS(766), 1,
      anon_sym_is,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(284), 2,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
    ACTIONS(698), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(768), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(694), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(770), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [13203] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      anon_sym_EQ,
    ACTIONS(774), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(772), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13241] = 6,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(320), 24,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [13283] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_EQ,
    ACTIONS(780), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(778), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13321] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(324), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(326), 19,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [13367] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(324), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 15,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [13421] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(324), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 10,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13483] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(324), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 12,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13541] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(324), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 11,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13601] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(324), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(326), 13,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13657] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(324), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
    ACTIONS(326), 17,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [13707] = 3,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(430), 27,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [13743] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(298), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13811] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(784), 10,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(786), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [13847] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 6,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(388), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [13883] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(320), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(322), 21,
      anon_sym_DOT_DOT,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [13925] = 3,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(360), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [13961] = 3,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(430), 27,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
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
      sym_identifier,
  [13997] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(432), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(430), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [14033] = 8,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(328), 22,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [14079] = 3,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(360), 27,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [14115] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 10,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(790), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [14151] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(360), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [14187] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(328), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(330), 19,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [14233] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(510), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14305] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(484), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14377] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 10,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(792), 18,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [14413] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(513), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14485] = 18,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_DOT_DOT,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 1,
      anon_sym_COLON_COLON,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      anon_sym_AMP,
    ACTIONS(758), 1,
      anon_sym_PIPE,
    ACTIONS(760), 1,
      anon_sym_CARET,
    ACTIONS(766), 1,
      anon_sym_is,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_DASH_DASH,
    STATE(266), 1,
      sym_arguments,
    ACTIONS(698), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(768), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(694), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(700), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(770), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [14551] = 4,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(800), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(368), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [14589] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(504), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14661] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(396), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(398), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [14696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(360), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(362), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [14731] = 3,
    ACTIONS(366), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(364), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [14766] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(416), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [14801] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(364), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(366), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [14836] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [14905] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(368), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(370), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [14940] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(806), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(804), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [14975] = 14,
    ACTIONS(546), 1,
      anon_sym_SEMI,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(812), 1,
      anon_sym_DOT_DOT,
    ACTIONS(814), 1,
      anon_sym_DASH,
    ACTIONS(818), 1,
      aux_sym_string_literal_token1,
    ACTIONS(822), 1,
      sym_float_literal,
    STATE(258), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(816), 4,
      sym_integer_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [15032] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    ACTIONS(824), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_block,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15101] = 3,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(368), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [15136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(826), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [15171] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(532), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(530), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [15206] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(525), 1,
      sym_block,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15275] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_block,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15344] = 17,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [15407] = 17,
    ACTIONS(518), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [15470] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_block,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15539] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    ACTIONS(834), 1,
      anon_sym_LBRACE,
    STATE(256), 1,
      sym_arguments,
    STATE(294), 1,
      sym_block,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15608] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(169), 1,
      sym_block,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15677] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(257), 1,
      sym_block,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [15746] = 3,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(414), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [15781] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(374), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [15816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(836), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [15851] = 17,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    ACTIONS(524), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [15914] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(842), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(840), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [15949] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(844), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [15984] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(850), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(848), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [16019] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(392), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16054] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(854), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(852), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [16089] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(858), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(856), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [16124] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(472), 1,
      sym_block,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16193] = 3,
    ACTIONS(374), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(372), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16228] = 3,
    ACTIONS(388), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(386), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16263] = 3,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(400), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16298] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(400), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(402), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [16333] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(404), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(406), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [16368] = 3,
    ACTIONS(406), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(404), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16403] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(420), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [16438] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(422), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(424), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [16473] = 3,
    ACTIONS(420), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(418), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16508] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(414), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(416), 21,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16545] = 3,
    ACTIONS(424), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(422), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16580] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(622), 1,
      anon_sym_COLON,
    ACTIONS(368), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(370), 21,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16617] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    STATE(262), 1,
      sym_block,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [16686] = 17,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    ACTIONS(528), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [16749] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(430), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(432), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [16784] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(860), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [16819] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(866), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(864), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [16854] = 3,
    ACTIONS(398), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(396), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16889] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(870), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(868), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [16924] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(874), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(872), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [16959] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(414), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(416), 21,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [16996] = 17,
    ACTIONS(538), 1,
      anon_sym_SEMI,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [17059] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(878), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(876), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17094] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(882), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(880), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17129] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(884), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17164] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(384), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [17199] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(888), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17234] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(894), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(892), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17269] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(392), 5,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_SLASH,
    ACTIONS(394), 22,
      anon_sym_DOT_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [17304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(896), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17339] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(902), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(900), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17374] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    ACTIONS(728), 1,
      anon_sym_DOT,
    ACTIONS(730), 1,
      anon_sym_COLON_COLON,
    ACTIONS(732), 1,
      anon_sym_is,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(740), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_CARET,
    ACTIONS(752), 1,
      anon_sym_PLUS,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    STATE(256), 1,
      sym_arguments,
    ACTIONS(594), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(734), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(738), 2,
      anon_sym_DASH,
      anon_sym_PLUS_EQ,
    ACTIONS(748), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(750), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(754), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(746), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [17441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_binary_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      sym_byte_literal,
    ACTIONS(904), 17,
      anon_sym_while,
      sym_continue_statement,
      anon_sym_throw,
      anon_sym_for,
      anon_sym_let,
      anon_sym_mut,
      anon_sym_boxed,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_class,
      anon_sym_DASH,
      anon_sym_return,
      sym_integer_literal,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [17476] = 3,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(382), 26,
      anon_sym_SEMI,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_is,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
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
  [17511] = 17,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    ACTIONS(510), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [17574] = 17,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT_DOT,
    ACTIONS(652), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON_COLON,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_AMP,
    ACTIONS(664), 1,
      anon_sym_PIPE,
    ACTIONS(666), 1,
      anon_sym_CARET,
    ACTIONS(670), 1,
      anon_sym_is,
    STATE(184), 1,
      sym_arguments,
    ACTIONS(668), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(672), 2,
      anon_sym_as_QMARK,
      anon_sym_as_BANG,
    ACTIONS(658), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
    ACTIONS(660), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(674), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [17637] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(159), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [17688] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(30), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [17739] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(208), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [17790] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(247), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [17841] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(207), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [17892] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(88), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [17943] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(249), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [17994] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(76), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18045] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(93), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18096] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(98), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18147] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(250), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18198] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(239), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18249] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(243), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18300] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(205), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18351] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(248), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18402] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(157), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18453] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(209), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18504] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(203), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18555] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(200), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18606] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(199), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18657] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(194), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18708] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(167), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18759] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(166), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18810] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(165), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18861] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(164), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18912] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(163), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [18963] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(162), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19014] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(161), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19065] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(160), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19116] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(170), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19167] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(251), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19218] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(193), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19269] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(192), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19320] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(191), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19371] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(94), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19422] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(252), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19473] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(253), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19524] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(278), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19575] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(279), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19626] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(287), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19677] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(254), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19728] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(201), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19779] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(226), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19830] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(74), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19881] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(26), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19932] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(28), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [19983] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(300), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20034] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(301), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20085] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(29), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20136] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(31), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20187] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(25), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20238] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_for,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(45), 1,
      aux_sym_string_literal_token1,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(940), 1,
      anon_sym_DASH,
    STATE(222), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(255), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(43), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(244), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20289] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(27), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20340] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(23), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20391] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(99), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20442] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(21), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20493] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(22), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20544] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(73), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20595] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(71), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20646] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(77), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20697] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20748] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(84), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20799] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(86), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20850] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(89), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20901] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(68), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [20952] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT,
    ACTIONS(160), 1,
      sym_integer_literal,
    ACTIONS(164), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(936), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym__expression,
    ACTIONS(168), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(116), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(162), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(106), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21003] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(65), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21054] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(916), 1,
      anon_sym_for,
    ACTIONS(918), 1,
      anon_sym_DOT_DOT,
    ACTIONS(920), 1,
      anon_sym_DASH,
    ACTIONS(922), 1,
      sym_integer_literal,
    ACTIONS(926), 1,
      aux_sym_string_literal_token1,
    STATE(24), 1,
      sym__expression,
    ACTIONS(928), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(924), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(35), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21105] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(958), 1,
      sym_integer_literal,
    ACTIONS(960), 1,
      sym_float_literal,
    STATE(226), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 3,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21158] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(210), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21209] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(211), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21260] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(212), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21311] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(61), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21362] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(60), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21413] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(59), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21464] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(58), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21515] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(57), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21566] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(56), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21617] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(265), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21668] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(218), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21719] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(55), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21770] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(64), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21821] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(66), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21872] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(213), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21923] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(808), 1,
      sym_identifier,
    ACTIONS(810), 1,
      anon_sym_for,
    ACTIONS(816), 1,
      sym_integer_literal,
    ACTIONS(908), 1,
      anon_sym_DOT_DOT,
    ACTIONS(910), 1,
      anon_sym_DASH,
    ACTIONS(912), 1,
      aux_sym_string_literal_token1,
    STATE(173), 1,
      sym__expression,
    ACTIONS(820), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(198), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(822), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(195), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [21974] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(338), 1,
      anon_sym_for,
    ACTIONS(340), 1,
      anon_sym_DOT_DOT,
    ACTIONS(354), 1,
      aux_sym_string_literal_token1,
    ACTIONS(930), 1,
      sym_identifier,
    ACTIONS(932), 1,
      anon_sym_DASH,
    ACTIONS(934), 1,
      sym_integer_literal,
    STATE(215), 1,
      sym__expression,
    ACTIONS(358), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(237), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(352), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(240), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [22025] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(942), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_for,
    ACTIONS(946), 1,
      anon_sym_DOT_DOT,
    ACTIONS(948), 1,
      anon_sym_DASH,
    ACTIONS(950), 1,
      sym_integer_literal,
    ACTIONS(954), 1,
      aux_sym_string_literal_token1,
    STATE(62), 1,
      sym__expression,
    ACTIONS(956), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(952), 4,
      sym_float_literal,
      sym_binary_literal,
      sym_char_literal,
      sym_byte_literal,
    STATE(70), 10,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_field_expression,
      sym_static_member_expression,
      sym_is_expression,
      sym_type_conversion_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [22076] = 7,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(962), 1,
      sym_identifier,
    ACTIONS(964), 1,
      anon_sym_LF,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      sym_field_declaration,
    STATE(585), 1,
      sym__field_identifier,
    ACTIONS(966), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22116] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(601), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22153] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(571), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22190] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 1,
      sym_identifier,
    ACTIONS(980), 1,
      anon_sym_LBRACK,
    STATE(172), 1,
      sym_array_type,
    STATE(206), 1,
      sym__type,
    ACTIONS(978), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22227] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(986), 1,
      anon_sym_LBRACK,
    STATE(433), 1,
      sym_array_type,
    STATE(511), 1,
      sym__type,
    ACTIONS(984), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22264] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(588), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22301] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(577), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22338] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(457), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22375] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 1,
      sym_identifier,
    ACTIONS(980), 1,
      anon_sym_LBRACK,
    STATE(172), 1,
      sym_array_type,
    STATE(204), 1,
      sym__type,
    ACTIONS(978), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22412] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(986), 1,
      anon_sym_LBRACK,
    STATE(433), 1,
      sym_array_type,
    STATE(512), 1,
      sym__type,
    ACTIONS(984), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22449] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      sym_identifier,
    ACTIONS(986), 1,
      anon_sym_LBRACK,
    STATE(433), 1,
      sym_array_type,
    STATE(489), 1,
      sym__type,
    ACTIONS(984), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22486] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(518), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22523] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(597), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22560] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(535), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22597] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      sym_identifier,
    ACTIONS(974), 1,
      anon_sym_LBRACK,
    STATE(413), 1,
      sym_array_type,
    STATE(480), 1,
      sym__type,
    ACTIONS(972), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22634] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22659] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22684] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22709] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22734] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 19,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_uz,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [22784] = 7,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LF,
    ACTIONS(1004), 1,
      anon_sym_LPAREN,
    ACTIONS(1006), 1,
      anon_sym_EQ,
    ACTIONS(1008), 1,
      anon_sym_LBRACE,
    ACTIONS(1000), 2,
      anon_sym_RBRACE,
      sym_identifier,
    STATE(481), 2,
      sym_field_declaration_list,
      sym_ordered_field_declaration_list,
  [22808] = 6,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      sym_identifier,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(515), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(419), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [22828] = 6,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      sym_identifier,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
    STATE(505), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(423), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [22848] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [22860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [22872] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      sym_identifier,
    STATE(415), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(589), 1,
      sym__field_identifier,
    STATE(590), 1,
      sym_field_declaration,
    ACTIONS(1021), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [22892] = 6,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      sym_identifier,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    STATE(497), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(412), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [22912] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [22924] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    ACTIONS(1027), 1,
      anon_sym_DASH_GT,
    ACTIONS(1029), 1,
      sym_throws_specifier,
    ACTIONS(1031), 1,
      anon_sym_EQ_GT,
    STATE(183), 2,
      sym_return_expression,
      sym_block,
  [22944] = 6,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      sym_identifier,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(509), 1,
      aux_sym_enum_variant_list_repeat2,
    STATE(423), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [22964] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(882), 1,
      anon_sym_LF,
    ACTIONS(880), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [22977] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(589), 1,
      sym__field_identifier,
    STATE(590), 1,
      sym_field_declaration,
  [22996] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(702), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [23009] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      sym_identifier,
    ACTIONS(1042), 1,
      anon_sym_LF,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    STATE(423), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [23026] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    STATE(436), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(448), 1,
      sym_field_declaration,
    STATE(589), 1,
      sym__field_identifier,
  [23045] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(866), 1,
      anon_sym_LF,
    ACTIONS(864), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [23058] = 6,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(962), 1,
      sym_identifier,
    ACTIONS(1048), 1,
      anon_sym_LF,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      sym_field_declaration,
    STATE(585), 1,
      sym__field_identifier,
  [23077] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(589), 1,
      sym__field_identifier,
    STATE(590), 1,
      sym_field_declaration,
  [23096] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    STATE(432), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(441), 1,
      sym_field_declaration,
    STATE(589), 1,
      sym__field_identifier,
  [23115] = 6,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(962), 1,
      sym_identifier,
    ACTIONS(1056), 1,
      anon_sym_LF,
    ACTIONS(1058), 1,
      anon_sym_RBRACE,
    STATE(483), 1,
      sym_field_declaration,
    STATE(585), 1,
      sym__field_identifier,
  [23134] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(716), 1,
      anon_sym_LF,
    ACTIONS(714), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [23147] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(870), 1,
      anon_sym_LF,
    ACTIONS(868), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [23160] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(462), 1,
      sym_field_declaration,
    STATE(589), 1,
      sym__field_identifier,
  [23179] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(706), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [23192] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(874), 1,
      anon_sym_LF,
    ACTIONS(872), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [23205] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    ACTIONS(1031), 1,
      anon_sym_EQ_GT,
    ACTIONS(1062), 1,
      anon_sym_DASH_GT,
    STATE(189), 2,
      sym_return_expression,
      sym_block,
  [23222] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(1064), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(473), 1,
      sym_field_declaration,
    STATE(589), 1,
      sym__field_identifier,
  [23241] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      sym_identifier,
    ACTIONS(1066), 1,
      anon_sym_LF,
    ACTIONS(1068), 1,
      anon_sym_RBRACE,
    STATE(423), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [23258] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      anon_sym_LF,
    ACTIONS(1072), 1,
      anon_sym_RBRACE,
    STATE(437), 2,
      sym_enum_variant,
      aux_sym_enum_variant_list_repeat1,
  [23275] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(902), 1,
      anon_sym_LF,
    ACTIONS(900), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [23288] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(1074), 1,
      anon_sym_if,
    STATE(298), 2,
      sym_block,
      sym_if_statement,
  [23302] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_LF,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1080), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      aux_sym_field_declaration_list_repeat2,
  [23318] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    STATE(454), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1084), 2,
      sym__string_content,
      sym_escape_sequence,
  [23332] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
    ACTIONS(1089), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [23346] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1091), 1,
      sym_identifier,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    STATE(555), 1,
      sym_enum_integral_type,
    STATE(558), 1,
      sym_enum_variant_list,
  [23362] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1095), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1097), 2,
      sym__string_content,
      sym_escape_sequence,
  [23376] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1101), 1,
      anon_sym_LF,
    ACTIONS(1099), 3,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [23388] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1103), 4,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      sym_throws_specifier,
      anon_sym_EQ_GT,
  [23398] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_LF,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    STATE(485), 1,
      aux_sym_field_declaration_list_repeat2,
  [23414] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(632), 1,
      anon_sym_LF,
    ACTIONS(630), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [23426] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1107), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1097), 2,
      sym__string_content,
      sym_escape_sequence,
  [23440] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    ACTIONS(1109), 1,
      sym_identifier,
    STATE(542), 1,
      sym_enum_integral_type,
    STATE(543), 1,
      sym_enum_variant_list,
  [23456] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      anon_sym_LF,
    ACTIONS(1111), 1,
      anon_sym_COLON,
    ACTIONS(1113), 1,
      anon_sym_EQ,
  [23472] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1115), 4,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      sym_throws_specifier,
      anon_sym_EQ_GT,
  [23482] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1117), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1097), 2,
      sym__string_content,
      sym_escape_sequence,
  [23496] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1097), 2,
      sym__string_content,
      sym_escape_sequence,
  [23510] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1121), 4,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      sym_throws_specifier,
      anon_sym_EQ_GT,
  [23520] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    ACTIONS(1031), 1,
      anon_sym_EQ_GT,
    STATE(216), 2,
      sym_return_expression,
      sym_block,
  [23534] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1123), 1,
      anon_sym_DQUOTE,
    STATE(468), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1125), 2,
      sym__string_content,
      sym_escape_sequence,
  [23548] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1127), 1,
      anon_sym_DQUOTE,
    STATE(478), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1129), 2,
      sym__string_content,
      sym_escape_sequence,
  [23562] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(1131), 1,
      anon_sym_if,
    STATE(556), 2,
      sym_block,
      sym_if_statement,
  [23576] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(626), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [23588] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_LF,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1133), 1,
      anon_sym_RBRACE,
    STATE(519), 1,
      aux_sym_field_declaration_list_repeat2,
  [23604] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1137), 1,
      anon_sym_LF,
    ACTIONS(1135), 3,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [23616] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(634), 1,
      anon_sym_SEMI,
    ACTIONS(636), 1,
      anon_sym_LF,
    ACTIONS(1139), 1,
      anon_sym_COLON,
    ACTIONS(1141), 1,
      anon_sym_EQ,
  [23632] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1143), 4,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
      sym_throws_specifier,
      anon_sym_EQ_GT,
  [23642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1145), 1,
      anon_sym_DQUOTE,
    STATE(450), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1147), 2,
      sym__string_content,
      sym_escape_sequence,
  [23656] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1149), 1,
      anon_sym_DQUOTE,
    STATE(455), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1151), 2,
      sym__string_content,
      sym_escape_sequence,
  [23670] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1153), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1097), 2,
      sym__string_content,
      sym_escape_sequence,
  [23684] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(624), 1,
      anon_sym_LF,
    ACTIONS(622), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [23696] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1155), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1157), 2,
      sym__string_content,
      sym_escape_sequence,
  [23710] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1160), 1,
      anon_sym_DQUOTE,
    STATE(445), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1162), 2,
      sym__string_content,
      sym_escape_sequence,
  [23724] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(682), 1,
      anon_sym_LF,
    ACTIONS(1164), 1,
      anon_sym_else,
    STATE(568), 1,
      sym_else_clause,
  [23740] = 5,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_LF,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    STATE(500), 1,
      aux_sym_field_declaration_list_repeat2,
  [23756] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1168), 1,
      sym_identifier,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    STATE(245), 1,
      sym_enum_variant_list,
    STATE(550), 1,
      sym_enum_integral_type,
  [23772] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(676), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [23784] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1172), 1,
      anon_sym_DQUOTE,
    STATE(479), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1174), 2,
      sym__string_content,
      sym_escape_sequence,
  [23798] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1178), 1,
      anon_sym_LF,
    ACTIONS(1176), 3,
      anon_sym_EQ,
      anon_sym_RBRACE,
      sym_identifier,
  [23810] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1097), 2,
      sym__string_content,
      sym_escape_sequence,
  [23824] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1097), 2,
      sym__string_content,
      sym_escape_sequence,
  [23838] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      anon_sym_LBRACE,
    ACTIONS(1031), 1,
      anon_sym_EQ_GT,
    STATE(224), 2,
      sym_return_expression,
      sym_block,
  [23852] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1186), 1,
      anon_sym_LF,
    ACTIONS(1188), 1,
      anon_sym_EQ,
    ACTIONS(1184), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [23866] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    ACTIONS(1190), 1,
      sym_identifier,
    STATE(281), 1,
      sym_enum_variant_list,
    STATE(569), 1,
      sym_enum_integral_type,
  [23882] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(491), 1,
      aux_sym_field_declaration_list_repeat2,
  [23895] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [23908] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
  [23921] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    ACTIONS(1198), 1,
      anon_sym_COLON,
    STATE(260), 1,
      sym_enum_variant_list,
  [23934] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1021), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym_identifier,
  [23943] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
  [23956] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1200), 1,
      anon_sym_LF,
    ACTIONS(1202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [23967] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    STATE(524), 1,
      aux_sym_parameters_repeat1,
  [23980] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1064), 1,
      anon_sym_RBRACE,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
  [23993] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    STATE(514), 1,
      sym_field_declaration,
    STATE(585), 1,
      sym__field_identifier,
  [24006] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_field_declaration_list_repeat2,
  [24019] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24032] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24045] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24058] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
    STATE(508), 1,
      aux_sym_enum_variant_list_repeat2,
  [24071] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24084] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    ACTIONS(1198), 1,
      anon_sym_COLON,
    STATE(547), 1,
      sym_enum_variant_list,
  [24097] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
  [24110] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24123] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    ACTIONS(1198), 1,
      anon_sym_COLON,
    STATE(292), 1,
      sym_enum_variant_list,
  [24136] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    STATE(490), 1,
      aux_sym_parameters_repeat1,
  [24149] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24162] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    STATE(508), 1,
      aux_sym_enum_variant_list_repeat2,
  [24175] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24188] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(516), 1,
      aux_sym_field_declaration_list_repeat2,
  [24201] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1068), 1,
      anon_sym_RBRACE,
    ACTIONS(1223), 1,
      anon_sym_LF,
    STATE(508), 1,
      aux_sym_enum_variant_list_repeat2,
  [24214] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1226), 1,
      anon_sym_RBRACE,
    STATE(508), 1,
      aux_sym_enum_variant_list_repeat2,
  [24227] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24240] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    ACTIONS(774), 1,
      anon_sym_LF,
    ACTIONS(1230), 1,
      anon_sym_EQ,
  [24253] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(778), 1,
      anon_sym_SEMI,
    ACTIONS(780), 1,
      anon_sym_LF,
    ACTIONS(1232), 1,
      anon_sym_EQ,
  [24266] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1089), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [24288] = 4,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_LF,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    STATE(508), 1,
      aux_sym_enum_variant_list_repeat2,
  [24301] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
  [24314] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
  [24327] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1200), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [24336] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      aux_sym_field_declaration_list_repeat2,
  [24349] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24362] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24375] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_arguments_repeat2,
  [24388] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    ACTIONS(1198), 1,
      anon_sym_COLON,
    STATE(572), 1,
      sym_enum_variant_list,
  [24401] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      aux_sym_parameters_repeat1,
  [24414] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    ACTIONS(838), 1,
      anon_sym_LF,
  [24424] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(678), 2,
      anon_sym_in,
      anon_sym_COLON,
  [24432] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1245), 2,
      sym_float_literal,
      sym_integer_literal,
  [24440] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    ACTIONS(858), 1,
      anon_sym_LF,
  [24450] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1247), 1,
      sym_identifier,
    STATE(178), 1,
      sym__field_identifier,
  [24460] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1247), 1,
      sym_identifier,
    STATE(177), 1,
      sym__field_identifier,
  [24470] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1243), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24478] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    STATE(269), 1,
      sym__field_identifier,
  [24488] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(624), 2,
      anon_sym_in,
      anon_sym_COLON,
  [24496] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1249), 2,
      sym_float_literal,
      sym_integer_literal,
  [24504] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1251), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24512] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
    STATE(270), 1,
      sym__field_identifier,
  [24522] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 2,
      anon_sym_in,
      anon_sym_COLON,
  [24530] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(794), 1,
      anon_sym_LF,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [24540] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(632), 2,
      anon_sym_in,
      anon_sym_COLON,
  [24548] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(119), 1,
      sym__field_identifier,
  [24558] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(118), 1,
      sym__field_identifier,
  [24568] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    STATE(548), 1,
      sym_enum_variant_list,
  [24578] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(860), 1,
      anon_sym_SEMI,
    ACTIONS(862), 1,
      anon_sym_LF,
  [24588] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
    ACTIONS(806), 1,
      anon_sym_LF,
  [24598] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1255), 2,
      sym_float_literal,
      sym_integer_literal,
  [24606] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    ACTIONS(850), 1,
      anon_sym_LF,
  [24616] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    ACTIONS(846), 1,
      anon_sym_LF,
  [24626] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(892), 1,
      anon_sym_SEMI,
    ACTIONS(894), 1,
      anon_sym_LF,
  [24636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1257), 1,
      anon_sym_LBRACE,
    STATE(264), 1,
      sym_field_declaration_list,
  [24646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    STATE(261), 1,
      sym_enum_variant_list,
  [24656] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE,
    STATE(563), 1,
      sym_field_declaration_list,
  [24666] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1261), 1,
      sym_identifier,
    STATE(87), 1,
      sym__field_identifier,
  [24676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1261), 1,
      sym_identifier,
    STATE(96), 1,
      sym__field_identifier,
  [24686] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(876), 1,
      anon_sym_SEMI,
    ACTIONS(878), 1,
      anon_sym_LF,
  [24696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    STATE(546), 1,
      sym_enum_variant_list,
  [24706] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    ACTIONS(906), 1,
      anon_sym_LF,
  [24716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1263), 1,
      sym_identifier,
    STATE(271), 1,
      sym__field_identifier,
  [24726] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(826), 1,
      anon_sym_SEMI,
    ACTIONS(828), 1,
      anon_sym_LF,
  [24736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1257), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_field_declaration_list,
  [24746] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1263), 1,
      sym_identifier,
    STATE(268), 1,
      sym__field_identifier,
  [24756] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(840), 1,
      anon_sym_SEMI,
    ACTIONS(842), 1,
      anon_sym_LF,
  [24766] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    ACTIONS(898), 1,
      anon_sym_LF,
  [24776] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(854), 1,
      anon_sym_LF,
  [24786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1259), 1,
      anon_sym_LBRACE,
    STATE(528), 1,
      sym_field_declaration_list,
  [24796] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1265), 1,
      sym_identifier,
    STATE(45), 1,
      sym__field_identifier,
  [24806] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1265), 1,
      sym_identifier,
    STATE(46), 1,
      sym__field_identifier,
  [24816] = 3,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      sym_line_comment,
  [24826] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(884), 1,
      anon_sym_SEMI,
    ACTIONS(886), 1,
      anon_sym_LF,
  [24836] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      anon_sym_LBRACE,
    STATE(293), 1,
      sym_enum_variant_list,
  [24846] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1267), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_parameters,
  [24856] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [24864] = 3,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(888), 1,
      anon_sym_SEMI,
    ACTIONS(890), 1,
      anon_sym_LF,
  [24874] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
  [24881] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1271), 1,
      sym_identifier,
  [24888] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      sym_identifier,
  [24895] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1273), 1,
      sym_identifier,
  [24902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1275), 1,
      anon_sym_RBRACK,
  [24909] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1277), 1,
      anon_sym_enum,
  [24916] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
  [24923] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1279), 1,
      anon_sym_in,
  [24930] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1281), 1,
      sym_identifier,
  [24937] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1283), 1,
      sym_identifier,
  [24944] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1285), 1,
      anon_sym_COLON,
  [24951] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1287), 1,
      anon_sym_enum,
  [24958] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1289), 1,
      anon_sym_COLON,
  [24965] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1291), 1,
      sym_identifier,
  [24972] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1293), 1,
      anon_sym_COLON,
  [24979] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1295), 1,
      anon_sym_LBRACE,
  [24986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1297), 1,
      anon_sym_COLON,
  [24993] = 2,
    ACTIONS(620), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_LF,
  [25000] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1299), 1,
      ts_builtin_sym_end,
  [25007] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1301), 1,
      anon_sym_in,
  [25014] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1303), 1,
      anon_sym_in,
  [25021] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1305), 1,
      anon_sym_in,
  [25028] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1307), 1,
      anon_sym_in,
  [25035] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1309), 1,
      anon_sym_in,
  [25042] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1311), 1,
      anon_sym_RBRACK,
  [25049] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1313), 1,
      anon_sym_enum,
  [25056] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1315), 1,
      anon_sym_COLON,
  [25063] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1317), 1,
      sym_identifier,
  [25070] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1319), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 121,
  [SMALL_STATE(4)] = 242,
  [SMALL_STATE(5)] = 356,
  [SMALL_STATE(6)] = 470,
  [SMALL_STATE(7)] = 584,
  [SMALL_STATE(8)] = 698,
  [SMALL_STATE(9)] = 812,
  [SMALL_STATE(10)] = 926,
  [SMALL_STATE(11)] = 1040,
  [SMALL_STATE(12)] = 1154,
  [SMALL_STATE(13)] = 1268,
  [SMALL_STATE(14)] = 1382,
  [SMALL_STATE(15)] = 1496,
  [SMALL_STATE(16)] = 1610,
  [SMALL_STATE(17)] = 1724,
  [SMALL_STATE(18)] = 1838,
  [SMALL_STATE(19)] = 1952,
  [SMALL_STATE(20)] = 2066,
  [SMALL_STATE(21)] = 2180,
  [SMALL_STATE(22)] = 2275,
  [SMALL_STATE(23)] = 2342,
  [SMALL_STATE(24)] = 2417,
  [SMALL_STATE(25)] = 2488,
  [SMALL_STATE(26)] = 2569,
  [SMALL_STATE(27)] = 2640,
  [SMALL_STATE(28)] = 2735,
  [SMALL_STATE(29)] = 2814,
  [SMALL_STATE(30)] = 2901,
  [SMALL_STATE(31)] = 2984,
  [SMALL_STATE(32)] = 3069,
  [SMALL_STATE(33)] = 3165,
  [SMALL_STATE(34)] = 3225,
  [SMALL_STATE(35)] = 3285,
  [SMALL_STATE(36)] = 3345,
  [SMALL_STATE(37)] = 3405,
  [SMALL_STATE(38)] = 3501,
  [SMALL_STATE(39)] = 3597,
  [SMALL_STATE(40)] = 3693,
  [SMALL_STATE(41)] = 3753,
  [SMALL_STATE(42)] = 3813,
  [SMALL_STATE(43)] = 3909,
  [SMALL_STATE(44)] = 3969,
  [SMALL_STATE(45)] = 4029,
  [SMALL_STATE(46)] = 4089,
  [SMALL_STATE(47)] = 4149,
  [SMALL_STATE(48)] = 4209,
  [SMALL_STATE(49)] = 4305,
  [SMALL_STATE(50)] = 4365,
  [SMALL_STATE(51)] = 4425,
  [SMALL_STATE(52)] = 4485,
  [SMALL_STATE(53)] = 4545,
  [SMALL_STATE(54)] = 4605,
  [SMALL_STATE(55)] = 4665,
  [SMALL_STATE(56)] = 4738,
  [SMALL_STATE(57)] = 4817,
  [SMALL_STATE(58)] = 4900,
  [SMALL_STATE(59)] = 4981,
  [SMALL_STATE(60)] = 5066,
  [SMALL_STATE(61)] = 5143,
  [SMALL_STATE(62)] = 5212,
  [SMALL_STATE(63)] = 5281,
  [SMALL_STATE(64)] = 5372,
  [SMALL_STATE(65)] = 5465,
  [SMALL_STATE(66)] = 5558,
  [SMALL_STATE(67)] = 5623,
  [SMALL_STATE(68)] = 5681,
  [SMALL_STATE(69)] = 5757,
  [SMALL_STATE(70)] = 5815,
  [SMALL_STATE(71)] = 5873,
  [SMALL_STATE(72)] = 5965,
  [SMALL_STATE(73)] = 6023,
  [SMALL_STATE(74)] = 6087,
  [SMALL_STATE(75)] = 6179,
  [SMALL_STATE(76)] = 6273,
  [SMALL_STATE(77)] = 6365,
  [SMALL_STATE(78)] = 6437,
  [SMALL_STATE(79)] = 6495,
  [SMALL_STATE(80)] = 6553,
  [SMALL_STATE(81)] = 6631,
  [SMALL_STATE(82)] = 6689,
  [SMALL_STATE(83)] = 6781,
  [SMALL_STATE(84)] = 6839,
  [SMALL_STATE(85)] = 6921,
  [SMALL_STATE(86)] = 6979,
  [SMALL_STATE(87)] = 7059,
  [SMALL_STATE(88)] = 7117,
  [SMALL_STATE(89)] = 7209,
  [SMALL_STATE(90)] = 7293,
  [SMALL_STATE(91)] = 7351,
  [SMALL_STATE(92)] = 7409,
  [SMALL_STATE(93)] = 7467,
  [SMALL_STATE(94)] = 7559,
  [SMALL_STATE(95)] = 7651,
  [SMALL_STATE(96)] = 7709,
  [SMALL_STATE(97)] = 7767,
  [SMALL_STATE(98)] = 7825,
  [SMALL_STATE(99)] = 7917,
  [SMALL_STATE(100)] = 7985,
  [SMALL_STATE(101)] = 8053,
  [SMALL_STATE(102)] = 8111,
  [SMALL_STATE(103)] = 8168,
  [SMALL_STATE(104)] = 8225,
  [SMALL_STATE(105)] = 8282,
  [SMALL_STATE(106)] = 8339,
  [SMALL_STATE(107)] = 8396,
  [SMALL_STATE(108)] = 8455,
  [SMALL_STATE(109)] = 8512,
  [SMALL_STATE(110)] = 8569,
  [SMALL_STATE(111)] = 8626,
  [SMALL_STATE(112)] = 8683,
  [SMALL_STATE(113)] = 8740,
  [SMALL_STATE(114)] = 8797,
  [SMALL_STATE(115)] = 8854,
  [SMALL_STATE(116)] = 8911,
  [SMALL_STATE(117)] = 8968,
  [SMALL_STATE(118)] = 9025,
  [SMALL_STATE(119)] = 9082,
  [SMALL_STATE(120)] = 9139,
  [SMALL_STATE(121)] = 9209,
  [SMALL_STATE(122)] = 9276,
  [SMALL_STATE(123)] = 9343,
  [SMALL_STATE(124)] = 9410,
  [SMALL_STATE(125)] = 9477,
  [SMALL_STATE(126)] = 9544,
  [SMALL_STATE(127)] = 9611,
  [SMALL_STATE(128)] = 9677,
  [SMALL_STATE(129)] = 9739,
  [SMALL_STATE(130)] = 9801,
  [SMALL_STATE(131)] = 9864,
  [SMALL_STATE(132)] = 9927,
  [SMALL_STATE(133)] = 9987,
  [SMALL_STATE(134)] = 10041,
  [SMALL_STATE(135)] = 10095,
  [SMALL_STATE(136)] = 10149,
  [SMALL_STATE(137)] = 10203,
  [SMALL_STATE(138)] = 10257,
  [SMALL_STATE(139)] = 10311,
  [SMALL_STATE(140)] = 10365,
  [SMALL_STATE(141)] = 10419,
  [SMALL_STATE(142)] = 10473,
  [SMALL_STATE(143)] = 10527,
  [SMALL_STATE(144)] = 10581,
  [SMALL_STATE(145)] = 10618,
  [SMALL_STATE(146)] = 10655,
  [SMALL_STATE(147)] = 10692,
  [SMALL_STATE(148)] = 10729,
  [SMALL_STATE(149)] = 10766,
  [SMALL_STATE(150)] = 10803,
  [SMALL_STATE(151)] = 10840,
  [SMALL_STATE(152)] = 10877,
  [SMALL_STATE(153)] = 10914,
  [SMALL_STATE(154)] = 10955,
  [SMALL_STATE(155)] = 10992,
  [SMALL_STATE(156)] = 11029,
  [SMALL_STATE(157)] = 11070,
  [SMALL_STATE(158)] = 11117,
  [SMALL_STATE(159)] = 11154,
  [SMALL_STATE(160)] = 11201,
  [SMALL_STATE(161)] = 11252,
  [SMALL_STATE(162)] = 11311,
  [SMALL_STATE(163)] = 11366,
  [SMALL_STATE(164)] = 11423,
  [SMALL_STATE(165)] = 11476,
  [SMALL_STATE(166)] = 11525,
  [SMALL_STATE(167)] = 11590,
  [SMALL_STATE(168)] = 11633,
  [SMALL_STATE(169)] = 11670,
  [SMALL_STATE(170)] = 11711,
  [SMALL_STATE(171)] = 11765,
  [SMALL_STATE(172)] = 11801,
  [SMALL_STATE(173)] = 11837,
  [SMALL_STATE(174)] = 11901,
  [SMALL_STATE(175)] = 11937,
  [SMALL_STATE(176)] = 11973,
  [SMALL_STATE(177)] = 12009,
  [SMALL_STATE(178)] = 12045,
  [SMALL_STATE(179)] = 12081,
  [SMALL_STATE(180)] = 12117,
  [SMALL_STATE(181)] = 12153,
  [SMALL_STATE(182)] = 12189,
  [SMALL_STATE(183)] = 12225,
  [SMALL_STATE(184)] = 12261,
  [SMALL_STATE(185)] = 12297,
  [SMALL_STATE(186)] = 12333,
  [SMALL_STATE(187)] = 12369,
  [SMALL_STATE(188)] = 12405,
  [SMALL_STATE(189)] = 12441,
  [SMALL_STATE(190)] = 12477,
  [SMALL_STATE(191)] = 12549,
  [SMALL_STATE(192)] = 12595,
  [SMALL_STATE(193)] = 12645,
  [SMALL_STATE(194)] = 12703,
  [SMALL_STATE(195)] = 12759,
  [SMALL_STATE(196)] = 12795,
  [SMALL_STATE(197)] = 12831,
  [SMALL_STATE(198)] = 12867,
  [SMALL_STATE(199)] = 12903,
  [SMALL_STATE(200)] = 12955,
  [SMALL_STATE(201)] = 13003,
  [SMALL_STATE(202)] = 13067,
  [SMALL_STATE(203)] = 13139,
  [SMALL_STATE(204)] = 13203,
  [SMALL_STATE(205)] = 13241,
  [SMALL_STATE(206)] = 13283,
  [SMALL_STATE(207)] = 13321,
  [SMALL_STATE(208)] = 13367,
  [SMALL_STATE(209)] = 13421,
  [SMALL_STATE(210)] = 13483,
  [SMALL_STATE(211)] = 13541,
  [SMALL_STATE(212)] = 13601,
  [SMALL_STATE(213)] = 13657,
  [SMALL_STATE(214)] = 13707,
  [SMALL_STATE(215)] = 13743,
  [SMALL_STATE(216)] = 13811,
  [SMALL_STATE(217)] = 13847,
  [SMALL_STATE(218)] = 13883,
  [SMALL_STATE(219)] = 13925,
  [SMALL_STATE(220)] = 13961,
  [SMALL_STATE(221)] = 13997,
  [SMALL_STATE(222)] = 14033,
  [SMALL_STATE(223)] = 14079,
  [SMALL_STATE(224)] = 14115,
  [SMALL_STATE(225)] = 14151,
  [SMALL_STATE(226)] = 14187,
  [SMALL_STATE(227)] = 14233,
  [SMALL_STATE(228)] = 14305,
  [SMALL_STATE(229)] = 14377,
  [SMALL_STATE(230)] = 14413,
  [SMALL_STATE(231)] = 14485,
  [SMALL_STATE(232)] = 14551,
  [SMALL_STATE(233)] = 14589,
  [SMALL_STATE(234)] = 14661,
  [SMALL_STATE(235)] = 14696,
  [SMALL_STATE(236)] = 14731,
  [SMALL_STATE(237)] = 14766,
  [SMALL_STATE(238)] = 14801,
  [SMALL_STATE(239)] = 14836,
  [SMALL_STATE(240)] = 14905,
  [SMALL_STATE(241)] = 14940,
  [SMALL_STATE(242)] = 14975,
  [SMALL_STATE(243)] = 15032,
  [SMALL_STATE(244)] = 15101,
  [SMALL_STATE(245)] = 15136,
  [SMALL_STATE(246)] = 15171,
  [SMALL_STATE(247)] = 15206,
  [SMALL_STATE(248)] = 15275,
  [SMALL_STATE(249)] = 15344,
  [SMALL_STATE(250)] = 15407,
  [SMALL_STATE(251)] = 15470,
  [SMALL_STATE(252)] = 15539,
  [SMALL_STATE(253)] = 15608,
  [SMALL_STATE(254)] = 15677,
  [SMALL_STATE(255)] = 15746,
  [SMALL_STATE(256)] = 15781,
  [SMALL_STATE(257)] = 15816,
  [SMALL_STATE(258)] = 15851,
  [SMALL_STATE(259)] = 15914,
  [SMALL_STATE(260)] = 15949,
  [SMALL_STATE(261)] = 15984,
  [SMALL_STATE(262)] = 16019,
  [SMALL_STATE(263)] = 16054,
  [SMALL_STATE(264)] = 16089,
  [SMALL_STATE(265)] = 16124,
  [SMALL_STATE(266)] = 16193,
  [SMALL_STATE(267)] = 16228,
  [SMALL_STATE(268)] = 16263,
  [SMALL_STATE(269)] = 16298,
  [SMALL_STATE(270)] = 16333,
  [SMALL_STATE(271)] = 16368,
  [SMALL_STATE(272)] = 16403,
  [SMALL_STATE(273)] = 16438,
  [SMALL_STATE(274)] = 16473,
  [SMALL_STATE(275)] = 16508,
  [SMALL_STATE(276)] = 16545,
  [SMALL_STATE(277)] = 16580,
  [SMALL_STATE(278)] = 16617,
  [SMALL_STATE(279)] = 16686,
  [SMALL_STATE(280)] = 16749,
  [SMALL_STATE(281)] = 16784,
  [SMALL_STATE(282)] = 16819,
  [SMALL_STATE(283)] = 16854,
  [SMALL_STATE(284)] = 16889,
  [SMALL_STATE(285)] = 16924,
  [SMALL_STATE(286)] = 16959,
  [SMALL_STATE(287)] = 16996,
  [SMALL_STATE(288)] = 17059,
  [SMALL_STATE(289)] = 17094,
  [SMALL_STATE(290)] = 17129,
  [SMALL_STATE(291)] = 17164,
  [SMALL_STATE(292)] = 17199,
  [SMALL_STATE(293)] = 17234,
  [SMALL_STATE(294)] = 17269,
  [SMALL_STATE(295)] = 17304,
  [SMALL_STATE(296)] = 17339,
  [SMALL_STATE(297)] = 17374,
  [SMALL_STATE(298)] = 17441,
  [SMALL_STATE(299)] = 17476,
  [SMALL_STATE(300)] = 17511,
  [SMALL_STATE(301)] = 17574,
  [SMALL_STATE(302)] = 17637,
  [SMALL_STATE(303)] = 17688,
  [SMALL_STATE(304)] = 17739,
  [SMALL_STATE(305)] = 17790,
  [SMALL_STATE(306)] = 17841,
  [SMALL_STATE(307)] = 17892,
  [SMALL_STATE(308)] = 17943,
  [SMALL_STATE(309)] = 17994,
  [SMALL_STATE(310)] = 18045,
  [SMALL_STATE(311)] = 18096,
  [SMALL_STATE(312)] = 18147,
  [SMALL_STATE(313)] = 18198,
  [SMALL_STATE(314)] = 18249,
  [SMALL_STATE(315)] = 18300,
  [SMALL_STATE(316)] = 18351,
  [SMALL_STATE(317)] = 18402,
  [SMALL_STATE(318)] = 18453,
  [SMALL_STATE(319)] = 18504,
  [SMALL_STATE(320)] = 18555,
  [SMALL_STATE(321)] = 18606,
  [SMALL_STATE(322)] = 18657,
  [SMALL_STATE(323)] = 18708,
  [SMALL_STATE(324)] = 18759,
  [SMALL_STATE(325)] = 18810,
  [SMALL_STATE(326)] = 18861,
  [SMALL_STATE(327)] = 18912,
  [SMALL_STATE(328)] = 18963,
  [SMALL_STATE(329)] = 19014,
  [SMALL_STATE(330)] = 19065,
  [SMALL_STATE(331)] = 19116,
  [SMALL_STATE(332)] = 19167,
  [SMALL_STATE(333)] = 19218,
  [SMALL_STATE(334)] = 19269,
  [SMALL_STATE(335)] = 19320,
  [SMALL_STATE(336)] = 19371,
  [SMALL_STATE(337)] = 19422,
  [SMALL_STATE(338)] = 19473,
  [SMALL_STATE(339)] = 19524,
  [SMALL_STATE(340)] = 19575,
  [SMALL_STATE(341)] = 19626,
  [SMALL_STATE(342)] = 19677,
  [SMALL_STATE(343)] = 19728,
  [SMALL_STATE(344)] = 19779,
  [SMALL_STATE(345)] = 19830,
  [SMALL_STATE(346)] = 19881,
  [SMALL_STATE(347)] = 19932,
  [SMALL_STATE(348)] = 19983,
  [SMALL_STATE(349)] = 20034,
  [SMALL_STATE(350)] = 20085,
  [SMALL_STATE(351)] = 20136,
  [SMALL_STATE(352)] = 20187,
  [SMALL_STATE(353)] = 20238,
  [SMALL_STATE(354)] = 20289,
  [SMALL_STATE(355)] = 20340,
  [SMALL_STATE(356)] = 20391,
  [SMALL_STATE(357)] = 20442,
  [SMALL_STATE(358)] = 20493,
  [SMALL_STATE(359)] = 20544,
  [SMALL_STATE(360)] = 20595,
  [SMALL_STATE(361)] = 20646,
  [SMALL_STATE(362)] = 20697,
  [SMALL_STATE(363)] = 20748,
  [SMALL_STATE(364)] = 20799,
  [SMALL_STATE(365)] = 20850,
  [SMALL_STATE(366)] = 20901,
  [SMALL_STATE(367)] = 20952,
  [SMALL_STATE(368)] = 21003,
  [SMALL_STATE(369)] = 21054,
  [SMALL_STATE(370)] = 21105,
  [SMALL_STATE(371)] = 21158,
  [SMALL_STATE(372)] = 21209,
  [SMALL_STATE(373)] = 21260,
  [SMALL_STATE(374)] = 21311,
  [SMALL_STATE(375)] = 21362,
  [SMALL_STATE(376)] = 21413,
  [SMALL_STATE(377)] = 21464,
  [SMALL_STATE(378)] = 21515,
  [SMALL_STATE(379)] = 21566,
  [SMALL_STATE(380)] = 21617,
  [SMALL_STATE(381)] = 21668,
  [SMALL_STATE(382)] = 21719,
  [SMALL_STATE(383)] = 21770,
  [SMALL_STATE(384)] = 21821,
  [SMALL_STATE(385)] = 21872,
  [SMALL_STATE(386)] = 21923,
  [SMALL_STATE(387)] = 21974,
  [SMALL_STATE(388)] = 22025,
  [SMALL_STATE(389)] = 22076,
  [SMALL_STATE(390)] = 22116,
  [SMALL_STATE(391)] = 22153,
  [SMALL_STATE(392)] = 22190,
  [SMALL_STATE(393)] = 22227,
  [SMALL_STATE(394)] = 22264,
  [SMALL_STATE(395)] = 22301,
  [SMALL_STATE(396)] = 22338,
  [SMALL_STATE(397)] = 22375,
  [SMALL_STATE(398)] = 22412,
  [SMALL_STATE(399)] = 22449,
  [SMALL_STATE(400)] = 22486,
  [SMALL_STATE(401)] = 22523,
  [SMALL_STATE(402)] = 22560,
  [SMALL_STATE(403)] = 22597,
  [SMALL_STATE(404)] = 22634,
  [SMALL_STATE(405)] = 22659,
  [SMALL_STATE(406)] = 22684,
  [SMALL_STATE(407)] = 22709,
  [SMALL_STATE(408)] = 22734,
  [SMALL_STATE(409)] = 22759,
  [SMALL_STATE(410)] = 22784,
  [SMALL_STATE(411)] = 22808,
  [SMALL_STATE(412)] = 22828,
  [SMALL_STATE(413)] = 22848,
  [SMALL_STATE(414)] = 22860,
  [SMALL_STATE(415)] = 22872,
  [SMALL_STATE(416)] = 22892,
  [SMALL_STATE(417)] = 22912,
  [SMALL_STATE(418)] = 22924,
  [SMALL_STATE(419)] = 22944,
  [SMALL_STATE(420)] = 22964,
  [SMALL_STATE(421)] = 22977,
  [SMALL_STATE(422)] = 22996,
  [SMALL_STATE(423)] = 23009,
  [SMALL_STATE(424)] = 23026,
  [SMALL_STATE(425)] = 23045,
  [SMALL_STATE(426)] = 23058,
  [SMALL_STATE(427)] = 23077,
  [SMALL_STATE(428)] = 23096,
  [SMALL_STATE(429)] = 23115,
  [SMALL_STATE(430)] = 23134,
  [SMALL_STATE(431)] = 23147,
  [SMALL_STATE(432)] = 23160,
  [SMALL_STATE(433)] = 23179,
  [SMALL_STATE(434)] = 23192,
  [SMALL_STATE(435)] = 23205,
  [SMALL_STATE(436)] = 23222,
  [SMALL_STATE(437)] = 23241,
  [SMALL_STATE(438)] = 23258,
  [SMALL_STATE(439)] = 23275,
  [SMALL_STATE(440)] = 23288,
  [SMALL_STATE(441)] = 23302,
  [SMALL_STATE(442)] = 23318,
  [SMALL_STATE(443)] = 23332,
  [SMALL_STATE(444)] = 23346,
  [SMALL_STATE(445)] = 23362,
  [SMALL_STATE(446)] = 23376,
  [SMALL_STATE(447)] = 23388,
  [SMALL_STATE(448)] = 23398,
  [SMALL_STATE(449)] = 23414,
  [SMALL_STATE(450)] = 23426,
  [SMALL_STATE(451)] = 23440,
  [SMALL_STATE(452)] = 23456,
  [SMALL_STATE(453)] = 23472,
  [SMALL_STATE(454)] = 23482,
  [SMALL_STATE(455)] = 23496,
  [SMALL_STATE(456)] = 23510,
  [SMALL_STATE(457)] = 23520,
  [SMALL_STATE(458)] = 23534,
  [SMALL_STATE(459)] = 23548,
  [SMALL_STATE(460)] = 23562,
  [SMALL_STATE(461)] = 23576,
  [SMALL_STATE(462)] = 23588,
  [SMALL_STATE(463)] = 23604,
  [SMALL_STATE(464)] = 23616,
  [SMALL_STATE(465)] = 23632,
  [SMALL_STATE(466)] = 23642,
  [SMALL_STATE(467)] = 23656,
  [SMALL_STATE(468)] = 23670,
  [SMALL_STATE(469)] = 23684,
  [SMALL_STATE(470)] = 23696,
  [SMALL_STATE(471)] = 23710,
  [SMALL_STATE(472)] = 23724,
  [SMALL_STATE(473)] = 23740,
  [SMALL_STATE(474)] = 23756,
  [SMALL_STATE(475)] = 23772,
  [SMALL_STATE(476)] = 23784,
  [SMALL_STATE(477)] = 23798,
  [SMALL_STATE(478)] = 23810,
  [SMALL_STATE(479)] = 23824,
  [SMALL_STATE(480)] = 23838,
  [SMALL_STATE(481)] = 23852,
  [SMALL_STATE(482)] = 23866,
  [SMALL_STATE(483)] = 23882,
  [SMALL_STATE(484)] = 23895,
  [SMALL_STATE(485)] = 23908,
  [SMALL_STATE(486)] = 23921,
  [SMALL_STATE(487)] = 23934,
  [SMALL_STATE(488)] = 23943,
  [SMALL_STATE(489)] = 23956,
  [SMALL_STATE(490)] = 23967,
  [SMALL_STATE(491)] = 23980,
  [SMALL_STATE(492)] = 23993,
  [SMALL_STATE(493)] = 24006,
  [SMALL_STATE(494)] = 24019,
  [SMALL_STATE(495)] = 24032,
  [SMALL_STATE(496)] = 24045,
  [SMALL_STATE(497)] = 24058,
  [SMALL_STATE(498)] = 24071,
  [SMALL_STATE(499)] = 24084,
  [SMALL_STATE(500)] = 24097,
  [SMALL_STATE(501)] = 24110,
  [SMALL_STATE(502)] = 24123,
  [SMALL_STATE(503)] = 24136,
  [SMALL_STATE(504)] = 24149,
  [SMALL_STATE(505)] = 24162,
  [SMALL_STATE(506)] = 24175,
  [SMALL_STATE(507)] = 24188,
  [SMALL_STATE(508)] = 24201,
  [SMALL_STATE(509)] = 24214,
  [SMALL_STATE(510)] = 24227,
  [SMALL_STATE(511)] = 24240,
  [SMALL_STATE(512)] = 24253,
  [SMALL_STATE(513)] = 24266,
  [SMALL_STATE(514)] = 24279,
  [SMALL_STATE(515)] = 24288,
  [SMALL_STATE(516)] = 24301,
  [SMALL_STATE(517)] = 24314,
  [SMALL_STATE(518)] = 24327,
  [SMALL_STATE(519)] = 24336,
  [SMALL_STATE(520)] = 24349,
  [SMALL_STATE(521)] = 24362,
  [SMALL_STATE(522)] = 24375,
  [SMALL_STATE(523)] = 24388,
  [SMALL_STATE(524)] = 24401,
  [SMALL_STATE(525)] = 24414,
  [SMALL_STATE(526)] = 24424,
  [SMALL_STATE(527)] = 24432,
  [SMALL_STATE(528)] = 24440,
  [SMALL_STATE(529)] = 24450,
  [SMALL_STATE(530)] = 24460,
  [SMALL_STATE(531)] = 24470,
  [SMALL_STATE(532)] = 24478,
  [SMALL_STATE(533)] = 24488,
  [SMALL_STATE(534)] = 24496,
  [SMALL_STATE(535)] = 24504,
  [SMALL_STATE(536)] = 24512,
  [SMALL_STATE(537)] = 24522,
  [SMALL_STATE(538)] = 24530,
  [SMALL_STATE(539)] = 24540,
  [SMALL_STATE(540)] = 24548,
  [SMALL_STATE(541)] = 24558,
  [SMALL_STATE(542)] = 24568,
  [SMALL_STATE(543)] = 24578,
  [SMALL_STATE(544)] = 24588,
  [SMALL_STATE(545)] = 24598,
  [SMALL_STATE(546)] = 24606,
  [SMALL_STATE(547)] = 24616,
  [SMALL_STATE(548)] = 24626,
  [SMALL_STATE(549)] = 24636,
  [SMALL_STATE(550)] = 24646,
  [SMALL_STATE(551)] = 24656,
  [SMALL_STATE(552)] = 24666,
  [SMALL_STATE(553)] = 24676,
  [SMALL_STATE(554)] = 24686,
  [SMALL_STATE(555)] = 24696,
  [SMALL_STATE(556)] = 24706,
  [SMALL_STATE(557)] = 24716,
  [SMALL_STATE(558)] = 24726,
  [SMALL_STATE(559)] = 24736,
  [SMALL_STATE(560)] = 24746,
  [SMALL_STATE(561)] = 24756,
  [SMALL_STATE(562)] = 24766,
  [SMALL_STATE(563)] = 24776,
  [SMALL_STATE(564)] = 24786,
  [SMALL_STATE(565)] = 24796,
  [SMALL_STATE(566)] = 24806,
  [SMALL_STATE(567)] = 24816,
  [SMALL_STATE(568)] = 24826,
  [SMALL_STATE(569)] = 24836,
  [SMALL_STATE(570)] = 24846,
  [SMALL_STATE(571)] = 24856,
  [SMALL_STATE(572)] = 24864,
  [SMALL_STATE(573)] = 24874,
  [SMALL_STATE(574)] = 24881,
  [SMALL_STATE(575)] = 24888,
  [SMALL_STATE(576)] = 24895,
  [SMALL_STATE(577)] = 24902,
  [SMALL_STATE(578)] = 24909,
  [SMALL_STATE(579)] = 24916,
  [SMALL_STATE(580)] = 24923,
  [SMALL_STATE(581)] = 24930,
  [SMALL_STATE(582)] = 24937,
  [SMALL_STATE(583)] = 24944,
  [SMALL_STATE(584)] = 24951,
  [SMALL_STATE(585)] = 24958,
  [SMALL_STATE(586)] = 24965,
  [SMALL_STATE(587)] = 24972,
  [SMALL_STATE(588)] = 24979,
  [SMALL_STATE(589)] = 24986,
  [SMALL_STATE(590)] = 24993,
  [SMALL_STATE(591)] = 25000,
  [SMALL_STATE(592)] = 25007,
  [SMALL_STATE(593)] = 25014,
  [SMALL_STATE(594)] = 25021,
  [SMALL_STATE(595)] = 25028,
  [SMALL_STATE(596)] = 25035,
  [SMALL_STATE(597)] = 25042,
  [SMALL_STATE(598)] = 25049,
  [SMALL_STATE(599)] = 25056,
  [SMALL_STATE(600)] = 25063,
  [SMALL_STATE(601)] = 25070,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(600),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(308),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(538),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(578),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(444),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(574),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(576),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(255),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(255),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(586),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(342),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(575),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(310),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(309),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(133),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(140),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(139),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(578),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(474),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(581),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(582),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(356),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(120),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(442),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(338),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(108),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_expression, 3, .production_id = 13),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_expression, 3, .production_id = 13),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 15),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 15),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 28),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 28),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 11),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 11),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 25),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 25),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, .production_id = 12),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, .production_id = 12),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_member_expression, 3, .production_id = 12),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_member_expression, 3, .production_id = 12),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion_expression, 3, .production_id = 14),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion_expression, 3, .production_id = 14),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 6, .production_id = 30),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 6, .production_id = 30),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_throw_statement, 2, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throw_statement, 2, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 19),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 19),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 30),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 30),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 19),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 19),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(533),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(537),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(534),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(539),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(476),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(155),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 2, .production_id = 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 2, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 10),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 17),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 17),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 3, .production_id = 26),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 26),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 29),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 29),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 21),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 21),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 27),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, .production_id = 27),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 4, .production_id = 31),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 4, .production_id = 31),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mutable_declaration, 4, .production_id = 18),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutable_declaration, 4, .production_id = 18),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 18),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 18),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 34),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 34),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 35),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, .production_id = 35),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 4),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 6),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 6),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 2),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 8),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 9),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_declaration, 3, .production_id = 8),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 3, .production_id = 8),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3, .production_id = 8),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 8),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 3, .production_id = 16),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 3, .production_id = 16),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 4),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 5),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 6),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 6),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 22),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 22),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 23),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 23),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 24),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 24),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 1, .production_id = 7),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 7),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(217),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1039] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(410),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [1044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_variant_list_repeat2, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(492),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_field_declaration_list, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 3),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(470),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_field_declaration_list, 4),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant, 2, .production_id = 20),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 20),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 32),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, .production_id = 32),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(63),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat2, 2), SHIFT_REPEAT(438),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(132),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 33),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 18),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boxed_specifier, 1),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_integral_type, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
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
