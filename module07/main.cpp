#include <iostream>
using namespace std;

class A {
public:
    void gun(){}
};
class B {
public:
    void fun(){}
};
class C : public B {};
class D : public A {
    int x;
public:
    void sun(){
        cout << "have sun!" << this->x << endl;
    }
};
class E : public D {};
class F : public B {};
int main() {
    A *p = new A(); // A, D, E
    B *q = new F(); // B, C, F
    D *r = static_cast<D*>(p);
    r->sun();
    return 0;
}
