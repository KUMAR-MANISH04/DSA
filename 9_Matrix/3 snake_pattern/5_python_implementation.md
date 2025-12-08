# 5. PYTHON IMPLEMENTATION

Python Version

```python
def print_snake_pattern(matrix):
    R = len(matrix)
    if R == 0:
        print()
        return
    C = len(matrix[0])

    for i in range(R):
        if i % 2 == 0:
            for j in range(C):
                print(matrix[i][j], end=" ")
        else:
            for j in range(C - 1, -1, -1):
                print(matrix[i][j], end=" ")
    print()

# Main
matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]

print("Snake Pattern Output:")
print_snake_pattern(matrix)
```

Notes
- Python is concise and good for quick demos.
- Ensure rows are non-empty and each row has same number of columns for rectangular matrices.
