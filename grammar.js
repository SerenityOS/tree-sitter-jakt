const PREC = {
  range: 13,
  call: 12,
  unary: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  assign: 0,
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

const newline = '\n'
terminator = choice(newline, ';')

module.exports = grammar({
  name: 'jakt',

  word: $ => $.identifier,

  extras: $ => [/\s/, $.line_comment],

  externals: $ => [
    $._string_content,
    $.float_literal,
  ],

  supertypes: $ => [
    $._expression,
    $._type,
    $._literal,
    $._literal_pattern,
    $._statement,
    $._pattern,
  ],

  inline: $ => [
    $._type_identifier,
    $._statement,
    $.declaration,
  ],

  conflicts: $ => [
    [$._type, $._pattern],
    [$.parameters, $._pattern],
    [$.field_declaration_list, $.ordered_field_declaration_list],
  ],

  rules: {

    source_file: $ => repeat(choice(
      seq($._statement, terminator),
      $._top_level_declaration,
    )),

    _statement: $ => choice(
        $.declaration,
        $._expression,
        $.block,
        $.if_statement,
        $.return_statement,
        $.while_statement,
        $.increment_statement,
        $.decrement_statement,
        $.continue_statement,
    ),

    declaration: $ => choice(
      $.let_declaration,
      $.mutable_declaration,
      $.enum_declaration,
    ),

    _expression: $ => choice(
        $.unary_expression,
        $.binary_expression,
        $._literal,
        $.identifier,
        $.call_expression,
        $.range_expression,
        $.for_expression,
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._expression),
      field('body', $.block)
    ),

    increment_statement: $ => prec(1, choice(
        seq($._expression, '++'),
        seq('++', $._expression),
    )),

    decrement_statement: $ => prec(1, choice(
        seq($._expression, '--'),
        seq('--', $._expression),
    )),

    continue_statement: $ => seq('continue'),

    for_expression: $ => seq(
      'for',
      field('pattern', $._pattern),
      'in',
      field('value', $._expression),
      field('body', $.block)
    ),

    call_expression: $ => prec(PREC.call, seq(
      field('function', $._expression),
      field('arguments', $.arguments)
    )),

    range_expression: $ => prec.left(PREC.range, choice(
      seq($._expression, choice('..'), $._expression),
      '..'
    )),

    arguments: $ => seq(
      '(',
      optional(sepBy(',', choice(repeat($.argument), $._expression))),
      ')'
    ),

    argument: $ => seq(
      field('label', choice($._pattern)),
      ':',
      $._expression
    ),

    _top_level_declaration: $ => choice(
      $.function_declaration,
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

    mutable_declaration: $ => seq(
      'mut',
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
    boxed_modifier: $ => seq('boxed'),

    enum_declaration: $ => seq(
      optional($.boxed_modifier),
      'enum',
      field('name', choice($._type_identifier, optional($.enum_integral_type))),
      field('body', $.enum_variant_list)
    ),

    enum_integral_type: $ => seq(
        $.identifier,
        ':',
        $._type,
    ),

    enum_variant_list: $ => seq(
      '{',
      sepBy('\\n', repeat($.enum_variant)),
      '}'
    ),

    enum_variant: $ => seq(
      field('name', $.identifier),
      field('body', optional(choice(
        $.field_declaration_list,
        $.ordered_field_declaration_list
      ))),
      optional(seq(
        '=',
        field('value', $._expression)
      ))
    ),

    field_declaration_list: $ => seq(
      '(',
      sepBy('\\n', seq(repeat($.field_declaration))),
      ')'
    ),

    field_declaration: $ => seq(
      field('name', $._field_identifier),
      ':',
      field('type', $._type)
    ),

    _field_identifier: $ => alias($.identifier, $.field_identifier),

    ordered_field_declaration_list: $ => seq(
      '(',
      choice(
        alias(choice(...primitive_types), $.primitive_type),
        sepBy(',', $.field_declaration),
      ),
      ')',
    ),

    mutable_specifier: $ => 'mut',

    unary_expression: $ => prec(PREC.unary, seq(
      '-', $._expression
    )),

    return_statement: $ => choice(
      prec.left(seq('return', $._expression)),
      prec(-1, 'return'),
    ),

    binary_expression: $ => {
      const table = [
        [PREC.bitand, '&'],
        [PREC.bitor, '|'],
        [PREC.bitxor, '^'],
        [PREC.comparative, choice('==', '!=', '<', '<=', '>', '>=')],
        [PREC.shift, choice('<<', '>>')],
        [PREC.additive, choice('+', '-', '+=')],
        [PREC.multiplicative, choice('*', '/', '%')],
      ];

      return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))));
    },

    _literal: $ => choice(
      $.string_literal,
      $.char_literal,
      $.boolean_literal,
      $.integer_literal,
      $.binary_literal,
      $.float_literal,
    ),

    _pattern: $ => choice(
      $._literal_pattern,
      alias(choice(...primitive_types), $.identifier),
      $.identifier,
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
        /0o[0-7_]+/
      ),
      optional(choice(...numeric_types))
    )),

    binary_literal: $ => token(seq(
      choice(
        /0b[01_]+/,
      ),
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

    function_declaration: $ => seq(
      'function',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(seq('->', field('return_type', $._type))),
      field('body', $.block)
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', seq(
        choice(
          $.parameter,
        ))),
      optional(','),
      ')'
    ),

    parameter: $ => seq(
      optional($.anonymous_specifier),
      field('pattern', choice(
        $._pattern,
      )),
      ':',
      field('type', $._type)
    ),

    anonymous_specifier: $ => 'anon',

    block: $ => seq(
      '{',
      repeat($._statement),
      // optional($._expression),
      '}'
    ),

    if_statement: $ => seq(
      'if',
      field('condition', seq($._expression)),
      field('consequence', $.block),
      optional(field("alternative", $.else_clause))

    ),

    else_clause: $ => seq(
      'else',
      choice(
        $.block,
        $.if_statement,
      )
    ),

    boolean_literal: $ => choice('true', 'false'),

    comment: $ => $.line_comment,

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
