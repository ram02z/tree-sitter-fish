[
  (double_quote_string)
  (single_quote_string)
  (concatenation)
] @string

(comment) @comment

[
  "&&"
  "||"
  "|"
  "&"
  (direction)
  (stream_redirect)
] @operator

(index) @number

(variable_expansion) @constant

[
 "["
 "]"
 "{"
 "}"
 "("
 ")"
] @punctuation.bracket

"," @punctuation.delimiter

(function_definition name: (variable_name) @function)
(function_definition (_)* option: (word) @parameter
                     (#match? @parameter "^--?"))

(command name: (variable_name) @function)
(command (_)* argument: (word) @parameter
         (#match? @parameter "^--?"))


[
 "switch"
 "case"
 "in"
 "begin"
 "function"
 "if"
 "else"
 "end"
 "while"
 "for"
 ;"and" "or" - this is invalid now
 (break)
 (continue)
] @keyword
