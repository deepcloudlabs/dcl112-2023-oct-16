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
#include <iostream>
using namespace std;
using namespace banking;

int main() {
    Customer *customer;
    Account *account1 = new SavingAccount("tr1",500.0,100);
    Account *account2 = new CheckingAccount("tr2",2'500.0,500);
    //account.balance = 1'000'000'000;
    // Create an account that can has a 500.00 balance.
    cout << endl << "Creating the customer Jane Smith.";
    customer = new Customer("Jane", "Smith");
    customer->addAccount(account1);
    customer->addAccount(account2);
    cout << endl << "Creating her account with a 500.00 balance.";

    cout << endl << "Withdraw 150.00";
    account1->withdraw(150.00);

    cout << endl << "Deposit 22.50";
    account1->deposit(22.50);

    cout << endl << "Withdraw 47.62";
    account1->withdraw(47.62);

    // Print out the final account balance
    cout  << endl
          << "Customer ["
          << customer->getLastName()
          << ", "
          << customer->getFirstName()
          << "] has a balance of "
          << account1->get_balance()
          << endl;
    delete customer;

    return 0;
}


