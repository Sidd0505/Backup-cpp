#include "Rectangle.h"
#include <iostream>

Rectangle ::Rectangle(){
    std::cout<<"\nin Rectangle()";
    x=0;
    y=0;
}

void Rectangle::getData(){
    std::cout<<"\nEnter length: ";
    std::cin>>x;
    std::cout<<"\nEnter width: ";
    std::cin>>y;
}

// void Rectangle :: displayArea(){
//     std::cout << "\nArea of Rectangle  =  :" << x * y;
// }