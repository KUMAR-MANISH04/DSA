#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Fibonacci Using Recursion
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    cout << "Fibonacci(6) is: " << fib(6); return 0;
}
/* EXPECTED OUTPUT:
 * Fibonacci(6) is: 8
 */
