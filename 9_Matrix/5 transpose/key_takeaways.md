# KEY TAKEAWAYS

- Transpose swaps rows with columns: element (i,j) → (j,i).
- Naive approach: uses extra O(n²) space.
- In-place approach: swap upper & lower triangles; O(1) extra space.
- Start inner loop at `j = i + 1` to avoid duplicate swaps.
- Preferred method for large matrices: in-place transpose.
