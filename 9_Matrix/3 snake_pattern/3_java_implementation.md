# 3. JAVA IMPLEMENTATION

Complete Function

```java
public class SnakePattern {
    // Function to print matrix in snake pattern
    static void printSnakePattern(int[][] matrix) {
        int R = matrix.length;      // Number of rows
        int C = matrix[0].length;   // Number of columns

        for (int i = 0; i < R; i++) {
            if (i % 2 == 0) {
                // Even row: left to right
                for (int j = 0; j < C; j++) {
                    System.out.print(matrix[i][j] + " ");
                }
            } else {
                // Odd row: right to left
                for (int j = C - 1; j >= 0; j--) {
                    System.out.print(matrix[i][j] + " ");
                }
            }
        }
        System.out.println();  // New line at end
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        System.out.println("Snake Pattern Output:");
        printSnakePattern(matrix);
    }
}
```

Variations
- Return a List<Integer> instead of printing (useful for unit tests or API).
- Column-wise snake: swap the role of rows/columns and alternate by column index.
