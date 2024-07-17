#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Value using pointer: " << *ptr << endl;
    return 0;
}
