#include <iostream>

using namespace std;
/*
 *     Start
 *     B constructor
 *     C constructor
 *     End
 *     C destructor
 *     B destructor
 *
 */
class B {
public:
    // B() { cout << "B constructor" << endl; } // 2

    ~B() { cout << "B destructor" << endl; } // 6
};

class C : public B {
public:
    C() : B() { cout << "C constructor" << endl; } // 3

    ~C() { cout << "C destructor" << endl; } // 5
};

int main() {
    cout << "Start" << std::endl; // 1
    C c;  // create a C object
    cout << "End" << std::endl; // 4
    return 0;
}
