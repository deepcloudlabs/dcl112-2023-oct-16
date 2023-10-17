#include <string>
#include <iostream>

#ifndef MODULE03_ACCOUNT_H
#define MODULE03_ACCOUNT_H
using namespace std;

namespace banking {

    class account { // encapsulation + information hiding -> automatic
    private:
        // members: i) attribute ii) method
        // attribute, data, state, property
        string iban;
        double balance;
    public:
        // methods
        // 1. Constructor(s) / Destructor
        account(string iban, double balance = 1'000);
        ~account();
        // 2. setter/getter methods
        // 3. business method

    };

} // banking

#endif //MODULE03_ACCOUNT_H
