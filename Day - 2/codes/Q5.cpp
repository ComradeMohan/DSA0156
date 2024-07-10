#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    char* ptr = &str[0];

    cout << "Input: " << str << endl;
    cout << "Output: ";

    for (int i = str.length() - 1; i >= 0; i--) {
        cout << *(ptr + i);
    }
    cout << endl;

    return 0;
}