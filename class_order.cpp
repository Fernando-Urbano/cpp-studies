
#include <iostream>

class Order
{
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
};

