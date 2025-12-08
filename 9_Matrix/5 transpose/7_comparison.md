# 7. COMPARISON: NAIVE VS IN-PLACE

Aspect | Naive (Temporary) | In-Place
---|---:|---:
Approach | Create temp array, copy twice | Swap upper & lower triangle
Time Complexity | O(n²) | O(n²)
Space Complexity | O(n²) | O(1)
Number of Passes | 2 (copy to temp, copy back) | 1 (single pass)
Readability | More straightforward | Requires understanding diagonal
Efficiency | Lower (memory overhead) | Better (no extra space)
