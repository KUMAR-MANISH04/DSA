# CHEAT SHEET – QUICK REFERENCE

Step 1: First Row →
- `for (j = 0; j < C; j++)` print `matrix[0][j]`

Step 2: Last Column ↓
- `for (i = 1; i < R; i++)` print `matrix[i][C-1]`

Step 3: Last Row ←
- `for (j = C-2; j >= 0; j--)` print `matrix[R-1][j]`

Step 4: First Column ↑
- `for (i = R-2; i >= 1; i--)` print `matrix[i][0]`

Edge cases: handle `R==1` and `C==1` first to avoid duplicates.

Complexities:
- Time: Θ(R + C)
- Extra Space: O(1)
