#include "SavingAccount.h"

namespace banking {
    double SavingAccount::deposit(double amount) {
        return this->balance;
    }

    double SavingAccount::withdraw(double amount){
        return this->balance;
    }

    SavingAccount::~SavingAccount() {
        cout << "SavingAccount destructor is running..." << endl;
    }
} // banking