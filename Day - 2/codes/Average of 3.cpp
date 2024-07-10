#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    double average = (num1 + num2 + num3) / 3.0;
    cout << "The average of the three numbers is: " << average << endl;
    return 0;
}