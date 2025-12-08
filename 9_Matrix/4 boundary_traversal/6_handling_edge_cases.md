# 6. HANDLING EDGE CASES

Case 1: Single Row (1×C)
- Print entire row left-to-right.

Case 2: Single Column (R×1)
- Print entire column top-to-bottom.

Case 3: 2×2 Matrix
- Correct loop boundaries avoid duplicates.
- Example: Output `1 2 4 3`.

Case 4: 1×1 Matrix
- Print the single element.

Implementation tip: Handle `R==1` and `C==1` before the general four-step approach to avoid duplicates and out-of-bounds accesses.
