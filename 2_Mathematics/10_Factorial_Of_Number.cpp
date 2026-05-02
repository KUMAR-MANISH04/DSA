#include <iostream>
using namespace std;

// Factorial logic wrapped for competitive programming limits
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n = 6;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Factorial of 6 is: 720
 */
