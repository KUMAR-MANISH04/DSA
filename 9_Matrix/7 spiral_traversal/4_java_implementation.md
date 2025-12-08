# 4. JAVA IMPLEMENTATION

Complete Code

```java
public class SpiralTraversal {
    
    static void spiralTraversal(int[][] matrix) {
        int R = matrix.length;
        int C = matrix[0].length;
        
        int top = 0, bottom = R - 1;
        int left = 0, right = C - 1;
        
        // Main loop: continue while boundaries are valid
        while (top <= bottom && left <= right) {
            
            // Step 1: Print top row (left to right)
            for (int j = left; j <= right; j++) {
                System.out.print(matrix[top][j] + " ");
            }
            top++;
            
            // Step 2: Print right column (top to bottom)
            for (int i = top; i <= bottom; i++) {
                System.out.print(matrix[i][right] + " ");
            }
            right--;
            
            // Step 3: Print bottom row (right to left)
            // Condition check: ensure row still exists
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    System.out.print(matrix[bottom][j] + " ");
                }
                bottom--;
            }
            
            // Step 4: Print left column (bottom to top)
            // Condition check: ensure column still exists
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    System.out.print(matrix[i][left] + " ");
                }
                left++;
            }
        }
        System.out.println();
    }
    
    static void printMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };
        
        System.out.println("Original Matrix:");
        printMatrix(matrix);
        
        System.out.println("Spiral Traversal:");
        spiralTraversal(matrix);
    }
}
```

Output shown in examples folder when you run `SpiralTraversal`.
