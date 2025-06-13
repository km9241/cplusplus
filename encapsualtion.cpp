#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    // Public method to display balance
    void displayBalance() {
        cout << "Account " << accountNumber << " Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(12345, 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayBalance();

    // myAccount.balance = 100000; // ❌ Not allowed, 'balance' is private

    return 0;
}
/* Why it's encapsulation:
Data members like accountNumber and balance are private.

Access to them is only possible through public methods like deposit, withdraw, and displayBalance.

This protects the internal state and ensures controlled access.*/