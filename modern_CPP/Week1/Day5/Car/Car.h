#ifndef CAR_H
#define CAR_H

#include<iostream>
#include"CarType.h"
#include<vector>
#include"Engine.h"
#include<memory>

//#include<cstring>

class Car
{
    private:
    std::string _CarId;
    std::string _CarBrand;
    float _CarPrice;
    CarType _Type;
    std::shared_ptr<Engine>_CarEngine;


    public:
    Car() = default;

    Car(std::string CarId,std::string CarBrand, float CarPrice,CarType Type, std::shared_ptr <Engine> CarEngine);

    Car(const Car&) = delete;

    Car(const Car&&) = delete;

    Car& operator = (const Car&) = delete;    

    Car& operator = (const Car&&) = delete;

    std::string carId() const { return _CarId; }
    void setCarId(const std::string &CarId) { _CarId = CarId; }

    std::string carBrand() const { return _CarBrand; }
    void setCarBrand(const std::string &CarBrand) { _CarBrand = CarBrand; }

    float carPrice() const { return _CarPrice; }
    void setCarPrice(float CarPrice) { _CarPrice = CarPrice; }

    std::shared_ptr<Engine>carEngine() const { return _CarEngine; }
    void setCarEngine(const std::shared_ptr<Engine>&CarEngine) { _CarEngine = CarEngine; }

    enum class CarType carType() const { return _Type; }
    void setCarType(const enum class CarType &CarType) { _Type = CarType; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    

};

#endif // CAR_H
