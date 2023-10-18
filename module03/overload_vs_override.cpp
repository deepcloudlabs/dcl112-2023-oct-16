class A {
public:
    // overloading
    void fun(int x){}
    void fun(int x,double y){}
};

class B : public A {
public:
    // overriding
    void fun(int x){}
};