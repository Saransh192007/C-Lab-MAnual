/*Q35. A data analytics tool flips rows and columns for better visualization. Implement a solution to
store a 3×3 matrix and compute its transpose*/
#include <iostream>
using namespace std;

int main() {
    int A[3][3], T[3][3];

    // Input matrix
    cout << "Enter elements of 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    // Compute transpose
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Display transpose
    cout << "\nTranspose of matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}