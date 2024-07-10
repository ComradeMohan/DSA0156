#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n+1];
    cout << "Enter the array elements:\n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int pos;
    cout << "Enter the position to insert (0 to " << n << "): ";
    cin >> pos;
    int element;
    cout << "Enter the element to insert: ";
    cin >> element;
    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    cout << "Modified array: ";
    for(int i=0; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}