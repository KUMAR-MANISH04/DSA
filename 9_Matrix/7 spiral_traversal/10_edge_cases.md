# 10. EDGE CASES

Case 1: Single Row
Input: [[1, 2, 3, 4]]
Output: 1 2 3 4
(Only top row prints, right column loop doesn't run)

Case 2: Single Column
Input: [[1], [2], [3], [4]]
Output: 1 2 3 4
(Top row + right column covers all)

Case 3: Single Element
Input: [[5]]
Output: 5
(All loops cover single element)

Rectangular matrices and empty rows:
- Ensure matrix[0] exists (non-empty rows) before reading C = len(matrix[0]).
- If input may contain empty rows, validate input and handle gracefully.
