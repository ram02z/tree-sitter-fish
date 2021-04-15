(comment) @comment

(function_definition name: (word)) @function

[
  "&&"
  "||"
  "|"
  "&"
  (direction)
  (stream_redirect)
] @operator

[
    (double_quote_string)
    (single_quote_string)
    (concatenation)
] @string

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
 ; (conditional_execution "and") - this is invalid now
 (while_statement (break))
 (while_statement (continue))
 (for_statement (break))
 (for_statement (continue))
] @keyword
