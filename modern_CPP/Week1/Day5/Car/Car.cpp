#include"Car.h"

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_CarId: " << rhs._CarId
       << " _CarBrand: " << rhs._CarBrand
       << " _CarPrice: " << rhs._CarPrice
       << " _CarType: " << static_cast<int>(rhs._Type)
       << " _CarEngine: " << *rhs._CarEngine;
    return os;
}

Car::Car(std::string CarId, std::string CarBrand, float CarPrice, CarType Type, std::shared_ptr<Engine> CarEngine)
    :_CarId(CarId),_CarBrand(CarBrand), _CarPrice(CarPrice),_Type(Type), _CarEngine(CarEngine)
{
}
