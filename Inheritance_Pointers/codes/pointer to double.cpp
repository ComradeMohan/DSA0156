#include <iostream>
using namespace std;

int main() {
    double z = 30.123;
    double *ptr = &z;
    cout << "Value of z: " << z << endl;
    cout << "Value using pointer: " << *ptr << endl;
    return 0;
}
