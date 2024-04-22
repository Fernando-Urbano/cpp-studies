#include <iostream>

int main() {
    enum DAYS { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
    DAYS pay_day;
    pay_day = FRIDAY;

    if (0 == pay_day || 4 == pay_day) {
        std::cout << "Payday!" << std::endl;
    } else {
        std::cout << "Not payday yet." << std::endl;
    }
}