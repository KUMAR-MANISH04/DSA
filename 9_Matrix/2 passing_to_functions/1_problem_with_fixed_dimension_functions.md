# 1. THE PROBLEM WITH FIXED-DIMENSION FUNCTIONS

Issue: Hardcoded Dimensions
- Limited Function: Works ONLY for specific matrix size (e.g., 3×2)
- Not Reusable: Cannot use for different test cases (4×5, 10×20, etc.)
- Poor Code Design: No flexibility, requires function rewrite for each dimension

Example of Poor Implementation
```
void printMatrix(int arr[3][2]) {  // Hardcoded to 3×2 only!
    for (int i = 0; i < 3; i++) {  // 3 hardcoded
        for (int j = 0; j < 2; j++) {  // 2 hardcoded
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```

Why This Fails
- Function REQUIRES exactly 3 rows & 2 columns
- Passing different dimensions → compiler error
- Not generic or scalable
