#include "Order.h"

int Order ::count = 100000;

void Order::accept()
{
    std::cout<<"\nEnter Product Type:";
    productType = giveProductType();
    std::cout<<"\nEnter time Duration:";
    std::cin>>timeDuration;
}

ProductType Order::giveProductType(){
    int prodTypeChoice;
    std::cout<<"\n1.Furniture \n2.Electronics \n3.Toys \n";
    std::cout<<"\nChoose Product type:";
    std::cin>>prodTypeChoice;
    switch (prodTypeChoice)
    {
        case 1:
            return ProductType::FURNITURE;
            break;
        
        case 2:
            return ProductType::ELECTRONICS;
            break;

        case 3:
            return ProductType::TOYS;
    }
    return NA;
}
Order::Order()
{
    std::cout<<"\nIn Order()";
    orderCode = count++;
    productType = ProductType ::FURNITURE;
    timeDuration = 100;
}

Order::~Order()
{
    std::cout<<"\nIn ~Order()";
}

Order::Order(std::string oc, ProductType pt, short td)
{
    orderCode = oc;
    productType = pt;
    timeDuration = td;
}