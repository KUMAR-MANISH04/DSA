#include <iostream>
using namespace std;

int main() {
    int m = 3, n = 2;
    // Note: VLA support is compiler dependent; this may not compile with all C++ compilers
    int arr[3][2]; // use constants here for portability

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
