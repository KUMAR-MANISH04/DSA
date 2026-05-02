# Check for Prime

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## 📄 Understanding the Logic

### Algorithm Overview
A structurally naive method evaluates all divisors recursively tracking properties scaling heavily linearly up to `N`. However, complementary divisors mathematically exist integrally bounded precisely by strictly evaluating the $\sqrt{N}$ boundary!

#### Optimal Implementation Concept
To check comprehensively in an optimized dynamic scope conditionally evaluating bounds dynamically incrementing:
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // Hop iterations dynamically jumping
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
```

### 📊 Complexity Evaluation

| Strategy | Time Complexity | Space Complexity |
| :--- | :--- | :--- |
| **Standard Loop** | `O(N)` | `O(1)` |
| **Root Loop** | `O(√N)` | `O(1)` |
| **Optimized Hex Loop**| `O(√N)` (Scaling Constant ~1/3) | `O(1)` |
