# Big O Notation

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 📄 Article Notes

### Misconceptions regarding Big-O
Big-O does **not** inherently mean "Worst Case Scenario", it simply means "Upper Bound". We can calculate the Big-O upper bound for an algorithm's average case, best case, or worst case. However, colloquially, people often use Big-O to describe the upper bound of the worst-case scenario.

**Examples of proper sizing:**
*   $1000n$ is $O(n)$
*   $5n^2 + 2n + 1$ is $O(n^2)$
*   $2^n + n^{100}$ is $O(2^n)$ 

(Always drop constants and keep only the largest growing term).

