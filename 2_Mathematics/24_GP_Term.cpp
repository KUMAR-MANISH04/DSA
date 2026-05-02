#include <iostream>
#include <cmath>
using namespace std;

// Find Nth term of Geometric Progression 
// First term A, Second term B -> Base ratio R = B/A
double termOfGP(int A, int B, int N) {
    double r = (double)B / A;
    return A * pow(r, N - 1);
}

int main() {
    int A = 2, B = 4, N = 5;
    cout << "Term " << N << " of GP is: " << termOfGP(A, B, N) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Term 5 of GP is: 32
 */
