#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}