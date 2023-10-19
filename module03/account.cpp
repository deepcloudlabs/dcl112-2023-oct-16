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


} // banking