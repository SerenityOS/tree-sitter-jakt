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

":" @punctuation.delimiter
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
"mut" @keyword
"struct" @keyword
"class" @keyword
"defer" @keyword
"loop" @keyword
"try" @keyword
"catch" @keyword
"throw" @keyword
"as!" @keyword
"as?" @keyword
"&raw" @keyword
"yield" @keyword
"match" @keyword
"boxed" @keyword
"this" @keyword
"throws" @keyword
"continue" @keyword
"anon" @keyword
"None" @keyword

(char_literal) @string
(string_literal) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin
(float_literal) @constant.builtin
(byte_literal) @constant.builtin

"*" @operator
"&" @operator
"=>" @operator
"!" @operator
"?" @operator
