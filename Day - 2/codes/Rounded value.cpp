#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << "Rounded down (floor): " << floor(num) << endl;
    cout << "Rounded up (ceil): " << ceil(num) << endl;

    return 0;
}
