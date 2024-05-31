#include"employee.h"

std::ostream &operator<<(std::ostream &os, const employee &rhs) {
    os << "_id: " << rhs._id;
    return os;
}



