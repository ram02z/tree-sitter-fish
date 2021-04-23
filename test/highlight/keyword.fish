if false
# <- keyword
#  ^ function
else if true
# <- keyword
#    ^ keyword
#       ^ function
else
# <- keyword
end
# <- keyword

switch true
# <- keyword
    case ''
#   ^ keyword
end
# <- keyword

for var in 1 2 3
# <- keyword
#       ^ keyword
    break
#   ^ keyword
end

begin; end
# <- keyword

function fn
# <- keyword
    return 0
#   ^ keyword
end

if $status
# <- keyword
else if [ ! $status ]
# <- keyword
#    ^ keyword
end

while false
# <- keyword
    continue;
#   ^ keyword
end

not true
# <- keyword
! true
# <- keyword

and true
# <- keyword
or true
# <- keyword
