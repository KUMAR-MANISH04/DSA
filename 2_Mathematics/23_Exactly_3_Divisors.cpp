#include <iostream>
#include <vector>
using namespace std;

// Helper function
bool isPrime(int N) {
    if (N <= 1) return false;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

// Exactly 3 divisors means it is the square of a prime number
int exactly3Divisors(int N) {
    int count = 0;
    // Iterate till sqrt of N
    for (int i = 2; i * i <= N; i++) {
        if (isPrime(i)) {
            count++; // Square of a prime has 3 divisors (1, prime, prime^2)
        }
    }
    return count;
}

int main() {
    int limit = 67; // Primes <= sqrt(67) are 2, 3, 5, 7. Their squares: 4, 9, 25, 49
    cout << "Numbers with exactly 3 divisors under " << limit << ": " << exactly3Divisors(limit) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Numbers with exactly 3 divisors under 67: 4
 */
