#ifndef FUNCTIONALITES_H
#define FUNCTIONALITES_H

#include<iostream>
#include<vector>
#include<memory>
#include"Employee.h"
#include"BusinessOwner.h"
#include<variant>

//I need alias for shared pointer to Employee
using EmpPointer = std::shared_ptr<Employee>;

//I need alias for shared pointer to BusinessOwner
using BusinessPointer = std::shared_ptr<BusinessOwner>;

//I need alias for variants of above 2 pointers
using VType = std::variant<EmpPointer, BusinessPointer>;

//I finally would want a container of above variants
using Container = std::vector<VType>; 

void CreateObjects(Container& data){
    data.emplace_back(
        std::make_shared<Employee>()
    );

    data.emplace_back(
        std::make_shared<BusinessOwner>()
    );
}
#endif // FUNCTIONALITES_H

// If u want to access anything from variant then you must use VISIT function.