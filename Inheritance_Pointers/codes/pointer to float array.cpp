#include <iostream>
using namespace std;

int main() {
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *ptr = arr; // Points to the first element of the array

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
