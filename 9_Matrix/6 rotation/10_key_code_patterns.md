# 10. KEY CODE PATTERNS

Pattern 1: Element mapping formula (naive)
```text
temp[n-1-j][i] = matrix[i][j]
```

Pattern 2: Transpose in-place
```cpp
for (int i = 0; i < n; ++i)
    for (int j = i+1; j < n; ++j)
        swap(matrix[i][j], matrix[j][i]);
```

Pattern 3: Reverse a column (two pointers)
```cpp
int low = 0, high = n-1;
while (low < high) {
    swap(matrix[low][j], matrix[high][j]);
    low++; high--;
}
```
