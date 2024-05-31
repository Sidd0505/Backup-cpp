#include<iostream>
#include"header.h"

int main()
{
    Rectangle r1(10,5);
    r1.display();
    Rectangle r2(20,15);
    r2.display();
    Rectangle r3();
    r1.add(r2); //Locally declare then use this function
    addition(r1,r2);  //Globally declare the function then use this
    
    
}