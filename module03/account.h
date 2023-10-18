#include <string>
#include <iostream>

#ifndef MODULE03_ACCOUNT_H
#define MODULE03_ACCOUNT_H
using namespace std;

namespace banking {

    class Account { // encapsulation + information hiding -> automatic
    private:
        // members: i) attribute ii) method
        // attribute, data, state, property
        const string iban; // identity
    protected:
        double balance;
    public:
        // methods
        // 1. Constructor(s) / Destructor
        Account(string iban, double balance = 1'000);
        ~Account();
        // 2. getter methods
        double get_balance() const { // read-only/const method
            return this->balance;
        }

        string get_iban() const { // read-only/const method
            return this->iban;
        }
        // 3. business method
        virtual double deposit(double amount);
        virtual double withdraw(double amount);

    };

} // banking

#endif //MODULE03_ACCOUNT_H
