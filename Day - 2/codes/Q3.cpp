#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Point(const Point& p) {
        x = p.x;
        y = p.y;
        cout << "Copy constructor called" << endl;
    }
};

int main() {
    Point p1(10, 15);
    Point p2 = p1;

    cout << "P1: x = " << p1.x << ", y = " << p1.y << endl;
    cout << "P2: x = " << p2.x << ", y = " << p2.y << endl;

    return 0;
}