#include "Hotel.h"

std::ostream &operator<<(std::ostream &os, const hotel &rhs) {
    os << "_name: " << rhs._name
       << " _rooms: " << rhs._rooms
       << " _members: " << rhs._members
       << " _type: " << static_cast<int> (rhs._type);
    return os;
}

hotel::hotel(std::string name, int rooms, int members, HotelType type)
    :_name(name), _rooms(rooms), _members(members), _type(type)
{
}
