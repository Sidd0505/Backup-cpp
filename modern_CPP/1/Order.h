#ifndef ORDER_H
#define ORDER_H

#include<iostream>
#include"Order_type.h"

class Order
{
private:
    /* data */
    std::string _id{""};
    float _value{0.0f};
    Order_type _type{Order_type::COD};
    float _discount{0.0};

public:
    //delete default constructor

    Order(/* args */) =delete;

    //delete copy constructor
    Order(const Order&)=delete;

    //delete assignment operator
    Order operator=(const Order&)=delete;

    //delete semantics
    Order(Order&&)=delete;
    Order operator=(Order&&)=delete;

    //parameterized constructor
    Order(std::string id, float value, Order_type type, float discount);
    ~Order() =default;

    

    std::string id() const { return _id; }

    float value() const { return _value; }

    Order_type type() const { return _type; }

    float discount() const { return _discount; }

    friend std::ostream &operator<<(std::ostream &os, const Order &rhs);
    

};
//Displaying Enum values
std::string Display_Enum_value(Order_type type);
#endif // ORDER_H
