output=$(for file in ./examples/fish/share/**/*.fish
do
    ./node_modules/.bin/tree-sitter parse $file | grep ERROR
done)

snapshot=$(cat ./scripts/shared_output.txt)

if test "$output" == "$snapshot"; then
    echo OK
else
    echo Ouput does not match the snapshot
    printf "output:\n$output"
    printf "\n\n----------\n\n"
    printf "snapshot:\n$snapshot"
    exit 1
fi
