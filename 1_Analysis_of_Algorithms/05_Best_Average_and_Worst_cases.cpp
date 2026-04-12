#include <iostream>

using namespace std;

/*
 * Purpose: Examine best and worst case execution times based on the nature of the input 
 * rather than just the size of the input. We use Linear Search as an example.
 */

// Linear search: Returns the index of the target if found, otherwise returns -1
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        // We evaluate 'target' at each iteration.
        if(arr[i] == target) {
            return i; // Item found, function returns instantly!
        }
    }
    return -1; // Item not found, we had to check every single element.
}

int main() {
    // We have an Array of size N=8
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Best Case Scenario: Target is the very first element (index 0).
    // Execution will only iterate 1 time, making it O(1) time complexity.
    int bestCaseTarget = 10;
    cout << "Best Case Search Index: " << linearSearch(arr, n, bestCaseTarget) << endl;

    // Worst Case Scenario: Target is at the very end OR doesn't exist.
    // Execution will iterate through all N elements, making it O(N) time complexity.
    int worstCaseTarget = 99; // 99 Doesn't exist in our array
    cout << "Worst Case Search Index: " << linearSearch(arr, n, worstCaseTarget) << endl;
    
    /* 
     * EXPECTED OUTPUT:
     * Best Case Search Index: 0
     * Worst Case Search Index: -1
     */
     
    return 0;
}
