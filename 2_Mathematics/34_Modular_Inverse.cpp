#include <iostream>
using namespace std;

// Using standard iteration to simulate Fermat Little Inverse natively
int modInverse(int a, int m) {
    // Inverse only exists when gcd(a,m) == 1
    for (int x = 1; x < m; x++) {
        if (((a % m) * (x % m)) % m == 1) {
            return x;
        }
    }
    return -1; // Not found
}

int main() {
    int a = 3, m = 11;
    cout << "Modular Inverse of " << a << " under " << m << " is: " << modInverse(a, m) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Modular Inverse of 3 under 11 is: 4
 */
