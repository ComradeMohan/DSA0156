#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    int i, j;

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

    // Add the two matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "The sum of the two matrices is:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}