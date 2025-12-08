# 3. GLOBAL CONSTANTS APPROACH (For Problem Videos)

Concept
- Use global constant variables for dimensions
- Makes code readable but NOT truly generic
- Used in competitive programming for simplicity

Code Structure
```
const int R = 3;  // Global constant rows
const int C = 2;  // Global constant columns

void printMatrix(int arr[R][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```

Advantages
- More readable than hardcoded numbers
- `R` and `C` semantically represent rows & columns

Disadvantages
- Cannot change dimensions for different test cases
- Still not a general-purpose function
- Best suited for competitive programming scenarios
