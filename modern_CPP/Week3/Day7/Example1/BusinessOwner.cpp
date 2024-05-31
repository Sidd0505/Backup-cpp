#include"BusinessOwner.h"

std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs) {
    os << "_expense: " << rhs._expense
       << " _revenue: " << rhs._revenue
       << " _registerBusinessName: " << rhs._registerBusinessName
       << " _type: " << static_cast<int> (rhs._type);
    return os;
}

BusinessOwner::BusinessOwner(float expense, float revenue, std::string registerBusinessName, BusinessType type)
            : _expense(expense), _revenue(revenue), _registerBusinessName(registerBusinessName), _type(type)
{
}
