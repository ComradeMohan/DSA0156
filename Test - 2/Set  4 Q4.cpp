#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "Hello Mohan";
    char* ptr = str + strlen(str) - 1;
    while (ptr >= str) {
        cout << *ptr;
        ptr--;
    }
    cout << endl;

    return 0;
}