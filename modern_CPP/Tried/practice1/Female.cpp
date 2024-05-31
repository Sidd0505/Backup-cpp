#include "Female.h"

Female::Female(std::string name, int age, std::string colour, Female_type type)
:_name(name),_age(age),_colour(colour),_type(type){
}
std::ostream &operator<<(std::ostream &os, const Female &rhs) {
    os << "_name: " << rhs._name
       << " _age: " << rhs._age
       << " _colour: " << rhs._colour
       << " _type: " << static_cast<int>(rhs._type);
    return os;
}
