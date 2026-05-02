#include <iostream>
#include <cmath>
using namespace std;

// Using log properties: log(a*b) = log(a) + log(b)
int digitsInFactorial(int n) {
    if (n < 0) return 0;
    if (n <= 1) return 1;
    double digits = 0;
    // Sum of logs prevents calculating massive factorials
    for(int i = 2; i <= n; i++) {
        digits += log10(i);
    }
    return floor(digits) + 1;
}

int main() {
    int num = 120;
    cout << "Digits in " << num << "! : " << digitsInFactorial(num) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Digits in 120! : 199
 */
