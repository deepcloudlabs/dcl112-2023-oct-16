#include <iostream>
using namespace std;

int main() {
    static int i=2; // local though it is defined as static
    {
        int n=i ;
        int i = 3 ;
        cout << i << " " << ::i << endl ;
        cout << n << "\n" ;
    }
    cout << i << " " << ::i << endl;
    return 0 ;
}

