#include "DeviceDriver.h"

DeviceDriver::DeviceDriver(std::string num, _release_quater q_type, float size)
:_version_number(num),_r_quater(q_type),_size(size)
{
}

std::ostream &operator<<(std::ostream &os, const DeviceDriver &rhs) {
    os << "_version_number: " << rhs._version_number
       << " _r_quater: " << static_cast<int>(rhs._r_quater)
       << " _size: " << rhs._size;
    return os;
}
