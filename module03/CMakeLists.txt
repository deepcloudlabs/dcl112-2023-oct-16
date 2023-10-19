cmake_minimum_required(VERSION 3.26)
project(module03)

set(CMAKE_CXX_STANDARD 20)

add_executable(banking_application banking_application.cpp account.cpp account.h customer.cpp customer.h bank.cpp bank.h CheckingAccount.cpp CheckingAccount.h DepositAccount.cpp DepositAccount.h SavingAccount.cpp SavingAccount.h)
add_executable(test_banking test_banking.cpp account.cpp account.h customer.cpp customer.h bank.cpp bank.h)
