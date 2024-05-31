#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include"GradeType.h"
#include"Employee.h"
#include <ostream>

class FullTimeEmployee : public Employee
{
    private:
    std::string _project_name;
    std::string _employee_location;
    GradeType _type;
    int _bonus_percent;


    public:
    FullTimeEmployee() = default;
    ~FullTimeEmployee() = default;
    FullTimeEmployee(FullTimeEmployee&) = delete;
    FullTimeEmployee(FullTimeEmployee&&) = delete;
    // FullTimeEmployee operator= (FullTimeEmployee&) = delete;
    // FullTimeEmployee operator= (FullTimeEmployee&&) = delete;

    FullTimeEmployee(std::string name, std::string id, float salary, std::string project_name, std::string employee_location, GradeType type, int bonus_percent);
    std::string projectName() const { return _project_name; }
    std::string employeeLocation() const { return _employee_location; }
    GradeType type() const { return _type; }
    int bonusPercent() const { return _bonus_percent; }

    friend std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs);
   
    float CalculateBonus() override;
   };
#endif // FULLTIMEEMPLOYEE_H
