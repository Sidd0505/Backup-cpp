#include<iostream>
#include"header.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(int a,int b)
{
    length =a;
    width =b;
}

void Rectangle::add(Rectangle &r3)
{
    std::cout<<"The addition of length is :"<<this->length+r3.length<<std::endl;
    std::cout<<"The addition of width is :"<<this->width+r3.width<<std::endl;
}

void Rectangle::sub(Rectangle &r4)
{
    std::cout<<"The subtraction of lengths are :"<<length-r4.length<<std::endl;
    std::cout<<"Th subtraction of widths are :"<<width-r4.width<<std::endl;
}

void Rectangle::area()
{
    std::cout<<"The area of the Rectangle is :"<<length*width<<std::endl;
}

void Rectangle::display()
{
    std::cout<<"The length is :"<<length<<std::endl;
    std::cout<<"The width is :"<<width<<std::endl;
}

Rectangle Rectangle::operator+(Rectangle &r3)
{
    Rectangle ans;
    std::cout<<length<<std::endl;
    std::cout<<width<<std::endl;
    ans.length = length + r3.length;
    ans.width = width + r3.width;
    return ans;
}