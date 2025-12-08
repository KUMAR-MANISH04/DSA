# COMMON MISTAKES TO AVOID

Mistake: Wrong reverse loop
- Problem: `for (j = C; j >= 0; j--)` includes index C (out of bounds)
- Fix: `for (j = C - 1; j >= 0; j--)`

Mistake: Hardcoded dimensions
- Problem: Function only works for one size
- Fix: Use `matrix.length` and `matrix[0].length` (or vector sizes)

Mistake: Forgetting newline
- Problem: All numbers printed on one line without final newline
- Fix: Add `System.out.println()` (Java) or `cout << endl;` (C++) after printing

Mistake: Off-by-one
- Problem: Loop range excludes last column
- Fix: Loop j from 0 to C-1 inclusive

Mistake: Non-rectangular input
- Problem: Rows of different lengths cause index errors
- Fix: Validate sizes or use row-wise size checks
