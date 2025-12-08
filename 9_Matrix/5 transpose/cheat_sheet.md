# CHEAT SHEET – QUICK REFERENCE

- Element mapping: `matrix[i][j]` → `transpose[j][i]`
- Naive: create `temp[n][n]`, copy, then copy back (O(n²) space)
- In-place: for i in 0..n-1, for j in i+1..n-1: swap(i,j) with (j,i) (O(1) space)
- Diagonal elements: `matrix[i][i]` unchanged
- Complexity: O(n²) time; in-place uses O(1) extra space
