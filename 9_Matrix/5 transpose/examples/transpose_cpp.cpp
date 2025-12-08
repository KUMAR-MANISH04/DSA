#include <iostream>
#include <vector>
using namespace std;

void transposeInPlace(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
}

void printMatrix(const vector<vector<int>> &matrix) {
    for (const auto &row : matrix) {
        for (auto v : row) cout << v << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    transposeInPlace(matrix);

    cout << "\nTransposed Matrix:" << endl;
    printMatrix(matrix);
    return 0;
}
