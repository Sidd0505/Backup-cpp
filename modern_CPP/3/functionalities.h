#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include <list>
#include <iostream>
#include <memory>
#include "FullTimeEmployee.h"

// list of pointers of type FullTimeEmployee
using Container = std::list<std::shared_ptr<FullTimeEmployee>>;

/*
    function to craete FullTimeEmployee Objects
*/
void CreateFullTimeEmployees(Container& data);

/* 
    function to display Bonus for each object of Conatiner
*/
void DisplayBonus(Container& data);

/*
    function to display grades
*/
// std::string DisplayGrades(Grades g)

/*
    function to display employees whose salary is higest
*/
void DisplayHighestSalaryEmployee(Container& data);

/*
    function to find employee location (string) by passing grade
*/
std::list<std::string> FindLocationByGrade(Container& data,Grades grade);

/* 
    function to find project name(string ) by passing id
*/
std::string FindProjectName(Container& data,std::string id);
#endif // FUNCTIONALITIES_H
