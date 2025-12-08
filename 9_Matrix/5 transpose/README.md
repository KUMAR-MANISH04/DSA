# Matrix Transpose Guide

This folder contains complete notes and runnable examples for matrix transpose (naive and in-place).

Files:
- `1_understanding_transpose.md` — Definition, examples, element mapping
- `2_naive_approach.md` — Naive transpose using a temporary array
- `3_inplace_approach.md` — Efficient in-place transpose (swap upper/lower triangle)
- `4_cpp_implementation.md` — C++ implementations & notes
- `5_python_implementation.md` — Python implementations & notes
- `6_complete_examples.md` — Example matrices & traces
- `7_comparison.md` — Naive vs In-place comparison
- `8_key_code_patterns.md` — Code patterns and loop patterns
- `9_complexity.md` — Time & space complexity
- `cheat_sheet.md` — Quick reference
- `key_takeaways.md` — Short summary
- `examples/` — Example source files: `transpose_cpp.cpp`, `transpose_python.py`, `transpose_java.java`

How to run examples on Windows (PowerShell):

C++ (g++/MinGW):
```
g++ -std=c++17 -O2 transpose\examples\transpose_cpp.cpp -o transpose\examples\transpose_cpp.exe
transpose\examples\transpose_cpp.exe
```

Python:
```
python .\transpose\examples\transpose_python.py
```

Java (JDK required):
```
javac .\transpose\examples\transpose_java.java
java -cp . transpose.examples.transpose_java
```

Notes:
- The in-place C++ implementation processes only the upper triangle (j starts at i+1).
- Naive approach uses an auxiliary matrix; in-place uses O(1) extra space.
