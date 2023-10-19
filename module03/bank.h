//
// Created by dcl on 10/17/2023.
//

#ifndef MODULE03_BANK_H
#define MODULE03_BANK_H

#include "customer.h"

namespace banking {

    class Bank {
        Customer **customers;
        int numberOfCustomers;
        string commercial_name;
        const int bddkId;
        int capacity;
    public:
        Bank(int bddkId, const string &commercial_name) : bddkId(bddkId), commercial_name(commercial_name),
                                                          capacity(10),
                                                          numberOfCustomers(0) {
            customers = new Customer *[capacity];
        }

        Bank& operator=(Bank& other) = delete;
        Bank(Bank& other) = delete;
        int getNumOfCustomers() const {
            return this->numberOfCustomers;
        }

        Customer *addCustomer(string first_name, string last_name);

        Customer *getCustomer(int i);

        ~Bank();

        Bank(Bank &other) = delete;

        void operator=(Bank &other) = delete;
    };

} // banking

#endif //MODULE03_BANK_H
