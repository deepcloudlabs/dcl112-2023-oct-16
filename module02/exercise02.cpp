#include <iostream>
using namespace std;
#define sq(x) ((x)*(x))
inline int kare(int x){
    return x*x;
}
int main() {
    int p = 3, q = 5;
    cout << kare(p+q) << endl;
    cout << sq(p+q) << endl;
    return 0 ;
}