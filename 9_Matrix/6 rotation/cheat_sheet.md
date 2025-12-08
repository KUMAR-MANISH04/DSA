# CHEAT SHEET – QUICK REFERENCE

Task | Code / Formula | Complexity
---|---|---
Naive rotation | `temp[n-1-j][i] = matrix[i][j]` | O(n²) time, O(n²) space
In-place rotation | Transpose + reverse columns | O(n²) time, O(1) space
Element mapping | `(i,j) → (n-1-j, i)` | -
Transpose | swap upper & lower triangle | O(n²)
Reverse column | two-pointer swap per column | O(n) per column
