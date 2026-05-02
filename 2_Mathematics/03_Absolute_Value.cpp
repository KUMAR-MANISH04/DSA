#include <iostream>
using namespace std;

// Returns absolute value of I
int absoluteValue(int I) {
    if (I < 0) {
        return I * -1; // Invert negative to positive
    }
    return I;
}

int main() {
    int testCases[] = {32, -18, 0};
    for(int num : testCases) {
        cout << "Absolute value of " << num << " is " << absoluteValue(num) << endl;
    }
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Absolute value of 32 is 32
 * Absolute value of -18 is 18
 * Absolute value of 0 is 0
 */
