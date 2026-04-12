# Analysis of Algorithms (Background)

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 📄 Article Notes (In-Depth)

### Introduction to Algorithm Analysis
The term **Analysis of Algorithms** is used to describe the process of finding the computational complexity of algorithms—the amount of time, storage, or other resources needed to execute them. Usually, this involves determining a function that relates the length of an algorithm's input to the number of steps it takes (its time complexity) or the number of storage locations it uses (its space complexity).

### Machine-Independent Analysis
To avoid the hardware and software inconsistencies of absolute time measurement, Computer Scientists use **Mathematical Abstraction**. 
We count the number of basic operations (like addition, assignment, or comparison) executed by the algorithm as a function of the input size, typically denoted by `n`.

* **Basic Operations:** Adding two variables, assigning a value, checking a condition. We assume each basic operation takes a constant amount of time $c$.
* **Input Size (n):** The size of the array, the number of nodes in a graph, the magnitude of a number, etc.

### Formulating a Time Complexity Equation
Consider an array traversal:
```cpp
int sumArray(int arr[], int n) {
    int sum = 0;             // c1 -> Runs 1 time
    for (int i = 0; i < n; i++) { // c2 -> Runs n+1 times (n checks passing, 1 check failing)
        sum += arr[i];       // c3 -> Runs n times
    }
    return sum;              // c4 -> Runs 1 time
}
```

If we sum up the operations:
$$T(n) = c_1 * 1 + c_2 * (n + 1) + c_3 * n + c_4 * 1$$
$$T(n) = (c_2 + c_3)n + (c_1 + c_2 + c_4)$$

This simplifies to an equation of the form:
$$T(n) = An + B$$

Where `A` and `B` are constants. No matter what machine you run this on, `A` and `B` change, but the relationship to `n` remains linear. The time grows linearly with `n`. This is the cornerstone of algorithm analysis: **focusing on the growth rate rather than exact bounds**.

