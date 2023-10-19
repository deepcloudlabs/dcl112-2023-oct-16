#include <parallel/algorithm>
#include <parallel/numeric>
#include "bank.h"
namespace banking {
    struct CustomerToBalance {
        double operator()(shared_ptr<Customer> customer){
            return customer->getBalance();
        }
    };
    template <class T>
    struct Topla {
        double operator()(T birikec,T deger){
            return birikec + deger;
        }
    };
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

    double Bank::get_total_balance_stl_algorithm() const {
        vector<double> balances;
        /*
        transform(customers.begin(),customers.end(), back_inserter(balances),
                  [](shared_ptr<Customer> customer){
                      return customer->getBalance();
                  });
        */
        transform(customers.begin(),customers.end(), back_inserter(balances),CustomerToBalance());
        //return accumulate(balances.begin(),balances.end(),double(),plus<double>());
        return accumulate(balances.begin(),balances.end(),double(),Topla<double>());
    }

} // banking