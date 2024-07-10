#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1)
            return i + 1;
    }
    return n + 1;
}

int main() {
    int arr[] = {1, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The smallest missing element is: " << findMissing(arr, n) << endl;
    return 0;
}