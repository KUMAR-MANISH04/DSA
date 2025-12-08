#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m = 3, n = 2;
    vector<vector<int>> arr(m, vector<int>(n, 10));

    // Print
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
