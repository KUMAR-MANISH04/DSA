# 3. SOLUTION 2: EFFICIENT IN-PLACE APPROACH

Key insight: Swap upper and lower triangle elements.

Algorithm
```
for i = 0 to n-1:
    for j = i+1 to n-1:
        swap(matrix[i][j], matrix[j][i])
```

Why it works
- Each off-diagonal pair is swapped once
- Diagonal elements (i == j) stay the same

Java Implementation (in-place)
```java
static void transposeInPlace(int[][] matrix) {
    int n = matrix.length;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
}
```

Complexity
- Time: O(n²)
- Space: O(1)
