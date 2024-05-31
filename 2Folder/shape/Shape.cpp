#include "Shape.h"
#include <iostream>

Shape :: Shape(){
    x = 10;
    y =20;
}

Shape :: Shape(int &a,int &b){
    x = a;
    y = b;
}

void Shape :: getData(){
    std::cout<<"\nEnter x:";
    std::cin>>x;
    std::cout<<"\nEnter y:";
    std::cin>>y;
}

void Shape :: displayArea(){
    std::cout<<"\n X : "<<x;
    std::cout<<"\n Y : "<<y;
}
