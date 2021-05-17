echo 1 >>? /dev/null
#      ^ operator
echo 1 >&0
#      ^ operator
echo && echo
#    ^ operator
echo || echo
#    ^ operator
echo &
#    ^ operator
[ te = st ]
#    ^ operator
[ te != st ]
#    ^ operator
echo $PATH[0..2]
#           ^ operator
test te = st
#       ^ operator
test te != st
#       ^ operator
test 0 -o 1 -a -n 'string' -o -z $PATH
#      ^ operator
#           ^ operator
#               ^ operator
#                          ^ operator
#                             ^ operator
