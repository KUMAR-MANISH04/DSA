#include <iostream>
using namespace std;

// Optimized prime check
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true; // Handling base primes
    
    // Quick early check for multiples of 2 and 3
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // Check remaining up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int num = 103;
    cout << "Is " << num << " prime?: " << (isPrime(num) ? "True" : "False") << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Is 103 prime?: True
 */
