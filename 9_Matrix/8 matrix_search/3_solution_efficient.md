# 3. SOLUTION 2: EFFICIENT APPROACH (TOP-RIGHT CORNER)

Core Idea

Start from TOP-RIGHT corner (row 0, col C-1)

Decision Logic:
- If current == x: FOUND! Return position
- If current > x: Move LEFT (j--)
  - Skip entire right column (all elements below are also > x)
- If current < x: Move DOWN (i++)
  - Skip entire top row (all elements to left are also < x)

Why Top-Right Works
- Movement rules give unambiguous decisions at each step.
- Bottom-left corner also works (symmetric rules).

Java Implementation (Efficient)

```java
public class MatrixSearch {
    static void searchEfficient(int[][] matrix, int x) {
        int R = matrix.length;
        int C = matrix[0].length;
        
        int i = 0;           // Row index
        int j = C - 1;       // Column index
        
        while (i < R && j >= 0) {
            if (matrix[i][j] == x) {
                System.out.println("Found at (" + i + ", " + j + ")");
                return;
            } else if (matrix[i][j] > x) {
                j--;  // Move left
            } else {
                i++;  // Move down
            }
        }
        System.out.println("Not found");
    }
}
```

Complexity
- Time: O(R + C)
- Space: O(1)
