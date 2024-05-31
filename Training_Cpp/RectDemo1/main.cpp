#include<iostream>
#include"header.h"
int main()
{
    Rectangle r1(10,20);
    r1.display();
    Rectangle r2(30,40);
    r2.display();
    r1.add(r2);
    r1.sub(r2);
    Rectangle r3;
    r3 = r1 +r2;
    r3.display();
}