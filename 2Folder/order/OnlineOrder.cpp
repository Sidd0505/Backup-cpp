#include "OnlineOrder.h"
#include <iostream>

void OnlineOrder::display()
{
    std::cout<<"\nOrder Application : "<<orderApp;
}   


OnlineOrder::OnlineOrder()
{
    std::cout<<"\nIn OfflineOrder()";
    orderApp = OrderApp::AMAZON;
}

OnlineOrder::~OnlineOrder()
{
    std::cout<<"\nIn ~OnlineOrder()";
}

OnlineOrder::OnlineOrder(OnlineOrder &on)
{
    orderApp = on.orderApp;
}

void OnlineOrder::averagePrice(Order *o)
{
    int avg , sum=0;
    for(int i=0;i<3;i++){
        sum += o[i].getProductPrice();
    }
    avg = sum /3;
    
}