#ifndef CAR_H
#define CAR_H

#include"Manufacturer.h"
#include<iostream>

class Car
{
private:

Manufacturer _manufacturer;
std::string _model;
int _salesUnit;
int _rescaleValue;
float _price;
int _horsepower;

public:

    Car( Manufacturer manufacturer,std::string model,int salesUnit,int rescaleValue,float price,int horsepower);

    Car() = default;

    Car(Car &) = delete;

    Car &operator=(Car &) = delete;

    Car &operator=(Car &&) = delete;

    Car(Car &&) = delete;

    ~Car() {}

    Manufacturer manufacturer() const { return _manufacturer; }

    std::string model() const { return _model; }

    int salesUnit() const { return _salesUnit; }

    int rescaleValue() const { return _rescaleValue; }

    float price() const { return _price; }

    int horsepower() const { return _horsepower; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

#endif // CAR_H
