#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Rope Cutting Problem
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

int maxPieces(int n, int a, int b, int c) {
    if(n == 0) return 0;
    if(n < 0) return -1;
    int res = max(maxPieces(n-a, a, b, c), max(maxPieces(n-b, a, b, c), maxPieces(n-c, a, b, c)));
    if(res == -1) return -1;
    return res + 1;
}
int main() {
    cout << "Max pieces for rope 5 (2, 5, 1): " << maxPieces(5, 2, 5, 1); return 0;
}
/* EXPECTED OUTPUT:
 * Max pieces for rope 5 (2, 5, 1): 5
 */
