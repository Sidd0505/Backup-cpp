#ifndef EVCAR_H
#define EVCAR_H
#include <iostream>
#include"AutomobileType.h"
#include"Automobile.h"

class EvCar : public Automobile{
    private:
    float _battery_capacity;
    
public:

    EvCar() = default;

    ~EvCar() = default;

    EvCar (EvCar&) = delete;

    EvCar (EvCar&&) = delete;

    EvCar&  operator = (EvCar&) = delete;

    EvCar& operator = (EvCar&&) = delete;


    float batteryCapacity() const { return _battery_capacity; }

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);

    EvCar(std::string id, AutomobileType type, float price, int seat_count, int engine_horsepower, float battery_capacity);


};

#endif // EVCAR_H
