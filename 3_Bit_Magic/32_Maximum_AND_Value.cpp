#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Maximum AND Value
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

int maxAND(int arr[], int n) {
    int res = 0;
    for (int bit = 31; bit >= 0; bit--) {
        int count = 0;
        int pattern = res | (1 << bit);
        for (int i = 0; i < n; i++) {
            if ((pattern & arr[i]) == pattern) count++;
        }
        if (count >= 2) res = pattern;
    }
    return res;
}
int main() {
    int arr[] = {4, 8, 12, 16};
    cout << "Max AND: " << maxAND(arr, 4); return 0;
}
/* EXPECTED OUTPUT:
 * Max AND: 8
 */
