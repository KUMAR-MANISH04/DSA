#include <iostream>
using namespace std;

int main() {
    int m = 3;
    int **arr = new int*[m];

    // Different sizes for each row
    for (int i = 0; i < m; i++) {
        arr[i] = new int[i + 1];  // Row i has (i+1) elements
    }

    // Fill and print
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i + 1; j++) {
            arr[i][j] = 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Cleanup
    for (int i = 0; i < m; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}
