[ -f one -o -f two ]
# ^ parameter
#        ^ parameter
#           ^ parameter

function test -d ""
#             ^ parameter
end

echo --one --two --thre -xrzg
#    ^ parameter
#          ^ parameter
#                ^ parameter
#                       ^ parameter
