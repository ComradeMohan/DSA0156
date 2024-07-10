#include <iostream>
using namespace std;

int main() {
    int num, i, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}