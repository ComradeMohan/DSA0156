#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int n) {
    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(isStrong(n)) {
        cout << n << " is a strong number." << endl;
    } else {
        cout << n << " is not a strong number." << endl;
    }
    
    return 0;
}