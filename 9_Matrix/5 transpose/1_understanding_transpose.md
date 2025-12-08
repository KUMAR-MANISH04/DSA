# 1. UNDERSTANDING TRANSPOSE

Definition
- Transpose: Convert rows into columns and columns into rows
- Symbol: A^T (A transpose)
- Notation: If original element is at (i, j), in transpose it's at (j, i)
- Element Move: `matrix[i][j]` → `transpose[j][i]`

Example 1: 4×4 Matrix
Original:
```
1   2   3   4
5   6   7   8
9  10  11  12
13 14  15  16
```
Transpose:
```
1   5   9  13
2   6  10  14
3   7  11  15
4   8  12  16
```

Element Mapping Examples
- `matrix[0][1]=2` → `transpose[1][0]=2`
- `matrix[1][2]=7` → `transpose[2][1]=7`

Key observation: Diagonal elements (`i == j`) remain unchanged.
