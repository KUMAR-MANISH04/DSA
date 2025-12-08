# 12. TIME & SPACE COMPLEXITY

Time Complexity
- Step 1: C iterations
- Step 2: R-1 iterations
- Step 3: C-1 iterations
- Step 4: R-2 iterations

Total = C + (R-1) + (C-1) + (R-2) = 2R + 2C - 4 = Θ(R + C)

Space Complexity
- Extra variables (i, j, R, C): O(1)
- Matrix input: O(R × C) (not counted as extra)

Extra Space: O(1)
