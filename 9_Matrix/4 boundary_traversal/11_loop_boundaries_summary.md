# 11. LOOP BOUNDARIES SUMMARY

Step 1: First Row
- Loop: for (j = 0; j < C; j++)
- Elements: matrix[0][0] .. matrix[0][C-1]
- Count: C

Step 2: Last Column
- Loop: for (i = 1; i < R; i++)
- Elements: matrix[1][C-1] .. matrix[R-1][C-1]
- Count: R-1

Step 3: Last Row
- Loop: for (j = C-2; j >= 0; j--)
- Elements: matrix[R-1][C-2] .. matrix[R-1][0]
- Count: C-1

Step 4: First Column
- Loop: for (i = R-2; i >= 1; i--)
- Elements: matrix[R-2][0] .. matrix[1][0]
- Count: R-2

Total elements printed: 2R + 2C - 4 (when R, C > 1)
