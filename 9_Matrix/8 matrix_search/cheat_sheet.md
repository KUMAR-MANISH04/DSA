# Cheat Sheet — Matrix Search (Row & Column Sorted)

Start position: Top-right (0, C-1)
Loop condition: while (i < R && j >= 0)

If current == x: Found
If current > x: j-- (move left)
If current < x: i++ (move down)

Quick reject: if x < matrix[0][0] or x > matrix[R-1][C-1] → Not found

Complexity: Time O(R + C), Space O(1)
