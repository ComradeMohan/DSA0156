#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Displaying addresses using array indexing:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    return 0;
}