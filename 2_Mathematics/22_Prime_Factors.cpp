#include <iostream>
using namespace std;

// Print all prime factors of n
void printPrimeFactors(int n) {
    if (n <= 1) return;
    
    // Strip out all 2s and 3s first
    while (n % 2 == 0) { cout << 2 << " "; n /= 2; }
    while (n % 3 == 0) { cout << 3 << " "; n /= 3; }
    
    // Check remaining odd numbers up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) { cout << i << " "; n /= i; }
        while (n % (i + 2) == 0) { cout << (i + 2) << " "; n /= (i + 2); }
    }
    
    // If n is still greater than 3, n itself is a prime
    if (n > 3) cout << n << " ";
}

int main() {
    int n = 315;
    cout << "Prime factors of " << n << ": ";
    printPrimeFactors(n);
    cout << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Prime factors of 315: 3 3 5 7 
 */
