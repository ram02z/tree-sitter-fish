echo {1,2}two
#    ^ punctuation.bracket
#      ^ punctuation.delimiter
#        ^ punctuation.bracket
echo $PATH[1..2]
#         ^ punctuation.bracket
#              ^ punctuation.bracket
echo (printf 1)
#    ^ punctuation.bracket
#             ^ punctuation.bracket
echo {$PATH[..]}two
#    ^ punctuation.bracket
#          ^ punctuation.bracket
#             ^ punctuation.bracket
#              ^ punctuation.bracket

{
// <- punctuation.bracket
  ls
  ls
}
// <- punctuation.bracket
