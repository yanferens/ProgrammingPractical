// Prob 3:
// Create Bank account:
// - Account contains id, info about person and their money.
// - Cannot be created (all constructors are private) manually.
// - One can get account by static get function.
// - One can transfer money from Account to other Account/person.
// - One can withdraw money.
// - One can deposit money.
// - Account can be printed.
#pragma once
#include <string>

class Account {
    private:
    unsigned int id = 0;
    std::string name;
    double balance = 0.0;
    Account(std::string name, double balance);
public:
    static Account& getAccount(std::string name);
    bool transferMoney(std::string name, double amount);
    void withdrawMoney(double amount);
    void depositMoney(double amount);
    void printAccount();
    Account(const Account&) = delete;
    Account& operator=(const Account&) = delete;
};