#include"Car.h"

Car::Car( Manufacturer manufacturer,std::string model,int salesUnit,int rescaleValue,float price,int horsepower)
:_manufacturer(manufacturer),_model(model),_salesUnit(salesUnit),_rescaleValue(rescaleValue),_price(price),_horsepower(horsepower)
{

}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_manufacturer: " << (int)rhs._manufacturer
       << " _model: " << rhs._model
       << " _salesUnit: " << rhs._salesUnit
       << " _rescaleValue: " << rhs._rescaleValue
       << " _price: " << rhs._price
       << " _horsepower: " << rhs._horsepower;
    return os;
}
