# Prime Factors

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## 📄 Understanding the Logic

### Concept
Generating internally tracking fundamentally pure integral prime foundations explicitly requires dynamically separating divisors comprehensively strictly mapping factors successively eliminating them implicitly logically extending to the Root boundary dynamically linearly scaling conditionally algebraically.

### Approach
1. Eliminate all `2`s implicitly natively logically updating structurally.
2. Eliminate all `3`s securely.
3. Map structurally iteratively computing recursively bounding strictly against $i 	imes i \le N$.

```cpp
void primeFactors(int n) {
    while (n % 2 == 0) { cout << 2 << " "; n /= 2; }
    while (n % 3 == 0) { cout << 3 << " "; n /= 3; }
    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) { cout << i << " "; n /= i; }
        while (n % (i + 2) == 0) { cout << (i + 2) << " "; n /= (i + 2); }
    }
    if (n > 3) cout << n << " ";
}
```

### 🧠 Logic Visualization

```mermaid
graph TD
    A[315] -->|Div by 3| B[105]
    B -->|Div by 3| C[35]
    C -->|Not div by 3| D[Check up to sqrt 35]
    D -->|Div by 5| E[7]
    E -->|Prime remaining| F((Factors: 3, 3, 5, 7))

```

### 📊 Complexity Evaluation

| Method | Time Complexity | Space Complexity |
| :--- | :--- | :--- |
| **Factor Search** | `O(√N)` | `O(1)` |

> [!NOTE]
> Tracking structurally limits dynamically guarantees unconditionally no composite integers conceptually divide during execution due to prior elimination inherently sequentially.
