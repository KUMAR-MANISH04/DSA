#include <iostream>
using namespace std;

void printMatrix(int **arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

void fillMatrix(int **arr, int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) arr[i][j] = (i + 1) * (j + 1);
}

int main() {
    int m = 2, n = 3;
    int **arr = new int*[m];
    for (int i = 0; i < m; i++) arr[i] = new int[n];

    fillMatrix(arr, m, n);
    printMatrix(arr, m, n);

    for (int i = 0; i < m; i++) delete[] arr[i];
    delete[] arr;
    return 0;
}
