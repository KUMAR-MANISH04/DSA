# Matrix Rotation (90° Anti-Clockwise) Guide

This folder contains notes and runnable examples for rotating a square matrix 90° counter-clockwise (anti-clockwise).

Files:
- `1_understanding_problem.md` — Problem definition and examples
- `2_element_mapping.md` — Element mapping formula
- `3_naive_approach.md` — Naive approach using a temporary array
- `4_inplace_approach.md` — Efficient in-place approach (transpose + reverse columns)
- `5_step_by_step.md` — Step-by-step algorithm
- `6_complete_examples.md` — Example matrices and traces
- `7_cpp_implementation.md` — C++ implementation notes
- `8_python_implementation.md` — Python implementation notes
- `9_comparison.md` — Naive vs In-place comparison
- `10_key_code_patterns.md` — Key code snippets and patterns
- `cheat_sheet.md` — Quick reference
- `key_takeaways.md` — Short summary
- `examples/` — Example source files: `rotate_cpp.cpp`, `rotate_python.py`, `rotate_java.java`

How to run examples on Windows (PowerShell):

C++ (g++/MinGW):
```
g++ -std=c++17 -O2 rotation\examples\rotate_cpp.cpp -o rotation\examples\rotate_cpp.exe
rotation\examples\rotate_cpp.exe
```

Python:
```
python .\rotation\examples\rotate_python.py
```

Java (JDK required):
```
javac .\rotation\examples\rotate_java.java
java -cp . rotation.examples.rotate_java
```

Notes:
- Implementations assume square matrices (n×n). For non-square matrices there are different mapping rules.
- The efficient in-place method uses a transpose followed by reversing each column (two-pass, O(1) extra space).
