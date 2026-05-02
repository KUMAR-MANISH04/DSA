#include <iostream>
using namespace std;

// Check if original number equals reversed number
bool isPalindrome(int n) {
    if (n < 0) return false; // Negatives aren't palindromes
    int original = n;
    int rev = 0;
    
    while(original > 0) {
        int lastDigit = original % 10;
        rev = rev * 10 + lastDigit; // Shift left and add digit
        original /= 10;
    }
    return (rev == n);
}

int main() {
    int num = 78987;
    cout << num << " is Palindrome? : " << (isPalindrome(num) ? "Yes" : "No") << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * 78987 is Palindrome? : Yes
 */
