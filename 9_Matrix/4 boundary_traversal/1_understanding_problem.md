# 1. UNDERSTANDING THE PROBLEM

Problem Definition
- Print elements that form the boundary/perimeter of a matrix
- Path: First row → Last column → Last row (reversed) → First column (reversed)
- Visits all elements on the outer edge of the matrix

Example 1: 4×4 Matrix
Original Matrix:
```
1   2   3   4
5   6   7   8
9  10  11  12
13 14  15  16
```
Boundary Traversal Path:
```
1 → 2 → 3 → 4
                ↓
8 ← 7 ← 6 ← 5
                ↓
9 → 10 → 11 → 12
                ↓
13 ← 14 ← 15 ← 16
```
Output (order visited): `1 2 3 4 8 12 16 15 14 13 9 5`

Example 2: 2×4 Matrix
Original Matrix:
```
1  2  3  4
5  6  7  8
```
Boundary Traversal Output: `1 2 3 4 8 7 6 5`
