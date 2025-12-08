# Boundary Traversal (Perimeter) Guide

This folder contains complete notes and runnable examples for boundary/perimeter traversal of a matrix.

Files included:
- `1_understanding_problem.md` — Problem definition and examples
- `2_four_step_algorithm.md` — The four-step traversal algorithm
- `3_pseudocode.md` — Pseudocode
- `4_java_implementation.md` — Java implementation and notes
- `5_execution_trace.md` — Step-by-step execution trace
- `6_handling_edge_cases.md` — Edge case handling (1x1, 1xC, Rx1, 2x2, etc.)
- `7_examples.md` — Complete examples with different matrices
- `8_cpp_implementation.md` — C++ implementation and notes
- `9_python_implementation.md` — Python implementation and notes
- `10_common_mistakes.md` — Common mistakes and fixes
- `11_loop_boundaries_summary.md` — Loop boundaries summary
- `12_complexity.md` — Time & space complexity analysis
- `cheat_sheet.md` — Quick reference
- `key_takeaways.md` — Summary
- `examples/` — Example source files: `boundary_cpp.cpp`, `boundary_java.java`, `boundary_python.py`

How to run examples on Windows (PowerShell):

C++ (g++/MinGW):
```
g++ -std=c++17 -O2 boundary_traversal\examples\boundary_cpp.cpp -o boundary_traversal\examples\boundary_cpp.exe
boundary_traversal\examples\boundary_cpp.exe
```

Python:
```
python .\boundary_traversal\examples\boundary_python.py
```

Java (JDK required):
```
javac .\boundary_traversal\examples\boundary_java.java
java -cp . boundary_traversal.examples.boundary_java
```

Notes:
- The C++ example includes both a generic `vector`-based version and a fixed-size style for teaching.
- Edge cases (single row/column) are handled explicitly in each implementation.
