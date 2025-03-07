; Identifier conventions
(identifier) @none ; TODO: not working for some reason
(scoped_identifier) @namespace
(type_identifier) @type

[
  (primitive_type)
  (function_return_type)
  (namespace_scope_expression)
] @type.builtin

; Assume all-caps names are constants
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]+$'"))

; Assume other uppercase names are enum constructors
((identifier) @constructor
 (#match? @constructor "^[A-Z]"))

; Import
"import" @include
(import_as_clause) @include

; Function calls
(call_expression
  function: (identifier) @function)

(call_expression
  function: (field_expression
             value: (identifier) @namespace
             field: (field_identifier) @function.method))

; Function definitions
(function_declaration (identifier) @function.method)

(generic_type
  name: (identifier) @type @generic_type
  arguments: (generic_arguments (generic_type_identifier) @variable.builtin))

(generic_type_identifier) @variable.builtin
(trait_identifier) @variable.builtin

[
  (enum_tuple_variant)
  (enum_struct_variant)
] name: (identifier) @function.method

(enum_variant
  name: (identifier) @operator) ; @operator to disable coloring, @none does not work :(

(enum_declaration
  name: (generic_type) @generic_type
  body: (enum_variant_list
           (enum_tuple_variant
             name: (identifier)
             type: (type_identifier) @variable.builtin)))

(enum_declaration
  name: (enum_integral_type
          (identifier) @type
          (primitive_type)))

(struct_declaration
  name: (generic_type) @generic_type
  body: (field_declaration_list
           (field_declaration
             name: (field_identifier)
             type: (type_identifier) @variable.builtin)))

[
  "boxed"
  (mutable_specifier)
  (weak_specifier)
] @type.qualifier

(anonymous_specifier) @attribute

(field_identifier) @property

[
  (line_comment)
  (cpp_code_start)
  (cpp_code_end)
] @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

[
  ":"
  "::"
  ","
  "."
] @punctuation.delimiter

(parameter (identifier) @variable.parameter)

"if" @conditional
"else" @conditional
"let" @keyword
"enum" @keyword
"struct" @keyword
"trait" @keyword
"class" @keyword
"defer" @keyword
"match" @keyword
"restricted" @keyword
"guard" @keyword
"yield" @keyword
"comptime" @keyword
"reflect" @keyword
(extern_specifier) @keyword

"fn" @keyword.function
"implements" @define
"requires" @define
"return" @keyword.return

[
  "is"
  "in"
  "and"
  "or"
  "not"
  "as!"
  "as?"
; ] @keyword.operator
] @keyword

[
  (this_reference)
  "raw"
  (visibility_specifier)
  "None"
  "unsafe"
  "cpp"
] @variable.builtin

[
  "for"
  "while"
  "loop"
  "continue"
  "in"
] @repeat

(char_literal) @string
(string_literal) @string
(c_header_identfier) @string

(boolean_literal) @boolean
(integer_literal) @constant.builtin
(float_literal) @constant.builtin
(byte_literal) @constant.builtin
"c" @constant.builtin

"namespace" @namespace

"throw" @exception
"throws" @exception
"try" @exception
"catch" @exception

[
  "&"
  "&="
  "!"
  "?"
  "|"
  "|="
  "^"
  "^="
  "="
  "=="
  "!="
  "<"
  "<="
  "<<"
  "<<<"
  ">"
  ">="
  ">>"
  ">>>"
  "<<="
  ">>="
  "+"
  "+="
  "-"
  "-="
  "*"
  "*="
  "/"
  "/="
  "%"
  "%="
] @operator
