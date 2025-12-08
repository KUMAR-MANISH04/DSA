# 9. COMPARISON: NAIVE VS IN-PLACE

Aspect | Naive (Temporary) | In-Place (Transpose + Reverse)
---|---:|---:
Approach | Create temp and copy using formula `temp[n-1-j][i] = matrix[i][j]` | Transpose in-place then reverse each column
Time Complexity | O(n²) | O(n²)
Space Complexity | O(n²) | O(1)
Passes | 2 (fill temp, copy back) | 2 (transpose, reverse) but no extra array
Best Use | Simple, small matrices or when extra space is acceptable | Large matrices when space matters
