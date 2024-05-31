#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Order.h"
#include <list>
#include<memory>

using pointer=std::shared_ptr<Order>;
using Container = std::list<pointer>;

void CreateObjects(Container& data);

std::string IdwithHighestDiscount(const Container& data)noexcept(false) ;

Order_type ReturnTypeofOrder(const Container& data, std::string id)noexcept(false) ;

float Average_Value(const Container& data)noexcept(false) ;

Container FirstNinstances_data(const Container& data, int N)noexcept(false) ;

#endif // FUNCTIONALITIES_H
