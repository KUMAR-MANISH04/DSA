# 7. METHOD COMPARISON TABLE

| Aspect | Static | Double Pointer | Array of Pointers | Vector of Vectors |
|---|---:|---:|---:|---:|
| Memory Location | Stack | Heap | Stack + Heap | Heap |
| Cache Friendly | ✓ Yes | ✗ No | ✗ No | ✗ No |
| Fixed Dimensions | ✓ Yes | ✗ No | ✗ No | ✗ No |
| Dynamic Rows | ✗ No | ✓ Yes | ✓ Yes | ✓ Yes |
| Dynamic Columns | ✗ No | ✓ Yes | ✓ Yes | ✓ Yes |
| Jagged Arrays | ✗ No | ✓ Yes | ✓ Yes | ✓ Yes |
| Add/Remove Elements | ✗ No | ✗ No | ✗ No | ✓ Yes |
| Function Passing | ✗ Hard | ✓ Easy | ✓ Easy | ✓ Easy |
| Speed | Fastest | Fast | Fast | Slower |
| Contiguous Memory | ✓ Yes | ✗ No | ✗ No | ✗ No |

