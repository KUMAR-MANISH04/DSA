# Passing 2D Arrays to Functions

This folder contains a split of techniques for passing 2D arrays to functions in C++.

Files:
- `1_problem_with_fixed_dimension_functions.md` — Issue introduction and example
- `2_method1_static_omit_first_dimension.md` — Static arrays with omitted first dimension
- `3_global_constants.md` — Using global constants for dimensions
- `4_double_pointer.md` — Double pointer (int**)
- `5_array_of_pointers.md` — Array of pointers (int *arr[])
- `6_vector_of_vectors.md` — Vector of vectors (STL)
- `7_array_of_vectors.md` — Array of vectors
- `8_complete_code_examples.md` — Example references
- `examples/` — C++ source files for each method

How to compile examples on Windows (PowerShell):

```
# compile example6 (double pointer)
g++ -std=c++17 -O2 passing_to_functions\examples\example6_double_pointer.cpp -o passing_to_functions\examples\example6_double_pointer.exe
# run
passing_to_functions\examples\example6_double_pointer.exe
```

Notes:
- Pointer-based examples require manual `delete[]` cleanup.
- Vector-based examples use RAII and are portable.
