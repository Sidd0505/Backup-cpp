#include"PetrolCar.h"
//cnstr A to cnstr B of same class is delegation
PetrolCar::PetrolCar(int id, std::string name, float price, VehicleType type, int capacity)
    :Vehicle(id, name, price, type), _fuel_tank_capacity(capacity)   //not a delegation going to child from parent
{

}

PetrolCar::PetrolCar(int id, std::string name, VehicleType type, int capacity)
 :Vehicle(id, name, type), _fuel_tank_capacity(capacity)
{

}

std::ostream &operator<<(std::ostream &os, const PetrolCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _fuel_tank_capacity: " << rhs._fuel_tank_capacity;
    return os;
}
