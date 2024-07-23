 #include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}
};

class Manager : public Employee {
private:
    string department;
    double bonus;
public:
    Manager(string n, int i, double s, string d, double b) : Employee(n, i, s), department(d), bonus(b) {}
    void display() {
        cout << "Manager Name: " << name << ", ID: " << id << ", Salary: $" << salary 
             << ", Department: " << department << ", Bonus: $" << bonus << endl;
    }
};

class Engineer : public Employee {
private:
    string specialty;
    int hours;
public:
    Engineer(string n, int i, double s, string sp, int h) : Employee(n, i, s), specialty(sp), hours(h) {}
    void display() {
        cout << "Engineer Name: " << name << ", ID: " << id << ", Salary: $" << salary 
             << ", Specialty: " << specialty << ", Hours: " << hours << endl;
    }
};

int main() {
    Manager manager("Alice", 1, 50000, "HR", 5000);
    Engineer engineer("Bob", 2, 60000, "Software", 40);
    
    manager.display();
    engineer.display();
    
    return 0;
}
