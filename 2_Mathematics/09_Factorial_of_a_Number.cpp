#include <iostream>
using namespace std;

// Iteratively calculates N!
uint64_t factorial(int n) {
    uint64_t res = 1;
    // Multiply sequence up to n
    for(int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Factorial of 5 is: 120
 */
