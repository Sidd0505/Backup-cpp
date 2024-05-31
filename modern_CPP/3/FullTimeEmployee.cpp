#include "FullTimeEmployee.h"
#include "functionalities.h"

FullTimeEmployee::FullTimeEmployee(std::string projectName, std::string loc, Grades grade,int bonus, std::string name, std::string id, float salary, std::shared_ptr<Department> dept)
:_project_name(projectName),_employee_location(loc),_grade(grade),_bonus_percent(bonus)
{
    checkBonus(_bonus_percent);
    _name = name;
    _id = id;
    _salary = salary;
    _department = dept;
}

void checkBonus(int bonus){
    if(bonus<1 || bonus>100){
        throw std::runtime_error("invalid Bonus");
    }
}





float FullTimeEmployee::CalculateBonus()
{
    if(_grade == Grades::A){
        return _bonus_percent * _salary;
    }
    else if(_grade == Grades::B){
        return _bonus_percent * (_salary * 0.02f);
    }
    else{
        return _bonus_percent * (_salary * 0.04f);
    }
}

std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs) {
       os <<"_name : " <<rhs._name<<"\n"
       <<"employee id : "<<rhs._id<<"\n"
       <<"salary : "<< rhs._salary<<"\n"
       << "project_name: " << rhs._project_name <<"\n"
       << "employee_location: " << rhs._employee_location<<"\n"
       << "grade: " << static_cast<int>(rhs._grade)<<"\n"
       << "bonus_percent: " << rhs._bonus_percent<<"\n"
       <<"Department: \n"
       <<"department id: "<<rhs.department()->id()<<"\n"
       <<"department size : "<<rhs.department()->size()<<"\n";
    return os;
}

