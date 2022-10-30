[(double_quote_string) (single_quote_string)] @string
(escape_sequence) @string.escape

(comment) @comment

[(integer) (float)] @number

[
  "&&"
  "||"
  "|"
  "&"
  ".."
  (direction)
  (stream_redirect)
] @operator

; match operators of test command
(command
  name: (builtin) @function (#match? @function "^test$")
  argument: (word) @operator (#match? @operator "^(!?=|-[a-zA-Z]+)$"))

; match operators of [ command
(test_command
  argument: (word) @operator (#match? @operator "^(!?=|-[a-zA-Z]+)$"))

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

(function_definition name: (_) @function)
(command name: (_) @function)

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
