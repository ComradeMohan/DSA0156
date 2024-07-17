#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string gender;
public:
    Person(string n, int a, string g) : name(n), age(a), gender(g) {}
};

class Student : public Person {
private:
    int rollNumber;
    string studentClass;
public:
    Student(string n, int a, string g, int r, string c) : Person(n, a, g), rollNumber(r), studentClass(c) {}
    void display() {
        cout << "Student Name: " << name << ", Age: " << age << ", Gender: " << gender 
             << ", Roll Number: " << rollNumber << ", Class: " << studentClass << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
    double salary;
public:
    Teacher(string n, int a, string g, string s, double sal) : Person(n, a, g), subject(s), salary(sal) {}
    void display() {
        cout << "Teacher Name: " << name << ", Age: " << age << ", Gender: " << gender 
             << ", Subject: " << subject << ", Salary: $" << salary << endl;
    }
};

int main() {
    Student student("John", 20, "Male", 12345, "CSE");
    Teacher teacher("Ms. Smith", 35, "Female", "Mathematics", 40000);
    
    student.display();
    teacher.display();
    
    return 0;
}
