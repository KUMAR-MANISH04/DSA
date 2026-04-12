# Asymptotic Notation

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 🎥 Video Notes

### The Language of Scaling
Asymptotic notations are mathematical tools used to represent the time-complexity of algorithms independently of machine hardware. They answer the question: *As the input limits to infinity, how tight are the operational bounds?*

### The "Big Three" Notations
1.  **Big-O Notation ($O$):** Defines an asymptotic **Upper Bound**. The algorithm will not take more time than this curve.
2.  **Big-Omega Notation ($\Omega$):** Defines an asymptotic **Lower Bound**. The algorithm will take at least this much time.
3.  **Big-Theta Notation ($\Theta$):** Defines an asymptotic **Tight Bound**. The algorithm grows fundamentally identically to this curve (sandwiched precisely between an upper and lower bound).

**Insight:** In software engineering, when we say "time complexity is $O(N)$", we rigorously mean "the time scales at *most* linearly".

