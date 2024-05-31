#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>

#include<iostream>
#include"employee.h"

class Manager:public Employee{
    double incentive;
    int numberofsubordinates;

    public:
    Manager();
    Manager(int, std::string, double, double, int);

    void accept();
    void display();
    double calNetSalary();
    double calculateCommission();

    //void print();

    ~Manager();
};

#endif // MANAGER_H
