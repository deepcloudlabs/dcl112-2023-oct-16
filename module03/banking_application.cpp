#include <iostream>
#include "account.h"

using banking::account;

int main() {
    cout << "Application is just started." << endl;
    // stack -> local variable -> stack object
    {
        cout << "We entered the block." << endl;
        account acc1("tr1", 100'000);
        cout << "We exited from the block." << endl;
    }
    cout << "Application is just completed." << endl;
    return 0;
}
