# 2. FOUR-STEP ALGORITHM

Step 1: Print First Row (Left to Right)
- Condition: Row index = 0
- Loop: j from 0 to C-1

Step 2: Print Last Column (Top to Bottom)
- Condition: Column index = C-1
- Loop: i from 1 to R-1 (skip row 0 to avoid duplicate)

Step 3: Print Last Row (Right to Left)
- Condition: Row index = R-1
- Loop: j from C-2 down to 0 (skip last column)

Step 4: Print First Column (Bottom to Top)
- Condition: Column index = 0
- Loop: i from R-2 down to 1 (skip corners)

Notes:
- Check R>1 and C>1 to avoid duplicates and handle edge cases properly.
- Total elements printed on boundary: 2R + 2C - 4 (when R,C > 1)
