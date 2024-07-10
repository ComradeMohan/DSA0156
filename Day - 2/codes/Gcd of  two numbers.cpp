#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd, temp;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    do {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    } while (num2 != 0);

    gcd = num1;
    cout << "The GCD " << gcd << "." << endl;

    return 0;
}