//
// Created by dcl on 10/17/2023.
//

#include "customer.h"

namespace banking {
    string Customer::getFirstName() const {
        return this->firstName;
    }

    string Customer::getLastName() const {
        return this->lastName;
    }

    Account *Customer::getAccount(int i) {
        return this->accounts[i];
    }

    void Customer::addAccount(Account *account) {
        this->accounts.push_back(account);
    }


} // banking