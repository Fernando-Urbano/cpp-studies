#include <cmath>
#include <iostream>
#include <algorithm>

long pthFactor(long n, long p) {
    if (n == 1) {
        return 1;
    }
    int root_n = ceil(sqrt(n));
    int first_elements[root_n];
    int second_elements[root_n];
    std::fill_n(first_elements, root_n, 0);
    std::fill_n(second_elements, root_n, 0);
    int current_loc = 0;
    int i;
    for ( i=root_n; i>=1; i-=1) {
        if (n % i == 0){
            first_elements[current_loc] = i;
            if (i != n / i) {
                second_elements[current_loc] = n / i;
                current_loc++;
            }
        }
    }
    if (p > current_loc) {
        return second_elements[p-current_loc-1];
    } else {
        return first_elements[p-1];
    }
}

int main() {
    long n = 1048576;
    long p = 12;
    long result = pthFactor(n, p);
    std::cout << "The " << p << "th factor of " << n << " is " << result << std::endl;
    return 0;
}