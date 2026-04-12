# ⚡ Analysis of Algorithms - Quick Revision Cheat Sheet 

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

Use this cheat sheet to instantly evaluate bounds during coding tests and exams!

### 1. Common Orders of Growth
Memorize this ordering mathematically. You *always* want your algorithms shifting left!
`O(1)` < `O(log N)` < `O(N)` < `O(N log N)` < `O(N^2)` < `O(N^3)` < `O(2^N)` < `O(N!)`
**Best** --------------------------------------------------------------------> **Worst**

### 2. Identifying Iteration Complexity Instantly:
Look at your `for` or `while` loop conditions to identify the growth factor natively:
*   `i = i + c` $\implies$ **$O(N)$** (Linear)
*   `i = i - c` $\implies$ **$O(N)$** (Linear)
*   `i = i * c` $\implies$ **$O(\log_c N)$** (Logarithmic - Scales excellently)
*   `i = i / c` $\implies$ **$O(\log_c N)$** (Logarithmic)
*   Nested Multipliers: Nested logarithmic loop inside an outer linear loop $\implies$ **$O(N \log N)$**

### 3. Space Complexity Rule of Thumb
*   Variables natively consume $O(1)$ space.
*   Physical Arrays or Strings derived from length $N$ consume $O(N)$ space.
*   Matrices structured `N x M` natively consume $O(N \times M)$ space. 
*   **⚠️ RECURSION ALARM ⚠️:** Don't forget the Stack. Recursion inherently consumes $O(Depth)$ space. An algorithm recursing to an $N$-depth call tree physically creates an invisible $O(N)$ auxiliary space cost.

### 4. Recurrence Tree Method Summary
When analyzing $T(n) = aT(n/b) + cn$:
1.  **Work per Level:** The cost of non-recursive operations executed across one horizontal horizontal tree slice.
2.  **Number of Levels (Depth):** $\log_b(N)$ typically dictates the depth before reaching base case.
3.  **Total Bound:** Combine the tree levels to get the asymptotic evaluation. Upper bounding relies universally on the longest path.

---
**Core Rule of Thumbs for Evaluating Code:**
*   Always find your *slowest* operational block. A script containing an $O(N)$ loop physically adjacent to an $O(N^2)$ loop evaluates overall to exactly $O(N^2)$.
*   Throw away ALL constants immediately: $7000 \cdot N \implies O(N)$.
