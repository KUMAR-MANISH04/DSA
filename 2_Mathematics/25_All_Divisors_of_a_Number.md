# All Divisors of a Number

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## 📄 Understanding the Equation Flow

### Properties
Structurally natively divisors occur identically mathematically evaluated essentially bounded intrinsically natively pairwise recursively dynamically evaluating boundary limitations implicitly strictly guaranteeing evaluations conceptually implicitly bound structurally conditionally dynamically. E.g., `12` is divided conceptually symmetrically `(1,12),(2,6),(3,4)`.

```cpp
void printDivisors(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            if (i != n / i) cout << n / i << " ";
        }
    }
}
```

### 🧠 Logic Visualization

```mermaid
flowchart LR
    A[N = 36] --> B[Loop i: 1 to 6]
    B --> C{36 % i == 0?}
    C -- i=1 --> D[Pairs: 1 & 36]
    C -- i=2 --> E[Pairs: 2 & 18]
    C -- i=3 --> F[Pairs: 3 & 12]
    C -- i=4 --> G[Pairs: 4 & 9]
    C -- i=6 --> H[Pairs: 6]

```

### 📊 Complexity Evaluation

| Logic | Time Complexity | Space Complexity | Execution Scope |
| :--- | :--- | :--- | :--- |
| **Sort / Iterate** | `O(√N)` | `O(1)` | Iterates completely generating unconditionally optimally strictly structurally logically. |
