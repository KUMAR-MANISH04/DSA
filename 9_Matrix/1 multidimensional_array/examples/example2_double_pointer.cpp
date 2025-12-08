#include <iostream>
using namespace std;

int main() {
    int m = 3, n = 2;
    int **arr = new int*[m];

    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    // Assign values
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 10;
        }
    }

    // Print
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Cleanup
    for (int i = 0; i < m; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}
