#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include "HotelType.h"

class hotel{
    private:
    std::string _name;
    int _rooms;
    int _members;
    HotelType _type;

    public:
    hotel() = delete;
    hotel(hotel&&) = delete;
    hotel(const hotel &) = delete;
    hotel &operator = (hotel &&) = delete;
    hotel &operator = (const hotel &) = delete;
    ~hotel() = default;

    void number_of_rooms_left() {
        int lefted_rooms = _rooms;
        int _person_for_stay = _members;
        while(lefted_rooms!=0){
            _members-=2;
            _rooms--;
        }
        std::cout<<"LEFTED ROOMS ARE: "<<lefted_rooms;
    }

    hotel(std::string name, int rooms, int members, HotelType type);

    std::string name() const { return _name; }

    int rooms() const { return _rooms; }

    int members() const { return _members; }

    HotelType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const hotel &rhs);    

};

#endif // HOTEL_H
