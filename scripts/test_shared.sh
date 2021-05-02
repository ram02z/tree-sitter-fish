for file in ./examples/fish/share/**/*.fish
do
    ./node_modules/.bin/tree-sitter parse $file | grep ERROR
done

exit 0
