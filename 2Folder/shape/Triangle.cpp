#include "Triangle.h"
#include <iostream>

Triangle :: Triangle(){
    std::cout<<"\nin Triangle()";
    x = 3.5;
    y = 1.0;
}

void Triangle::getData(){
    std::cout<<"\nEnter height: ";
    std::cin>>x;
    std::cout<<"\nEnter base: ";
    std::cin>>y;
}

void Triangle::displayArea()
{
    std::cout<<"\nArea of Triangle : "<< ( x * y) / 2;
}