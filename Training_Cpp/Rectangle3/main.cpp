#include<iostream>
#include"header.h"
using namespace std;

int main()
{
    Rectangle r1;
    
    Rectangle r2(7,8);
    std::cout<<r1.getlentgh()+r2.getlentgh();
    r1.displayarea();
    r2.displayarea();
}