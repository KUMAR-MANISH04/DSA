# Spiral Traversal

This folder contains a step-by-step guide, cheat sheet, and runnable examples (Java, C++, Python) demonstrating the spiral (onion-peeling) traversal of matrices.

Structure:

- `1_understanding_spiral_traversal.md` - Definition and examples
- `2_onion_peeling.md` - Visual layer approach
- `3_boundary_variables_approach.md` - Four boundary variables and algorithm
- `4_java_implementation.md` - Java sample & explanation
- `5_detailed_execution_trace.md` - Iteration-by-iteration trace
- `6_complete_examples.md` - Extra examples and traces
- `7_cpp_implementation.md` - C++ implementation details
- `8_python_implementation.md` - Python implementation details
- `9_critical_conditions.md` - Why checks are necessary
- `10_edge_cases.md` - Edge cases
- `cheat_sheet.md` - Quick reference table
- `key_takeaways.md` - Summary and tips
- `examples/` - Contains runnable source files:
  - `SpiralTraversal.java`
  - `spiral_cpp.cpp`
  - `spiral_python.py`

How to compile and run (PowerShell, Windows):

- C++ (g++ must be installed):
  g++ -std=c++17 -O2 "arrays_guide\spiral_traversal\examples\spiral_cpp.cpp" -o "arrays_guide\spiral_traversal\examples\spiral_cpp.exe"
  & ".\arrays_guide\spiral_traversal\examples\spiral_cpp.exe"

- Java (JDK must be installed):
  javac "arrays_guide\spiral_traversal\examples\SpiralTraversal.java"
  java -cp "arrays_guide\spiral_traversal\examples" SpiralTraversal

- Python (python must be on PATH):
  python .\arrays_guide\spiral_traversal\examples\spiral_python.py

Notes:
- The examples include rectangular and square matrices and handle single-row/column cases.
- Use the `verify spiral examples` todo item to track compilation/run verification.
