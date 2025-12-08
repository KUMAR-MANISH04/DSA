# Snake Pattern (Zigzag) Matrix Guide

This folder contains complete notes and runnable examples to print a matrix in a snake (zigzag) pattern.

Files:
- `1_understanding_problem.md` — Problem statement and examples
- `2_core_logic_algorithm.md` — Core logic, pseudocode, and tracing
- `3_java_implementation.md` — Java implementation and notes
- `4_cpp_implementation.md` — C++ implementation and notes
- `5_python_implementation.md` — Python implementation and notes
- `6_examples.md` — Example matrices and variations
- `cheat_sheet.md` — Quick reference
- `common_mistakes.md` — Common mistakes to avoid
- `key_takeaways.md` — Short summary
- `examples/` — Example sources: `snake_java.java`, `snake_cpp.cpp`, `snake_python.py`

How to run (PowerShell / Windows):

C++ (g++ / MinGW):
```
g++ -std=c++17 -O2 snake_pattern\examples\snake_cpp.cpp -o snake_pattern\examples\snake_cpp.exe
snake_pattern\examples\snake_cpp.exe
```

Python (requires Python installed):
```
python .\snake_pattern\examples\snake_python.py
```

Java (requires JDK):
```
javac .\snake_pattern\examples\snake_java.java
java -cp . snake_pattern.examples.snake_java
```

Notes:
- The C++ example is written to accept any rectangular matrix (uses vectors) or a fixed-size overload — see comments.
- The Java example prints inline and also demonstrates returning a List for variations.
