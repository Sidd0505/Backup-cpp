#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H
#include "Employee.h"
#include <iostream>
#include "Grades.h"

class FullTimeEmployee : public Employee
{
    private:
        std::string _project_name;
        std::string _employee_location;
        Grades _grade;
        int _bonus_percent;

    public:
    FullTimeEmployee() = delete;
    FullTimeEmployee(const FullTimeEmployee&) = delete;
    FullTimeEmployee(FullTimeEmployee&&) = delete;
    FullTimeEmployee operator=(const FullTimeEmployee&) = delete;
    FullTimeEmployee operator=(FullTimeEmployee&&) = delete;
    ~FullTimeEmployee() = default;

    explicit FullTimeEmployee(std::string projectName, std::string loc, Grades grade,int bonus,std::string name, std::string id, float salary, std::shared_ptr<Department> dept);

    float CalculateBonus();

    std::string employeeLocation() const { return _employee_location; }

    std::string projectName() const { return _project_name; }

    Grades grade() const { return _grade; }

    int bonusPercent() const { return _bonus_percent; }

    friend std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs);
};
void checkBonus(int bonus);


#endif // FULLTIMEEMPLOYEE_H
