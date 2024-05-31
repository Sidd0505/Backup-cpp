#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Employee.h"
#include"FullTimeEmployee.h"
#include<memory>

using Pointer = std::shared_ptr<FullTimeEmployee>;
using Container = std::list<Pointer>;

void CreateObjects(Container& data);

void DisplayVirtualFunction(Container& data);

void display_calculate_bonus(Container &data);

Pointer HighestSalaryPerson(Container& data);


#endif // FUNCTIONALITIES_H
