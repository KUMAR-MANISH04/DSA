#include <iostream>
#include <vector>
using namespace std;

void printMatrix(const vector<vector<int>> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

void fillMatrix(vector<vector<int>> &arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        vector<int> row;
        for (int j = 0; j < n; j++) row.push_back((i + 1) * (j + 1));
        arr.push_back(row);
    }
}

int main() {
    int m = 2, n = 3;
    vector<vector<int>> arr;
    fillMatrix(arr, m, n);
    printMatrix(arr);
    return 0;
}
