#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    (num % 3 == 0) ? cout << "The number is divisible by 3." : cout << "The number is not divisible by 3.";
    cout << endl;

    return 0;
}
