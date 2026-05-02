# Recursion Interview Questions

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## ❓ Common Logic Queries

### 1. **Why does recursion generally take more auxiliary space than iterations?**
> **Tags:** Amazon, Microsoft
*   **Answer:** While iterative boundaries strictly maintain `O(1)` memory, recursion fundamentally relies on the execution Stack mapped sequentially. For explicitly tracking `N` exact recursive calls, every recursive layer requires saving local state variables, parameters, and the return address. This strictly accumulates up to `O(N)` memory depth overhead in the Call Stack, creating theoretical constraints on extremely large `N`.

### 2. **What is a "Base Case"?**
> **Tags:** TCS, Infosys
*   **Answer:** A base case explicitly defines the terminating condition for a recursive loop dynamically! It halts infinite recursion. If a base case is missed or incorrectly mapped mathematically, the algorithm evaluates recursively infinitely, explicitly resulting rapidly in a `Stack Overflow` crash organically smoothly!

### 3. **What is Tail Recursion and how is it optimized?**
> **Tags:** Google, Meta
*   **Answer:** A recursive function evaluates effectively as Tail Recursive if its purely final operational step flawlessly inherently executes exactly the recursive call natively. Modern `C++` or `Java` compilers optimize this flawlessly natively replacing exact stack jumps into `goto` iterative loops gracefully! This successfully compresses explicit `O(N)` constraints down organically elegantly to standard `O(1)` explicit runtime space.

### 4. **How do you approach a DP overlapping subproblem versus Recursion?**
> **Tags:** Adobe, Goldman Sachs
*   **Answer:** Pure Recursion natively explicitly evaluates overlapping mappings dynamically resulting in standard exponential computations elegantly exactly (`O(2^N)` intuitively). By securely caching specifically exact branch evaluations identically natively directly inside a lookup dictionary (Memoization effectively), it organically effectively optimally converts recursive evaluation trees dynamically smartly into mathematically linear computations (`O(N)`), securing seamlessly massive execution gains gracefully!
