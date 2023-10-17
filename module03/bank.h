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
        const int bddk_id;
        int capacity;
    public:
        Bank(int bddk_id, string commercial_name) : bddk_id(bddk_id), commercial_name(commercial_name), capacity(10),
                                                    numberOfCustomers(0) {
            customers = new Customer *[capacity];
        }


        int getNumOfCustomers() {
            return this->numberOfCustomers;
        }

        Customer *addCustomer(string first_name, string last_name);
        Customer *getCustomer(int i);
    };

} // banking

#endif //MODULE03_BANK_H
