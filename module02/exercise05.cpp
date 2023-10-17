#include <iostream>

using namespace std;

int main() {
    int data1 = 42; //stack   0010 1010 0x2A
    int *p; // stack
    p = &data1;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(data1) << endl;
    cout << hex << p << endl;
    cout << hex << *p << endl;
    cout << dec << *p << endl;
    return 0;
}