#include <iostream>
using namespace std;

// Compute x^n natively
long long power(int x, int n) {
    if (n == 0) return 1;
    long long temp = power(x, n / 2);
    temp = temp * temp; // Multiply paired halves
    
    // Multiply distinct 1 trailing degree if odd
    if (n % 2 == 0) return temp;
    else return temp * x;
}

int main() {
    cout << "3^4 = " << power(3, 4) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * 3^4 = 81
 */
