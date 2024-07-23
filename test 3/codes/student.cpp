#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    Student() {
        name = "Unknown";
    }

    Student(string n) {
        name = n;
    }

    void displayName() {
        cout << "Student's Name: " << name << endl;
    }
};

int main() {
    Student student1;
    student1.displayName();

    Student student2("mohan");
    student2.displayName();

    return 0;
}