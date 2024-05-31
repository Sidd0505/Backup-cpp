#include<iostream>
#include"Functionalities.h"
#include"Order.h"

int main(){
    Container data;

    CreateObjects(data);


    std::cout << "\n Id with Highest Discount: "<< IdwithHighestDiscount(data);

    try{
    Order_type type = ReturnTypeofOrder(data,"Order 2");
    std::cout << "\n Function ReturnTypeofOrder(): "<< Display_Enum_value(type);
    }

    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }

    try{
        std::cout<<"\nAverage value :"<<Average_Value(data);
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }

    std::cout<< "\n Enter First Nth instance : ";
    int n;
    std::cin>>n;  
    
    try{
        Container ans=FirstNinstances_data(data,n);
        for(const pointer &ptr:ans){
            std::cout<<*ptr;
        }
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }

}