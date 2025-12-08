# 5. METHOD 3: ARRAY OF POINTERS (C-Style SOLUTION)

Concept
- Similar to double pointer but array is stack-allocated
- Individual rows still dynamically allocated on heap
- Provides flexibility while keeping array container simple

Memory Structure
```
Array of Pointers (STACK) → [M elements]
    ↓ (each pointer to)
Individual Row Arrays (HEAP) → [N elements each]
```

Code Implementation
```
void printMatrix(int *arr[], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m = 3, n = 2;
    int *arr[m];
    for (int i = 0; i < m; i++) arr[i] = new int[n];
    // use arr...
    for (int i = 0; i < m; i++) delete[] arr[i];
}
```

Key Differences vs Double Pointer
- Array container on stack vs heap
- Slightly less flexible but simpler
- Still needs manual cleanup for rows
