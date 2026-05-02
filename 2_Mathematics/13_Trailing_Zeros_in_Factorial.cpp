#include <iostream>
using namespace std;

// Count trailing zeros by counting occurrences of 5 in prime factors
int countTrailingZeros(int n) {
    int res = 0;
    // Powers of 5 (5, 25, 125...) contribute extra 5s
    for(int i = 5; i <= n; i = i * 5) {
        res += (n / i);
    }
    return res;
}

int main() {
    int num = 251;
    cout << "Trailing zeros in " << num << "! : " << countTrailingZeros(num) << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Trailing zeros in 251! : 62
 */
