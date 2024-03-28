#include <iostream>

int Sum( int first, int second) {
    std::cout << "Sum() received " << first << " and " << second << std::endl;
    return (first + second);
}

int main() {
    std::cout << "Test Sum function" << std::endl;
    int a, b, c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "\nEnter b: ";
    std::cin >> b;
    std::cout << "Calling Add()\n";
    c = Sum(a, b);
    std::cout << "Sum is: " << c << std::endl;
    return 0;
}