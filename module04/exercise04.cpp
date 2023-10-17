#include <iostream>

using namespace std;

class B {
    int data;
    static int counter; // declaration
public:
    B(int value = 42) : data(value) {
        counter++;
    }

    ~B() {
        counter--;
    }

    static int getCounter() {
        return counter;
    }

    int fun() {
        return this->data;
    }
};

int B::counter = 0;

// definition -> data

struct Human {
    static const int HANDS = 2; // declaration + definition
    static const int FINGERS = 10;
};

int main() {
    {
        B b1, b2;
        B *p = nullptr;
        //p->fun();
        {
            B b3;
            cout << ((B *) nullptr)->getCounter() << endl; // 3
        }
        cout << ((B *) nullptr)->getCounter() << endl; // 2
    }
    cout << ((B *) nullptr)->getCounter() << endl; // 0
    cout << Human::HANDS << endl;
    cout << Human::FINGERS << endl;
    return 0;
}