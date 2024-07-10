#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    cout << "Enter the size of the second array: ";
    cin >> n2;
    
    int arr1[n1], arr2[n2];
    int merged[n1+n2];
    
    // Input elements for the first array
    cout << "Enter the elements of the first array:\n";
    for(int i=0; i<n1; i++) {
        cin >> arr1[i];
    }
    
    // Input elements for the second array
    cout << "Enter the elements of the second array:\n";
    for(int i=0; i<n2; i++) {
        cin >> arr2[i];
    }
    
    // Merge the two arrays
    int i=0, j=0, k=0;
    while(i<n1 && j<n2) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    // Add remaining elements from the first array
    while(i<n1) {
        merged[k++] = arr1[i++];
    }
    
    // Add remaining elements from the second array
    while(j<n2) {
        merged[k++] = arr2[j++];
    }
    
    // Print the merged array
    cout << "Merged array: ";
    for(int i=0; i<n1+n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
    
    return 0;
}