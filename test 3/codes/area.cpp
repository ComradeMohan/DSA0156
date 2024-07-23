#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

// Abstract class
class Shape {
public:
    virtual double getArea() = 0;  // Pure virtual function
};

// Derived class: Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) {
        side = s;
    }

    double getArea() {
        return side * side;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getArea() {
        return PI * radius * radius;
    }
};

int main() {
    double circleRadius, squareSide;
    Circle circle(7);
    Square square(5);

    cout << "Area of Square: " << square.getArea() << endl;
    cout << "Area of Circle: " << circle.getArea() << endl;

    return 0;
}
