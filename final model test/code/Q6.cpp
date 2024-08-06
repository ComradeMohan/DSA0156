#include <iostream>
#include <cstring> 
using namespace std;
class String {
private:
    char* str;
public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }
    bool operator==(const String& other) const {
        return strcmp(str, other.str) == 0;
    }
    void print() const {
        cout << str << endl;
    }
};

int main() {
    String str1("Apple");
    String str2("orange");

    cout << "First string: ";
    str1.print();
    cout << "Second string: ";
    str2.print();

    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Both strings are not equal." << endl;
    }

    return 0;
}
