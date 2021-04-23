for file in ./examples/fish/share/**/*.fish
    ./node_modules/.bin/tree-sitter parse $file | grep ERROR
end
