#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    int leastSignificant = num % 10;
    int nextLeastSignificant = (num / 10) % 10;

    cout << "The least significant digit is " << leastSignificant << endl;
    cout << "The next least significant digit is " << nextLeastSignificant << endl;

    return 0;
}