/*Q34. A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two
3×3 matrices and compute their sum.*/
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], Sum[3][3];

    // Input first matrix
    cout << "Enter elements of first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Compute sum of matrices
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nSum of matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}