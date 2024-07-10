#include <iostream>
using namespace std;

int main() {
    int num, originalNum, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        digit = originalNum % 10;
        sum += digit;
        originalNum /= 10;
    }

    if (num % sum == 0) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }

    return 0;
}