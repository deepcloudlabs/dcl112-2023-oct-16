#include <iostream>

using namespace std;

int main() {
    int numbers[]{4, 8, 15, 16, 23, 42}; //stack
    int *p; // stack
    p = &numbers[0]; // numbers + 0 * sizeof(int)
    cout << hex << p << endl;
    p = &numbers[2];
    p = numbers + 2; // numbers + 2 * sizeof(int)
    cout << hex << p << endl;
    cout << dec << *p << endl;
    p++; // p = p + sizeof(int)
    cout << hex << p << endl;
    cout << dec << *p << endl;
    for (int *q = numbers; q != numbers + 6; ++q) {
        cout << hex << q << " -> " << dec << *q << endl;
    }
    for (int *q = numbers+5; q >= numbers; --q) {
        cout << hex << q << " -> " << dec << *q << endl;
    }
    unsigned char* end = (unsigned char*)(numbers+6);
    for (unsigned char *q = (unsigned char*) numbers; q != end; ++q) {
        cout << hex << (int*)q << " -> " << dec << *q << endl;
    }
    int *r = new int(42);
    delete r;
    cout << *r << endl;
    return 0;
}