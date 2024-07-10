#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    Shape(double r) {
        cout << "Area of circle: " << 3.14 * r * r << endl;
    }

    Shape(double l, double w) {
        cout << "Area of rectangle: " << l * w << endl;
    }

    Shape(double a, double b, double c) {
        double s = (a + b + c) / 2;
        cout << "Area of triangle: " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
    }
};

int main() {
    Shape c(3);
    Shape r(1,2);
    Shape t(3,4,5);

    return 0;
}