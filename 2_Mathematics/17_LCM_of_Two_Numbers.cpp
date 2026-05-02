#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// LCM formula: (a * b) / GCD(a, b)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 4, b = 6;
    cout << "LCM of " << a << " and " << b << ": " << lcm(a, b) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * LCM of 4 and 6: 12
 */
