#include "Developer.h"

Developer::Developer(std::string id, std::string name, float salary, int years, Skills sk)
    :_id(id), _name(name), _salary(salary), _experience_years(years), _skill(sk)
{
}

float Developer::CalculateBonus()
{
    if (_experience_years < 5)
    {
        return 0.1f * _salary;
    }
    else
    {
        return 0.2f * _salary;
    }
}

std::ostream &operator<<(std::ostream &os, const Developer &rhs)
{
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _experience_years: " << rhs._experience_years;
    return os;
}
