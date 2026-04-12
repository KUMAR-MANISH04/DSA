# Theta Notation

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

---

## 📄 Article Notes

### When can you use Theta ($\Theta$)?
You can only use Theta notation when the upper bound (Big-O) and lower bound (Omega) are the *exact same order of growth*.

**Example:**
If an algorithm's worst case is exactly $n^2/2$, its upper bound is $O(n^2)$ and its lower bound is $\Omega(n^2)$. 
Since both bounds match, we can confidently state the total complexity is $\Theta(n^2)$.

If an algorithm (like Insertion Sort) has a best-case lower bound of $\Omega(N)$ and a worst-case upper bound of $O(N^2)$, **we cannot assign a single $\Theta$ value** for the overall algorithm because the lower and upper bounds disagree. We can only give bounds for the specific cases (e.g., The *worst-case* is $\Theta(N^2)$).

