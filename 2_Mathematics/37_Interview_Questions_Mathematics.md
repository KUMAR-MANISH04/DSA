# Interview Questions - Mathematics

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## ❓ Frequently Asked Mathematics Questions in Product Companies

### 1. **How do you find the number of trailing zeros in `N!` efficiently?**
> **Company Tags:** Amazon, Microsoft
*   **Answer:** Directly evaluating the factorial of `N` will result in an overflow for even reasonably small values of `N` (like `20!`). Instead, trailing zeros are created by pairs of `2`s and `5`s. Because `2`s are naturally more frequent than `5`s in a prime factorization, you only need to count the multiples of `5`. The formula `floor(N/5) + floor(N/25) + floor(N/125) ...` yields the exact number of zeros in `O(log N)` complexity.

### 2. **Given a large number `x` and an exponent `n`, how do you calculate `x^n % M` in `O(log n)`?**
> **Company Tags:** Google, Adobe, DE Shaw
*   **Answer:** We leverage **Binary Exponentiation** combined with **Modular Arithmetic**. If `n` is even, $x^n$ can be modeled natively as $(x^{n/2})^2$. Continually halving the power brings the time complexity to `O(log n)`. To maintain precision, we evaluate `ans = (ans * x) % M` independently inside the bit loop.

### 3. **How do you prove that checking up to `sqrt(N)` is sufficient to know if `N` is prime?**
> **Company Tags:** Oracle, Yahoo
*   **Answer:** If a number `N` is composite, it can inherently logically be factored into `a * b`. Mathematically, if both `a` and `b` were strictly strictly greater than `sqrt(N)`, their product natively would evaluate to strictly greater than `N`. Therefore, at least one of those factors invariably must be structurally less than or equivalently equal to `sqrt(N)`. Observing up to the square root boundary natively uncovers the minimum complementary divisor correctly.

### 4. **What is the Sieve of Eratosthenes and when should it be used?**
> **Company Tags:** Goldman Sachs
*   **Answer:** The Sieve of Eratosthenes is a prime number generating optimization mapping framework. It builds an boolean evaluation hash evaluating multiples mapped directly from fundamental primes dynamically. Use this when the problem asks you to discover **multiple primes** across a broad integer span (typically limits up to $10^7$). It natively computes queries dynamically in $O(N \log \log N)$ running time complexity, which serves significantly superior performance to mapping discrete square-root prime checking recursively.

### 5. **Finding GCD without recursion?**
> **Company Tags:** Samsung, OYO
*   **Answer:** By iterating natively `while (b != 0)` sequentially updating variables using `a = b` and strictly applying `b = a % b`, terminating dynamically when `b` reduces unconditionally zero.
