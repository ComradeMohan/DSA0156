#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
        cout << "Rectangle created with width " << width << " and height " << height << "." << endl;
    }

    ~Rectangle() {
        cout << "Rectangle with width " << width << " and height " << height << " has been destroyed." << endl;
    }

    double calculateArea() {
        return width * height;
    }

    double calculatePerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
    cout << "Perimeter of the rectangle: " << rect.calculatePerimeter() << endl;
    return 0;
}