# Mathematics Cheat Sheet

[⬅️ Back to Table of Contents](00_Table_Of_Contents.md)

---

## ⚡ Quick Algorithms Guide

### 1. Prime Checks & Generations
*   **Check Prime:** Loop from $i = 2$ to $\sqrt{N}$. If $N\%i == 0$, it is not mathematically Prime. `Time: O(√N)`
*   **Sieve array (Generate Primes):** Boolean Array `isPrime[N]`. Initiate to True. Start at 2 natively, marking `j=i*i` till $N$ unconditionally false stepping by $i$.

### 2. HCF / LCM (Euclidean Properties)
*   `GCD(a, b)`: If $b == 0$ return $a$; natively return recursively `GCD(b, a % b)`.
*   `LCM(a, b)`: $(a \times b) / GCD(a, b)$.

### 3. Modular Operations & Overflow
Always remember: When integers get very remarkably massive algebraically!
*   `Addition`: $(a + b) \% m = ((a\%m) + (b\%m))\%m$
*   `Multiplication`: $(a \times b) \% m = ((a\%m) \times (b\%m))\%m$
*   `Subtraction`: $(a - b) \% m = ((a\%m) - (b\%m) + m)\%m$

### 4. Binary Exponentiation ($X^N$)
Find powers reliably logically without looping `N` times continuously mapping calculations iteratively safely checking the bits!
```cpp
long long power(int x, int n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * x; // Odd
        x = x * x; 
        n >>= 1; // n / 2
    }
    return res;
}
```

### 5. Logarithmic Digit Finding
Number of inherently distinct base-10 digits evaluated natively mathematically strictly:
*   Formula directly maps into $Digits = \text{floor}(\log_{10}N) + 1$. Evaluates `O(1)`.
