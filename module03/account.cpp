#include "account.h"

namespace banking {
    Account::Account(const string& iban, double balance) : iban(iban) {
        this->balance = balance;
        cout << "account object is just created: iban: " << iban << ", balance: " << balance << endl;
    }

    /*
    account::account(string iban, double balance) : iban(iban), balance(balance){
        cout << "account object is just created: iban: " << iban << ", balance: " << balance << endl;
    }
     */

    Account::~Account() {
        cout << "account destructor is running..." << endl;
    }

    double Account::deposit(double amount) {
        // validation
        if (amount <= 0) return this->balance;
        this->balance += amount;
        return true;
    }

    double Account::withdraw(double amount) {
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