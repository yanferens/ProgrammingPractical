#include "account.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include <format>



Account::Account(std::string name, double balance) {
    this->id = rand();
    this->name = name;
    this->balance = balance;

}
Account& Account::getAccount(std::string name) {
    static  Account arr[] = {
        Account("Ivan", 50.0),
        Account("Mike", 45.3),
        Account("Roman", 34.3),
        Account("Rick", 32.2),
        Account("Maria", 21.3)
    };
    for (int i = 0; i < 5; i++) {
        if (arr[i].name == name) {
            return arr[i];
        }
    }
    throw std::invalid_argument("We couldn't find your account, please contact bank departament");
}

void Account::withdrawMoney(double amount) {
    if (this->balance < amount) {
        throw std::out_of_range("You can't withdraw more than the account balance");
    }
    this->balance -= amount;

}
void Account::depositMoney(double amount) {
    this->balance += amount;
}
void Account::printAccount() {
    std::cout << std::format("ID: {} Name: {} Balance: {}", this->id, this->name, this->balance) << std::endl;
}


bool Account::transferMoney(std::string name, double amount) {
    Account& temp = getAccount(name);
    withdrawMoney(amount);
    temp.depositMoney(amount);
    return true;
}
