template<class T>
inline T const &get_max(T const &a, T const &b) {
    return a < b ? b : a;
}

#include <iostream>

using namespace std;

int main() {
    cout << "get_max(4,7): " << get_max(4, 7) << endl;
    cout << "get_max(4,7.0): " << get_max(4.0, 7.0) << endl;
    cout << "get_max(4,7.0): " << get_max<double>(4, 7.0) << endl;
    cout << "get_max(4,7.0): " << get_max(static_cast<double>(4), 7.0) << endl;
    return 0;
}
