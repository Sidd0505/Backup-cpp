#include "Male.h"



Male::Male(std::string name, int age, std::string colour, Male_type type, FemaleWrapper femalewrap)
:_name(name),_age(age),_colour(colour),_type(type),_femalewrapper(femalewrap){
}

std::ostream &operator<<(std::ostream &os, const Male &rhs) {
    os << "_name: " << rhs._name
       << " _age: " << rhs._age
       << " _colour: " << rhs._colour
       << " _type: " << static_cast<int>(rhs._type)
       << " _femalewrapper: " << *rhs._femalewrapper.get();
    return os;
}
