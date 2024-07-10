#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int **arr, rows, cols, i, j;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Allocate memory for the 2D array
    arr = new int*[rows];
    for (i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Input the array elements
    cout << "Enter the array elements:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Display the array elements
    cout << "The array elements are:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory
    for (i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}