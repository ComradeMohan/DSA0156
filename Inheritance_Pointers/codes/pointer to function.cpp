#include <iostream>
using namespace std;
void displayMessage() {
    cout << "Hello, this is a function pointer example!" << endl;
}

int main() {
    void (*funcPtr)() = displayMessage;
    funcPtr();
    return 0;
}
 