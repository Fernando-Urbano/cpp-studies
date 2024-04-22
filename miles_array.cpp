#include <iostream>

int main() {
    int miles[5] = {15, 20, 25, 30, 35};
    int i;
    for ( i=0; i<5; i++ ) {
        std::cout << "Element " << i << " = " << miles[i] << std::endl;
        std::cout << "Enter a new value for " << i << ": ";
        std::cin >> miles[i];
    }
    for ( i=0; i<5; i++ ) {
        std::cout << "Element " << i << " = " << miles[i] << std::endl;
    }
    return 0;
}