#include <iostream>
using namespace std;

class B {
    int *p;
public:
    B(int value=42){
        cout << "B::B(int)" << endl;
        p = new int(value);
    }
    B(B& other){
        cout << "B::B(B&)" << endl;
        p = new int(*other.p);
    }
    ~B(){
        cout << "B::~B()" << endl;
        delete p;
    }
};

class A{
    B* b;
public:
    A(){
        cout << "A::A()" << endl;
        b = new B();
    }
    explicit A(A& other){
        cout << "A::A(const A&)" << endl;
        b = new B(*other.b);
    }
    ~A(){
        cout << "A::~A()" << endl;
        delete b;
    }
    void fun(){}
    void gun() const {}
    void sun(){}
    void run() const {}
};
int main() {
    A a1;
    A a2(a1); // copy constructor
    //A a3{a1}; // copy constructor
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    const A a3;

    return 0;
}