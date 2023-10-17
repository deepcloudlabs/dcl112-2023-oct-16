#include <string>
#include "account.h"

#ifndef MODULE03_CUSTOMER_H
#define MODULE03_CUSTOMER_H

namespace banking {

    class Customer {
        const string firstName;
        const string lastName;
        Account account;
    public:
        Customer(string firstName, string lastName, Account account) :
                firstName(firstName), lastName(lastName), account(account) {}

        string getFirstName() const {
            return this->firstName;
        }

        string getLastName() const {
            return this->lastName;
        }

        Account &getAccount() {
            return this->account;
        }

    };

} // banking

#endif //MODULE03_CUSTOMER_H
