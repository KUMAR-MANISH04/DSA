# 2. SOLUTION 1: NAIVE APPROACH

Algorithm

Traverse the entire matrix row-by-row and compare each element with x:

for i = 0 to R-1:
    for j = 0 to C-1:
        if matrix[i][j] == x:
            print position (i, j)
            return
print "Not found"

Java Implementation (Naive)

```java
public class MatrixSearch {
    static void searchNaive(int[][] matrix, int x) {
        int R = matrix.length;
        int C = matrix[0].length;
        
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (matrix[i][j] == x) {
                    System.out.println("Found at (" + i + ", " + j + ")");
                    return;
                }
            }
        }
        System.out.println("Not found");
    }
}
```

Complexity
- Time: O(R × C)
- Space: O(1)

Disadvantage: Does not use sorting; inefficient for large matrices.
