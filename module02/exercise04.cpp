#include <iostream>

using namespace std;

const int& fun(){
    static int x=42; // local variable -- static --> Data

    return x; // x escapes from fun()
}

int main() {
    int myarray1[]{1,2,3,4,5,6,7};
    const int& u = fun();
    // error due to const reference: u++;
    int myarray2[]{1,2,3,4,5,6,7};
    cerr <<  u << endl;
    return 0;
}

