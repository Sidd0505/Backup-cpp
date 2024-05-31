#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>

/*
    Class name must be PASCALCASE
    e.g. Employee

*/
class Employee
{
private:
/*
    data members name

    a) prefix with underscore e.g.: _id
    b) camelcase : e.g. employeeOfficialName

*/
    int _id;
    std::string employeeName;
    float _salary;
public:
    Employee(int id, std::string name, float salary)
        :_id(id),employeeName(name),_salary(salary){}

    /*
            Member functions in PascalCase
    
    */
   virtual void  CalculateTax() =0;
    ~Employee();

    float salary() const { return _salary; }




};


/*

 { return employeeName; }

public:
    int id() const { return _id; }

    File name should be in PascalCase.
*/

#endif // EMPLOYEE_H

