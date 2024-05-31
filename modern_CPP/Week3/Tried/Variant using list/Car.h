#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
#include"VehicleType.h"

class Car{
    public:
    Car() = default;
    Car (Car&&) = default;
    Car (const Car &) = default;
    Car& operator= (Car&&) = default;
    Car &operator = (const Car &) = default;
   
    ~Car() = default;

    std::string id()const {return _id;}
    float price() const {return _price;}
    VehicleType type() const {return _type;}

    Car(std::string id, float price, VehicleType type);

   inline friend std::ostream& operator<<(std::ostream& os, const Car& rhs){
            os << "Car {Id :"<< rhs._id << " Price : "<< rhs._price;
            return os; 
        }
       
    private:
        std::string _id;
        float _price;
        VehicleType _type;

};

#endif // CAR_H
