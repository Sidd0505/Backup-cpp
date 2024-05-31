#include "Order.h"

Order::Order(std::string id, float value, Order_type type, float discount)
:_id(id),_value(value),_type(type),_discount(discount){
}



std::ostream &operator<<(std::ostream &os, const Order &rhs) {
    os << "_id: " << rhs._id
       << " _value: " << rhs._value
       << " _type: " << Display_Enum_value(rhs._type)
       << " _discount: " << rhs._discount;
    return os;
}

std::string Display_Enum_value(Order_type type)
{
    if(type == Order_type::COD)
    return "COD";
    if(type == Order_type::PROMOTION)
    return "PROMOTION";
    else
    return "PAID";
}
