# 9. CRITICAL CONDITIONS EXPLAINED

Why Check if (top <= bottom) Before Bottom Row?

After right column traversal:
- top may have been incremented
- If remaining elements = 1 row left, we should print it
- If remaining elements < 1 row, don't print (already covered)

Example: 2×3 matrix
After top and right: top=1, bottom=1 (1 row left)
Check: 1 <= 1 ✓ → Print bottom row

Why Check if (left <= right) Before Left Column?

After bottom row traversal:
- right may have been decremented
- If remaining elements = 1 column left, we should print it
- If remaining elements < 1 column, don't print (already covered)

Example: 3×2 matrix
After bottom: left=0, right=0 (1 column left)
Check: 0 <= 0 ✓ → Print left column
