[(lparen) (rparen)] @punctuation.bracket
["set-option" "datatype" "sort" "function" "declare" "relation" "ruleset" "rule" "rewrite" "birewrite" "let" "run" "simplify" "add-ruleset" "calc" "query-extract" "check" "check-proof" "run-schedule" "push" "pop" "print-table" "print-size" "input" "output" "fail" "include"] @keyword
(comment) @comment
(callexpr (lparen) (ident) @function (expr) @variable.parameter) 

; TODO
; (command (lparen) "relation" (ident) @function)

[(num) (unum)] @number
(string) @string
(type) @type