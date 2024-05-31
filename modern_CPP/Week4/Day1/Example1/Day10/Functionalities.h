#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Employee.h"
#include<iostream>
#include<memory>
#include<vector>
#include<functional>


using Pointer = std::shared_ptr<Employee>;
//Average salary type for a fun that takes lvalue reference of container that returns float
using Container = std::vector<Pointer>;


//declaration
extern std::function< float(Container&)> AverageSalary;

extern std::function< float(Container&,int)> SalaryGivenId;


/*
    identifier AverageSalary is a variable name(name of an object)

    If a variable is declared in a file but has to be initialized 
    in a seperate file, such variable must be mark as "extern"


*/












#endif // FUNCTIONALITIES_H
