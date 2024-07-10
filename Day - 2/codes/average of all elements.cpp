#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, i;
    float average;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    average = static_cast<float>(sum) / size;

    cout << "The average of all elements in the array is: " << average << endl;

    return 0;
}