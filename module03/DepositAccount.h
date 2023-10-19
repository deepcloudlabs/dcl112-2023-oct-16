//
// Created by binku on 10/19/2023.
//

#ifndef MODULE03_DEPOSITACCOUNT_H
#define MODULE03_DEPOSITACCOUNT_H

#include "account.h"

namespace banking {

    class DepositAccount : public Account {
    public:
        ~DepositAccount();

        double deposit(double amount) override;

        double withdraw(double amount) override;
    };

} // banking

#endif //MODULE03_DEPOSITACCOUNT_H
