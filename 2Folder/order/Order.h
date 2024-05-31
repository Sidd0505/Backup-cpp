#ifndef ORDER_H
#define ORDER_H
#include "ProductType.h"
#include <iostream>

class Order{

    ProductType productType;
    std::string orderCode;
    short timeDuration;
    float productPrice;
  
    static int count;

    public:
    virtual void display() = 0;
    void accept();
    ProductType giveProductType();
    Order();
    ~Order();
    Order(std::string oc, ProductType pt, short td);

    float getProductPrice() const { return productPrice; }
    void setProductPrice(float productPrice_) { productPrice = productPrice_; }

    ProductType getProductType() const { return productType; }
    void setProductType(const ProductType &productType_) { productType = productType_; }

    std::string getOrderCode() const { return orderCode; }
    void setOrderCode(const std::string &orderCode_) { orderCode = orderCode_; }

    short getTimeDuration() const { return timeDuration; }
    void setTimeDuration(short timeDuration_) { timeDuration = timeDuration_; }

};

#endif // ORDER_H