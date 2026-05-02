#include <iostream>
#include <vector>
using namespace std;

// Prints all primes up to n efficiently
void sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    
    // Standard sieve mapping multiples to false
    for(int i = 2; i * i <= n; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for(int i = 2; i <= n; i++) {
        if(isPrime[i]) cout << i << " ";
    }
}

int main() {
    int limit = 20;
    cout << "Primes up to " << limit << ": ";
    sieve(limit);
    cout << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Primes up to 20: 2 3 5 7 11 13 17 19 
 */
