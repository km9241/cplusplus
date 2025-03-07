#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Encapsulated variable, not accessible directly from outside

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance > 0) {
            balance = initialBalance;
        } else {
            balance = 0;
        }
    }

    // Deposit function to add money to the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Withdraw function to remove money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Getter method to access the balance (encapsulation in action)
    double getBalance() {
        return balance;
    }
};

int main() {
    // Creating a BankAccount object with an initial balance

    BankAccount myAccount(1000);

    // Deposit and withdraw money using methods
    myAccount.deposit(500);
    myAccount.withdraw(200);

    // Access the balance using the getter method
    cout << "Current balance: " << myAccount.getBalance() << endl;  // Output: 1300

    return 0;
}
