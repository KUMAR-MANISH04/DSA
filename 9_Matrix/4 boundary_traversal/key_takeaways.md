# KEY TAKEAWAYS

- Boundary traversal visits the outer elements in four steps: top row, right column, bottom row (reversed), left column (reversed).
- Handle `R==1` and `C==1` specially to avoid duplicates.
- Use the exact loop boundaries shown to avoid off-by-one and duplicate prints.
- Time complexity: Θ(R + C). Extra space: O(1).
- Works for any rectangular matrix size.
