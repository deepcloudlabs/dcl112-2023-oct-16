#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "account.h"

#ifndef MODULE03_CUSTOMER_H
#define MODULE03_CUSTOMER_H

namespace banking {

    class Customer {
        const string firstName;
        const string lastName;
        vector<shared_ptr<Account>> accounts;
    public:
        Customer(const string& firstName, const string& lastName) : firstName(firstName), lastName(lastName) {}

        string getFirstName() const;

        string getLastName() const;

        shared_ptr<Account> getAccount(int i);

        void addAccount(shared_ptr<Account> account);

        ~Customer(){
            cout << "~Customer()" << endl;
        }

    };

} // banking

#endif //MODULE03_CUSTOMER_H
