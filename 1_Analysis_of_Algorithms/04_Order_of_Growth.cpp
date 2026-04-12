#include <iostream>

using namespace std;

/*
 * Purpose: To visualize how different Orders of Growth execute relative to an input array `N`.
 * This demonstrates the physical manifestation of O(1), O(N), and O(N^2).
 */

// 1. Constant Growth O(1)
// We just retrieve the first item. The size of 'n' has strictly zero impact.
void constantGrowth(int arr[]) { 
    cout << arr[0] << endl; 
}

// 2. Linear Growth O(n)
// We visit each item once. If array size doubles, the time taken doubles.
void linearGrowth(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 3. Quadratic Growth O(n^2)
// We visit elements in combinations. Extreme growth in operations even for small 'n'.
void quadraticGrowth(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;
    
    cout << "O(1) output: ";
    constantGrowth(arr);
    
    cout << "O(N) output: ";
    linearGrowth(arr, n);
    
    cout << "O(N^2) output: ";
    quadraticGrowth(arr, n);
    
    /*
     * EXPECTED OUTPUT:
     * O(1) output: 1
     * O(N) output: 1 2 3 
     * O(N^2) output: (1, 1) (1, 2) (1, 3) (2, 1) (2, 2) (2, 3) (3, 1) (3, 2) (3, 3) 
     */
     
    return 0;
}
