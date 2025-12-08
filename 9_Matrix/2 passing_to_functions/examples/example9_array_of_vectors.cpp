#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int> arr[], int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < arr[i].size(); j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int m = 3;
    vector<int> arr[m];
    arr[0].push_back(1);
    arr[1].push_back(2); arr[1].push_back(22);
    arr[2].push_back(3); arr[2].push_back(33); arr[2].push_back(333);

    printArray(arr, m);
    return 0;
}
