#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<cstring>

class Conversion
{
    float xdistance;
    float ydistance;
    int arr[5];

    public:
    Conversion();
    Conversion(float,float);
    Conversion(Conversion& );
    Conversion(float x, float y, int arr);
    float getx();
    float gety();
    float set_x(float);
    float set_y()
    Conversion Conversion::operator+(Conversion &);
    friend int Conversion::operator+(Conversion& );
    Conversion &Conversion::operator++();
    Conversion Conversion::operator++(int);
    Conversion Conversion::operator==(Conversion &);
    Conversion 

    ~Conversion();

};

#endif // HEADER_H
