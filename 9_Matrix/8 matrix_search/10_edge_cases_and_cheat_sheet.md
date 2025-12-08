# 10. EDGE CASES & CHEAT SHEET

Edge Cases
- Single Row: Works — only top row traversed.
- Single Column: Works — top row + right column cover all.
- Single Element: Works.
- Empty matrix or empty rows: Validate input before using matrix[0].

Cheat Sheet
- Start: Top-right (i=0, j=C-1)
- If current == x → Found
- If current > x → j-- (move left)
- If current < x → i++ (move down)
- Loop: while (i < R && j >= 0)
- Complexity: Time O(R + C), Space O(1)
