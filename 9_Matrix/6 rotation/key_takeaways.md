# KEY TAKEAWAYS

- 90° anti-clockwise rotation maps (i, j) → (n-1-j, i).
- Naive approach: create temp array and copy using the mapping (easy, O(n²) space).
- Efficient in-place approach: transpose, then reverse each column (O(1) extra space).
- Start inner loops correctly (e.g., j = i+1 for transpose) to avoid duplicate swaps.
- Use the in-place approach for large matrices when memory is constrained.
