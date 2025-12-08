# 2. ELEMENT MAPPING FORMULA

Mapping (for n×n matrix)
- Original position: (i, j)
- Rotated (90° anti-clockwise) position: (n-1-j, i)

Verify example (n = 3):
- Original[0][2] = 3 → New position = (3-1-2, 0) = (0, 0) ✓
- Original[2][0] = 7 → New position = (3-1-0, 2) = (2, 2) ✓

Alternate viewpoint
- Use intermediate transpose: matrix[i][j] → matrix[j][i]
- Then reverse each column to get the final rotated matrix
