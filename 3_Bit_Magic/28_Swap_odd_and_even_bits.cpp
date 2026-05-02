#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Swap odd and even bits
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

int findOdd(int arr[], int n) {
    int res = 0;
    for(int i=0; i<n; i++) res ^= arr[i];
    return res;
}
int main() {
    int arr[] = {4,3,4,4,4,5,5};
    cout << "Odd occurring is: " << findOdd(arr, 7); return 0;
}
/* EXPECTED OUTPUT:
 * Odd occurring is: 3
 */
