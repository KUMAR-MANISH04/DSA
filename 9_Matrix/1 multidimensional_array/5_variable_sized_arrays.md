# 5. VARIABLE-SIZED ARRAYS (C++)

## Concept
- Use variables for array dimensions (not just constants)
- Enables dynamic-size static allocation (supported by some compilers as variable length arrays)

## Code Example
```
int m = 3, n = 2;
int arr[m][n];  // Variable-sized array (compiler-dependent)

for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        arr[i][j] = i + j;
    }
}
```

Output for m=3, n=2
```
0 1
1 2
2 3
```

Note: Variable-length arrays are not standard in older C++ standards; prefer `std::vector` or dynamic allocation for portable code.
