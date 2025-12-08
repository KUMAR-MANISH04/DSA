# CHEAT SHEET – QUICK REFERENCE

Concept | Key Points
---|---
2D Array Definition | `int arr[rows][cols];` - Fixed size, declared on stack
3D Array Definition | `int arr[d1][d2][d3];` - Three levels of nesting required
2D Traversal | Two nested loops: `for(i)` `for(j)`
3D Traversal | Three nested loops: `for(i)` `for(j)` `for(k)`
Row Major Order | Elements stored ROW by ROW in contiguous memory (C++ standard)
Memory Address | If base = 2000, int (4 bytes): next element = `base + (i × cols + j) × 4`
Declaration Optional | Internal brackets optional, but recommended for readability
Initialization Rule | Only first dimension can be omitted, others mandatory
Variable-Sized Arrays | Use variables for dimensions: `int arr[m][n];` (compiler-dependent)
Static 2D Array | Best: Contiguous memory, cache-friendly, FASTEST
Double Pointer | Flexible: Dynamic size, jagged arrays, NOT cache-friendly
Array of Pointers | Middle Ground: Stack array, heap rows, supports jagged
Vector of Vectors | Most Flexible: Dynamic rows/cols, easy add/remove, slowest
Jagged Arrays | Different row sizes possible with pointers or vectors
Memory Cleanup | Double pointer & array of pointers need manual `delete[]`
Function Passing | Pointer-based & vector methods easier to pass to functions
