#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Digital Root
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

int sumOfDigits(int n) {
    if(n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    cout << "Sum of digits of 253 is: " << sumOfDigits(253); return 0;
}
/* EXPECTED OUTPUT:
 * Sum of digits of 253 is: 10
 */
