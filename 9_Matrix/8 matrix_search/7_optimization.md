# 7. OPTIMIZATION: BOUNDARY CHECKS

Quick Rejection

Top-left (minimum): matrix[0][0]
Bottom-right (maximum): matrix[R-1][C-1]

If x < matrix[0][0] or x > matrix[R-1][C-1], print "Not found" immediately.

Optimized Java snippet

```java
static void searchOptimized(int[][] matrix, int x) {
    int R = matrix.length;
    int C = matrix[0].length;
    if (x < matrix[0][0] || x > matrix[R-1][C-1]) {
        System.out.println("Not found");
        return;
    }
    int i = 0, j = C - 1;
    while (i < R && j >= 0) {
        if (matrix[i][j] == x) { System.out.println("Found at (" + i + ", " + j + ")"); return; }
        else if (matrix[i][j] > x) j--; else i++;
    }
    System.out.println("Not found");
}
```
