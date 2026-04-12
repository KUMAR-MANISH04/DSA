#include <iostream>

using namespace std;

/*
 * Purpose: Visualizing the complexities of loops, multiple loops, 
 * recursive structures, and space allocation!
 */

// --- 1. COMMON LOOPS ---
// Logarithmic Loop - O(log N)
// We shrink the boundary by half every step.
void logTimeLoop(int n) {
    int iterations = 0;
    for (int i = 1; i < n; i = i * 2) {
        iterations++;
    }
    cout << "N = " << n << ", Logarithmic Loops iterated " << iterations << " times.\n";
}

// --- 2. MULTIPLE LOOPS ---
// Consecutive VS Nested
// O(N) + O(N^2) = O(N^2) overall scaling.
void multipleLoops(int n) {
    int count1 = 0, count2 = 0;
    // O(N) Part
    for (int i = 0; i < n; i++) { count1++; } 
    
    // O(N^2) Part
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count2++;
        }
    }
    cout << "Consecutive O(N) executed " << count1 << " ops.\n";
    cout << "Nested O(N^2) executed " << count2 << " ops.\n";
}

// --- 3. RECURSION ---
// Recursive functions implicitly take Auxiliary Space bounded by the call stack depth!
// Recurrence: T(N) = T(N-1) + O(1) => Time: O(N), Space: O(N)
void recursiveFunction(int n) {
    if (n == 0) return;
    // Pushing state to the stack takes invisible memory!
    recursiveFunction(n - 1); 
}

int main() {
    cout << "--- Logarithmic Demonstrations ---\n";
    logTimeLoop(16);    // Expected: ~4
    logTimeLoop(1024);  // Expected: ~10
    
    cout << "\n--- Multiple Loop Demonstrations ---\n";
    multipleLoops(10); // Expected: 10 vs 100
    
    cout << "\n--- Recursion Called ---\n";
    recursiveFunction(5);
    cout << "Recursive Function finished seamlessly. Depth was 5 frames.\n";

    /*
     * EXPECTED OUTPUT:
     * --- Logarithmic Demonstrations ---
     * N = 16, Logarithmic Loops iterated 4 times.
     * N = 1024, Logarithmic Loops iterated 10 times.
     *
     * --- Multiple Loop Demonstrations ---
     * Consecutive O(N) executed 10 ops.
     * Nested O(N^2) executed 100 ops.
     * 
     * --- Recursion Called ---
     * Recursive Function finished seamlessly. Depth was 5 frames.
     */
     
    return 0;
}
