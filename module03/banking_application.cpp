#include <iostream>
#include "account.h"

using banking::account;

int main() {
    cout << "Application is just started." << endl;
    // stack -> local variable -> stack object
    {
        cout << "We entered the block." << endl;
        account acc1("tr1", 100'000);
        // acc1.balance -= 10'000'000;
        acc1.withdraw(75'000);
        acc1.deposit(5'000);
        acc1.withdraw(25'000);
        acc1.withdraw(15'000);
        cout << "We exited from the block: " << acc1.get_balance() << endl;
    }
    cout << "Application is just completed." << endl;
    return 0;
}
