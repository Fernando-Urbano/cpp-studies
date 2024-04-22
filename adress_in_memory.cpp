#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    cout << "Address of a" << a << ": " << &a << endl;
    cout << "Address of b" << b << ": " << &b << endl;
    cout << "Address of c" << c << ": " << &c << endl;
    // pointers dereference
    int d = 10;
    int* pD = &d;
    cout << "d is " << d << endl;
    cout << "pD is " << *pD << endl;
    *pD = 100;
    cout << "d is " << d << endl;
    return 0;
}