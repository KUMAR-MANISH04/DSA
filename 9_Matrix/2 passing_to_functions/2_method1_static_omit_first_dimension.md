# 2. METHOD 1: STATIC 2D ARRAY WITH OMITTED FIRST DIMENSION

Solution: Omit Only First Dimension
- Syntax: `void func(int arr[][cols], int rows, int cols)`
- Key Rule: Can omit FIRST dimension only, second is mandatory
- Compiler Calculates: Rows automatically from array size

Code Example
```
void printMatrix(int arr[][2], int m, int n) {  // Omit first dimension
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```

Pros & Cons
- Pros: Simple syntax, no dynamic allocation needed, readable
- Cons: Second dimension MUST be fixed at compile time; cannot pass matrices with different column counts

Limitation Example
```
// ✗ WRONG: Cannot omit multiple dimensions
void func(int arr[][], int m, int n) {  // COMPILER ERROR!
}

// ✓ CORRECT: Only first dimension can be omitted
void func(int arr[][5], int m, int n) {  // OK - cols fixed at 5
}
```
