# Analysis of Recursion (Introduction)

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 🎥 Video Notes

### Shifting from Loops to Recursion
While iterative algorithms rely on distinct sequential steps, **recursive algorithms** break a problem down by having a function call itself on a smaller slice of the input.

To analyze recursive code, we can't just count `for` loop iterations. We must construct a **Recurrence Relation**.

### Constructing a Recurrence Relation
Let $T(n)$ equal the time a recursive function takes to finish for an input size of $n$.

1.  Find the **Base Case Time:** Time taken when the recursion terminates (usually constant time $O(1)$).
2.  Find the **Recursive Case Time:** Describe the cost of splitting the input, processing, and calling the function itself recursively.

**Example: Binary Search**
$T(n) = T(n/2) + O(1)$
- $T(n/2)$ is the recursive call to half the array size.
- $O(1)$ is the time taken to check the middle element and slice the boundary range!

