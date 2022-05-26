# Tree Sitter Jakt

[Jakt](https://github.com/SerenityOS/jakt) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

Jakt is a memory safe programming language built for SerenityOS that transpiles to C++.

Work in progress.

## How to run tests

```
tree-sitter generate && tree-sitter test -d -f "Primitive types"
```

## How to install in Neovim

Add the following to the neovim config:

```
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.jakt = {
  install_info = {
    url = "~/projects/tree-sitter-zimbu", -- local path or git repo
    files = {"src/parser.c"},
    -- optional entries:
    branch = "main", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  },
  filetype = "zu", -- if filetype does not match the parser name
}
```
