# 7. C++ IMPLEMENTATION

C++ solution using binary-search-per-row counting (safe when rows are sorted):

```cpp
#include <bits/stdc++.h>
using namespace std;

int countLessOrEqual(const vector<vector<int>>& matrix, int x) {
    int R = matrix.size();
    int C = matrix[0].size();
    int count = 0;
    for (int i = 0; i < R; ++i) {
        // upper_bound returns iterator to first element > x
        int c = upper_bound(matrix[i].begin(), matrix[i].end(), x) - matrix[i].begin();
        count += c;
    }
    return count;
}

int findMedian(vector<vector<int>>& matrix) {
    int R = matrix.size();
    int C = matrix[0].size();
    int low = matrix[0][0];
    int high = matrix[R-1][C-1];
    int needed = (R * C + 1) / 2;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int cnt = countLessOrEqual(matrix, mid);
        if (cnt < needed) low = mid + 1;
        else high = mid;
    }
    return low;
}

int main() {
    vector<vector<int>> matrix = {
        {1,3,5},
        {2,4,6},
        {7,8,9}
    };
    cout << "Median: " << findMedian(matrix) << '\n';
    return 0;
}
```

Notes
- Uses upper_bound per row → O(R log C) for counting, overall O(log(max) × R log C).
- If columns are sorted too, counting can be implemented in O(R + C).
