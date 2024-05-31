#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Department.h"
#include <memory>

class Employee
{
protected:
    std::string _name;
    std::string _id;
    float _salary;
    std::shared_ptr<Department> _department;
public:
    Employee() = default;
    Employee(const Employee&) = delete;
    Employee(Employee&&) = delete;
    
    // Employee operator=(const Employee&) = delete;
    // Employee operator=(Employee&&) = delete;

    ~Employee() = default;

    Employee(std::string& name,std::string& id, float& salary,std::shared_ptr<Department>& dept);

    float virtual CalculateBonus() = 0;

    std::string name() const { return _name; }

    std::string id() const { return _id; }

    float salary() const { return _salary; }

    std::shared_ptr<Department> department() const { return _department; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
