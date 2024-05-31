#include"Developer.h"

std::ostream &operator<<(std::ostream &os, const Developer &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _experience_years: " << rhs._experience_years
       << " _skill: " << rhs._skill;
    return os;


}
