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
        vector<Account *> accounts;
    public:
        Customer(const string& firstName, const string& lastName) : firstName(firstName), lastName(lastName) {}

        string getFirstName() const;

        string getLastName() const;

        Account *getAccount(int i);

        void addAccount(Account *account);

    };

} // banking

#endif //MODULE03_CUSTOMER_H
