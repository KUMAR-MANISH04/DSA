#include <iostream>
using namespace std;

void printJaggedArray(int *arr[], int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int m = 3;
    int *arr[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[i + 1];
        for (int j = 0; j <= i; j++) arr[i][j] = i * 10 + j;
    }

    printJaggedArray(arr, m);

    for (int i = 0; i < m; i++) delete[] arr[i];
    return 0;
}
