#include <iostream>
#include <set>
using namespace std;

// Print all divisors in sorted order
void printDivisors(int n) {
    set<int> divisors;
    // Loop only till sqrt(n)
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.insert(i); // Add divisor
            divisors.insert(n / i); // Add complement pair divisor
        }
    }
    for(int d : divisors) cout << d << " ";
}

int main() {
    int n = 15;
    cout << "Divisors of " << n << ": ";
    printDivisors(n);
    cout << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Divisors of 15: 1 3 5 15 
 */
