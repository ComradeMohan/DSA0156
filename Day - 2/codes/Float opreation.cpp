#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double num1, num2;
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;
    cout << "Modulo: " << fmod(num1, num2) << endl; 
    return 0;
}
