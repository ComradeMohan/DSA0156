#include <iostream>
using namespace std;

bool isBuzz(int n) {
    return n % 5 == 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(isBuzz(n)) {
        cout << n << " is a buzz number." << endl;
    } else {
        cout << n << " is not a buzz number." << endl;
    }
    
    return 0;
}