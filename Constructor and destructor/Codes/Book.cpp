#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    Book(string bookTitle, string bookAuthor, int bookPages) {
        title = bookTitle;
        author = bookAuthor;
        pages = bookPages;
        cout << "Book \"" << title << "\" by " << author << " created." << endl;
    }

    ~Book() {
        cout << "Book \"" << title << "\" by " << author << " destroyed." << endl;
    }

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 180);
    myBook.displayInfo();
    return 0;
}