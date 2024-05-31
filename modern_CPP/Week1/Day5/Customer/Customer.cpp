#include "Customer.h"



std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_id: " << rhs._id
       << " name: " << rhs._name
       << " _age: " << rhs._age
       << " _type: " << static_cast<int>(rhs._type)
       << " _card: " << *rhs._card;
    return os;
}

Customer::Customer(int id, std::string name, int age, CustomerType type, std::shared_ptr<Debitcard> card)
{
}
