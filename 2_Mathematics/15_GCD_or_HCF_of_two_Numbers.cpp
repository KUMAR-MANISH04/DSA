#include <iostream>
using namespace std;

// Euclidean Algorithm to find Greatest Common Divisor
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b); // Keep recursively getting remainder
}

int main() {
    int a = 12, b = 15;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a, b) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * GCD of 12 and 15: 3
 */
