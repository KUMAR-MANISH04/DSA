#include <iostream>
using namespace std;

// Prevent overflow natively when calculating products
long long mulUnderModulo(long long a, long long b) {
    int M = 1000000007;
    return ((a % M) * (b % M)) % M;
}

int main() {
    long long a = 1000000000000;
    long long b = 1000000000000;
    cout << "Safe multiplication: " << mulUnderModulo(a, b) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Safe multiplication: 516213076
 */
