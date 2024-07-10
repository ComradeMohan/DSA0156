#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Reversed string: " << reverseString(input) << endl;
    return 0;
}