#include"Code_Tester.h"

std::ostream &operator<<(std::ostream &os, const Code_Tester &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _experience_years: " << rhs._experience_years
       << " _skill: " << rhs._skill;
    return os;
}

