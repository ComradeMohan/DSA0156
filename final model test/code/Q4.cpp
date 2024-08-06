#include <iostream>
using namespace std;
void reverseString(char* str) {
    char* start = str;
    char* end = str;
    while (*end != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[] = "Hello";
    cout << "Original string: " << str << endl;
   reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
