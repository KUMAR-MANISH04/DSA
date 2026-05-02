# Bit Magic Ultra-Fast Cheat Sheet

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## ⚡ Core Bitwise Fundamentals

| Operator | Syntax | Native Explanation |
| :--- | :---: | :--- |
| **AND** | `&` | Yields 1 only if **both** corresponding bits are explicitly evaluated to 1. |
| **OR** | `|` | Yields 1 if **at least one** corresponding bit conditionally evaluates to 1. |
| **XOR** | `^` | Yields 1 only if the corresponding inherently evaluated bits strictly logically differ! |
| **Left Shift** | `<<` | `N << K` mathematically multiplies `N` by 2^K safely and efficiently. |
| **Right Shift**| `>>` | `N >> K` optimally logically cleanly natively divides `N` by 2^K natively explicitly seamlessly. |

### 🛠️ Common Bit Hacks Reference Log
> Instantly refer back to these natively effectively strictly successfully functionally identically inherently cleanly uniquely isolated patterns when solving DSA.

*   **Determine Power of 2:** `(X && !(X & (X - 1)))`
*   **Clear the rightmost Set Bit:** `X & (X - 1)`
*   **Isolate the rightmost Set Bit:** `X & -X`
*   **Fast Division by 2:** `X >> 1`
*   **Fast Multiplication by 2:** `X << 1`
*   **Toggle Kth bit:** `N ^ (1 << (K - 1))`
*   **Set Kth bit:** `N | (1 << (K - 1))`
*   **Check Kth bit:** `(N >> (K - 1)) & 1`

> [!TIP]
> **Brian Kernighan's Principle:** Iterating `N = N & (N - 1)` skips iteratively natively right exactly to the next inherently explicitly evaluated 1 bit natively, yielding exactly $O(\text{Set Bits})$ evaluation speed dynamically naturally!
