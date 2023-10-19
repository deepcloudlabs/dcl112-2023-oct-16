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

} // banking