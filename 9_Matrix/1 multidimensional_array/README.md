# arrays_guide

This folder splits the provided guide about 2D/3D arrays into separate files and includes runnable C++ examples.

Structure:
- `1_basics_of_2d_arrays.md` — Basics & examples
- `2_traversing_multidimensional_arrays.md` — Traversal patterns
- `3_row_major_order.md` — Memory layout
- `4_initialization_rules.md` — Initialization rules
- `5_variable_sized_arrays.md` — Variable-sized arrays note
- `6_four_methods_to_create_2d_arrays.md` — Four creation methods
- `7_method_comparison_table.md` — Comparison table
- `8_complete_code_examples.md` — References to example files
- `cheat_sheet.md` — Quick reference
- `key_takeaways.md` — Short decision guidance
- `examples/` — C++ examples (see files)

How to compile examples on Windows (PowerShell) with g++ (MinGW/MSYS):

```
# compile
g++ -std=c++17 -O2 examples/example1_static.cpp -o examples\example1_static.exe
# run
.
examples\example1_static.exe
```

If using MSVC (Developer Command Prompt):
```
cl /EHsc examples\example1_static.cpp
examples\example1_static.exe
```

Notes:
- Variable-length arrays used in examples may be compiler-dependent; when portability is required prefer `std::vector`.
