#include <iostream>
#include <cmath>

class Triangle {
private:
    double a, b, c;
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double perimeter() {
        return a + b + c;
    }

    double area() {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void printAreaPerimeter() {
        std::cout << "Perimeter: " << perimeter() << std::endl;
        std::cout << "Area: " << area() << std::endl;
    }
};

int main() {
    Triangle triangle(3, 4, 5);
    triangle.printAreaPerimeter();
    return 0;
}
