#include <iostream>
using namespace std;

class A {
    int x, y;
public:
    explicit A(int x, int y=108) : x(x), y(y) {
        cout << "x= " << x << ", y=" << y << endl;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
};

int main() {
    A a1(42, 108);
    A a2{42, 108};
    int x{42};
    int y = 42;
    int numbers[]{4, 8, 15, 16, 23, 42};
    // A a3 = {42,56};
    A a4 {42};
    // A a5 = 9;
    return 0;
}
