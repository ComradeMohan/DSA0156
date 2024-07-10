#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = pow(2, i * 2);
        for (int j = 1; j <= i; j++) {
            cout << num << "  ";
        }
        cout << endl;
    }

    return 0;
}