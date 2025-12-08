# 5. STEP-BY-STEP EXECUTION TRACE

Example: 4×4 matrix

Initial state: R=4, C=4 (general case)

Step 1: First row (i=0, j=0→3)
- Print: 1 2 3 4

Step 2: Last column (i=1→3, j=3)
- Print: 8 12 16

Step 3: Last row reversed (i=3, j=2→0)
- Print: 15 14 13

Step 4: First column reversed (i=2→1, j=0)
- Print: 9 5

Final output: `1 2 3 4 8 12 16 15 14 13 9 5`
