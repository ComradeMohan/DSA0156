#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    char *ptr = &ch;
    cout << "Value of ch: " << ch << endl;
    cout << "Value using pointer: " << *ptr << endl;
    return 0;
}
 