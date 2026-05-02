#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Possible Words From Phone Digits
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

void executeRecursion(int n) {
    if(n == 0) return;
    cout << "Recursive Call " << n << "\n";
    executeRecursion(n - 1);
}
int main() {
    executeRecursion(3); return 0;
}
/* EXPECTED OUTPUT:
 * Recursive Call 3
 * Recursive Call 2
 * Recursive Call 1
 */
