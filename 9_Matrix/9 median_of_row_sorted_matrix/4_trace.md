# 4. STEP-BY-STEP TRACE (EXAMPLE)

Matrix:
```
1 3 5
2 4 6
7 8 9
```
Total = 9 → needed = (9 + 1) / 2 = 5

Binary search on values (sketch):
- low = 1, high = 9 → mid = 5 → count ≤ 5 = 5 → high = 5
- low = 1, high = 5 → mid = 3 → count ≤ 3 = 3 → low = 4
- low = 4, high = 5 → mid = 4 → count ≤ 4 = 4 → low = 5
- low = 5, high = 5 → loop ends → median = 5

Counting explanation for mid=5:
- Row 0: elements ≤5 → 1,3,5 → 3
- Row 1: elements ≤5 → 2,4 → 2
- Row 2: elements ≤5 → none → 0
Total = 5 → meets needed
