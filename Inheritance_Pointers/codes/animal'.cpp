#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(string n, string s, int a) : name(n), species(s), age(a) {}
};

class Cat : public Animal {
private:
    string color;
    string breed;
public:
    Cat(string n, string s, int a, string c, string b) : Animal(n, s, a), color(c), breed(b) {}
    void display() {
        cout << "Cat Name: " << name << ", Species: " << species << ", Age: " << age 
             << ", Color: " << color << ", Breed: " << breed << endl;
    }
};

class Dog : public Animal {
private:
    int weight;
    string breed;
public:
    Dog(string n, string s, int a, int w, string b) : Animal(n, s, a), weight(w), breed(b) {}
    void display() {
        cout << "Dog Name: " << name << ", Species: " << species << ", Age: " << age 
             << ", Weight: " << weight << "kg, Breed: " << breed << endl;
    }
};

int main() {
    Cat cat("Whiskers", "Felis", 2, "Black", "Siamese");
    Dog dog("Buddy", "Canis", 3, 20, "Labrador");
    
    cat.display();
    dog.display();
    
    return 0;
}
