#include <iostream>

#include "Animal.h"

using namespace std;
namespace zoo {
    void Animal::walk() {
        cout << "Animal with " << legs
             << " legs is walking now..."
             << endl;
    }
} // zoo