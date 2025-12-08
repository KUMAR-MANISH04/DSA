# 1. UNDERSTANDING THE PROBLEM

Matrix Properties

- Row-wise sorted: Each row has elements in increasing order (left to right)
- Column-wise sorted: Each column has elements in increasing order (top to bottom)
- Constraint: Find if value x exists in the matrix
- Output: Print position (row, col) if found, else "Not found"

Example Matrix
```
10  20  30  40
15  25  35  45
27  29  37  48
32  33  39  50
```

Key Observations
- Top-left:     10 (minimum element)
- Bottom-right: 50 (maximum element)

Use the sorted properties to avoid checking every element when possible.
