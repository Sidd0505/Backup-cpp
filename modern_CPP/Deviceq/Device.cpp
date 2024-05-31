#include "Device.h"

Device::Device(std::string device_id, _device_type type, int device_battery_level, std::shared_ptr<DeviceDriver> DeviceDriver)
        :_device_id(device_id), _type(type), _DeviceDriver(DeviceDriver)
{
    if(device_battery_level>0 && device_battery_level<100)
        _device_battery_level = device_battery_level;
    else
        std::cout<<"The battery is not appropriate";
    
    if(type == _device_type::INFORTAINMENT || type == _device_type::SAFETY)
        _battery_drain_factor = 0.25;
    
    if(type == _device_type::SAFETY)
        _battery_drain_factor = 0.5;

    if(device_battery_level >50)
        _battery_drain_factor = 0.4;
    
}

std::ostream &operator<<(std::ostream &os, const Device &rhs) {

    std::string typeee="";
    switch (static_cast<int>(rhs._type))
    {
        case 0:
        {
        typeee = "INFORTAINMENT";
        break;
        }
        case 1: 
        {
            typeee ="ACCESORY";
            break;
        } 
        case 2:
        {
            typeee = "SAFETY";
            break;
        }
        default:
        break;
    }

    os << "_device_id: " << rhs._device_id
       << " _type: " << typeee
       << " _device_battery_level: " << rhs._device_battery_level
       << " _DeviceDriver: " << *(rhs._DeviceDriver)
       << " _battery_drain_factor: " << rhs._battery_drain_factor;
    return os;
}
