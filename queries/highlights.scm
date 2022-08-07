; Identifier conventions

; Assume all-caps names are constants
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]+$'"))

; Assume other uppercase names are enum constructors
((identifier) @constructor
 (#match? @constructor "^[A-Z]"))

; Function calls

(call_expression
  function: (identifier) @function)
(call_expression
  function: (field_expression
    field: (field_identifier) @function.method))
; (call_expression
;   function: (scoped_identifier
;     "::"
;     name: (identifier) @function))

; Function definitions
(function_declaration (identifier) @function.method)

; Other identifiers

(type_identifier) @type
(primitive_type) @type.builtin
(function_return_type) @type.builtin
(field_identifier) @property

(line_comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

":" @punctuation.delimiter
"::" @punctuation.delimiter
"," @punctuation.delimiter
"." @punctuation.delimiter

(parameter (identifier) @variable.parameter)

"else" @keyword
"enum" @keyword
"function" @keyword
"for" @keyword
"if" @keyword
"in" @keyword
"and" @keyword
"or" @keyword
"not" @keyword
"let" @keyword
"return" @keyword
"while" @keyword
"struct" @keyword
"class" @keyword
"defer" @keyword
"loop" @keyword
"try" @keyword
"catch" @keyword
"throw" @keyword
"as!" @keyword
"as?" @keyword
"yield" @keyword
"match" @keyword
"boxed" @keyword
"throws" @keyword
"continue" @keyword
"anon" @keyword
"None" @keyword
"import" @keyword
"as" @keyword
"restricted" @keyword

"this" @variable.builtin
"raw" @variable.builtin
"extern" @variable.builtin
"mut" @variable.builtin
"public" @variable.builtin

(char_literal) @string
(string_literal) @string
(c_header_identfier) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin
(float_literal) @constant.builtin
(byte_literal) @constant.builtin
"c" @constant.builtin
"namespace" @constant.builtin

"*" @operator
"&" @operator
"=>" @operator
"!" @operator
"?" @operator

