# 8. PYTHON IMPLEMENTATION

Python Version

```python
def spiral_traversal(matrix):
    R = len(matrix)
    C = len(matrix[0])
    
    top, bottom = 0, R - 1
    left, right = 0, C - 1
    
    result = []
    
    while top <= bottom and left <= right:
        # Step 1: Top row
        for j in range(left, right + 1):
            result.append(matrix[top][j])
        top += 1
        
        # Step 2: Right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        # Step 3: Bottom row
        if top <= bottom:
            for j in range(right, left - 1, -1):
                result.append(matrix[bottom][j])
            bottom -= 1
        
        # Step 4: Left column
        if left <= right:
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1
    
    return result

# Main
if __name__ == '__main__':
    matrix = [
        [1, 2, 3, 4],
        [5, 6, 7, 8],
        [9, 10, 11, 12],
        [13, 14, 15, 16]
    ]

    print("Original Matrix:")
    for row in matrix:
        print(row)

    print("\nSpiral Traversal:")
    result = spiral_traversal(matrix)
    print(' '.join(map(str, result)))
```
