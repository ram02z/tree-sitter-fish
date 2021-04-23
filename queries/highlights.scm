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
(function_definition (_)* option: (word) @parameter
                     (#match? @parameter "^--?"))

(command name: (word) @function)
(command (_)* argument: (word) @parameter
         (#match? @parameter "^--?"))

["-a" "-o" (test_option)] @parameter

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
