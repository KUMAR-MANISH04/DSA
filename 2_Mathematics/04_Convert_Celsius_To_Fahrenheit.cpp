#include <iostream>
using namespace std;

// Formula: F = C * (9.0/5.0) + 32
double cToF(int C) {
    return (C * 9.0 / 5.0) + 32; // Use .0 to prevent integer division
}

int main() {
    int celsius = 50;
    cout << celsius << " Celsius = " << cToF(celsius) << " Fahrenheit" << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * 50 Celsius = 122 Fahrenheit
 */
