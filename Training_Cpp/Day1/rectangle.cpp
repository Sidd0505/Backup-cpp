#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
    int length,width;

    public:
    Rectangle()
    {
        length = 6;
        width = 10;
    }
    // parameterized constructor
    Rectangle(int l, int b) :length(l),width(b)
    {}

    Rectangle add(Rectangle &r3){
            Rectangle sumobj;
            sumobj.length = this->length+r3.length;
            sumobj.width = this->width+r3.width;
            return sumobj;

    }
    void display()
    {
        cout << "Length is :" << length<<endl;
        cout << "Breadth is :" << width<<endl;
    }
    
    void area()
    {
        std::cout<<"The area of the rectangle is :"<<length*width;
    }         
    
};

int main()
{
    Rectangle r1(6,10);
    r1.display();
    Rectangle r2(4,7);
    r2.display();
    Rectangle r3 = r1.add(r2);
    r3.display();
    Rectangle r4;
    r1.area();
    r2.area();
}