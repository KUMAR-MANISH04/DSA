# Trailing Zeros in Factorial

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## 📄 Understanding the Logic

### The Core Paradigm
Finding the complete value of `N!` for discovering trailing zeroes evaluates unsafely due to massive algebraic limitations natively mapping memory. Instead, we analyze the prime factorization dynamically!

*   A trailing zero algebraically originates only mathematically from multiplying $2 	imes 5 = 10$.
*   Since the frequency of prime factor `2` unconditionally surpasses `5` within $N!$, the aggregate amount of completely paired tens strictly depends exclusively upon occurrences of the prime factor `5`.

### Derivations & Implementation
To find how many `5`s exist logically, we continuously sum the floor quotient of `N / 25`, `N / 125`, etc.
```cpp
int countTrailingZeros(int n) {
    int count = 0;
    for(int i = 5; i <= n; i = i * 5) {
        count += (n / i);
    }
    return count;
}
```

### 📊 Complexity Evaluation

| Paradigm | Time Complexity | Space Complexity | Analysis |
| :--- | :--- | :--- | :--- |
| **Logarithmic Counting** | `O(log5 N)` | `O(1)` | Incredibly robust analytically eliminating overflow limits! |
