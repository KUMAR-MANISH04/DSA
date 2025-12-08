# 5. C++ IMPLEMENTATION

Efficient C++ Version (fixed-size example)

```cpp
#include <iostream>
using namespace std;

void searchEfficient(int arr[4][4], int R, int C, int x) {
    int i = 0;
    int j = C - 1;
    
    while (i < R && j >= 0) {
        if (arr[i][j] == x) {
            cout << "Found at (" << i << ", " << j << ")" << endl;
            return;
        } else if (arr[i][j] > x) {
            j--;  // Move left
        } else {
            i++;  // Move down
        }
    }
    cout << "Not found" << endl;
}

int main() {
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    
    searchEfficient(matrix, 4, 4, 29);
    searchEfficient(matrix, 4, 4, 24);
    return 0;
}
```
