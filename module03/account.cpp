//
// Created by dcl on 10/16/2023.
//

#include "account.h"

namespace banking {
    account::account(string iban, double balance) : iban(iban) {
        this->balance = balance;
        cout << "account object is just created: iban: " << iban << ", balance: " << balance << endl;
    }

    /*
    account::account(string iban, double balance) : iban(iban), balance(balance){
        cout << "account object is just created: iban: " << iban << ", balance: " << balance << endl;
    }
     */

    account::~account() {
        cout << "account destructor is running..." << endl;
    }

    double account::deposit(double amount) {
        // validation
        if (amount <= 0) return this->balance;
        this->balance += amount;
        return true;
    }

    double account::withdraw(double amount) {
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