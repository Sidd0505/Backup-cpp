#include<iostream>
#include"header.h"

int main()
{
    rect r1(1, 2);
    rect r2(3, 4);
    rect r3 = r1.add(r2);
    rect r4 = r1.sub(r2);
    r3.display();
    r4.display();
}          