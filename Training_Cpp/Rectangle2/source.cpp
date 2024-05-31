#include<iostream>
using namespace std;
#include<cstring>
#include"header.h"

Rectangle::Rectangle()
{
    length =20;
    width =10;
}

Rectangle::Rectangle(int a,int b)
{
    length =a;
    width =b;
}

Rectangle Rectangle::operator+(Rectangle &r1)
{
    Rectangle ans;
    ans.length = length + r1.length;
    ans.width = width + r1.width;
    return ans;
}

Rectangle Rectangle::operator-(Rectangle &r1)
{
    Rectangle ans;
    ans.length = length - ans.length;
    ans.width = width - ans.width;
    return ans;
}

void Rectangle::display()
{
    cout<<"The length is :"<<length<<std::endl;
    cout<<"The width is :"<<width<<std::endl;
}

bool Rectangle::operator==(Rectangle &r2)
{
    if(length ==r2.length)
        return true;
    else
        return false;
}

Rectangle& Rectangle::operator++()
{
    std::cout<<"THis is pre increment."<<std::endl;
    ++this->length;
    ++this->width;
    return (*this);
}
//local object can't return address
//when we post increment then give a dummy parameter which is int which will highlight its a code for post.

Rectangle Rectangle::operator++(int)
{
    std::cout<<"THis is post increment"<<std::endl;
    Rectangle obj1=*this;
    this->length++;
    this->width++;
    return obj1;
}

Rectangle Rectangle::operator-()
{
    std::cout<<"This is unary minus."<<std::endl;
    Rectangle obj1;
    //this->length;
    obj1.length =-length;
    obj1.width =-width;
    return obj1;

}

//internally how it works
/*r3 = r1+10 
then 
 r1.operator+(10)
 that is why we say that r1 is calling the operator+ function.
*/
Rectangle Rectangle::operator+(int x)
{
    Rectangle temp;
    std::cout<<"The intger is adding in the object."<<std::endl;
    temp.length = this->length+x;
    temp.width = this->width+x;
    return temp;
}
//constant cant call object
/*we cant do r3 =10 +r1;
because internally it will be like this
10.operator+(r1)
the constant value can't call the object 
so we use FRIEND function.
*/
Rectangle operator+(int n,Rectangle &r3)
{
    std::cout<<"The int10eger is firstly adding ..."<<std::endl;
    Rectangle sumobj;
    sumobj.length = 10+r3.length;
    sumobj.width =10+r3.width;
    return sumobj;
}

void operator<<(std::ostream &os,Rectangle &r)
{
    os<<r.length;
    os<<r.width;
}

//cascading 

//std::ostream& operator<<(std::ostream &,Rectangle &);