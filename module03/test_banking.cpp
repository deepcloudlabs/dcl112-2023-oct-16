/*
 * File:   TestBanking.cpp
 * Author: binnur.kurt
 *
 * Created on November 9, 2008, 7:39 PM
 */

#include <iostream>

#include "Bank.h"
#include "Customer.h"

using namespace std;
using namespace banking;

/*
 *
 */
int main() {
    Bank *bank = new Bank(1, "denizbank");

    bank->addCustomer("Jane", "Simms");
    bank->addCustomer("Owen", "Bryant");
    bank->addCustomer("Tim", "Soley");
    bank->addCustomer("Maria", "Soley");

    for ( int i = 0; i < bank->getNumOfCustomers(); i++ ) {
        Customer *customer = bank->getCustomer(i);
        cout << "Customer ["
             << (i+1) << "] is "
             << customer->getLastName()
             << ", "
             << customer->getFirstName()
             << endl  ;
    }
    return 0;
}

