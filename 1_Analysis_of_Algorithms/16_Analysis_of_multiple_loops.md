# Analysis of multiple loops

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 🎥 Video Notes

### Rules of Combination

When algorithms have multiple loops, how do we combine them?

1.  **Consecutive Loops $\implies$ ADDITION**
    If loops run one after another, their complexities add up. Asymptotically, you keep the maximum block.
    ```cpp
    for (int i=0; i<N; i++) { ... } // O(N)
    for (int i=0; i<M^{2}; i++) { ... } // O(M^2)
    ```
    *Result:* $O(N + M^2)$. If $N=M$, it's exactly $O(N^2)$.

2.  **Nested Loops $\implies$ MULTIPLICATION**
    If loops are within one another, you multiply the complexities.
    ```cpp
    for (int i=0; i<N; i++) {         // Operates N times
        for (int j=0; j<N; j=j*2) {   // Operates log(N) times 
            // Basic operations
        }
    }
    ```
    *Result:* Outer loops runs N times. Each iteration triggers $\log N$ inner loop operations. Complexity: $O(N \log N)$.

> [!NOTE]
> ### 💡 Quick Summary Combine Matrix
> | Situation | Mathematical Action | Final Result Example |
> | :---: | :---: | :---: |
> | **Consecutive Blocks** | `ADD (+)` | $O(N + M)$ |
> | **Nested Blocks** | `MULTIPLY (*)` | $O(N \cdot \log N)$ |

