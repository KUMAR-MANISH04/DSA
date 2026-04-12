# Analysis of Common loops

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 🎥 Video Notes

### Standard Loop Complexities
Calculating the time complexity of iterative algorithms essentially boils down to calculating how many times the innermost loop instructions run based on input `N`.

1.  **$O(N)$ - Linear Loops:**
    When traversing by adding/subtracting a constant $C$.
    ```cpp
    for (int i = 0; i < N; i = i + c) // Loops N/c times => O(N)
    ```
2.  **$O(\log N)$ - Logarithmic Loops:**
    When traversing by multiplying or dividing by a constant $P > 1$.
    ```cpp
    for (int i = 1; i < N; i = i * p) // Loops log_p(N) times
    for (int i = N; i > 0; i = i / p) // Loops log_p(N) times
    ```
3.  **$O(\sqrt{N})$ - Fractional Loops:**
    When the loop bounds iterate towards the square root boundary. Example: Prime number checking loop up to $i*i \le N$.
    ```cpp
    for(int i = 1; i*i <= N; ++i)     // Loops sqrt(N) times
    ```

> [!TIP]
> ### 🚀 Quick Loop Complexity Matrix
> | Increment/Decrement Style | Complexity Bound | Loop Type |
> | :--- | :---: | :--- |
> | `i++`, `i--`, `i += c` | **$O(N)$** | Linear / Arithmetic |
> | `i *= c`, `i /= c` | **$O(\log N)$** | Logarithmic / Geometric |
> | `i*i <= N`, `N = N/2` | **$O(\sqrt{N})$** | Fractional boundary |

