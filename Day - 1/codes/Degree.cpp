#include <iostream>
using namespace std;

class Degree {
public:
    virtual void getDegree() {
        cout << "I got a Degree" << endl;
    }
};

class Undergraduate : public Degree {
public:
    void getDegree() override {
        cout << "I am an Undergraduate" << endl;
    }
};

class Postgraduate : public Degree {
public:
    void getDegree() override {
        cout << "I am a Postgraduate" << endl;
    }
};

int main() {
    Degree degree;
    Undergraduate ug;
    Postgraduate pg;

    degree.getDegree();
    ug.getDegree();
    pg.getDegree();

    return 0;
}
