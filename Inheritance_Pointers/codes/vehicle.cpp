#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string m, string mod, int y) : make(m), model(mod), year(y) {}
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;
public:
    Car(string m, string mod, int y, int s, string f) : Vehicle(m, mod, y), seatingCapacity(s), fuelType(f) {}
    void display() {
        cout << "Car Make: " << make << ", Model: " << model << ", Year: " << year 
             << ", Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << endl;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;
public:
    Truck(string m, string mod, int y, int p, int t) : Vehicle(m, mod, y), payloadCapacity(p), towingCapacity(t) {}
    void display() {
        cout << "Truck Make: " << make << ", Model: " << model << ", Year: " << year 
             << ", Payload Capacity: " << payloadCapacity << "kg, Towing Capacity: " << towingCapacity << "kg" << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2020, 5, "Gasoline");
    Truck truck("Ford", "F-150", 2018, 3000, 13000);
    
    car.display();
    truck.display();
    
    return 0;
}
