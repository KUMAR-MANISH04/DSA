# 5. STEP-BY-STEP ALGORITHM (IN-PLACE)

Transpose step (in-place):
```
for i = 0 to n-1:
    for j = i+1 to n-1:
        swap(matrix[i][j], matrix[j][i])
```

Reverse columns step:
```
for j = 0 to n-1:
    low = 0; high = n-1
    while low < high:
        swap(matrix[low][j], matrix[high][j])
        low++; high--
```

This two-pass approach yields a 90° anti-clockwise rotation without extra arrays.
