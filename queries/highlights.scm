[(lparen) (rparen)] @punctuation.bracket
["set-option" "datatype" "sort" "function" "declare" "relation" "ruleset" "rule" "rewrite" "birewrite" "let" "run" "simplify" "add-ruleset" "calc" "query-extract" "check" "check-proof" "run-schedule" "push" "pop" "print-table" "print-size" "input" "output" "fail" "include"] @keyword
["set" "delete" "union" "panic" "extract" "let"] @keyword
[":unextractable" ":on_merge" ":merge" ":default" ":ruleset" ":name" ":when" ":until" ":variants" ":cost"] @attribute

(comment) @comment
(expr (ident) @variable.parameter)
(callexpr (ident) @function)

(command (ident) @function)
(variant (ident) @function)

[(num) (unum)] @number
(string) @string
(type) @type