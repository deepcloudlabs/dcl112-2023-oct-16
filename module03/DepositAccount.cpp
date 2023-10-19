//
// Created by binku on 10/19/2023.
//

#include "DepositAccount.h"

namespace banking {
    DepositAccount::~DepositAccount() {
        cout << "DepositAccount destructor is running..." << endl;
    }

    double DepositAccount::deposit(double amount) {
        // validation
        if (amount <= 0) return this->balance;
        this->balance += amount;
        return true;
    }

    double DepositAccount::withdraw(double amount) {
        // validation
        if (amount <= 0) return this->balance;
        // business rule
        if (amount > this->balance) {
            this->balance = 0.0;
        } else {
            this->balance -= amount;
        }
        return this->balance;
    }
} // banking