#include <iostream>

using namespace std;

/*
 * Purpose: Demonstrates the logic behind O (Upper Bound), Omega (Lower Bound), 
 * and Theta (Exact Bound). We use basic array checking to illustrate.
 */

// Function: Find if the array contains any zeroes.
// Analysis:
// Worst-Case Upper Bound: O(n)   -> Checked 0 to n elements, no zero found or zero is at the end.
// Best-Case Lower Bound: Omega(1)-> The first element is zero, we exit immediately.
// Because O(n) != Omega(1), there is NO single overall Theta bound for this general algorithm!
bool containsZero(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            return true; // Best case occurs here!
        }
    }
    return false; // Worst case culminates here!
}

// Function: Modify every element in an array by multiplying by 2.
// Analysis:
// Worst-Case Upper Bound: O(n)
// Best-Case Lower Bound: Omega(n)
// Since Upper == Lower, this function is strictly Theta(n). It *must* do 'n' operations no matter what.
void doubleElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int arr[] = {1, 2, 3, 0, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // Testing containsZero
    cout << "Contains zero? " << (containsZero(arr, n) ? "Yes" : "No") << endl;
    
    // Testing doubleElements
    doubleElements(arr, n);
    cout << "First Element Doubled: " << arr[0] << endl;

    /*
     * EXPECTED OUTPUT:
     * Contains zero? Yes
     * First Element Doubled: 2
     */
     
    return 0;
}
