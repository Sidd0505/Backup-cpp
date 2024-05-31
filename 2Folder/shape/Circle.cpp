#include "Circle.h"
#include <iostream>
#define PI 3.14
Circle:: Circle()
{
    x=0;
    y=0;
}

 Circle::~ Circle()
{

}

void Circle:: getData(){
    y = 0;
    std::cout<<"\nEnter Radius : ";
    std::cin>>x;
}

void Circle::displayArea()
{
    std::cout<<"\nArea Of Circle : "<< PI * x * x;  ; 
}