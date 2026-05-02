# LCM of Two Numbers

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## 📄 Understanding the Logic

### Core Conceptual Analysis
The internally required Least Common Multiple structurally maps directly over the complementary property relative to the Greatest Common Divisor inherently.

*   Formula: $LCM(a, b) = rac{(a 	imes b)}{GCD(a,b)}$

### Code Snippet Reference
```cpp
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
```

### 📊 Complexity Evaluation

| Component | Time Complexity | Space Complexity | Context |
| :--- | :--- | :--- | :--- |
| **GCD Invocation** | `O(log(min(A,B)))` | `O(log(min(A,B)))` | Primary overhead internally allocating recursive evaluations. |
| **Multiplication Phase**| `O(1)` | `O(1)` | Constant computational derivation unconditionally. |

> [!TIP]
> Ensure you explicitly natively cast computations to `long long` mapping constraints to circumvent integer product truncation statically.
