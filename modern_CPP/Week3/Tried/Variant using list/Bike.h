#include<iostream>
#include<string>
#include"VehicleType.h"

class Bike{
    public: 

    Bike() = default;
    Bike(Bike&&) = default;
    Bike( const Bike &) = default;
    Bike& operator= (Bike&&) = default;
    Bike &operator = (const Bike &) = default;
    ~Bike() = default;

    std::string id() const { return _id; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    inline friend std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
        os << "_id: " << rhs._id
           << " _price: " << rhs._price;
        
        return os;
    }

    Bike(std::string id, float price, VehicleType type);     


    private:
    std::string _id;
    float _price;
    VehicleType _type;
};