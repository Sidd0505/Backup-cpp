#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include"VehicleType.h"

class Vehicle
{
private:
    int _id;
    std::string _model_name;
    float _price;
    VehicleType _type;

public:

    Vehicle(int id, std::string model, float price, VehicleType type);
    
    // 1) DEFAULT CONSTRUCTOR(deleted default constructors)
    Vehicle() = delete;

    // 2) Copy Constructor(deleted copy constructor)
    Vehicle(const Vehicle &) = delete;

    // 3)  copy assignment operator
    Vehicle &operator=(const Vehicle &) = delete;

    // 4)  move constructor
    Vehicle(Vehicle &&) = delete;

    //5) move assignment
    Vehicle& operator = (Vehicle&&) = delete;

    // 6) Destructor
    ~Vehicle() = default;

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }
};

#endif // VEHICLE_H
