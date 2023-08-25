[(lparen) (rparen)] @punctuation.bracket
["set-option" "datatype" "sort" "function" "declare" "relation" "ruleset" "rule" "rewrite" "birewrite" "let" "run" "simplify" "add-ruleset" "calc" "query-extract" "check" "check-proof" "run-schedule" "push" "pop" "print-table" "print-size" "input" "output" "fail" "include"] @keyword
["set" "delete" "union" "panic" "extract" "let"] @keyword
(fact ("=" @keyword))
[":unextractable" ":on_merge" ":merge" ":default" ":ruleset" ":name" ":when" ":until" ":variants" ":cost"] @attribute

(comment) @comment
(callexpr ((ident) @function))

(command ("datatype" (ident) @type))
(command ("relation" (ident) @function))
(command ("function" (ident) @function))
(command ((lparen) "declare" (ident) @variable (ident) @type (rparen)))
(variant ((ident) @function))

((ident) @variable)
[(num) (unum)] @number
(string) @string
(type) @type