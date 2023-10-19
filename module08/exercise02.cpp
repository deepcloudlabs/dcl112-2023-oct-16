#include <iostream>

using namespace std;

class A {
    double *p;
public:
    A() : p(nullptr) {}

    A(double value) {
        p = new double(value);
    }

    A &operator=(A &other) {
        if (p == nullptr)
           p = new double(0);
        p[0] = other.p[0];
        return *this;
    }
    A(A &other) { // Copy Constructor
        p = new double(other.p[0]);
    }
    A(A &&other) { // Move Constructor
        p = other.p;
        other.p = nullptr;
    }
    double get_value() const {
        if (p== nullptr) return 0;
        return *p;
    }

    ~A() {
        cout << "A::~A()" << endl;
        if (p == nullptr) return;
        cout << "delete p" << endl;
        delete p;
    }
};

int main() {
    {
        A *ap = new A(42);

        delete ap;
    }
    {
        A a(24);


    } // ~A()
    A a1;
    A a2(42);
    A a3{108};
    A a4(100);
    A a5(a4);
    cout << "a2: " << a2.get_value() << endl;
    a2 = a4;
    cout << "a2: " << a2.get_value() << endl;
    cout << "a5: " << a5.get_value() << endl;
    A a6(move(a3));
    cout << "a3: " << a3.get_value() << endl; // 0
    cout << "a6: " << a6.get_value() << endl; // 108
}