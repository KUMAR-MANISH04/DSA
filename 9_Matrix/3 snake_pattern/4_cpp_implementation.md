# 4. C++ IMPLEMENTATION

Generic C++ Version (works for any rectangular matrix)

```cpp
#include <iostream>
#include <vector>
using namespace std;

void printSnakePattern(const vector<vector<int>> &matrix) {
    int R = matrix.size();
    if (R == 0) return;
    int C = matrix[0].size();

    for (int i = 0; i < R; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < C; j++) cout << matrix[i][j] << " ";
        } else {
            for (int j = C - 1; j >= 0; j--) cout << matrix[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    cout << "Snake Pattern Output:" << endl;
    printSnakePattern(matrix);
    return 0;
}
```

Fixed-size C-style function (useful for teaching):
```cpp
void printSnakePatternFixed(int arr[][4], int R, int C) { /* ... */ }
```

Notes
- Use the generic vector-based version for safety and variable dimensions.
- Time: Θ(R×C), Space: O(1) extra.
