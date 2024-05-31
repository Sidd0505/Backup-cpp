#include<iostream>
#include"header.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(int a,int b)
{
    length=a;
    width =b;
}

int Rectangle::getlength()
{
    return length;
}

int Rectangle::getwidth()
{
    return width;
}

void Rectangle::add(Rectangle &r3)
{
    std::cout<<"THe addition of lengths are :"<<r3.length+length<<std::endl;
}

// void Rectangle::sub()
// {
//     std::cout<<"THe addition of lengths are :"<<length-getlength()<<std::endl;
// }

void Rectangle::display()
{
    std::cout<<"The length of recttangle is :"<<length<<" and the width of the rectangle is :"<<width<<std::endl;
}

void addition(Rectangle &r3,Rectangle &r4)
{
    std::cout<<"THe addition of lengths are :"<<r3.getlength()+r4.getlength()<<std::endl;
}