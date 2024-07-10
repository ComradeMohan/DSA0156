#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "The greater number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The greater number is: " << num2 << endl;
    } else {
        cout << "The numbers are equal." << endl;
    }

    return 0;
}
