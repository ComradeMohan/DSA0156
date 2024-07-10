#include <iostream>
using namespace std;
int main() {
    int matrix[3][3];
    int i, j, primarySum = 0, secondarySum = 0;
    cout << "Enter the elements of the matrix:\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    for (i = 0; i < 3; i++) {
        primarySum += matrix[i][i];
    }
    for (i = 0; i < 3; 	i++) {
        secondarySum += matrix[i][2 - i];
    }
    cout << "The sum of the primary diagonal is: " << primarySum << endl;
    cout << "The sum of the secondary diagonal is: " << secondarySum << endl;

    return 0;
}