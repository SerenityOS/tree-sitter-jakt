const PREC = {
  bitwisenot: 16,
  field: 15,
  call: 14,
  range: 13,
  unary: 12,
  multiplicative: 11,
  additive: 10,
  shift: 9,
  bitand: 8,
  bitxor: 7,
  bitor: 6,
  comparative: 5,
  not: 4,
  is: 3,
  or: 2,
  and: 1,
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
    $._statement,
    $._pattern,
  ],

  inline: $ => [
    $._type_identifier,
    $.trait_identifier,
    $._statement,
    $.declaration,
    $.field_identifier,
  ],

  conflicts: $ => [
    [$.array_literal, $.array_expression],
    [$.array_expression, $.try_statement],
    [$.namespace_scope_expression, $.namespace_call_expression],
    [$._simple_type, $.enum_variant],
    [$.set_literal, $.block],
    [$.parenthesized_expression, $.tuple_literal],
    [$.destructuring_literal, $._expression],
    [$.namespace_scope_expression, $.generic_type],
    [$._expression, $.generic_type],
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
      $.cpp_block,
      $.yield_statement,
      $.import_statement,
      $.guard_statement,
    ),

    declaration: $ => choice(
      $.let_declaration,
      $.mutable_declaration,
      $.enum_declaration,
      $.struct_declaration,
      $.trait_declaration,
      $.class_declaration,
      $.generic_class_declaration,
      $.namespace_declaration,
      $.function_declaration,
      $.comptime_function_declaration,
      $.generic_function_declaration,
      $.closure_function,
    ),

    logical_not_expression: $ => prec.left(PREC.not, seq(
      field('opeator', 'not'),
      field('operand', $._expression),
    )),

    _expression: $ => choice(
      $.identifier,
      $._literal,
      $.logical_not_expression,
      $.this_reference,
      $.this_reference_shorthand,
      $.unary_expression,
      $.bitwisenot_expression,
      $.binary_expression,
      $.optional_expression,
      $.optional_value_expression,
      $.call_expression,
      $.range_expression,
      $.for_expression,
      $.field_expression,
      $.static_call_expression,
      $.namespace_call_expression,
      $.namespace_scope_expression,
      $.type_conversion_expression,
      $.assignment_expression,
      $.none_expression,
      $.update_expression,
      $.match_expression,
      $.pointer_expression,
      $.parenthesized_expression,
      $.try_expression,
      $.array_expression,
    ),

    parenthesized_expression: $ => prec.left(1, seq(
      '(',
      $._expression,
      ')',
    )),

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

    try_statement: $ => prec(1, seq(
      'try',
      choice(
        field('try_body', $.block),
        field('try_body', $._expression),
      ),
      'catch',
      optional($.identifier),
      choice(
        field('catch_body', $.block),
        field('catch_body', $._expression),
      )
    )),

    try_expression: $ => prec.left(seq(
      'try',
      $._expression,
    )),

    unsafe_block: $ => seq(
      'unsafe',
      '{',
      repeat($._statement),
      '}'
    ),

    cpp_block: $ => seq(
      'cpp',
      '{',
      repeat(seq(
        alias('"', $.cpp_code_start),
        alias($._string_content, $.cpp_code),
        alias('"', $.cpp_code_end),
        optional(terminator),
      )),
      '}',
    ),

    yield_statement: $ => seq(
      'yield',
      $._expression,
    ),

    c_header_identfier: $ => token(seq('"', /.*/, '.h"')),
    cpp_header_identfier: $ => token(seq('"', /.*/, '"')),

    import_as_clause: $ => 'as',

    import_statement: $ => prec.right(seq(
      'import',
      optional(choice(
          seq($.extern_specifier, 'c', $.c_header_identfier),
          seq($.extern_specifier, $.cpp_header_identfier),
          seq($.identifier, optional(seq($.import_as_clause, $.identifier))),
          field("namespace", seq(alias($.identifier, $.scoped_identifier), '::', sepBy1('::', $._field_identifier))),
      )),
      optional(field('body', $.import_block)),
    )),

    import_block: $ => seq(
      '{',
      optional(sepBy(',', seq($.identifier, optional(terminator)))),
      optional(repeat(choice(
        seq(alias($.function_declaration, $.extern_function_declaration), optional(terminator)),
        seq(alias($.class_declaration, $.extern_class_declaration), optional(terminator)),
      ))),
      optional($.namespace_declaration),
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

    call_expression: $ => prec.right(PREC.call, seq(
      field('function', choice(
          $._expression,
          alias($.generic_type, $.generic_function),
      )),
      field('arguments', $.arguments),
    )),

    range_expression: $ => prec.right(PREC.range,
      choice(
        seq($._expression, '..', optional($._expression)),
        prec(1, '..'),
      ),
    ),

    field_expression: $ => prec(PREC.field, seq(
      field('value', choice($.this_reference, $._expression)),
      '.',
      field('field', choice(
        $._field_identifier,
        $.integer_literal,
      ))
    )),

    namespace_call_expression: $ => prec(PREC.call, prec.left(seq(
      field('namespace', alias($.identifier, $.scoped_identifier)),
      '::',
      repeat1(seq(alias($.identifier, $.scoped_identifier), '::')),
      field('field', choice($._field_identifier, $.generic_type)),
      field('arguments', $.arguments),
    ))),

    static_call_expression: $ => prec(1, prec.left(seq(
      field('name', alias($.identifier, $.scoped_identifier)),
      '::',
      field('field', choice($._field_identifier, $.generic_type)),
      field('arguments', $.arguments),
    ))),

    type_conversion_expression: $ =>  seq(
      prec.left(field('left', $._expression)),
      choice('as?', 'as!'),
      prec.right(choice(alias($.identifier, $.generic_identifier), $._primitive_types)),
    ),

    assignment_expression: $ => prec.right(PREC.assign, seq(
      field('left', $._expression),
      field('operator', choice('=', '+=', '-=', '&=', '|=', '^=', '*=', '/=', '%=')),
      field('right', $._expression)
    )),

    array_expression: $ => prec.left(1, seq(
      field("identifier", $._expression),
      field("fill",
        seq(
          '[',
          optional(repeat(seq($._expression, optional(',')))),
          ']',
        ),
      ),
    )),

    pointer_expression: $ => prec.left(1, seq(
      field('operator', choice('&', '*')),
      optional(choice('raw', $.mutable_specifier)),
      field('operand', $.identifier),
    )),

    pointer_type: $ => prec.left(1, seq(
      field("qualifier", choice('raw')),
      field('type', $.identifier),
    )),

    optional_expression: $ => prec.left(seq(
      field('left', $._expression),
      field('operator', choice('!!', '??')),
      field('right', $._expression),
    )),

    optional_type: $ => seq($._type, choice('!', '?')),

    optional_value_expression: $ => seq($._expression, choice('!', '?')),

    none_expression: $ => seq('None'),

    arguments: $ => prec.left(seq(
      '(',
      optional(repeat(seq(choice($.argument, $.closure_function), optional(',')))),
      ')'
    )),

    argument: $ => prec.left(choice(
      seq(
        field('label', $._pattern),
        ':',
        field('value', choice($._expression, $.closure_function)),
      ),
      seq(field('type', choice($.identifier)), terminator),
      field("value", seq($._expression)),
    )),

    _type: $ => choice(
      $._primitive_types,
      $._simple_type,
    ),

    _simple_type: $ => choice(
      prec.dynamic(-1, $._type_identifier),
      $.generic_type,
      $.dictionary_type,
      $.set_type,
      $.array_type,
      $.function_return_type,
      $.namespace_scope_type,
      $.reference_type,
      $.closure_function_type,
      $.tuple_type,
    ),

    namespace_scope_type: $ => token(repeat1(seq(identifier, '::'))),

    namespace_scope_expression: $ => prec.left(seq(alias($.identifier, $.scoped_identifier), repeat1(seq('::' , alias($.identifier, $.field_identifier))), optional(terminator))),

    array_type: $ => seq(
      '[',
      $._type,
      ']'
    ),

    dictionary_type: $ => seq(
      '[',
      field('type', $._type),
      ':',
      field('type', $._type),
      ']'
    ),

    set_type: $ => seq(
      '{',
      field('type', $._type),
      '}'
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
        $._primitive_types,
        $.identifier,
      ),
    )),

    let_declaration: $ => prec.left(seq(
      'let',
      field('pattern', $._pattern),
      optional(seq(
        ':',
        field('type', choice($._type, $.optional_type)),
      )),
      optional(seq(
        '=',
        field('value', choice($._expression, $.closure_function)),
      )),
    )),

    mutable_declaration: $ => prec.left(seq(
      $.mutable_specifier,
      field('pattern', $._pattern),
      optional(seq(
        ':',
        optional($.weak_specifier),
        field('type', choice($._type, $.optional_type)),
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
      field('name', choice($._type, optional($.enum_integral_type))),
      optional(field('implements', $._implements)),
      field('body', $.enum_variant_list)
    ),

    enum_integral_type: $ => seq(
      $.identifier,
      ':',
      $._type,
    ),

    enum_variant_list: $ => seq(
      '{',
      sepBy('\n', repeat(choice(
              $.enum_variant,
              $.enum_tuple_variant,
              $.enum_struct_variant,
              $.enum_field_declaration,
              alias($.function_declaration, $.enum_method_variant),
          ))),
          '}'
        ),

        enum_field_declaration: $ => seq(
          field('name', $._field_identifier),
          ':',
          field('type', choice($._type, $.optional_type)),
          optional(seq(
            '=',
            field('value', $._expression)
          ))
        ),

        enum_variant: $ => seq(
          field('name', $.identifier),
          optional(seq(
            '=',
            field('value', $._expression)
          ))
        ),

        enum_tuple_variant: $ => seq(
          field("name", $.identifier),
          '(',
          choice(
            field("type", $._type),
          ),
          ')',
        ),

        enum_struct_variant: $ => prec(-1, seq(
          field("name", $.identifier),
          '(',
            optional(
              repeat1(
                choice(
                  seq($.field_declaration, optional(choice('\n', ','))),
                )
              )
            ),
          ')',
        )),

        field_declaration_list: $ => seq(
          '{',
            optional(
              repeat1(
                choice(
                  $.function_declaration,
                  seq($.field_declaration, optional(choice('\n', ','))),
                  $.generic_function_declaration,
                )
              )
            ),
          '}'
        ),

        field_declaration: $ => seq(
          optional($.visibility_specifier),
          field('name', $._field_identifier),
          ':',
          field('type', choice($._type, $.optional_type)),
          optional(seq(
            '=',
            field('value', $._expression)
          ))
            ),

            _field_identifier: $ => prec(1, alias($.identifier, $.field_identifier)),

            _implements: $ => seq(
              'implements',
              '(',
              choice(
                sepBy1(optional(','), $.trait_identifier),
                $.generic_type,
              ),
              ')',
            ),

            struct_declaration: $ => seq(
              optional(choice($.attributes, $.extern_specifier)),
              'struct',
              field('name', choice($._type_identifier, $.generic_type)),
              optional(field('implements', $._implements)),
              field('body', $.field_declaration_list)
            ),

            trait_declaration: $ => seq(
              // optional($.extern_specifier),
              'trait',
              field('name', choice(alias($.identifier, $.trait_identifier), $.generic_type)),
              field('body', $.field_declaration_list)
            ),

        class_declaration: $ => seq(
          optional($.extern_specifier),
          'class',
          field('name', $._type_identifier),
          optional(seq(':', field('parent', $._type_identifier))),
          field('body', $.field_declaration_list)
        ),

        generic_class_declaration: $ => seq(
          'class',
          field('name', $.generic_type),
          optional(seq(':', field('parent', $._type_identifier))),
          field('body', $.field_declaration_list)
        ),

        visibility_specifier: $ => choice('public', 'private'),

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

        bitwisenot_expression: $ => prec(PREC.bitwisenot, seq(
          '~', $._expression
        )),

        return_statement: $ => prec.right(seq(
          'return',
          optional($._expression),
        )),

        binary_expression: $ => {
          const table = [
            [PREC.and, 'and'],
            [PREC.or, 'or'],
            [PREC.is, 'is'],
            [PREC.bitand, '&', '&='],
            [PREC.bitor, '|', '|='],
            [PREC.bitxor, '^', '^='],
            [PREC.comparative, choice('==', '!=', '<', '<=', '>', '>=')],
            [PREC.shift, choice('<<', '<<<', '>>', '>>>', '<<=', '>>=')],
            [PREC.additive, choice('+', '-')],
            [PREC.multiplicative, choice('*', '/','%')],
          ];

          return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
            field('left', $._expression),
            field('operator', operator),
            field('right', $._expression),
          ))));
        },

        update_expression: $ => {
          const value = field('value', choice($.identifier, $.field_expression, $.this_reference_shorthand));
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
          repeat(choice(",", $.match_arm)),
          alias($.last_match_arm, $.match_arm),
          '}'
        ),

        match_arm: $ => seq(
          field('pattern', seq($.match_pattern)),
          '=>',
          field('value', choice($._expression, $.block, $.closure_function))
        ),

        last_match_arm: $ => seq(
          field('pattern', choice($.match_else, $.match_else_binding, $.match_pattern)),
          '=>',
          field('value', choice($._expression, $.block, $.closure_function))
        ),

        match_pattern: $ => seq(
          choice($._expression),
        ),

        match_else: $ => 'else',
        match_else_binding: $ => seq('else', '(', $.identifier, ')'),

        _literal: $ => prec.left(choice(
          $.string_literal,
          $.char_literal,
          $.byte_literal,
          $.boolean_literal,
          $.integer_literal,
          $.binary_literal,
          $.float_literal,
          $.array_literal,
          $.dictionary_literal,
          $.tuple_literal,
          $.set_literal,
          $.destructuring_literal,
        )),

        _pattern: $ => choice(
          $._literal,
          alias(choice(...primitive_types), $.identifier),
          $.identifier,
        ),

        destructuring_literal: $ => seq(
          '(',
          repeat1(seq($.identifier, optional(','))),
          ')',
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
          optional(choice(
            sepBy1(optional(','), $._expression),
            seq(
              field('element', $._literal),
              ';',
              field('length', $._expression)
            ),
          )),
          ']'
        )),

        tuple_expression: $ => seq(
          '(',
          sepBy(',', seq($._expression, optional(','))),
          ')'
        ),

        tuple_type: $ => seq(
          '(',
          sepBy(',', seq(choice($._type, $.optional_type), optional(','))),
          ')'
        ),

        tuple_literal: $ => prec(1, seq(
          '(',
          seq($._expression, repeat(seq(',', $._expression))),
          ')'
        )),

        dictionary_literal: $ => seq(
          '[',
          choice(
              seq(':'),
              repeat1(seq($.dictionary_element, optional(','))),
          ),
          ']'
        ),

        set_literal: $ => prec.right(seq(
          '{',
              optional(repeat1(seq($._expression, optional(',')))),
          '}'
        )),

        dictionary_element: $ =>seq(field('key', $._literal), ':', field('value', $._expression)),

        escape_sequence: $ => token.immediate(
          seq('\\',
            choice(
              /[^xu]/,
              /u[0-9a-fA-F]{4}/,
              /u{[0-9a-fA-F]+}/,
              /x[0-9a-fA-F]{2}/
            )
        )),

        trait_requirement: $ => seq(
          field("name", $.identifier),
          field("arguments", seq(
            '<',
            $.trait_identifier,
            'requires',
            '(',
            sepBy1(optional(','), $.trait_identifier),
            ')',
            '>',
          ),
        )),

    attributes: $ => seq(
    '[[',
      choice(
        $.call_expression,
        seq(
          field('exernal', 'name'),
          '=',
          field('name', $.identifier)
        ),
      ),
    ']]',
    ),

    function_declaration: $ => prec.right(seq(
      optional(choice($.attributes, $.restricted_specifier, $.visibility_specifier, $.extern_specifier)),
      'fn',
      field('name', choice($.identifier, $.trait_requirement)),
      field('parameters', $.parameters),
      optional(field('throws', $.throws_specifier)),
      optional(seq('->', field('return_type', choice($._type, $.optional_type, $.pointer_type)))),
      optional(field('body', choice($.return_expression, $.block))),
    )),

    comptime_function_declaration: $ => prec.right(seq(
      choice('comptime'),
      field('name', choice($.identifier, $.trait_requirement)),
      field('parameters', $.parameters),
      optional(field('throws', $.throws_specifier)),
      optional(seq('->', field('return_type', choice($._type, $.optional_type, $.pointer_type)))),
      optional(field('body', choice($.return_expression, $.block))),
    )),

    generic_type: $ => seq(
      field("name", $.identifier),
      field("arguments", $.generic_arguments),
    ),

    generic_arguments: $ => seq(
      '<',
        sepBy1(',', choice(
          alias($._type_identifier, $.generic_type_identifier),
          $._primitive_types,
        )),
      '>',
    ),

    generic_function_declaration: $ => prec.right(seq(
      'fn',
      field('name', $.generic_type),
      field('parameters', $.parameters),
      optional(field('throws', $.throws_specifier)),
      optional(seq('->', field('return_type', choice(alias($._type_identifier, $.generic_type_identifier),$.generic_type, $.optional_type)))),
      optional(field('body', choice($.return_expression, $.block))),
    )),

    extern_specifier: $ => 'extern',

    throws_specifier: $ => seq('throws'),

    return_expression: $ => prec.right(seq(
      '=>',
      $._expression,
    )),

    parameters: $ => seq(
      '(',
      optional(sepBy(',', seq(
        choice(
          $.parameter,
          $.this_parameter,
      )))),
      optional(','),
      ')'
    ),

    this_reference: $ => seq('this'),

    this_parameter: $ => seq(optional($.mutable_specifier), $.this_reference),

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
          $._type,
          $.pointer_type,
          $.optional_type,
        ),
      )),
      optional(seq(
        '=',
        field('value', $._expression)
      ))
    ),

    closure_function_type: $ => seq(
      optional(field("reference_specifier", seq('&'))),
      'fn',
      field('parameters', $.parameters),
      optional(field('throws', $.throws_specifier)),
      optional(seq('->', field('return_type', $._type))),
    ),

    _closure_capture_reference: $ => seq(
      '[',
      alias(choice($.identifier, $.pointer_expression), $.capture_reference),
      ']',
    ),

    closure_function: $ => seq(
      optional(choice($.restricted_specifier, $.visibility_specifier)),
      'fn',
      optional($._closure_capture_reference),
      field('parameters', $.parameters),
      optional(field('throws', $.throws_specifier)),
      optional(seq('->', field('return_type', choice($._type, $.optional_type)))),
      field('body', choice($.return_expression, $.block)),
    ),

    anonymous_specifier: $ => 'anon',

    block: $ => prec(1, seq(
      '{',
      repeat(seq($._statement, optional(terminator))),
      '}'
    )),

    if_statement: $ => seq(
      'if',
      field('condition', $._expression),
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
    trait_identifier: $ => alias($.identifier, $.trait_identifier),

    _primitive_types: $ => alias(choice(...primitive_types), $.primitive_type),
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
