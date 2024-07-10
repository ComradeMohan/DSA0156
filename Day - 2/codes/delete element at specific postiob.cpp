#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:\n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int pos;
    cout << "Enter the position to delete (0 to " << n-1 << "): ";
    cin >> pos;
    for(int i=pos; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    cout << "Modified array: ";
    for(int i=0; i<n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}