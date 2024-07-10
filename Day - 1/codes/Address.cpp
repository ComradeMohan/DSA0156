#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Displaying address using arrays:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    return 0;
}
