#include"HybridCar.h"




std::ostream &operator<<(std::ostream &os, const HybridCar &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _battery_capacity: " << rhs._battery_capacity
       << " _fuel_tank_capacity: " << rhs._fuel_tank_capacity;
    return os;
}

HybridCar::HybridCar(int id, std::string name, float price, VehicleType type, int capacity, int battery)
    :Vehicle(id, name, price, type), _fuel_tank_capacity(capacity), _battery_capacity(battery)
{
}

HybridCar::HybridCar(int id, std::string name, VehicleType type, int capacity, int battery)
    :Vehicle(id, name, type), _fuel_tank_capacity(capacity), _battery_capacity(battery)
{

}
