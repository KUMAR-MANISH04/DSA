# 1. PROBLEM DEFINITION

Given:
- R × C matrix where each row is sorted (left → right)
- Need to find the median of all R × C elements
- Median = middle value when all elements are sorted

Example (3×3):
```
1   3   5
2   4   6
7   8   9
```
All elements sorted: 1,2,3,4,5,6,7,8,9 → median = 5

Notes:
- We assume rows are non-empty. Validate input in production code.
- Efficient approach uses binary search on the value range (not indices).