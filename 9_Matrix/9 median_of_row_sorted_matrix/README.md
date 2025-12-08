# Median of a Row-wise Sorted Matrix

This folder explains how to find the median of a matrix where each row is sorted (left → right). It contains multiple approaches, execution traces, and runnable examples in C++, Java, and Python.

Files
- `1_understanding_problem.md`
- `2_naive_solution.md`
- `3_efficient_solution.md`
- `4_trace.md`
- `5_counting_function.md`
- `6_java_implementation.md`
- `7_cpp_implementation.md`
- `8_python_implementation.md`
- `cheat_sheet.md`
- `key_takeaways.md`
- `examples/` contains runnable sources:
  - `MedianSolution.java`
  - `median_cpp.cpp`
  - `median_python.py`

How to run (PowerShell):

- C++ (g++ required):
  g++ -std=c++17 -O2 "arrays_guide\median_of_row_sorted_matrix\examples\median_cpp.cpp" -o "arrays_guide\median_of_row_sorted_matrix\examples\median_cpp.exe"
  & ".\arrays_guide\median_of_row_sorted_matrix\examples\median_cpp.exe"

- Java (JDK required):
  javac "arrays_guide\median_of_row_sorted_matrix\examples\MedianSolution.java"
  java -cp "arrays_guide\median_of_row_sorted_matrix\examples" MedianSolution

- Python:
  python .\arrays_guide\median_of_row_sorted_matrix\examples\median_python.py

Notes
- The efficient approach uses binary search on the value range and a counting function that counts elements ≤ mid.
- Counting can be implemented either by binary-search per row (O(R log C)) or with a top-right pointer optimization when matrix columns are also sorted.
