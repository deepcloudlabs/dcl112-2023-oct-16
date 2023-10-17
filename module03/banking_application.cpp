/*
 * File:   TestBanking.cpp
 * Author: Binnur Kurt
 *
 * Created on November 7, 2008, 3:49 PM
 */
#include "account.h"
#include "customer.h"
#include <iostream>
using namespace std;
using namespace banking;
/*
 *
 */
int main() {
    Customer *customer;
    Account account("tr1",500.0);

    // Create an account that can has a 500.00 balance.
    cout << endl << "Creating the customer Jane Smith.";
    customer = new Customer("Jane", "Smith",account);
    cout << endl << "Creating her account with a 500.00 balance.";

    cout << endl << "Withdraw 150.00";
    account.withdraw(150.00);

    cout << endl << "Deposit 22.50";
    account.deposit(22.50);

    cout << endl << "Withdraw 47.62";
    account.withdraw(47.62);

    // Print out the final account balance
    cout  << endl
          << "Customer ["
          << customer->getLastName()
          << ", "
          << customer->getFirstName()
          << "] has a balance of "
          << account.get_balance()
          << endl;
    delete customer;

    return 0;
}


