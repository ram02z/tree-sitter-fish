$PATH
# <- constant
echo $PATH[0]
#    ^ constant
#         ^ punctuation.bracket
#          ^ number
#           ^ punctuation.bracket

echo "$PATH[0]"
#    ^ string
#     ^ constant
#          ^ punctuation.bracket
#           ^ number
#            ^ punctuation.bracket
