# Contributing

## Don't implement tests for grand language features all at once

For example, [enums](https://github.com/SerenityOS/jakt/tree/main/samples/enums) have a
little bit of everything. It is very easy to paint yourself into a corner with
tree-sitter's grammar DSL. So jump around, have fun, and work your way to having a
language feature fully supported.

## Test names must match jakt samples

What this means: If jakt has a sample named `samples/basics/binary_literals.jakt` then the
corresponding test for tree-sitter-jakt must be `corpus/basics/binary_literals.txt`.

This makes it easy to track progress, provide metrics, and discover what needs to be
implemented in tree-sitter-jakt.

### How to handle test cases not defined in a Jakt sample

Test cases specifically created for tree-sitter-jakt should be included in the
`corpus/original` directory.

## Some jakt samples contain multiple distinct tests per test file

For example: https://github.com/SerenityOS/jakt/blob/main/samples/enums/parse.jakt

It's not feasible to implement the whole file all at once (unless you are an absolute
boss), so use your best judgement on how to divide the sample into distinct tree-sitter
tests. For tests that are not implemented, pleased prepend the test lines with ";" and
also add "NOT IMPLEMENTED" in the test name.

For example:

```
; ================================================================================
; NOT IMPLEMENTED Simple enum with multiple Type Parameters
; ================================================================================
;
; enum SimpleWithMultipleTypeParameters<T, U> {
;     A(T)
;     B(U)
; }
;
; --------------------------------------------------------------------------------
;
; (source_file)
```
