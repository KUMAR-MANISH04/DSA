#include <bits/stdc++.h>
using namespace std;

vector<int> spiralTraversal(vector<vector<int>>& matrix) {
    int R = matrix.size();
    int C = matrix[0].size();
    int top = 0, bottom = R - 1;
    int left = 0, right = C - 1;
    vector<int> result;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j)
            result.push_back(matrix[top][j]);
        ++top;

        for (int i = top; i <= bottom; ++i)
            result.push_back(matrix[i][right]);
        --right;

        if (top <= bottom) {
            for (int j = right; j >= left; --j)
                result.push_back(matrix[bottom][j]);
            --bottom;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                result.push_back(matrix[i][left]);
            ++left;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    cout << "Original Matrix:\n";
    for (auto &row : matrix) {
        for (auto v : row) cout << v << ' ';
        cout << '\n';
    }

    cout << "Spiral Traversal:\n";
    auto res = spiralTraversal(matrix);
    for (auto v : res) cout << v << ' ';
    cout << '\n';
    return 0;
}
