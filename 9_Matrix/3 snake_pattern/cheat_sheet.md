# CHEAT SHEET – QUICK REFERENCE

- Even Row (0,2,4,...): `if (i % 2 == 0)` → left-to-right loop `for (j = 0; j < C; j++)`
- Odd Row (1,3,5,...): `else` → right-to-left loop `for (j = C-1; j >= 0; j--)`
- Row count (Java): `R = matrix.length`
- Column count (Java): `C = matrix[0].length`
- Time Complexity: Θ(R × C)
- Extra Space: O(1)
