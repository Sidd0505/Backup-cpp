#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(std::string name, std::string id, float salary, std::string project_name, std::string employee_location, GradeType type, int bonus_percent)
                : Employee(name, id, salary), _project_name(project_name), _employee_location(employee_location), _type(type), _bonus_percent(bonus_percent)
{
    if(_bonus_percent>100 || _bonus_percent<0)
        std::cout<<"Enter the correct Bonus Percent.";
}

std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _project_name: " << rhs._project_name
       << " _employee_location: " << rhs._employee_location
       << " _type: " <<static_cast<int> (rhs._type)
       << " _bonus_percent: " << rhs._bonus_percent;
    return os;

}

/*
std::string GradeTypeToString(GradeType typee)
{
    switch(static_cast<int>(typee))
    {
        case 0: 
        {
            return "A";
                
        }
        case 1:
        {
            return "B";
            
        }
        case 2:
        {
            return "C";
            
        } 
        default:
            break; 
    }
}
*/

