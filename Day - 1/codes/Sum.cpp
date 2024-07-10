#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 5;
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += static_cast<double>(factorial(i)) / i;
    }
    cout << sum << endl;  // Output: 34
    return 0;
}
