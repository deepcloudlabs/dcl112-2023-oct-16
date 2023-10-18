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

    bank->addCustomer("Jane", "Simms", "tr1");
    bank->addCustomer("Owen", "Bryant", "tr2");
    bank->addCustomer("Tim", "Soley", "tr3");
    bank->addCustomer("Maria", "Soley", "tr4");

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

