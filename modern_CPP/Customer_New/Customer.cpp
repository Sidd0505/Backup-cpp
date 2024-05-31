#include <iostream>
#include "Customer.h"

std::ostream &operator<<(std::ostream &os, const Customer &rhs)
{

    std::string typee;

    switch (static_cast<int>(rhs._Type))
    {
    case 0:
        typee = "REGULAR";
        break;

    case 1:
        typee = "ELITE";
        break;

    default:
        break;
    }

    os << "Id: " << rhs._Id
       << " Name: " << rhs._Name
       << " _Age: " << rhs._Age
       << " _Type: " << typee
       << *(rhs._Card);
    return os;
}
Customer::Customer(int Id, std::string Name, int Age, CustomerType Type, std::shared_ptr<DebitCard> Card)
    : _Id(Id), _Name(Name), _Age(Age), _Type(Type), _Card(Card)
{
}
