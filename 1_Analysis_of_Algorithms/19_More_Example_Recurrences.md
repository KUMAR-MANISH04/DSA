# More Example Recurrences

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 🎥 Video Notes

### Handling Uneven Recurrence Trees
Not all recurrence relations divide into universally neat halves. Sometimes you will encounter "lopsided" trees.

**Consider: $T(n) = T(n/3) + T(2n/3) + cn$**
*   The left branch shrinks the input to $1/3$ its size.
*   The right branch shrinks the input to $2/3$ its size.

Because $T(1/3)$ will shrink to the base case $T(1)$ much faster than $T(2/3)$, the left side of the tree is shallower.

*   The shallowest leaf node appears at depth $\log_3(n)$.
*   The deepest leaf node appears at depth $\log_{3/2}(n)$.

On each full level, the total work sums exactly to $cn$. Even though the tree becomes jagged near the bottom, the absolute largest depth gives us the definitive Upper Bound ($O(N \log N)$ based on the longest path $\log_{3/2}(n)$ factor).

