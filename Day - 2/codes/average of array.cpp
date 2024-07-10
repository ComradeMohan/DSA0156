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
    
    // Calculate the sum
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    
    // Calculate the average
    double avg = static_cast<double>(sum) / n;
    
    // Print the average
    cout << "Average of all elements: " << avg << endl;
    
    return 0;
}