# 1. UNDERSTANDING THE PROBLEM

Definition
- Rotate matrix 90 degrees counter-clockwise (anti-clockwise)
- Last column becomes first row (in same order)
- New element at (i, j) comes from old position (j, n-1-i)

Example 1: 3×3 Matrix
Original:
```
1 2 3
4 5 6
7 8 9
```
Rotated 90° Anti-Clockwise:
```
3 6 9
2 5 8
1 4 7
```

Example 2: 4×4 Matrix
Original:
```
1  2  3  4
5  6  7  8
9 10 11 12
13 14 15 16
```
Rotated 90° Anti-Clockwise:
```
4  8 12 16
3  7 11 15
2  6 10 14
1  5  9 13
```

Transformation intuition
- Columns of original become rows of rotated matrix
- Specifically: last column → first row, etc.
