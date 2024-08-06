#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area() const = 0;
};
class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};
int main() {
    Circle c(5);
    Square s(4);
    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Square: " << s.area() << endl;

    return 0;
}
