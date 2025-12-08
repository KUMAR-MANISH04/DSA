# 2. CORE LOGIC & ALGORITHM

Key Insight
- Check if row number is even or odd
- Even row (i % 2 == 0): Traverse left-to-right
- Odd row (i % 2 == 1): Traverse right-to-left

Pseudocode
```
for each row i from 0 to R-1:
    if i is even:
        for each column j from 0 to C-1:
            output matrix[i][j]
    else:
        for each column j from C-1 down to 0:
            output matrix[i][j]
```

Complexity
- Time: Θ(R × C) — each element visited once
- Extra Space: O(1) (ignoring output storage)

Edge cases
- Single row (R=1)
- Single column (C=1)
- Non-rectangular input (verify number of columns per row in dynamic languages)
