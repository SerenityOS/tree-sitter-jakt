-- JAKT_SRC_PATH=~/src/jakt/jakt/ python -m pytest script/test
-- tree-sitter generate && tree-sitter test
-- command! -count=1 TermGitPush  lua require'toggleterm'.exec("git push",    <count>, 12)
--
-- python script/roadmapgen.py --jakt-path ~/src/jakt/jakt/

vim.api.nvim_set_keymap("n", "<F1>", "<cmd>TermExec cmd='tree-sitter generate && tree-sitter test'<CR>", {noremap = true, silent = true})

vim.api.nvim_set_keymap("n", "<F2>", "<cmd>TermExec cmd='tree-sitter generate && tree-sitter test -d -f \"Function call with arg\"'<CR>", {noremap = true, silent = true})

vim.api.nvim_set_keymap("n", "<F3>", "<cmd>TermExec cmd='python script/roadmapgen.py update readme --jakt-path ~/src/jakt/jakt/'<CR>", {noremap = true, silent = true})

vim.api.nvim_set_keymap("n", "<F4>", "<cmd>TermExec cmd='python script/roadmapgen.py update state --jakt-path ~/src/jakt/jakt/ --single corpus/ranges/range.txt'<CR>", {noremap = true, silent = true})

vim.api.nvim_set_keymap("n", "<F5>", "<cmd>TermExec cmd='JAKT_SRC_PATH=~/src/jakt/jakt/ python -m pytest script/test'<CR>", {noremap = true, silent = true})

vim.api.nvim_set_keymap("n", "<F6>", "<cmd>TermExec cmd='JAKT_SRC_PATH=~/src/jakt/jakt/ python -m pytest script/test -k \"test_calculate_tests_completed\"'<CR>", {noremap = true, silent = true})

vim.api.nvim_set_keymap("n", "<F7>", "<cmd>TermExec cmd='python script/roadmapgen.py check --jakt-path ~/src/jakt/jakt/'<CR>", {noremap = true, silent = true})
