# 4. DETAILED EXECUTION TRACE

Search for 29 in the example matrix:

Matrix:
```
10  20  30  40
15  25  35  45
27  29  37  48
32  33  39  50
```

Start: i=0, j=3 (top-right)

Iteration 1: matrix[0][3] = 40 → 40 > 29 → j=2
Iteration 2: matrix[0][2] = 30 → 30 > 29 → j=1
Iteration 3: matrix[0][1] = 20 → 20 < 29 → i=1
Iteration 4: matrix[1][1] = 25 → 25 < 29 → i=2
Iteration 5: matrix[2][1] = 29 → Found at (2, 1)

Search for 24 (Not Found): traces show loop exits when j becomes -1; print Not found.
