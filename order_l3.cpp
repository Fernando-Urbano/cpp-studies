#include <iostream>

using namespace std;

#define add(X, Y) X + Y
int main() {
    string a = "Hello";
    string b = "World";
    string c = add(a, b);
    std::cout << c << std::endl;
    return 0;
}