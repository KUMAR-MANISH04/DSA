# 7. METHOD 5: ARRAY OF VECTORS (C++ STL SOLUTION)

Concept
- Fixed number of rows (known at runtime)
- Dynamic columns per row (can vary)
- Middle ground between arrays and vectors

Code Implementation
```
void printArray(const vector<int> arr[], int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < arr[i].size(); j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int m = 3;
    vector<int> arr[m];
    // fill rows
    printArray(arr, m);
}
```

Key Feature
- No column parameter needed; each row reports its own size
- Supports jagged rows and automatic cleanup
