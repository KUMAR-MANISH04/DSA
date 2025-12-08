# 6. METHOD 4: VECTOR OF VECTORS (C++ STL SOLUTION)

Concept
- Dynamic rows AND columns using C++ vectors
- No manual memory management
- Modern and safer approach

Code Implementation
```
void printMatrix(const vector<vector<int>> &arr) {
    int m = arr.size();
    for (int i = 0; i < m; i++) {
        int n = arr[i].size();
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}
```

Advantages
- Truly generic, automatic cleanup, safe
- Dimensions via `.size()`

Disadvantages
- Not cache-friendly, slight overhead vs raw arrays

Pass by reference
- Use `const vector<vector<int>> &` to avoid copying
