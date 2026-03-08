#include <iostream>
#include "account.h"
using namespace std;

int main() {
    Account& user1 = Account::getAccount("Mike");
    Account& user2 = Account::getAccount("Rick");
    user1.printAccount();
    user2.printAccount();
    user1.transferMoney("Rick", 10);
    user1.printAccount();
    user2.printAccount();
    Account& user3 = Account::getAccount("Mike");
    user3.printAccount();
}
// Prob 3:
// Create Bank account:
// - Account contains id, info about person and their money.
// - Cannot be created (all constructors are private) manually.
// - One can get account by static get function.
// - One can transfer money from Account to other Account/person.
// - One can withdraw money.
// - One can deposit money.
// - Account can be printed.