# 6. PYTHON IMPLEMENTATION

Efficient Python Version

```python
def search_efficient(matrix, x):
    R = len(matrix)
    C = len(matrix[0])

    i = 0
    j = C - 1

    while i < R and j >= 0:
        if matrix[i][j] == x:
            print(f"Found at ({i}, {j})")
            return
        elif matrix[i][j] > x:
            j -= 1
        else:
            i += 1
    print("Not found")

# Example usage
if __name__ == '__main__':
    matrix = [
        [10, 20, 30, 40],
        [15, 25, 35, 45],
        [27, 29, 37, 48],
        [32, 33, 39, 50]
    ]
    search_efficient(matrix, 29)
    search_efficient(matrix, 24)
```
