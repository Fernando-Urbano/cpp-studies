#include <iostream>

#include <stdint.h>
#include <iostream>
#include <list>
using namespace std;

class Order{
    int order_id;
public:
    Order(int oid):order_id(oid) {
        cout << "call constructor for " << oid << endl;
    }
    ~Order() {
        cout << "call destructor for " << order_id << endl;
    }

};

class OrderKiller{
public:
    Order *order;
    OrderKiller(Order *o1):order(o1){}

    ~OrderKiller() {
        delete order;
    }
};

int main() {
    {
        Order *o1 = new Order(1);
        OrderKiller *ok = new OrderKiller(o1);
        delete ok;
    }
    std::cout << "end of my code" << std::endl;
    return 0;
}