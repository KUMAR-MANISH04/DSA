#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Power of Two
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

bool isPowerOfTwo(int n) {
    if (n == 0) return false;
    return ((n & (n - 1)) == 0);
}
int main() {
    cout << "Is 16 power of two? " << (isPowerOfTwo(16) ? "Yes" : "No"); return 0;
}
/* EXPECTED OUTPUT:
 * Is 16 power of two? Yes
 */
