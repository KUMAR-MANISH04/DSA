#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Finds integer roots of quadratic equation
vector<int> quadraticRoots(int a, int b, int c) {
    int d = b * b - 4 * a * c; // Discriminant
    vector<int> roots;
    
    if (d < 0) {
         return roots; // Imaginary roots, return empty
    } 
    
    double sqrt_v = sqrt(abs(d)); 
    int root1 = floor((-b + sqrt_v) / (2.0 * a));
    int root2 = floor((-b - sqrt_v) / (2.0 * a));
    
    // Sort descending
    if(root1 > root2){
        roots.push_back(root1);
        roots.push_back(root2);
    } else {
        roots.push_back(root2);
        roots.push_back(root1);
    }
    return roots;
}

int main() {
    vector<int> res = quadraticRoots(1, -2, 1); // x^2 - 2x + 1
    if(res.size() > 0) cout << "Roots: " << res[0] << ", " << res[1] << endl;
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * Roots: 1, 1
 */
