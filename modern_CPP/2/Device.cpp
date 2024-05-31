#include "Device.h"
#include<iostream>

Device::Device(std::string id, Device_type type, int battery_level, std::shared_ptr<DeviceDriver> device_driver)
:_device_id(id),_device_type(type),_device_driver(device_driver){

    if(battery_level>0 && battery_level<=100){
        _device_battery_level=battery_level;
    }
    else{
        std::cout<<"Please Enter battery level b/w 1 to 100";
    }

    if(type==Device_type::INFOTAINMENT || type==Device_type::SAFETY){
        _battery_drain_factor=0.25;
    }
    else if(type==Device_type::ACCESSORY){
        _battery_drain_factor=0.5;
    }
    else if(battery_level>50){
        _battery_drain_factor=0.4;
    }

}

std::ostream &operator<<(std::ostream &os, const Device &rhs) {
    os << "_device_id: " << rhs._device_id
       << " _device_type: " << static_cast<int>(rhs._device_type)
       << " _device_battery_level: " << rhs._device_battery_level
       << " _device_driver: " << *rhs._device_driver
       << " _battery_drain_factor: " << rhs._battery_drain_factor;
    return os;
}
