#include <iostream>

using namespace std;

/*
 * Purpose: This code demonstrates how the same problem can be solved in different ways,
 * each resulting in a different time complexity.
 * Problem: Calculate the sum of the first 'N' natural numbers.
 */

// Method 1: Mathematical Formula
// Time Complexity: O(1) - The best approach. It finds the answer in a single mathematical step.
int findSum1(int n) {
    return n * (n + 1) / 2;
}

// Method 2: Single Loop
// Time Complexity: O(N) - Linear time. Steps increase proportionally with 'N'.
int findSum2(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

// Method 3: Nested Loops
// Time Complexity: O(N^2) - Quadratic time. The worst approach here. Steps increase with the square of 'N'.
int findSum3(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            sum++;
        }
    }
    return sum;
}

int main() {
    int n = 10;
    
    // All methods should yield the same result (55 for N=10), but their internal mechanics differ greatly.
    cout << "Sum of " << n << " numbers using Method 1: " << findSum1(n) << endl;
    cout << "Sum of " << n << " numbers using Method 2: " << findSum2(n) << endl;
    cout << "Sum of " << n << " numbers using Method 3: " << findSum3(n) << endl;
    
    /* 
     * EXPECTED OUTPUT:
     * Sum of 10 numbers using Method 1: 55
     * Sum of 10 numbers using Method 2: 55
     * Sum of 10 numbers using Method 3: 55
     */
    return 0;
}
