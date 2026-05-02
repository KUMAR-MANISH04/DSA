#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Palindrome Check using Recursion
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

bool isPalin(string s, int start, int end) {
    if (start >= end) return true;
    return (s[start] == s[end]) && isPalin(s, start + 1, end - 1);
}
int main() {
    string str = "racecar";
    cout << "Is " << str << " palindrome? " << (isPalin(str, 0, str.length()-1) ? "Yes" : "No"); return 0;
}
/* EXPECTED OUTPUT:
 * Is racecar palindrome? Yes
 */
