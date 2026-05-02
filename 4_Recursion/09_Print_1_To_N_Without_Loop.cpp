#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Print 1 To N Without Loop
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

void print1toN(int n) {
    if(n == 0) return;
    print1toN(n - 1);
    cout << n << " ";
}
int main() {
    print1toN(5); return 0;
}
/* EXPECTED OUTPUT:
 * 1 2 3 4 5 
 */
