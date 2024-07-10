#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    (num1 == num2) ? cout << "The numbers are equal." : cout << "The numbers are not equal.";
    cout << endl;

    return 0;
}
