#include "DebitCard.h"

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs)
{
    std::string typee;
    switch (static_cast<int>(rhs._Type))
    {
    case 0:
        typee = "REGULAR";
        break;

    case 1:
        typee = "GOLD";
        break;

    case 2:
        typee = "PLATINUM";
        break;
    default:
        break;
    }
    os << "_Cvv: " << rhs._Cvv
       << " _Name: " << rhs._Name
       << " _ExpiryDate: " << rhs._ExpiryDate
       << " _Type: " << typee;
    return os;
}

DebitCard::DebitCard(int Cvv, std::string Name, std::string ExpiryDate, DebitCardType Type)
    : _Cvv(Cvv), _Name(Name), _ExpiryDate(ExpiryDate), _Type(Type)
{
}
