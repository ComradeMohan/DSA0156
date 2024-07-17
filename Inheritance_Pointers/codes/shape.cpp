#include <iostream>
using namespace std;

class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double getArea() {
        return height * width;
    }
    double getPerimeter() {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double getArea() {
        return 0.5 * height * width;
    }
    double getPerimeter() {
        return 3 * width;
    }
};

int main() {
    Rectangle rect(10, 20);
    Triangle tri(10, 20);
    
    cout << "Rectangle Area: " << rect.getArea() << endl;
    cout << "Rectangle Perimeter: " << rect.getPerimeter() << endl;
    
    cout << "Triangle Area: " << tri.getArea() << endl;
    cout << "Triangle Perimeter: " << tri.getPerimeter() << endl;
    
    return 0;
}
