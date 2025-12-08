#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>> &a) {
    int n = a.size();
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            swap(a[i][j], a[j][i]);
}

void reverseColumns(vector<vector<int>> &a) {
    int n = a.size();
    for (int j = 0; j < n; ++j) {
        int low = 0, high = n - 1;
        while (low < high) {
            swap(a[low][j], a[high][j]);
            low++; high--;
        }
    }
}

void rotateInPlace(vector<vector<int>> &a) {
    transpose(a);
    reverseColumns(a);
}

void printMatrix(const vector<vector<int>> &a) {
    for (auto &r : a) {
        for (auto v : r) cout << v << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "Original Matrix:" << endl;
    printMatrix(a);
    rotateInPlace(a);
    cout << "\nRotated 90° Anti-Clockwise:" << endl;
    printMatrix(a);
    return 0;
}
