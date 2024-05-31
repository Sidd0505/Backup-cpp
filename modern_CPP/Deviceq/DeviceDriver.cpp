#include"DeviceDriver.h"


std::ostream &operator<<(std::ostream &os, const DeviceDriver &rhs) {
    os << "_version_number: " << rhs._version_number
       << " _quarter: " << static_cast<int>(rhs._quarter)
       << " _size_in_bytes: " << rhs._size_in_bytes;
    return os;
}

DeviceDriver::DeviceDriver(std::string version_number, _release_quarter quarter, float size_in_bytes)
            :_version_number(version_number), _quarter(quarter), _size_in_bytes(size_in_bytes)
{
}
