# 2. APPROACH 1: NAIVE SOLUTION

Algorithm
- Collect all R × C elements into a single array
- Sort the array
- Return middle element

Pseudo-code
```
int findMedian(int[][] matrix) {
    int R = matrix.length;
    int C = matrix[0].length;
    int total = R * C;
    int[] arr = new int[total];
    int idx = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            arr[idx++] = matrix[i][j];
    Arrays.sort(arr);
    return arr[total / 2];
}
```

Complexity
- Time: O(R × C × log(R × C))
- Space: O(R × C)

Disadvantage: uses extra space and is not optimal for large matrices.
