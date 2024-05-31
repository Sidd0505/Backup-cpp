#include<iostream>
#include"header.h"
using namespace std;


Rectangle::Rectangle()
{
    length=10;
    width =5;
}

Rectangle::Rectangle(int a,int b)
{
    length =a;
    width =b;
}

void Rectangle::add()
{
    cout<<"The addition is :"<<length+width;
}

void Rectangle::sub()
{
    cout<<"The subtraction is :"<<length-width;
}

void Rectangle::display()
{
    cout<<"The length is "<<length<<endl;
    cout<<"The width is :"<<width<<endl;
}
int Rectangle::getlentgh(){
    return length;
}
int Rectangle::getwidth(){
    return width;
}

void Rectangle::displayarea()
{
    cout<<"The area is :"<<length*width;
}

