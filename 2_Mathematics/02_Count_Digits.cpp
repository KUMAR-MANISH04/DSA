#include <iostream>
#include <cmath>
using namespace std;

// Method 1: Iterative Search
// O(d) Time, O(1) Space
int countDigitsIterative(long long n) {
    if (n == 0) return 1;
    int count = 0;
    while(n > 0) {
        n = n / 10; // Remove last digit
        count++;
    }
    return count;
}

// Method 2: Recursive Implementation
int countDigitsRecursive(long long n) {
    if(n == 0) return 0;
    return 1 + countDigitsRecursive(n / 10);
}

// Method 3: Logarithmic Approach (Best)
// O(1) Time, O(1) Space
int countDigitsLog(long long n) {
    if(n == 0) return 1;
    return floor(log10(n)) + 1; // Log scale captures digit count
}

int main() {
    long long number = 923847583;
    cout << "Iterative: " << countDigitsIterative(number) << endl;
    cout << "Logarithmic: " << countDigitsLog(number) << endl;
    return 0;
}

/* 
 * EXPECTED OUTPUT:
 * Iterative: 9
 * Logarithmic: 9
 */
