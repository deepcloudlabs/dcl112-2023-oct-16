/*
 * File:   TestBanking.cpp
 * Author: Binnur Kurt
 *
 * Created on November 7, 2008, 3:49 PM
 */
#include "account.h"
#include "customer.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "DepositAccount.h"
#include <iostream>
#include <memory>

using namespace std;
using namespace banking;

int main() {
    cout << "Creating the customer Jane Smith." << endl;
    auto customer = new Customer("Jane", "Smith");
    customer->addAccount(make_shared<DepositAccount>("tr1", 500.0));
    customer->addAccount(make_shared<CheckingAccount>("tr2", 5'000.0, 500.0));
    customer->addAccount(make_shared<SavingAccount>("tr3", 5'000.0, 90));
    cout << endl << "Creating her account with a 500.00 balance.";

    cout << endl << "Withdraw 150.00";
    customer->getAccount(0)->withdraw(150.00);

    cout << endl << "Deposit 22.50";
    customer->getAccount(0)->deposit(22.50);

    cout << endl << "Withdraw 47.62";
    customer->getAccount(0)->withdraw(47.62);

    // Print out the final account balance
    cout << endl
         << "Customer ["
         << customer->getLastName()
         << ", "
         << customer->getFirstName()
         << "] has a balance of "
         << customer->getAccount(0)->get_balance()
         << endl;
    delete customer;

    return 0;
}


