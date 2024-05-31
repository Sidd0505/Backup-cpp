#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape{
    public:
    void displayArea();

    Triangle();
    void getData();
};

#endif // TRIANGLE_H