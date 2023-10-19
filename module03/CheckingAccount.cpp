#include "CheckingAccount.h"

namespace banking {
    double CheckingAccount::withdraw(double amount) {
        // validation
        if (amount <= 0) return this->balance;
        // business rule
        if (amount > (this->balance + this->overdraft_amount)) {
            return this->balance;
        }
        this->balance -= amount;
        return this->balance;
    }

    double CheckingAccount::deposit(double amount) {
        // validation
        if (amount <= 0) return this->balance;
        this->balance += amount;
        return true;
    }

    CheckingAccount::~CheckingAccount() {
        cout << "CheckingAccount destructor is running..." << endl;
    }
} // banking