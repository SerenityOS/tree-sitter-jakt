const PREC = {
  field: 14,
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
  'uz',
  'f32',
  'f64',
  'c_int',
]

const primitive_types = numeric_types.concat(['bool', 'String', 'c_char', 'void'])

terminator = choice('\n', ';')

identifier = /[_\p{XID_Start}][_\p{XID_Continue}]*/

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
    $.field_identifier,
  ],

  conflicts: $ => [
    [$._expression, $.array_expression],
  ],

  rules: {

    source_file: $ => repeat(
      choice(
        seq($._statement, optional(terminator)),
      )
    ),

    _statement: $ => choice(
      $.declaration,
      $._expression,
      $.block,
      $.if_statement,
      $.return_statement,
      $.while_statement,
      $.continue_statement,
      $.throw_statement,
      $.defer_statement,
      $.loop_statement,
      $.try_statement,
      $.unsafe_block,
      $.yield_statement,
      $.import_statement,
      $.guard_statement,
    ),

    declaration: $ => choice(
      $.let_declaration,
      $.mutable_declaration,
      $.enum_declaration,
      $.struct_declaration,
      $.class_declaration,
      $.namespace_declaration,
      $.function_declaration,
    ),

    _expression: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $._literal,
      $.this_reference_shorthand,
      $.identifier,
      $.optional_identifier,
      $.raw_pointer_identfier,
      $.optional_expression,
      $.call_expression,
      $.range_expression,
      $.for_expression,
      $.field_expression,
      $.static_member_expression,
      $.is_expression,
      $.type_conversion_expression,
      $.logical_not,
      $.assignment_expression,
      $.array_expression,
      $.none_expression,
      $.update_expression,
      $.match_expression,
      $.reference_expression,
      $.dereference_expression,
      $.mutable_reference_expression,
      $.parenthesized_expression,
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._expression),
      field('body', $.block)
    ),

    loop_statement: $ => seq(
      'loop',
      field('body', $.block)
    ),

    continue_statement: $ => seq('continue'),

    throw_statement: $ => seq(
      'throw',
      field('value', $._expression),
    ),

    defer_statement: $ => seq(
      'defer',
      choice(
        field('body', $.block),
        field('body', $._expression),
      )
    ),

    try_statement: $ => seq(
      'try',
      choice(
        field('try_body', $.block),
        field('try_body', $._expression),
      ),
      'catch',
      $.identifier,
      choice(
        field('catch_body', $.block),
        field('catch_body', $._expression),
      )
    ),

    unsafe_block: $ => seq(
      'unsafe',
      '{',
      repeat($._statement),
      '}'
    ),

    yield_statement: $ => seq(
      'yield',
      $._expression,
    ),

    c_header_identfier: $ => token(seq('"', identifier, '.h"')),

    import_statement: $ => prec.right(seq(
      'import',
      optional(choice(
          seq('extern', 'c', $.c_header_identfier),
          seq($.identifier, optional(seq('as', $.identifier)))
      )),
      optional(field('body', $.import_block)),
    )),

    import_block: $ => seq(
      '{',
      optional(sepBy(',', seq($.identifier, optional(terminator)))),
      optional(repeat(seq($.extern_function_declaration, optional(terminator)))),
      '}'
    ),

    guard_statement: $ => seq(
      'guard',
      field('condition', seq($._expression)),
      'else',
      field('consequence', $.block),

    ),

    namespace_declaration: $ => seq(
      'namespace',
      field('pattern', $._pattern),
      field('body', $.block)
    ),

    for_expression: $ => seq(
      'for',
      field('pattern', $._pattern),
      'in',
      field('value', $._expression),
      field('body', $.block)
    ),

    call_expression: $ => prec(PREC.call, prec.left(seq(
      field('function', $._expression),
      field('arguments', $.arguments),
      optional(choice($.optional_specifier, $.call_chain_expression)),
    ))),

    call_chain_expression: $ => field('value', seq('[', $._expression, ']')),

    range_expression: $ => prec.left(PREC.range, choice(
      seq($._expression, choice('..'), $._expression),
      '..'
    )),

    field_expression: $ => prec(PREC.field, seq(
      field('value', choice($.this_reference, $._expression)),
      '.',
      field('field', choice(
        $._field_identifier,
        $.integer_literal,
      ))
    )),

    static_member_expression: $ => prec(PREC.field, seq(
      field('value', $._expression),
      '::',
      field('field', choice(
        $._field_identifier,
      ))
    )),

    is_expression: $ =>  prec.left(seq(
      field('left', $._expression),
      'is',
      field('right', $._expression),
    )),

    type_conversion_expression: $ =>  seq(
      prec.left(field('left', $._expression)),
      choice('as?', 'as!'),
      prec.right(alias(choice(...primitive_types), $.primitive_type)),
    ),

    logical_not: $ =>  prec.left(seq(
      'not',
      $._expression,
    )),

    assignment_expression: $ => prec.left(PREC.assign, seq(
      field('left', $._expression),
      field('operator', choice('=', '+=', '-=')),
      field('right', $._expression)
    )),

    array_expression: $ => prec.right(seq(
      $.identifier,
      repeat(
        seq(
          '[',
          choice(
            seq(
              sepBy(',', $._expression),
              optional(',')
            ),
            $._expression,
          ),
          ']',
        ),
      ),
    )),

    optional_identifier: $ => prec.right(seq(
      field('operand', $.identifier),
      field('operator', choice( '!', '?')),
    )),

    raw_pointer_identfier: $ => prec.left(seq(
      optional(field('operator', '&')),
      'raw',
      optional(field('operand', $.identifier)),
    )),

    reference_expression: $ => prec.left(seq(
      field('operator', choice('&')),
      field('operand', $.identifier),
    )),

    dereference_expression: $ => prec.left(seq(
      field('operator', choice('*')),
      field('operand', $.identifier),
    )),

    mutable_reference_expression: $ => prec.left(seq(
      field('operator', seq('&' , $.mutable_specifier)),
      field('operand', $.identifier),
    )),

    optional_expression: $ => prec.left(seq(
      field('left', $._expression),
      field('operator', choice('!!', '??')),
      field('right', $._expression),
    )),

    optional_specifier: $ => choice('!', '?'),

    none_expression: $ => seq('None'),

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

    _type: $ => choice(
      $.array_type,
      $._type_identifier,
      $.function_return_type,
      alias(choice(...primitive_types), $.primitive_type),
      $.reference_type,
    ),

    array_type: $ => seq(
      '[',
      field('element', $._type),
      ']'
    ),

    // Not using $.identifier here due to https://github.com/tree-sitter/tree-sitter/issues/449
    function_return_type: $ => token(seq(
      identifier,
      repeat1(seq('::', identifier))
    )),

    reference_type: $ => prec.left(seq(
      '&',
      optional($.mutable_specifier),
      choice(
        alias(choice(...primitive_types), $.primitive_type),
        $.identifier,
      ),
    )),

    let_declaration: $ => prec.left(seq(
      'let',
      field('pattern', $._pattern),
      optional(seq(
        ':',
        field('type', seq($._type, optional($.optional_specifier))),
      )),
      optional(seq(
        '=',
        field('value', $._expression),
      )),
      optional(';'),
    )),

    mutable_declaration: $ => prec.left(seq(
      $.mutable_specifier,
      field('pattern', $._pattern),
      optional(seq(
        ':',
        optional($.weak_specifier),
        field('type', seq($._type, optional($.optional_specifier))),
      )),
      optional(seq(
        '=',
        field('value', $._expression)
      )),
      optional(';'),
    )),

    boxed_specifier: $ => seq('boxed'),

    enum_declaration: $ => seq(
      optional($.boxed_specifier),
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
      sepBy('\n', repeat($.enum_variant)),
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
      '{',
        optional(
          repeat(
            choice(
              seq($.field_declaration, optional(choice(',','\n'))),
              $.function_declaration,
            )
          )
        ),
      '}'
    ),

    field_declaration: $ => seq(
      optional($.public_specifier),
      field('name', $._field_identifier),
      ':',
      field('type', seq($._type, optional($.optional_specifier))),
    ),

    _field_identifier: $ => alias($.identifier, $.field_identifier),

    ordered_field_declaration_list: $ => seq(
      '(',
      choice(
        alias(choice(...primitive_types), $.primitive_type),
        sepByPost('\n', $.field_declaration),
        sepBy(',', $.field_declaration),
      ),
      ')',
    ),

    struct_declaration: $ => seq(
      'struct',
      field('name', choice($._type_identifier)),
      field('body', $.field_declaration_list)
    ),

    class_declaration: $ => seq(
      'class',
      field('name', choice($._type_identifier)),
      field('body', $.field_declaration_list)
    ),

    public_specifier: $ => seq('public'),

    mutable_specifier: $ => 'mut',

    weak_specifier: $ => 'weak',

    restricted_specifier: $ => seq(
        'restricted',
        '(',
        sepBy(',', $.identifier),
        ')'
    ),

    unary_expression: $ => prec(PREC.unary, seq(
      '-', $._expression
    )),

    return_statement: $ => choice(
      prec.left(seq('return', $._expression)),
      prec(-1, 'return'),
    ),

    binary_expression: $ => {
      const table = [
        [PREC.and, 'and'],
        [PREC.or, 'or'],
        [PREC.bitand, '&'],
        [PREC.bitor, '|'],
        [PREC.bitxor, '^'],
        [PREC.comparative, choice('==', '!=', '<', '<=', '>', '>=')],
        [PREC.shift, choice('<<', '>>')],
        [PREC.additive, choice('+', '-')],
        [PREC.multiplicative, choice('*', '/', '%')],
      ];

      return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))));
    },

    update_expression: $ => {
      const value = field('value', $.identifier);
      const operator = field('operator', choice('--', '++'));
      return prec.right(PREC.unary, choice(
        seq(operator, value),
        seq(value, operator),
      ));
    },

    match_expression: $ => seq(
      'match',
      field('value', $._expression),
      field('body', $.match_block)
    ),

    match_block: $ => seq(
      '{',
      optional(seq(
        repeat($.match_arm),
        alias($.last_match_arm, $.match_arm)
      )),
      '}'
    ),

    match_arm: $ => seq(
      field('pattern', seq($.match_pattern)),
      '=>',
      field('value', choice($._expression, $.block))
    ),

    last_match_arm: $ => seq(
      field('pattern', choice($.match_else, $.match_pattern)),
      '=>',
      field('value', choice($._expression, $.block))
    ),

    match_pattern: $ => seq(
      choice($._expression),
    ),

    match_else: $ => 'else',

    _literal: $ => prec(1, choice(
      $.string_literal,
      $.char_literal,
      $.byte_literal,
      $.boolean_literal,
      $.integer_literal,
      $.binary_literal,
      $.float_literal,
      $.array_literal,
      $.tuple_literal,
      $.dictionary_literal,
      $.set_literal,
    )),

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
        /0o[0-7_]+/,
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

    byte_literal: $ => token(seq(
      'b',
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

    array_literal: $ => prec(1, seq(
      '[',
      choice(
        seq(sepBy(',', choice($.array_literal, $._literal_pattern)), optional(',')),
        optional(seq(
          field('element', $._literal_pattern),
          ';',
          field('length', $._expression)
        )),
      ),
      ']'
    )),

    tuple_literal: $ => seq(
      '(',
      sepBy(',', seq($._literal_pattern, optional(','))),
      ')'
    ),

    dictionary_literal: $ => seq(
      '[',
      sepBy(',', $.dictionary_element, optional(',')),
      ']'
    ),

    set_literal: $ => seq(
      '{',
      sepBy(',', $._literal_pattern, optional(',')),
      '}'
    ),

    dictionary_element: $ =>seq(field('key', $._literal_pattern), ':', field('value', $._literal_pattern)),

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
      optional(choice($.restricted_specifier, $.public_specifier)),
      'function',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('throws', $.throws_specifier)),
      optional(seq('->', field('return_type', $._type))),
      field('body', choice($.return_expression, $.block)),
    ),

    extern_function_declaration: $ => seq(
      'extern',
      'function',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(seq('->', field('return_type', seq(optional($.raw_pointer_identfier), alias(choice(...primitive_types), $.primitive_type))))),
    ),

    throws_specifier: $ => seq('throws'),

    return_expression: $ => prec.right(seq(
      '=>',
      $._expression,
    )),

    parameters: $ => seq(
      '(',
      optional(seq(optional($.mutable_specifier), $.this_reference)),
      optional(sepBy(',', seq(
        choice(
          $.parameter,
      )))),
      optional(','),
      ')'
    ),

    this_reference: $ => seq('this'),

    this_reference_shorthand: $ => seq('.', $.identifier),

    parameter: $ => seq(
      optional($.anonymous_specifier),
      optional($.mutable_specifier),
      field('pattern', choice(
        $._pattern,
      )),
      ':',
      field('type', seq(
        choice(
          seq($.raw_pointer_identfier, alias(choice(...primitive_types), $.primitive_type)),
          $._type,
        ),
      )),
    ),

    anonymous_specifier: $ => 'anon',

    block: $ => prec(1, seq(
      '{',
      repeat(seq($._statement, optional(terminator))),
      '}'
    )),

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

    identifier: $ => identifier,
    _type_identifier: $ => alias($.identifier, $.type_identifier),
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy2(sep, rule) {
  return repeat(seq(rule, sep))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

function sepByPost(sep, rule) {
  return optional(sepBy1(rule, sep))
}
