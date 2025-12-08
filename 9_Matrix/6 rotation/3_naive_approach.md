# 3. SOLUTION 1: NAIVE APPROACH (WITH TEMPORARY ARRAY)

Idea
- Create a temporary n×n array
- For each element matrix[i][j], place it at temp[n-1-j][i]
- Copy temp back to original

Algorithm
```
create temp[n][n]
for i in 0..n-1:
    for j in 0..n-1:
        temp[n-1-j][i] = matrix[i][j]
copy temp back to matrix
```

Java implementation (naive)
```java
static void rotateNaive(int[][] matrix) {
    int n = matrix.length;
    int[][] temp = new int[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[n - 1 - j][i] = matrix[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = temp[i][j];
}
```

Complexity
- Time: O(n²)
- Space: O(n²)
