#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Print N to 1 Using Recursion
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

void printNto1(int n) {
    if(n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}
int main() {
    printNto1(5); return 0;
}
/* EXPECTED OUTPUT:
 * 5 4 3 2 1 
 */
