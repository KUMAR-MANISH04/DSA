# 3. ROW MAJOR ORDER (Important!)

## 2D Array Row Major Order Memory Layout

Key Concept
- C++ stores multidimensional arrays in contiguous memory using row major order
- Storage Pattern: Elements stored row by row (first row, then second row, etc.)
- Alternative: Column major order (other languages like FORTRAN)

Memory Layout Example
- Base Address: 2000 (each int = 4 bytes)
- Array: `{{10, 20}, {30, 40}, {50, 60}}`
- Memory Addresses:
  - `arr[0][0]=10` → 2000
  - `arr[0][1]=20` → 2004
  - `arr[1][0]=30` → 2008
  - `arr[1][1]=40` → 2012
  - `arr[2][0]=50` → 2016
  - `arr[2][1]=60` → 2020

Why It Matters
- Cache Performance: Better locality of reference (rows accessed sequentially)
- Memory Efficiency: Predictable storage pattern
