#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Count Set Bits
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

int countSetBits(int n) {
    int count = 0;
    while(n > 0) {
        n = n & (n - 1); // Brian Kernighan
        count++;
    }
    return count;
}
int main() {
    cout << "Count for 40 is: " << countSetBits(40);
    return 0;
}
/* EXPECTED OUTPUT:
 * Count for 40 is: 2
 */
