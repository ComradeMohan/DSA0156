#include <iostream>
using namespace std;

class Degree {
public:
    void getDegree() {
        cout << "I got a Degree" << endl;
    }
};
int main() {
    Degree t;
    t.getDegree();

    return 0;
}