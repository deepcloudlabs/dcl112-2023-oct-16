#ifndef MODULE03_CHECKINGACCOUNT_H
#define MODULE03_CHECKINGACCOUNT_H
#include "account.h"

namespace banking {
    // CheckingAccount : subclass, derived class
    // Account         : superclass, base class
                            // public inheritance vs private inheritance
    class CheckingAccount : public Account {
        double overdraft_amount;
    public:
        CheckingAccount(const string&& iban,double balance,double overdraft_amount)
           : Account(iban,balance), overdraft_amount(overdraft_amount)
           {

           }
        double withdraw(double amount) override;
        double deposit(double amount) override;
    };

} // banking

#endif //MODULE03_CHECKINGACCOUNT_H
