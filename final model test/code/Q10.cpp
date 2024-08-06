#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int countWords(const string& paragraph) {
    stringstream ss(paragraph);
    string word;
    int count = 0;
    
    while (ss >> word) {
        count++;
    }
    
    return count;
}
int main() {
    string paragraph = "The quick brown fox";
    int wordCount = countWords(paragraph);
    cout << "Number of words: " << wordCount << endl;
    
    return 0;
}
