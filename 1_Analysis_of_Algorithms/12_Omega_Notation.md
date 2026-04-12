# Omega Notation

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 📄 Article Notes

### Practical use of Omega
While Big-O helps us ensure our software doesn't crash from performance load, $\Omega$ (Omega) helps computer scientists prove bounds on problems. 

For instance, finding the maximum element in an unsorted array has an $\Omega(N)$ lower bound because any algorithm *must* look at every element at least once to ensure it hasn't missed the largest one.

*   $3n^2 - 100n$ is $\Omega(n^2)$
*   It is technically also $\Omega(n)$ and $\Omega(1)$, because those lower bounds hold true, but we aim for the tightest possible lower bound.

