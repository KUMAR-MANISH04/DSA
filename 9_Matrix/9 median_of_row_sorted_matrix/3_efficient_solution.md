# 3. APPROACH 2: EFFICIENT SOLUTION (BINARY SEARCH ON ANSWER)

Key idea
- Binary search on the value range (low = min element, high = max element)
- For each mid, count how many elements ≤ mid
- If count ≥ desired position → median might be ≤ mid
- Else move right

Median condition
- Needed = (R × C + 1) / 2
- Return the smallest value for which count ≥ needed

High-level pseudo-code
```
int findMedian(int[][] matrix) {
    int R = matrix.length;
    int C = matrix[0].length;
    int low = matrix[0][0], high = matrix[R-1][C-1];
    while (low < high) {
        int mid = (low + high) / 2;
        int count = countLessOrEqual(matrix, mid); // see counting function
        int needed = (R*C + 1) / 2;
        if (count < needed) low = mid + 1;
        else high = mid;
    }
    return low;
}
```

Complexity
- Time: O(log(max_value) × R × log C) if counting uses binary search per row
- Space: O(1)

Note: When columns are also sorted, counting can be optimized to O(R + C) using a top-right walk; otherwise use upper_bound per row (safe for row-sorted matrices).
