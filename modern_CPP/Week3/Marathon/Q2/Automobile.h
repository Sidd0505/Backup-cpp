#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include<iostream>
#include"AutomobileType.h"

class Automobile{
    private:
    std::string _id;
    AutomobileType _type;
    float _price;
    int _seat_count;
    int _engine_horsepower;

    public:

    float CalculateGST();

    Automobile() = default;

    ~Automobile() = default;

    Automobile (Automobile&) = delete;

    Automobile (Automobile&&) = delete;

    Automobile&  operator = (Automobile&) = delete;

    Automobile& operator = (Automobile&&) = delete;

    Automobile(std::string id, AutomobileType type, float price, int seat_count, int engine_horsepower);

    std::string id() const { return _id; }

    AutomobileType type() const { return _type; }

    float price() const { return _price; }

    int seatCount() const { return _seat_count; }

    int engineHorsepower() const { return _engine_horsepower; }

    friend std::ostream &operator<<(std::ostream &os, const Automobile &rhs);

};


#endif // AUTOMOBILE_H
