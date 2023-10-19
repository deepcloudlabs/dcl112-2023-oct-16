#include "bank.h"

namespace banking {
    std::shared_ptr<Customer> Bank::addCustomer(string first_name, string last_name) {
        auto customer = std::make_shared<Customer>(first_name,last_name);
        this->customers.push_back(customer) ;
        return customer;
    }

    std::shared_ptr<Customer> Bank::getCustomer(int i) {
        return this->customers[i];
    }

    double Bank::get_total_balance() const {
        auto total_balance = 0.0;
        for (auto& customer : customers){
            for (auto i=0;i<customer->getNumOfAccounts();++i){
                auto account = customer->getAccount(i);
                total_balance += account->get_balance();
            }
        }
        return total_balance;
    }

} // banking