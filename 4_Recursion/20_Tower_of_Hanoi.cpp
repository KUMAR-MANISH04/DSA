#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * ============================================================================
 * Topic: Tower of Hanoi
 * Description: Dedicated Implementation exclusively isolating this recursive flow.
 * ============================================================================
 */

void TOH(int n, char A, char B, char C) {
    if(n == 1) { cout << "Move 1 from " << A << " to " << C << "\n"; return; }
    TOH(n-1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << "\n";
    TOH(n-1, B, A, C);
}
int main() {
    TOH(3, 'A', 'B', 'C'); return 0;
}
/* EXPECTED OUTPUT:
 * Move 1 from A to C
 * Move 2 from A to B
 * Move 1 from C to B
 * Move 3 from A to C
 * Move 1 from B to A
 * Move 2 from B to C
 * Move 1 from A to C
 */
