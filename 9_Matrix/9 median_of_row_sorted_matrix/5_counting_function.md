# 5. COUNTING ELEMENTS ≤ X

Purpose
- Given a value x, count how many elements in the row-wise sorted matrix are ≤ x.

Two safe ways to implement:

1) Binary search per row (works when only rows are sorted)
- For each row use upper_bound to find number of elements ≤ x
- Complexity: O(R × log C)

2) Top-right walk (works when columns are also sorted)
- Start from top-right and move left/down; complexity O(R + C)
- Use this only if columns are non-decreasing as well.

Example (binary search per row):
```
int countLessOrEqual(int[][] matrix, int x) {
    int R = matrix.length;
    int C = matrix[0].length;
    int count = 0;
    for (int i = 0; i < R; i++) {
        // use upper_bound equivalent to count elements <= x
        int l = 0, r = C; // r is exclusive
        while (l < r) {
            int m = (l + r) / 2;
            if (matrix[i][m] <= x) l = m + 1;
            else r = m;
        }
        count += l;
    }
    return count;
}
```

Notes
- Use method (1) unless you can safely assume columns are sorted too.
- For large C, (1) adds a log C factor; still much faster than naive sorting of all elements.
