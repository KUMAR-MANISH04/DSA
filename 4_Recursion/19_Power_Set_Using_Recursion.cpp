#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Power Set Using Recursion
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

void printSubsets(string s, string curr, int index) {
    if(index == s.length()) { cout << "'" << curr << "' "; return; }
    printSubsets(s, curr, index + 1); // Exclude
    printSubsets(s, curr + s[index], index + 1); // Include
}
int main() {
    printSubsets("AB", "", 0); return 0;
}
/* EXPECTED OUTPUT:
 * '' 'B' 'A' 'AB' 
 */
