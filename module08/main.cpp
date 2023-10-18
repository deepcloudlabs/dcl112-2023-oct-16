#include <iostream>

using namespace std;

class square {
protected:
    int edge;
public:
    square(int edge = 10) : edge(edge) {}

    virtual int area() const {
        return this->edge * this->edge;
    }
};

class cube : public square {
public:
    cube(int edge = 10) : square(edge) {}

    int area() const {
        return 6 * this->edge * this->edge;
    }
};

int main() {
    square *p = new cube(1);
    cout << sizeof(*p) << endl;
    cout << "area: " << p->area() << endl;
    return 0;
}
