#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "Shape.h"
class  Circle:public Shape
{
public:
     Circle(/* args */);
    ~ Circle();
    void getData();
    void displayArea();
};

#endif // CIRCLE_H