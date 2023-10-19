/*
 * File:   TestBanking.cpp
 * Author: binnur.kurt
 *
 * Created on November 9, 2008, 7:39 PM
 */

#include <iostream>

#include "Bank.h"
#include "CheckingAccount.h"
#include "DepositAccount.h"
#include "SavingAccount.h"

using namespace std;
using namespace banking;

/*
 *
 */
int main() {
    Bank bank(1, "denizbank");

    auto jane = bank.addCustomer("Jane", "Simms");
    auto owen = bank.addCustomer("Owen", "Bryant");
    auto tim = bank.addCustomer("Tim", "Soley");
    auto maria = bank.addCustomer("Maria", "Soley");
    jane->addAccount(make_shared<CheckingAccount>("tr1",1'000'000,10'000));
    jane->addAccount(make_shared<DepositAccount>("tr2",2'000'000));
    jane->addAccount(make_shared<SavingAccount>("tr3",5'000'000, 90));
    tim->addAccount(make_shared<CheckingAccount>("tr4",4'000'000,50'000));
    tim->addAccount(make_shared<DepositAccount>("tr5",5'000'000));
    owen->addAccount(make_shared<CheckingAccount>("tr6",6'000'000,80'000));
    owen->addAccount(make_shared<DepositAccount>("tr7",7'000'000));
    maria->addAccount(make_shared<DepositAccount>("tr8",100'000'000));

    for ( int i = 0; i < bank.getNumOfCustomers(); i++ ) {
        auto customer = bank.getCustomer(i);
        cout << "Customer ["
             << (i+1) << "] is "
             << customer->getLastName()
             << ", "
             << customer->getFirstName()
             << endl  ;
    }
    cout << "Total balance of the bank: " << bank.get_total_balance() << endl;
    cout << "Total balance of the bank: " << bank.get_total_balance_stl_algorithm() << endl;
    return 0;
}

