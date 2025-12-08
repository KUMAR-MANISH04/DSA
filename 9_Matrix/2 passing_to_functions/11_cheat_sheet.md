# 11. CHEAT SHEET – QUICK REFERENCE

Scenario | Best Method | Key Code
---|---|---
Fixed dimensions, max performance | Static 2D Array | `int arr[3][2];`
Fixed columns, variable rows | Static with omit 1D | `void func(int arr[][2], int m)`
Both dimensions variable, generic | Double Pointer | `int **arr = new int*[m];`
Both dimensions variable, simple | Vector of Vectors | `vector<vector<int>> arr;`
Jagged array needed | Pointer or vector method | `arr[0]=new int[1]; arr[1]=new int[2];`
No cleanup needed | Vector-based methods | Automatic RAII cleanup
Maximum performance | Static array | Single contiguous block
Maximum flexibility | Vector of Vectors | Dynamic rows & columns
Global constant approach | Competitive coding | `const int R=3, C=2;`
Pass without copying | Use references | `const vector<vector<int>> &arr`
