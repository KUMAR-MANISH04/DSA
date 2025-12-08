# 6. FOUR METHODS TO CREATE 2D ARRAYS

## Method 1: Static 2D Array (Simple)
- Pros: Cache-friendly, contiguous memory, fastest access
- Cons: Fixed size, must know dimensions at compile time

Code:
```
int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}};
cout << arr[0][0];  // Access: 10
```
- Memory: Stack-allocated, contiguous

## Method 2: Double Pointer (Dynamic)
- Structure: Pointer → Array of Pointers → Individual Row Arrays

Code:
```
int m = 3, n = 2;
int **arr = new int*[m];  // Array of pointers

for (int i = 0; i < m; i++) {
    arr[i] = new int[n];  // Individual rows
}

// Fill data
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        arr[i][j] = 10;
    }
}

// Cleanup
for (int i = 0; i < m; i++) delete[] arr[i];
delete[] arr;
```

- Pros: Dynamic dimensions, jagged arrays possible
- Cons: Not cache-friendly, scattered memory locations

### Double Pointer Jagged Example (concept):
```
arr[0] = new int[1];
arr[1] = new int[2];
arr[2] = new int[3];
```

## Method 3: Array of Pointers (Stack-based)
- Difference: Array itself on stack, pointers to rows on heap

Code:
```
int m = 3, n = 2;
int *arr[m];  // Array of pointers (stack)

for (int i = 0; i < m; i++) {
    arr[i] = new int[n];  // Individual rows (heap)
}
```

- Pros: Simpler than Method 2, supports jagged arrays
- Cons: Not cache-friendly

## Method 4: Vector of Vectors (STL)
- Dynamic rows & columns - most flexible

Code:
```
vector<vector<int>> arr;
int m = 3, n = 2;

for (int i = 0; i < m; i++) {
    vector<int> row;
    for (int j = 0; j < n; j++) {
        row.push_back(10);
    }
    arr.push_back(row);
}

// Compact:
vector<vector<int>> arr2(m, vector<int>(n, 10));
```

- Pros: Dynamic, easy to add/remove elements
- Cons: Not cache-friendly, overhead from STL allocations
