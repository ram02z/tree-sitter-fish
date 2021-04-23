[
  (double_quote_string)
  (single_quote_string)
] @string

(comment) @comment

[(integer) (float)] @number

[
  "&&"
  "||"
  "|"
  "&"
  "="
  "!="
  ".."
  (direction)
  (stream_redirect)
] @operator

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
(command name: (word) @function)

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
 "not"
 "!"
 "and"
 "or"
 "return"
 (break)
 (continue)
] @keyword
