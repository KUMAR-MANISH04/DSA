# 10. COMMON MISTAKES TO AVOID

Duplicate Elements
- Problem: Same element printed twice
- Fix: Use proper loop boundaries (start second loop at i=1, third loop at j=C-2, etc.)

Not handling 1×1
- Problem: Crashes or duplicates
- Fix: Handle R==1 or C==1 separately

Wrong loop direction
- Problem: Elements printed in wrong order
- Fix: Use decrementing loops for reverse traversal (j-- or range(..., -1, -1))

Incorrect bounds
- Problem: Out of bounds or missing elements
- Fix: Follow the four-step loop boundaries exactly

Hardcoded dimensions
- Problem: Only works for specific size
- Fix: Use R and C variables (matrix.length / .size())

Off-by-one errors
- Problem: Missing edge elements
- Fix: Start second loop at i=1 (not 0)
