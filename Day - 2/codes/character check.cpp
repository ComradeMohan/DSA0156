#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
        cout << "The character is a vowel." << endl;
    } else if (isalpha(ch)) {
        cout << "The character is a consonant." << endl;
    } else {
        cout << "The input is not a letter." << endl;
    }

    return 0;
}
