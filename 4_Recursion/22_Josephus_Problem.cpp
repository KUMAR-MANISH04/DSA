#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Josephus Problem
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

int jos(int n, int k) {
    if(n == 1) return 0;
    return (jos(n - 1, k) + k) % n;
}
int main() {
    cout << "Josephus(5, 3) survivor index: " << jos(5, 3); return 0;
}
/* EXPECTED OUTPUT:
 * Josephus(5, 3) survivor index: 3
 */
