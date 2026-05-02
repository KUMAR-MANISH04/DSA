#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: First Set Bit
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

int firstSetBit(int n) {
    if (n == 0) return 0;
    return log2(n & -n) + 1;
}
int main() {
    cout << "First set bit of 18 is: " << firstSetBit(18); return 0;
}
/* EXPECTED OUTPUT:
 * First set bit of 18 is: 2
 */
