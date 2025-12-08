#include <iostream>
#include <vector>
using namespace std;

void boundaryTraversal(const vector<vector<int>> &matrix) {
    int R = matrix.size();
    if (R == 0) return;
    int C = matrix[0].size();

    if (R == 1) {
        for (int j = 0; j < C; j++) cout << matrix[0][j] << " ";
        cout << endl; return;
    }
    if (C == 1) {
        for (int i = 0; i < R; i++) cout << matrix[i][0] << " ";
        cout << endl; return;
    }

    // Step 1
    for (int j = 0; j < C; j++) cout << matrix[0][j] << " ";
    // Step 2
    for (int i = 1; i < R; i++) cout << matrix[i][C-1] << " ";
    // Step 3
    for (int j = C-2; j >= 0; j--) cout << matrix[R-1][j] << " ";
    // Step 4
    for (int i = R-2; i >= 1; i--) cout << matrix[i][0] << " ";

    cout << endl;
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    cout << "Boundary Traversal: ";
    boundaryTraversal(matrix);
    return 0;
}
