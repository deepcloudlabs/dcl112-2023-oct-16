#include <string>
#include <vector>
using namespace std;

#include "account.h"

#ifndef MODULE03_CUSTOMER_H
#define MODULE03_CUSTOMER_H

namespace banking {

    class Customer {
        const string firstName;
        const string lastName;
        vector<Account*> accounts;
    public:
        Customer(string firstName, string lastName) :
                firstName(firstName), lastName(lastName) {}

        string getFirstName() const {
            return this->firstName;
        }

        string getLastName() const {
            return this->lastName;
        }

        Account *getAccount(int i) {
            return this->accounts[i];
        }

    };

} // banking

#endif //MODULE03_CUSTOMER_H
