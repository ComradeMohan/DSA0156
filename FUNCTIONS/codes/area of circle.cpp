#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Area of the circle with radius " << r << " is " << calculateArea(r) << endl;
    return 0;
}