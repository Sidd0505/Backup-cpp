#include<iostream>
#include"emp.h"

class Salesperson: public Employee
{
    double salesamount;
    double commrate;

    public:
    Salesperson();
    void display();
    
};