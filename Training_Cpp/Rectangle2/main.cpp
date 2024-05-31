#include<iostream>
#include"header.h"

int main()
{
    Rectangle r1(15,20);
    r1.display();
    Rectangle r2(10,5);
    r2.display();
    Rectangle r3 =r1+r2;
    r3.display();
 // r4.display();
    Rectangle r4 =r1-r2;
    r4.display();
    ++r1;
    r1.display();
    Rectangle r5 = r1+r2;
    r5.display();
    Rectangle r6=-r1;
    r6.display();
    r1.display();
    Rectangle r7 = r2+10;
    r7.display();
    Rectangle r8 = 10 +r1;
    std::cout<<r8;

}