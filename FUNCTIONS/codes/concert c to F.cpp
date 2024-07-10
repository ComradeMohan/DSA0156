#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    
    cout << celsius << " Celsius is equal to " << celsiusToFahrenheit(celsius) << " Fahrenheit." << endl;
    
    return 0;
}