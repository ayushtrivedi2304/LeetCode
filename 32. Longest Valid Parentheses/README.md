Given a string `s` containing only the characters `'('` and `')'`, return the length of the longest valid (well-formed) parentheses substring.
A parentheses substring is a continuous part of a string that contains only opening brackets ( and closing brackets ).

### Example 1

**Input:** `s = "(()"`

**Output:** `2`

**Explanation:** The longest valid parentheses substring is `"()"`.

### Example 2

**Input:** `s = ")()())"`

**Output:** `4`

**Explanation:** The longest valid parentheses substring is `"()()"`.

### Example 3

**Input:** `s = ""`

**Output:** `0`

### Constraints

- `0 <= s.length <= 3 * 10^4`
- `s[i]` is `'('` or `')'`.
