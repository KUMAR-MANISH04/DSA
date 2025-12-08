# Key Takeaways

- Problem: Search in matrix where rows and columns are sorted.
- Two approaches: Naive O(R×C) and Efficient O(R + C).
- Efficient approach: start from top-right (or bottom-left) and eliminate a row or column each move.
- Always consider quick rejection using min and max elements.
- Handle edge cases: single row/column, single element, empty inputs.
