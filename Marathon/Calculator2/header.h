#ifndef HEADER_H
#define HEADER_H

#include<iostream>
class Conversion
{
    float xdistance;
    float ydistance;
    int arr[3];
    public:
    Conversion();
    Conversion(Conversion&);
    
    Conversion(float , float , int arr);
    void set_arrayvalues();
    float get_x();
    float get_y();
    void set_x(float);
    void set_y(float);
    Conversion operator+(Conversion& );
    friend Conversion operator+(int x, Conversion &c1);
    Conversion &operator++();
    Conversion operator++(int);                         //post-increment
    float operator[](int );
    Conversion operator==(Conversion &r3);
    float operator()();
    void display();
    
    void display_arr();
    ~Conversion();
};
#endif // HEADER_H
