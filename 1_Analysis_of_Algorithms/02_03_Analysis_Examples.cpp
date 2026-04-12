#include <iostream>

using namespace std;

/*
 * Purpose: To show how we analyze arrays and nested loops asymptotically.
 * We ignore specific constant multipliers and lower-order operations.
 */

// Example 1: Array Traversal
// T(n) = An + B -> Asymptotically, constants A and B disappear, leaving us with O(n).
int sumArray(int arr[], int n) {
    int sum = 0; 
    for (int i = 0; i < n; i++) { 
        sum += arr[i]; 
    }
    return sum; 
}

// Example 2: Nested Loops
// Exact operations might vary, but since both loops run up to 'N', 
// the dominant operation runs N * N times.
// Asymptotic Complexity is solely O(N^2).
void printPairs(int n) {
    for (int i = 0; i < n; i++) {         
        for (int j = 0; j < n; j++) {     
            cout << i << ", " << j << "\n"; 
        }
    }
}

int main() {
    // Initializing a default array for testing
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Test the linear traversal O(N)
    cout << "Sum is: " << sumArray(arr, n) << endl;
    
    // Test the quadratic nested loops O(N^2)
    cout << "\nPairs for N=3:\n";
    printPairs(3);
    
    /* 
     * EXPECTED OUTPUT:
     * Sum is: 150
     * 
     * Pairs for N=3:
     * 0, 0
     * 0, 1
     * 0, 2
     * 1, 0
     * 1, 1
     * 1, 2
     * 2, 0
     * 2, 1
     * 2, 2
     */
    return 0;
}
