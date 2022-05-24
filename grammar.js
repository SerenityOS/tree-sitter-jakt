const PREC = {
  unary: 11,
}

const numeric_types = [
  'u8',
  'i8',
  'u16',
  'i16',
  'u32',
  'i32',
  'u64',
  'i64',
  'u128',
  'i128',
  'isize',
  'usize',
  'f32',
  'f64',
  'c_int',
]

const primitive_types = numeric_types.concat(['bool', 'String', 'c_char'])

module.exports = grammar({
  name: 'jakt',

  word: $ => $.identifier,

  externals: $ => [
    $._string_content,
    $.float_literal,
  ],

  supertypes: $ => [
    $._expression,
    $._type,
    $._literal,
    $._literal_pattern,
    $._declaration_statement,
    $._pattern,
  ],

  inline: $ => [
    $._type_identifier,
    $._declaration_statement,
  ],

  conflicts: $ => [
    [$._type, $._pattern],
    [$.parameters, $._pattern],
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      // $.expression_statement,
      $._declaration_statement
    ),

    _declaration_statement: $ => choice(
      $.let_declaration,
      $.function_item,
    ),

    _type: $ => choice(
      $.array_type,
      $._type_identifier,
      alias(choice(...primitive_types), $.primitive_type)
    ),

    array_type: $ => seq(
      '[',
      field('element', $._type),
      ']'
    ),

    let_declaration: $ => seq(
      'let',
      optional($.mutable_specifier),
      field('pattern', $._pattern),
      optional(seq(
        ':',
        field('type', $._type)
      )),
      optional(seq(
        '=',
        field('value', $._expression)
      )),
    ),

    mutable_specifier: $ => 'mutable',

    _expression: $ => choice(
        $.unary_expression,
        $._literal,
    ),

    unary_expression: $ => prec(PREC.unary, seq(
      '-', $._expression
    )),

    _literal: $ => choice(
      $.string_literal,
      $.char_literal,
      $.boolean_literal,
      $.integer_literal,
      $.float_literal,
    ),

    _pattern: $ => choice(
      $._literal_pattern,
      alias(choice(...primitive_types), $.identifier),
      $.identifier,
      // '_'
    ),

    _literal_pattern: $ => choice(
      $.string_literal,
      $.char_literal,
      $.boolean_literal,
      $.integer_literal,
      $.float_literal,
      $.negative_literal,
    ),

    negative_literal: $ => seq('-', choice($.integer_literal, $.float_literal)),

    integer_literal: $ => token(seq(
      choice(
        /[0-9][0-9_]*/,
        /0x[0-9a-fA-F_]+/,
        /0b[01_]+/,
        /0o[0-7_]+/
      ),
      optional(choice(...numeric_types))
    )),

    string_literal: $ => seq(
      alias(/b?"/, '"'),
      repeat(choice(
        $.escape_sequence,
        $._string_content
      )),
      token.immediate('"')
    ),

    char_literal: $ => token(seq(
      optional('b'),
      '\'',
      optional(choice(
        seq('\\', choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )),
        /[^\\']/
      )),
      '\''
    )),

    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
    )),

    function_item: $ => seq(
      // optional($.visibility_modifier),
      // optional($.function_modifiers),
      'function',
      field('name', $.identifier),
      // field('type_parameters', optional($.type_parameters)),
      field('parameters', $.parameters),
      optional(seq('->', field('return_type', $._type))),
      // optional($.where_clause),
      field('body', $.block)
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', seq(
        // optional($.attribute_item),
        choice(
          $.parameter,
          // $.self_parameter,
          // $.variadic_parameter,
          // '_',
          // $._type
        ))),
      optional(','),
      ')'
    ),

    parameter: $ => seq(
      optional($.mutable_specifier),
      field('pattern', choice(
        $._pattern,
        // $.self,
        // $._reserved_identifier,
      )),
      ':',
      field('type', $._type)
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      optional($._expression),
      '}'
    ),

    boolean_literal: $ => choice('true', 'false'),

    comment: $ => choice(
      $.line_comment,
      // $.block_comment
    ),

    line_comment: $ => token(seq(
      '//', /.*/
    )),

    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    _type_identifier: $ => alias($.identifier, $.type_identifier),
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
