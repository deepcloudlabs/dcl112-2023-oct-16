#include <iostream>

using namespace std;

struct A { // VT: gun()
    void fun() { // non-virtual
        cout << "A::fun()" << endl;
    }

    virtual void gun() {
        cout << "A::gun()" << endl;
    }

};

struct B : public A { // VT: fun(), gun()
    virtual void fun() {
        cout << "B::fun()" << endl;
    }

    void gun() {
        cout << "B::gun()" << endl;
    }
};

struct C : public B { // VT: fun(), gun()
    void fun() override {
        cout << "C::fun()" << endl;
    }
    void gun() {
        cout << "C::gun()" << endl;
    }
};

int main() {
    A *q = new C();
    q->fun(); // static binding
    B *p = new C();
    p->fun(); // dynamic binding -> Virtual Table
    return 0;
}
