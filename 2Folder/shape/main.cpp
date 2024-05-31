#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

int main(){
    Triangle t;
    t.getData();
    t.displayArea();

    Rectangle r ;
    r.getData();
    r.displayArea();

    // Shape s;
    // s.getData();
    // s.displayArea();

    Shape *sptr = new Triangle;
    sptr->displayArea();
    
    sptr = new Rectangle;
    sptr->getData();
    sptr->displayArea();

    sptr = new Circle;
    sptr->getData();
    sptr->displayArea();
    delete sptr;


}