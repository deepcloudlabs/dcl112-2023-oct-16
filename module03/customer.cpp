#include <numeric>
#include "customer.h"

namespace banking {
    string Customer::getFirstName() const {
        return this->firstName;
    }

    string Customer::getLastName() const {
        return this->lastName;
    }

    shared_ptr<Account> Customer::getAccount(int i) const {
        return this->accounts[i];
    }

    void Customer::addAccount(shared_ptr<Account> account) {
        this->accounts.push_back(account);
    }

    int Customer::getNumOfAccounts() const {
        return accounts.size();
    }

    double Customer::getBalance() const {
        return accumulate(accounts.begin(),accounts.end(),0.0,[](double acc,shared_ptr<Account> account){return acc + account->get_balance();});
    }


} // banking