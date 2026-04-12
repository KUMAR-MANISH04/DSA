# Order of Growth

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 🎥 Video Notes

### What is Order of Growth?
The concept of **Order of Growth** lets us group algorithms into complexity classes indicating how they behave at large-scale. A function $f(n)$ is said to have a higher rate of growth than $g(n)$ if for very large values of $n$, $f(n)$ consistently returns much larger values than $g(n)$.

When optimizing code, identifying your algorithm's order of growth tells you exactly what kind of performance bottleneck you are facing.

### Comparing Orders of Growth

Here is the hierarchy of common Time Complexities evaluated regarding their order of growth, from mathematical **Best to Worst**:

1.  **$O(1)$ — Constant:** Time does not change with input size. (e.g., Array element access, Hashing).
2.  **$O(\log n)$ — Logarithmic:** Time increases very slowly. Often halves the problem size each step. (e.g., Binary Search).
3.  **$O(n)$ — Linear:** Time increases proportionally with input size. (e.g., Iterating through an array).
4.  **$O(n \log n)$ — Linearithmic:** Combination of linear and log. (e.g., Merge Sort, Quick Sort).
5.  **$O(n^2)$ — Quadratic:** Time increases with the square of input size. (e.g., Bubble Sort, Insertion Sort, nested loops).
6.  **$O(n^3)$ — Cubic:** Time increases with the cube of the input size. (e.g., Naive Matrix Multiplication).
7.  **$O(2^n)$ — Exponential:** Time doubles with each addition to the input size. (e.g., Recursive Fibonacci, solving Tower of Hanoi).
8.  **$O(n!)$ — Factorial:** The worst. Calculations become unmanageable quickly even for tiny inputs ($n=20$). (e.g., Travelling Salesman via brute force).

**Mathematical Relation:**
`c < log(n) < n < n*log(n) < n^2 < n^3 < 2^n < n!`

---

### Demonstrating Order of Growth in C++

```cpp
#include <iostream>
using namespace std;

// 1. Constant Growth O(1)
void constantGrowth(int arr[]) {
    // Only looking at the first element. Array size 'n' doesn't matter.
    cout << arr[0] << endl; 
}

// 2. Linear Growth O(n)
void linearGrowth(int arr[], int n) {
    // Visits every element once.
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

// 3. Quadratic Growth O(n^2)
void quadraticGrowth(int arr[], int n) {
    // Visits elements in pairs.
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}
```

### Visualizing Growth
If $n = 1,000,000$:
* **$O(1)$** performs 1 operation.
* **$O(n)$** performs 1,000,000 operations.
* **$O(n^2)$** performs 1,000,000,000,000 (a Trillion) operations! It would take hours for a modern CPU if not optimized.

