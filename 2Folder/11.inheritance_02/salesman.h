#ifndef SALESMAN_H
#define SALESMAN_H

#include<iostream>
#include"employee.h"

class Salesperson:public Employee{
    double salesamount;
    double commrate;

    public:
    Salesperson();
    Salesperson(int, std::string, double, double, double);

    void accept();
    void display();
    double calNetSalary();
    double calculateCommission();

    void print(){

    }

    ~Salesperson();
};

#endif // SALESMAN_H
