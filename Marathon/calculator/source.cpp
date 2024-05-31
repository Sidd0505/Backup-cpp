#include<iostream>
#include"header.h"

Conversion::Conversion()
{
    xdistance =20;
    ydistance = 40;

}

Conversion::Conversion(float xdist, float ydist)
{
    xdistance = xdist;
    ydistance = ydist;
}

Conversion Conversion::operator+(Conversion &c1)
{
    Conversion obj;
    obj.xdistance = this->xdistance + c1.xdistance;
    obj.ydistance = this->ydistance+ c1.ydistance;
    return obj;
}

Conversion Conversion::operator+(Conversion&)
{
    int n =10;
    Conversion obj;
    xdistance = this->xdistance +n;
    return obj;
}
Conversion &Conversion::operator++() // pre
{
    ++this->xdistance;
    ++this->ydistance;
    return *this;
}

Conversion Conversion::operator++(int) // post
{
    Conversion temp = *this;
    this->xdistance++;
    this->ydistance++;
    return temp;
}

Conversion Conversion::operator==(Conversion &c2)
{
    Conversion obj;
    obj.xdistance = this->xdistance == c2.xdistance;
    obj.ydistance = this->ydistance == c2.ydistance;
 
    return obj;
}

