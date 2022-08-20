; Identifier conventions

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
    field: (field_identifier) @function.method))

(scoped_identifier) @namespace

; Function definitions
(function_declaration (identifier) @function.method)

; Other identifiers

(type_identifier) @type
(primitive_type) @type.builtin
(function_return_type) @type.builtin
(namespace_scope_expression) @type.builtin


[
  "boxed"
  (extern_specifier)
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
"class" @keyword
"defer" @keyword
"match" @keyword
"restricted" @keyword
"guard" @keyword
"yield" @keyword

"function" @keyword.function
"return" @keyword.return

[
  "in"
  "and"
  "or"
  "not"
  "as!"
  "as?"
] @keyword.operator

[
  "this"
  "raw"
  "public"
  "None"
  "unsafe"
  "cpp"
  (generic_type)
] @variable.builtin

[
  "for"
  "while"
  "loop"
  "continue"
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
