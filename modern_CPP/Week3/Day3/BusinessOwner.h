#ifndef BUSINESSOWNER_H
#define BUSINESSOWNER_H

#include<iostream>
class BusinessOwner
{
private:
    /* data */
public:
    BusinessOwner(){};
    ~BusinessOwner(){};


    void PayTax()
    {
        std::cout<<"Business has to pay advance Tax and GST every month/quarter";
    }
};

#endif // BUSINESSOWNER_H
