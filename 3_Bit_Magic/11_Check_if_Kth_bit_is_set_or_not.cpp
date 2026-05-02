#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Check if Kth bit is set or not
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

void checkKthBit(int n, int k) {
    if((n >> k) & 1) cout << "Set";
    else cout << "Not Set";
}
int main() {
    checkKthBit(5, 0); return 0;
}
/* EXPECTED OUTPUT:
 * Set
 */
