# 1. UNDERSTANDING SPIRAL TRAVERSAL

Definition

- Print matrix elements in spiral/circular order
- Start from outer boundary, move inward
- Like peeling an onion layer by layer
- Process: Top row → Right column → Bottom row (reversed) → Left column (reversed)

Example 1: 4×4 Matrix

Original Matrix:
```
1   2   3   4
5   6   7   8
9  10  11  12
13 14  15  16
```

Spiral Traversal Order:
Row 1 (→):     1, 2, 3, 4
Col 4 (↓):     8, 12, 16
Row 4 (←):     15, 14, 13
Col 1 (↑):     9, 5
Row 2 (→):     6, 7
Col 3 (↓):     11
Row 3 (←):     10
(done)

Output: `1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10`

Example 2: 2×3 Matrix

Original Matrix:
```
1  2  3
4  5  6
```

Spiral Order:
Top row (→):     1, 2, 3
Right col (↓):   6
Bottom row (←):  5, 4
Left col (↑):    (none, already covered)

Output: `1 2 3 6 5 4`
