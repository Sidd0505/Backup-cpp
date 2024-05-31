#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<list>


class Employee{
    private:
    std::string _name;
    std::string _id;
    float _salary;


    public:
    Employee(std::string name, std::string id, float salary);

    Employee() = default;
    ~Employee() = default;
    Employee(Employee&) = delete;
    Employee(Employee&&) = delete;
    // Employee operator= (Employee&) = delete;
    // Employee operator= (Employee&&) = delete;
   
    virtual float CalculateBonus() = 0;

    std::string name() const { return _name; }

    std::string id() const { return _id; }

    float salary() const { return _salary; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);


};

#endif // EMPLOYEE_H
