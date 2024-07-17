#include <iostream>
using namespace std;

int main() {
    float y = 20.5;
    float *ptr = &y;
    cout << "Value of y: " << y << endl;
    cout << "Value using pointer: " << *ptr << endl;
    return 0;
}
