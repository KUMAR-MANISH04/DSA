# 7. C++ IMPLEMENTATION

Efficient in-place implementation (vector-based):

```cpp
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
    for (auto &row : a) {
        for (auto v : row) cout << v << " ";
        cout << endl;
    }
}

int main(){
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    cout << "Original:\n"; printMatrix(a);
    rotateInPlace(a);
    cout << "\nRotated 90° Anti-Clockwise:\n"; printMatrix(a);
    return 0;
}
```

Notes
- Works for any n×n matrix
- Time: O(n²), Extra space: O(1)
