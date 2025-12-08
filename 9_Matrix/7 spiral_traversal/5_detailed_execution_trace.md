# 5. DETAILED EXECUTION TRACE

4×4 Matrix Trace

Initial State:
- top=0, bottom=3, left=0, right=3
- Loop condition: 0 <= 3 && 0 <= 3 ✓ (enter loop)

Iteration 1:
- Step 1 - Top row (row 0, cols 0-3):
  Print: 1, 2, 3, 4
  top++ → top=1

- Step 2 - Right column (rows 1-3, col 3):
  Print: 8, 12, 16
  right-- → right=2

- Step 3 - Bottom row (row 3, cols 2-0):
  Check: 1 <= 3 ✓
  Print: 15, 14, 13
  bottom-- → bottom=2

- Step 4 - Left column (rows 2-1, col 0):
  Check: 0 <= 2 ✓
  Print: 9, 5
  left++ → left=1

State: top=1, bottom=2, left=1, right=2

Iteration 2:
- Loop condition: 1 <= 2 && 1 <= 2 ✓ (continue)

- Step 1 - Top row (row 1, cols 1-2):
  Print: 6, 7
  top++ → top=2

- Step 2 - Right column (rows 2-2, col 2):
  Print: 11
  right-- → right=1

- Step 3 - Bottom row (row 2, cols 1-1):
  Check: 2 <= 2 ✓
  Print: 10
  bottom-- → bottom=1

- Step 4 - Left column (rows 1-2, col 1):
  Check: 1 <= 1 ✓
  But loop: i from 1 down to 2 → No execution
  left++ → left=2

State: top=2, bottom=1, left=2, right=1

Iteration 3:
- Loop condition: 2 <= 1 && 2 <= 1 ✗ (exit loop)

Final Output: `1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10` ✓
