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

; Function definitions

(function_declaration (identifier) @function)

; Other identifiers

(type_identifier) @type
(primitive_type) @type.builtin

(line_comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

; "::" @punctuation.delimiter
":" @punctuation.delimiter
; "." @punctuation.delimiter
"," @punctuation.delimiter

(parameter (identifier) @variable.parameter)

; "break" @keyword
; "const" @keyword
"continue" @keyword
; "default" @keyword
"else" @keyword
"enum" @keyword
"function" @keyword
"for" @keyword
"if" @keyword
"in" @keyword
"let" @keyword
"ref" @keyword
; "loop" @keyword
; "match" @keyword
"return" @keyword
; "static" @keyword
; "struct" @keyword
; "type" @keyword
; "union" @keyword
; "unsafe" @keyword
; "where" @keyword
"while" @keyword
(mutable_specifier) @keyword

; (self) @variable.builtin

(char_literal) @string
(string_literal) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin
(float_literal) @constant.builtin

; (escape_sequence) @escape

"*" @operator
"&" @operator
