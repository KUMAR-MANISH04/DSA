#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Bit Difference
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

int countBitsFlip(int a, int b) {
    int diff = a ^ b;
    int count = 0;
    while(diff) {
        diff &= (diff - 1);
        count++;
    }
    return count;
}
int main() {
    cout << "Bits to flip from 10 to 20: " << countBitsFlip(10, 20); return 0;
}
/* EXPECTED OUTPUT:
 * Bits to flip from 10 to 20: 4
 */
