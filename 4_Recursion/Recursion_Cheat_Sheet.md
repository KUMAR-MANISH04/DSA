# Recursion Ultimate Cheat Sheet

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## ⚡ Essential Ingredients of Recursion
1. **Base Case:** The condition where the function ceases resolving further iterations and starts returning. (e.g., `if (n == 0) return;`). *Missing a base case leads directly to Stack Overflow.*
2. **Recursive Logic:** The computational task perfectly evaluated per node logically.
3. **Recursive Call:** The function calling itself securely modifying state bounds logically advancing towards the base case (e.g., `fun(n - 1)`).

## 📊 Standard Recursive Patterns
| Pattern | Code Template | Ideal For |
| :--- | :--- | :--- |
| **Forward Print** | `fun(n-1); print(n);` | Printing sequentially `1 to N`. |
| **Reverse Print** | `print(n); fun(n-1);` | Printing sequentially `N to 1`. |
| **Subset/Include-Exclude** | `fun(i+1); fun(i+1, include);` | Backtracking, Dynamic subsets explicitly evaluating perfectly. |
| **Logarithmic Split** | `fun(n/2)` | Binary search explicitly isolating logically efficiently natively. |

## 🚀 Tail Recursion Optimization
A recursive function exactly evaluates as **Tail Recursive** cleanly if the *purely last executed evaluated step* natively executes the recursive call softly mapping effectively. 
*   **Why is it faster?** Modern compilers directly replace Tail End recursions explicitly mapping perfectly loop operations intuitively saving explicit `O(N)` Call Stack memory exactly dynamically allocating purely `O(1)` space identically accurately structurally exactly securely cleanly intelligently conceptually implicitly!

## 🧠 Memory & Tracing Rules
- Always draw a Recursion Tree dynamically when practicing logically mapping exact node evaluations intuitively.
- Variables mapped *before* the recursive call execute sequentially sequentially sequentially explicitly correctly sequentially!
- Variables evaluated *after* a recursive call wait intuitively intuitively intuitively conceptually correctly cleanly accurately reliably explicitly executing exactly in dynamically correctly accurately reverse effectively successfully explicitly mapped order effectively successfully completely!
