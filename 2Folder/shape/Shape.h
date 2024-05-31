#ifndef SHAPE_H
#define SHAPE_H

class Shape{
    protected:
    double x;
    double y;
    public:
    virtual void getData();
    virtual void displayArea();
    Shape();
    Shape(int &a, int &b);
};

#endif // SHAPE_H