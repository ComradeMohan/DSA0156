#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    Car(string carMake, string carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
        cout << "A " << year << " " << make << " " << model << " has been created." << endl;
    }

    ~Car() {
        cout << "A " << year << " " << make << " " << model << " has been destroyed." << endl;
    }

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020);
    myCar.displayInfo();
    return 0;
}