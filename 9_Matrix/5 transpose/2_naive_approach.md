# 2. SOLUTION 1: NAIVE APPROACH (WITH TEMPORARY ARRAY)

Concept
- Create a temporary array of the same size
- Copy element at (i,j) to temp at (j,i)
- Copy temp back to original matrix

Algorithm
1. Create `temp[n][n]`
2. for i = 0..n-1:
      for j = 0..n-1:
          `temp[j][i] = matrix[i][j]`
3. Copy `temp` back to `matrix`

Java Implementation (naive)
```java
static void transposeNaive(int[][] matrix) {
    int n = matrix.length;
    int[][] temp = new int[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[j][i] = matrix[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = temp[i][j];
}
```

Complexity
- Time: O(n²)
- Space: O(n²) (temporary array)
