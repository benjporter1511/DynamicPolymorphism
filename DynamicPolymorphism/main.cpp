// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {

    Account* p1 = new Checking_Account("Larry", 10000);
    Account* p2 = new Savings_Account("John", 2000);
    Account* p3 = new Trust_Account("Reggie");

    std::vector<Account*> accounts{ p1,p2,p3 };
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 500);
    display(accounts);

    return 0;
}