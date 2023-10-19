#ifndef MODULE03_SAVINGACCOUNT_H
#define MODULE03_SAVINGACCOUNT_H

#include "account.h"

namespace banking {

    class SavingAccount : public Account {
        const int days;
    public:
        SavingAccount(const string&& iban,double balance,int days)
                : Account(iban,balance), days(days)
        {

        }

        ~SavingAccount();

        double deposit(double amount) override;

        double withdraw(double amount) override;
    };

} // banking

#endif //MODULE03_SAVINGACCOUNT_H
