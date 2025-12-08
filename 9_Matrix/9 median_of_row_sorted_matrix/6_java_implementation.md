# 6. JAVA IMPLEMENTATION (BINARY SEARCH ON ANSWER)

Complete Java solution using binary-search-per-row counting:

```java
import java.util.*;

class MedianSolution {
    static int countLessOrEqual(int[][] matrix, int x) {
        int R = matrix.length;
        int C = matrix[0].length;
        int count = 0;
        for (int i = 0; i < R; i++) {
            int l = 0, r = C; // r exclusive
            while (l < r) {
                int m = (l + r) / 2;
                if (matrix[i][m] <= x) l = m + 1;
                else r = m;
            }
            count += l;
        }
        return count;
    }

    static int findMedian(int[][] matrix) {
        int R = matrix.length;
        int C = matrix[0].length;
        int low = matrix[0][0], high = matrix[R-1][C-1];
        int needed = (R * C + 1) / 2;
        while (low < high) {
            int mid = low + (high - low) / 2;
            int cnt = countLessOrEqual(matrix, mid);
            if (cnt < needed) low = mid + 1;
            else high = mid;
        }
        return low;
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1, 3, 5},
            {2, 4, 6},
            {7, 8, 9}
        };
        System.out.println("Median: " + findMedian(matrix)); // 5
    }
}
```