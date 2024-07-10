#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input array elements
    cout << "Enter the array elements:\n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int value;
    cout << "Enter the value to search for: ";
    cin >> value;
    
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == value) {
            count++;
        }
    }
    
    // Print the count
    cout << "Number of occurrences of " << value << ": " << count << endl;
    
    return 0;
}