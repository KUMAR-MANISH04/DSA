#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Two Odd Occurring
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

void twoOdd(int arr[], int n) {
    int xor2 = 0;
    for(int i=0; i<n; i++) xor2 ^= arr[i];
    int sn = xor2 & ~(xor2 - 1);
    int res1 = 0, res2 = 0;
    for(int i=0; i<n; i++) {
        if((arr[i] & sn) != 0) res1 ^= arr[i];
        else res2 ^= arr[i];
    }
    cout << res1 << " " << res2;
}
int main() {
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6};
    twoOdd(arr, 8); return 0;
}
/* EXPECTED OUTPUT:
 * 5 6
 */
