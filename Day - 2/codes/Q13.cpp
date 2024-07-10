	#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Sample input: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }

    cout << "Sample Output: " << sum << endl;
    return 0;
}