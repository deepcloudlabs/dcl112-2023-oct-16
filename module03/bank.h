//
// Created by dcl on 10/17/2023.
//

#ifndef MODULE03_BANK_H
#define MODULE03_BANK_H

#include <vector>
#include <memory>
#include "customer.h"

namespace banking {

    class Bank {
        std::vector<std::shared_ptr<Customer>> customers;
        string commercial_name;
        const int bddkId;
    public:
        Bank(int bddkId, const string &commercial_name) : bddkId(bddkId), commercial_name(commercial_name) {
        }

        Bank &operator=(Bank &other) = delete;

        Bank(Bank &other) = delete;

        auto getNumOfCustomers() const {
            return this->customers.size();
        }

        std::shared_ptr<Customer> addCustomer(string first_name, string last_name);

        std::shared_ptr<Customer> getCustomer(int i);

        virtual double get_total_balance() const ;
    };

} // banking

#endif //MODULE03_BANK_H
