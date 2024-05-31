#ifndef OFFLINEORDER_H
#define OFFLINEORDER_H
#include <iostream>
#include "Order.h"

class OfflineOrder : public Order{
    std::string orderLocation;
    
    public :
    OfflineOrder();
    ~OfflineOrder();
    OfflineOrder(std::string ol);

    void changeLocation();//change location of object 
    
    void display(); // overridden method 
};

//accept(){
//     newLocation ;
// }

#endif // OFFLINEORDER_H