# 4. JAVA IMPLEMENTATION

Method: Basic Implementation (with edge cases handled)

```java
public class BoundaryTraversal {
    static void boundaryTraversal(int[][] matrix) {
        int R = matrix.length;
        int C = matrix[0].length;

        // Special case: Single row
        if (R == 1) {
            for (int j = 0; j < C; j++) System.out.print(matrix[0][j] + " ");
            System.out.println();
            return;
        }

        // Special case: Single column
        if (C == 1) {
            for (int i = 0; i < R; i++) System.out.print(matrix[i][0] + " ");
            System.out.println();
            return;
        }

        // Step 1: First row (left to right)
        for (int j = 0; j < C; j++) System.out.print(matrix[0][j] + " ");

        // Step 2: Last column (top to bottom excluding first row)
        for (int i = 1; i < R; i++) System.out.print(matrix[i][C - 1] + " ");

        // Step 3: Last row (right to left excluding last column)
        for (int j = C - 2; j >= 0; j--) System.out.print(matrix[R - 1][j] + " ");

        // Step 4: First column (bottom to top excluding corners)
        for (int i = R - 2; i >= 1; i--) System.out.print(matrix[i][0] + " ");

        System.out.println();
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
        };

        System.out.print("Boundary Traversal: ");
        boundaryTraversal(matrix);
    }
}
```

Output for example above: `1 2 3 4 8 12 16 15 14 13 9 5`
