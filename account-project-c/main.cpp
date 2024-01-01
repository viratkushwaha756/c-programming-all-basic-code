#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    std::string accountNumber;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(const std::string& name, const std::string& accNumber, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Amount deposited successfully. New balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Amount withdrawn successfully. New balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }

    // Function to display name and balance
    void display() {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account("John Doe", "123456789", 1000.0);

    account.display();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();

    return 0;
}
