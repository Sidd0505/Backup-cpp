#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <memory>

#include "carType.h"
#include "Engine.h"

class Car
{
private:
    std::string carId;
    std::string carBrand;
    carType _type;
    std::shared_ptr<Engine> carEngine;
    float carPrice;

public:
    Car(/* args */) = default;
    Car(std::string id, std::string brand, carType type, std::shared_ptr<Engine> engine, float price);
    ~Car() = default;

    std::string getCarId() const { return carId; }

    std::string getCarBrand() const { return carBrand; }

    carType type() const { return _type; }

    std::shared_ptr<Engine> getCarEngine() const { return carEngine; }

    float getCarPrice() const { return carPrice; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

#endif // CAR_H
