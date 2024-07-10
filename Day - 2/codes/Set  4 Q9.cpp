#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += factorial(i) / i;
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}