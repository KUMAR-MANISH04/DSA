# 1. UNDERSTANDING THE PROBLEM

Problem Definition
- Print matrix elements row by row
- Even rows (0, 2, 4, ...): Print left to right →
- Odd rows (1, 3, 5, ...): Print right to left ←
- Creates a "snake" or "zigzag" pattern

Example Matrix (4×4)
Original Matrix:
```
1   2   3   4
5   6   7   8
9  10  11  12
13 14  15  16
```

Snake Pattern Output
- Row 0 (even): 1 2 3 4 →
- Row 1 (odd):  8 7 6 5 ←
- Row 2 (even): 9 10 11 12 →
- Row 3 (odd): 16 15 14 13 ←

Concatenated Output:
```
1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13
```

Visual Path
```
1  →  2  →  3  →  4
                    ↓
8  ←  7  ←  6  ←  5
↓
9  → 10  → 11  → 12
                    ↓
16 ← 15  ← 14  ← 13
```
