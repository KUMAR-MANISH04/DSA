# KEY TAKEAWAYS

- Alternating direction for each row produces snake/zigzag output.
- Check row parity with `i % 2 == 0`.
- Time complexity: Θ(R × C). Extra space: O(1).
- Works for any rectangular matrix. For variations, collect results or alternate columns instead.
- For production code prefer returning a collection (List/Vector) for testability.
