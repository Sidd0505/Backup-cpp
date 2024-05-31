#include"EvCar.h"

std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << "_battery_capacity: " << rhs._battery_capacity;
    return os;
}

EvCar::EvCar(std::string id, AutomobileType type, float price, int seat_count, int engine_horsepower, float battery_capacity)
        :  _battery_capacity(battery_capacity)
{
}
