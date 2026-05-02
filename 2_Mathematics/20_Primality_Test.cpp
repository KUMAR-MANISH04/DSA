#include <iostream>
using namespace std;

// Wrapper for checking if a number is prime
bool isPrime(int N) {
    if (N <= 1) return false;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    int N = 11;
    cout << "Is " << N << " Prime: " << (isPrime(N) ? "Yes" : "No") << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Is 11 Prime: Yes
 */
