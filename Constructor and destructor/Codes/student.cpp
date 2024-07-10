#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string grade;

public:
    Student(string studentName, int studentAge, string studentGrade) {
        name = studentName;
        age = studentAge;
        grade = studentGrade;
        cout << "Student " << name << " created." << endl;
    }

    ~Student() {
        cout << "Student " << name << " destroyed." << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student("John Doe", 18, "A");
    student.displayInfo();
    return 0;
}