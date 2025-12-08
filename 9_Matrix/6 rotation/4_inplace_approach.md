# 4. SOLUTION 2: EFFICIENT IN-PLACE APPROACH

Key insight: Do an in-place transpose, then reverse each column.

Two-step algorithm
1. Transpose in-place:
   for i = 0..n-1:
       for j = i+1..n-1:
           swap(matrix[i][j], matrix[j][i])
2. Reverse each column:
   for j = 0..n-1:
       low = 0; high = n-1
       while low < high:
           swap(matrix[low][j], matrix[high][j])
           low++; high--

Why this works
- Transpose converts columns into rows
- Reversing each column flips the transposed result into a 90° anti-clockwise rotated matrix

Complexity
- Time: O(n²)
- Space: O(1)
