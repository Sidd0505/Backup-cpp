#include"Sensor.h"

std::ostream &operator<<(std::ostream &os, const Sensor &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _Type: " << static_cast<int>(rhs._Type)
       << " _reading: " << rhs._reading;
    return os;
}

Sensor::Sensor(int id, std::string name, SensorType Type, int reading)
        : _id(id), _name(name), _Type(Type)
{
    if(reading >0 && reading <20 && reading %10 !=0)
        _reading = reading;
    else
        throw std::runtime_error("Enter another value of reading");
  
}
