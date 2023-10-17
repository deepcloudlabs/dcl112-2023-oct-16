#include <iostream>

using namespace std;

class point {
    long long m; // 8
    int x; // 4
    bool z; // 4
    long long n; // 8
    int y; // 4
    //bool t; // 4
public:
    explicit point(int x=0, int y = 0) : x(x), y(y) {
        cout << "Constructing: x= " << x << ", y=" << y << endl;
    }
    ~point(){
        cout << "Destructing: x= " << x << ", y=" << y << endl;
    }
};

int main() {
    cout << sizeof(int) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(point) << endl;
    // stack array
    point points[] = {point(1),
           point(2, 3),
           point(4, 5),
            point()};
    cout << hex << points << endl;
    cout << hex << &points[0] << endl;
    cout << hex << &points[1] << endl;
    cout << hex << &points[2] << endl;
    return 0;
}