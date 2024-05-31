#include<iostream>

class Rectangle
{
    int length,width;
    public:
    Rectangle();
    Rectangle(int,int);
    void add(Rectangle &);
    void sub(Rectangle &);
    void display();
    void area();
    Rectangle operator+(Rectangle &);
};