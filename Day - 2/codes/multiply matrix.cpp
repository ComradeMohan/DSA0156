#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], product[3][3];
    int i, j, k;

    cout << "Enter the elements of the first matrix:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Multiply the two matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (k = 0; k < 3; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "The product of the two matrices is:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}