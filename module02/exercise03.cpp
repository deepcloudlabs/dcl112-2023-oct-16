#include <iostream>

using namespace std;

void swap_by_value(int a, int b) { // cal-by-value
    int t = a;
    a = b;
    b = t;
}

void swap_by_pointer(int *a, int *b) { // cal-by-address
    int t = *a;
    *a = *b;
    *b = t;
}

void swap_by_ref(int& a, int& b) { // cal-by-address
    int t = a;
    a = b;
    b = t;
}

int main() {
    int u=5, v=42;
    cout << "u=" << u << ", v=" << v << endl;
    swap_by_pointer(&u,&v);
    cout << "u=" << u << ", v=" << v << endl;
    swap_by_ref(u,v);
    cout << "u=" << u << ", v=" << v << endl;
    return 0;
}

