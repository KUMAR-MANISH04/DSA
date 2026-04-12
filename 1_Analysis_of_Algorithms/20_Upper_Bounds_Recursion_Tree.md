# Upper Bounds Using Recursion Tree Method

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 🎥 Video Notes

### Securing the Big-O
When evaluating complex, jagged recurrence trees, finding an exact Theta ($\Theta$) bound can be mathematically frustrating. Instead, the recursion tree method is overwhelmingly used to find the **guaranteed Big-O upper bound**.

If a tree's sum at every level is bounded by $cn$, and the longest possible root-to-leaf path is $k$ levels deep, the total sum of the tree will never exceed strictly $ckn$. This validates the Upper Bound.

#### Tip for Interviews:
If you need to quickly solve bounds on recurrences without drawing huge trees, rely on the **Master Theorem** ($T(n) = aT(n/b) + \Theta(n^k) \log^p n$), which is a programmatic shortcut built directly on top of the recursion tree logic!

