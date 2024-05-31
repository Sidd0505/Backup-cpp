#ifndef DEVICEDRIVER_H
#define DEVICEDRIVER_H

#include"_release_quarter.h"
#include <iostream>


class DeviceDriver
{
    private:
    std::string _version_number;
    _release_quarter _quarter;
    float _size_in_bytes;

    public:

    DeviceDriver() = default;

    ~DeviceDriver() = default;

    DeviceDriver(std::string version_number, _release_quarter quarter, float size_in_bytes);

    DeviceDriver(DeviceDriver&) = delete;

    DeviceDriver (DeviceDriver&&) = delete;

    DeviceDriver& operator = (DeviceDriver&) = delete;

    DeviceDriver& operator = (DeviceDriver&&) = delete;

    std::string versionNumber() const { return _version_number; }
    void setVersionNumber(const std::string &version_number) { _version_number = version_number; }

    _release_quarter quarter() const { return _quarter; }
    void setQuarter(const _release_quarter &quarter) { _quarter = quarter; }

    float sizeInBytes() const { return _size_in_bytes; }
    void setSizeInBytes(float size_in_bytes) { _size_in_bytes = size_in_bytes; }

    friend std::ostream &operator<<(std::ostream &os, const DeviceDriver &rhs);

};

#endif // DEVICEDRIVER_H
