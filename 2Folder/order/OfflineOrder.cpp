#include "OfflineOrder.h"
#include <iostream>
#include <string.h>

OfflineOrder::OfflineOrder()
{
    std::cout<<"\nIn OfflineOrder()";
    orderLocation = "Pune Hinjewadi";   
}

OfflineOrder::~OfflineOrder()
{
    std::cout<<"\nIn ~OfflineOrder()";
}

OfflineOrder::OfflineOrder(std::string ol)
{
    orderLocation = ol;
}

void OfflineOrder::changeLocation()
{
    std::string newLocation;
    std::cout<<"\nEnter new location:";
    std::cin>>newLocation;
    orderLocation = newLocation;

}

void OfflineOrder::display()
{
    std::cout<<"\nOrder Location : " <<orderLocation;
}