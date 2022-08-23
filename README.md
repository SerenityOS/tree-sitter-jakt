# Tree-Sitter Jakt

[Jakt](https://github.com/SerenityOS/jakt) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

Jakt is a memory safe programming language created for SerenityOS that transpiles to C++.

## Roadmap

tree-sitter-jakt implements 199.00 of 226 (88.1%) of passable Jakt samples as of August 22, 2022

## Screenshot

[Screenshots](https://github.com/demizer/tree-sitter-jakt/issues/1)

## How to run tests

The [tree-sitter cli](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) is required to run tests.

```
tree-sitter generate && tree-sitter test
```
## Contributing

See the [CONTRIBUTING.md](./CONTRIBUTING.md).

## How to install in Neovim

Note: this step is only temporary. The highlighter will eventually be added to the nvim-tressitter project to be included with neovim.

1. Add the following to the neovim (lua) config:

   ```
   local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
   parser_config.jakt = {
     install_info = {
       url = "https://github.com/demizer/tree-sitter-jakt.git", -- local path or git repo
       files = {"src/parser.c", "src/scanner.c"},
       -- optional entries:
       branch = "main", -- default branch in case of git repo if different from master
       generate_requires_npm = false, -- if stand-alone parser without npm dependencies
       requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
     },
   }
   ```

1. Manually install the highlighter

   [See nvim-treesitter instructions](https://github.com/nvim-treesitter/nvim-treesitter#adding-queries)

   `highlights.scm` is contained in the tree-sitter-jakt repository.

   ```
   mkdir -p ~/.config/nvim/queries/jakt
   cp queries/* ~/.config/nvim/queries/jakt/
   ```

1. Install tree-sitter-jakt using neovim

   ```
   :TSInstall jakt
   ```

1. checkhealth in neovim

   ```
   :checkhealth
   ```

1. `jakt` should be contained in the tree-sitter parsers and should it should have a check
   under `highlight`.

1. Load a jakt source file and set filetype to jakt and enjoy

