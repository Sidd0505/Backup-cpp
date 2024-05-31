#include "Car.h"

Car::Car(std::string id, std::string brand, carType type, std::shared_ptr<Engine> engine, float price)
    : carId(id), carBrand(brand), _type(type), carEngine(engine), carPrice(price)
{
}
std::ostream &operator<<(std::ostream &os, const Car &rhs)
{
    os << "carId: " << rhs.carId
       << " carBrand: " << rhs.carBrand
       << " _type: " << static_cast<int>(rhs._type)
       << " carEngine: " << *rhs.carEngine
       << " carPrice: " << rhs.carPrice;
    return os;
}
