#include <iostream>
#include <cmath>
using namespace std;

/*
 * ============================================================================
 * Topic: Power Set using Bitwise
 * Goal: Pure Bitwise Implementation correctly structurally mapped
 * ============================================================================
 */

void printPowerSet(string s) {
    int n = s.length();
    int powSize = 1 << n; // 2^n
    for(int i = 0; i < powSize; i++) {
        for(int j = 0; j < n; j++) {
            if((i & (1 << j)) != 0) cout << s[j];
        }
        cout << " ";
    }
}
int main() {
    printPowerSet("abc"); return 0;
}
/* EXPECTED OUTPUT:
 *  a b ab c ac bc abc 
 */
