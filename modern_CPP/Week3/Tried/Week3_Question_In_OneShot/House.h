#ifndef HOUSE_H
#define HOUSE_H

#include "HotelType.h"
#include <iostream>

class house{
    private:
    std::string _name;
    int _rooms;
    int _members;
    HotelType _type;
    //int _house_number;

    public:
    house() = delete;
    house(house&&) = delete;
    house(const house &) = delete;
    house &operator = (house &&) = delete;
    house &operator = (const house &) = delete;
    ~house() = default;

    house(std::string name, int rooms, int members, HotelType type);

    std::string name() const { return _name; }

    int rooms() const { return _rooms; }

    int members() const { return _members; }

    HotelType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const house &rhs);
    
};

#endif // HOUSE_H
