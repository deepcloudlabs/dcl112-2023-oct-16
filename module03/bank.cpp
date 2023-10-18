#include "bank.h"

namespace banking {
    Customer *Bank::addCustomer(string first_name, string last_name, string iban) {
        if (this->numberOfCustomers == this->capacity) {
            int new_capacity = 2 * this->capacity;
            Customer **new_customers = new Customer *[new_capacity];
            memcpy(new_customers, this->customers, this->numberOfCustomers * sizeof(Customer *));
            delete[] customers;
            this->customers = new_customers;
            this->capacity = new_capacity;
        }
        Customer *customer = new Customer(first_name, last_name, Account(iban));
        this->customers[this->numberOfCustomers++] = customer;
        return customer;
    }

    Customer *Bank::getCustomer(int i) {
        if (i < 0) return nullptr;
        if (i >= numberOfCustomers) return nullptr;
        return this->customers[i];
    }

    Bank::~Bank() {
        for (int i = 0; i < numberOfCustomers; ++i)
            delete customers[i];
        delete[]this->customers;
    }

} // banking