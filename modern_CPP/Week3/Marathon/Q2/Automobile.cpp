#include<iostream>
#include"Automobile.h"

Automobile::Automobile(std::string id, AutomobileType type, float price, int seat_count, int engine_horsepower)
            : _id(id), _type(type), _price(price), _seat_count(seat_count), _engine_horsepower(engine_horsepower)
{
}

std::ostream &operator<<(std::ostream &os, const Automobile &rhs) {
    os << "_id: " << rhs._id
       << " _type: " <<static_cast<int>(rhs._type)
       << " _price: " << rhs._price
       << " _seat_count: " << rhs._seat_count
       << " _engine_horsepower: " << rhs._engine_horsepower;
    return os;
}

