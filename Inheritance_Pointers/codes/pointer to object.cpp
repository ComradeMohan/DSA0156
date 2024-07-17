#include <iostream>
using namespace std;

class Example {
public:
    int a;
    float b;

    Example(int x, float y) : a(x), b(y) {}
    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    Example obj(10, 20.5);
    Example *ptr = &obj;

    ptr->display(); // Using the pointer to call the display function
    return 0;
}
