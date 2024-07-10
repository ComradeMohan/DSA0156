#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    // Square root
    cout << "Square Root Input: ";
    cin >> num;
    cout << "Square Root: " << sqrt(num) << endl;

    // Cube root
    cout << "Cube root Input: ";
    cin >> num;
    cout << "Cube root: " << cbrt(num) << endl;

    return 0;
}