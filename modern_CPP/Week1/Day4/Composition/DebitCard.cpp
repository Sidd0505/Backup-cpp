#include "DebitCard.h"

Debitcard::Debitcard(int cvv, std::string name, std::string expiry, DebitCardType type)
{
}
std::ostream &operator<<(std::ostream &os, const Debitcard &rhs) {
    os << "_cvv: " << rhs._cvv
       << " _name: " << rhs._name
       << " _expiry: " << rhs._expiry
       << " type: " << static_cast<int>(rhs.type);
    return os;
}
