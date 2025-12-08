# 8. PYTHON IMPLEMENTATION

In-place rotation using transpose + reverse columns:

```python
def transpose(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(i+1, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

def reverse_columns(matrix):
    n = len(matrix)
    for j in range(n):
        low, high = 0, n - 1
        while low < high:
            matrix[low][j], matrix[high][j] = matrix[high][j], matrix[low][j]
            low += 1
            high -= 1

def rotate(matrix):
    transpose(matrix)
    reverse_columns(matrix)

# Example
matrix = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
print('Original Matrix:')
for r in matrix: print(' '.join(map(str, r)))
rotate(matrix)
print('\nRotated 90° Anti-Clockwise:')
for r in matrix: print(' '.join(map(str, r)))
```
