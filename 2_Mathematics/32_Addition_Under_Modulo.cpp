#include <iostream>
using namespace std;

// Prevent overflow upon adding by utilizing congruent arithmetic
long long sumUnderModulo(long long a, long long b) {
    int M = 1000000007;
    return ((a % M) + (b % M)) % M;
}

int main() {
    long long a = 9223372036854775807; 
    long long b = 9223372036854775807;
    cout << "Safe sum: " << sumUnderModulo(a, b) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Safe sum: 582344006
 */
