# 2. TRAVERSING MULTIDIMENSIONAL ARRAYS

## 2D Array Traversal
- Method: Two nested loops (one for rows, one for columns)

Code:
```
for (int i = 0; i < 3; i++) {        // Rows
    for (int j = 0; j < 2; j++) {    // Columns
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```
Output pattern:
```
10 20
30 40
50 60
```

## 3D Array Traversal
- Method: Three nested loops

Code:
```
for (int i = 0; i < d1; i++) {
    for (int j = 0; j < d2; j++) {
        for (int k = 0; k < d3; k++) {
            cout << arr[i][j][k] << " ";
        }
    }
}
```
