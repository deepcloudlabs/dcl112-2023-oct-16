//
// Created by dcl on 10/16/2023.
//

#include "account.h"

namespace banking {
    account::account(string iban, double balance) : iban(iban), balance(balance) {
        cout << "account object is just created: iban: " << iban << ", balance: " << balance << endl;
    }

    account::~account() {
        cout << "account destructor is running..." << endl;
    }
} // banking