#include <iostream>
using namespace std;
int main() {
    int num, temp, d, reverse = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (num != 0) {
        d = num % 10;
        reverse = reverse * 10 + d;
        num /= 10;
    }

    if (temp == reverse) {
        cout <<" palindrome." << endl;
    } else {
        cout <<" not a palindrome." << endl;
    }
    return 0;
}