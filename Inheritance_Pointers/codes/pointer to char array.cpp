#include <iostream>
using namespace std;

int main() {
    char arr[6] = "Hello";
    char *ptr = arr; // Points to the first character of the array

    cout << "Array elements: ";
    for (int i = 0; i < 6; i++) {
        cout << *(ptr + i);
    }
    cout << endl;
    return 0;
}
 