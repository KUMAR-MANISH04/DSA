# 4. METHOD 2: DOUBLE POINTER (C-Style SOLUTION)

Concept
- Use `int **ptr` to represent 2D array
- Pass dimensions as separate parameters
- Creates truly generic function for ANY dimension matrix

Memory Structure
```
Double Pointer ptr
    ↓
Array of Pointers [M elements]
    ↓ (each pointer to)
Individual Row Arrays [N elements each]
```

Code Implementation
```
void printMatrix(int **arr, int m, int n) {  // Generic function!
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```

Key Points
- Truly generic function (any m × n matrix)
- Supports jagged arrays
- Requires manual memory management and cleanup (`delete[]`)

Jagged Array Example
```
int **arr = new int*[3];
arr[0] = new int[1];
arr[1] = new int[2];
arr[2] = new int[3];
```
