#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int i, len, flag = 0;

    cout << "Enter a string: ";
    cin >> str;

    len = str.length();
    i = 0;

    while (i < len / 2) {
        if (str[i] != str[len - 1 - i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}