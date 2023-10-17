#include <iostream>

using namespace std;

int main() {
    // stack array
    int numbers[]{4, 8, 15, 16, 23, 42};
    int *p = new int[6]{4, 8, 15, 16, 23, 42};
    cout << sizeof(numbers)/sizeof(int) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << numbers[2] << endl;
    cout << p[2] << endl;
    return 0;
}