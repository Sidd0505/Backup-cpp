#ifndef ONLINEORDER_H
#define ONLINEORDER_H
#include <iostream>
#include "Order.h"
#include "OrderApp.h"

class OnlineOrder : public Order{
    OrderApp orderApp;

    public:
    OnlineOrder();
    ~OnlineOrder();
    OnlineOrder(OnlineOrder &on);
    void averagePrice(Order *o);
    void display();

};

#endif // ONLINEORDER_H