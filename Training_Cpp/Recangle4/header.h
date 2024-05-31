#include<iostream>

class Rectangle
{
    private:
    int length,width;
    public:
    Rectangle();
    Rectangle(int,int);
    void add(Rectangle &);
    int getlength();
    int getwidth();
    void sub(Rectangle, Rectangle);
    void display();
};
void addition(Rectangle&,Rectangle&);