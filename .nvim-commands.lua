-- source with luafile to run tree sitter test commands in the integrated terminal
-- DEPENDS ON https://github.com/akinsho/toggleterm.nvim

vim.api.nvim_set_keymap("n", "<F1>", "<cmd>TermExec cmd='tree-sitter generate && tree-sitter test'<CR>", {noremap = true, silent = true})

function vim.getVisualSelection()
	vim.cmd('noau normal! "vy"')
	local text = vim.fn.getreg('v')
	vim.fn.setreg('v', {})

	text = string.gsub(text, "\n", "")
	if #text > 0 then
		return text
	else
		return ''
	end
end

vim.keymap.set("v", "<F2>", function()
    local test = vim.getVisualSelection()
    vim.cmd("TermExec cmd='tree-sitter generate && tree-sitter test -d -f \"" .. test .. "\"'<CR>")
end, {noremap = true, silent = true})

vim.api.nvim_set_keymap("n", "<F3>", "<cmd>TermExec cmd='JAKT_SRC_PATH=~/src/jakt/jakt/ python -m pytest script/test'<CR>", {noremap = true, silent = true})

-- TODO update this to the visual select thingy
-- vim.api.nvim_set_keymap("n", "<F4>", "<cmd>TermExec cmd='JAKT_SRC_PATH=~/src/jakt/jakt/ python -m pytest script/test -k \"test_calculate_tests_completed\"'<CR>", {noremap = true, silent = true})
