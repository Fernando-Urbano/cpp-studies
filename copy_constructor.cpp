#include <iostream>
#include <string>


class Trader {
private:
    std::string name;
    int age;
public:
    Trader(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
};


class Order {
private:
    Trader *trader;
public:
    Order(Trader *trader_): trader(trader_) {

    }
};

int main() {
    Trader t1("John", 30);
    Order o1(&t1);
    Order o2(o1);
    printf("Name: %s\n", o2.trader->name);
    return 0;
}//