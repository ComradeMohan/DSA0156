#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(string accNum, string accHolder, double bal) {
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = bal;
        cout << "Account created for " << accountHolder << "." << endl;
    }

    ~BankAccount() {
        cout << "Account closed for " << accountHolder << "." << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << " into " << accountHolder << "'s account." << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from " << accountHolder << "'s account." << endl;
        } else {
            cout << "Insufficient balance in " << accountHolder << "'s account." << endl;
        }
    }

    void displayBalance() {
        cout << accountHolder << "'s account balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("123456789", "John Doe", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayBalance();
    return 0;
}