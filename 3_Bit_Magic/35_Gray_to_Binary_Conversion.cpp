#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Gray to Binary Conversion
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

int grayToBinary(int n) {
    int res = n;
    while(n > 0) {
        n >>= 1;
        res ^= n;
    }
    return res;
}
int main() {
    cout << "Binary of Gray 4 is: " << grayToBinary(4); return 0;
}
/* EXPECTED OUTPUT:
 * Binary of Gray 4 is: 7
 */
