#include <iostream>
using namespace std;

// Iterative approach using bit-shifts
long long power(long long x, int n) {
    long long res = 1;
    while(n > 0) {
        if(n & 1) res = (res * x); // Only multiply into core when odd bit is found
        x = (x * x);               // Constantly square x
        n = n >> 1;                // Shift power sequence down organically
    }
    return res;
}

int main() {
    cout << "2^10 = " << power(2, 10) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * 2^10 = 1024
 */
