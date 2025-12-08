# Search in Row-wise & Column-wise Sorted Matrix

This folder documents two approaches to search a value in a matrix where each row and each column is sorted increasing.

Files
- `1_understanding_problem.md`
- `2_solution_naive.md`
- `3_solution_efficient.md`
- `4_detailed_execution_trace.md`
- `5_cpp_implementation.md`
- `6_python_implementation.md`
- `7_optimization.md`
- `8_complete_examples.md`
- `9_why_each_corner.md`
- `10_edge_cases_and_cheat_sheet.md`
- `cheat_sheet.md`
- `key_takeaways.md`
- `examples/` contains runnable sources:
  - `MatrixSearch.java`
  - `matrix_search_cpp.cpp`
  - `matrix_search_python.py`

How to compile & run (PowerShell):

- C++ (g++ must be installed):
  g++ -std=c++17 -O2 "arrays_guide\matrix_search\examples\matrix_search_cpp.cpp" -o "arrays_guide\matrix_search\examples\matrix_search_cpp.exe"
  & ".\arrays_guide\matrix_search\examples\matrix_search_cpp.exe"

- Java (JDK must be installed):
  javac "arrays_guide\matrix_search\examples\MatrixSearch.java"
  java -cp "arrays_guide\matrix_search\examples" MatrixSearch

- Python (python must be on PATH):
  python .\arrays_guide\matrix_search\examples\matrix_search_python.py

Notes
- The efficient approach runs in O(R + C) time and O(1) space.
- Examples include quick-reject boundary checks and several test cases.
