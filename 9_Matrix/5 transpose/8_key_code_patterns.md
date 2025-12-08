# 8. KEY CODE PATTERNS

Pattern 1: Diagonal detection
```cpp
if (i == j) { /* diagonal element */ }
```

Pattern 2: Traverse upper triangle
```cpp
for (int i = 0; i < n; i++)
    for (int j = i+1; j < n; j++)
        // process pair (i,j) and (j,i)
```

Pattern 3: Swap
```cpp
int tmp = matrix[i][j];
matrix[i][j] = matrix[j][i];
matrix[j][i] = tmp;
```
