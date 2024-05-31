#ifndef DEVICE_H
#define DEVICE_H

#include<iostream>
#include"Device_type.h"
#include"DeviceDriver.h"
#include<memory>

class Device
{
private:
    /* data */
    std::string _device_id{""};
    Device_type _device_type{Device_type::SAFETY};
    int _device_battery_level{0};
    std::shared_ptr<DeviceDriver> _device_driver;
    float _battery_drain_factor{0.0f};
    

public:
    Device(/* args */) =delete;

    //delete copy constructor
    Device(const Device&)=delete;

    //delete assignment operator
    Device operator=(const Device&)=delete;

    //delete semantics
    Device(Device&&)=delete;
    Device operator=(Device&&)=delete;

    //parameterized constructor
    Device(std::string id,Device_type type,int battery_level,std::shared_ptr<DeviceDriver> device_driver);

    ~Device() =default;

    std::string deviceId() const { return _device_id; }

    Device_type deviceType() const { return _device_type; }

    int deviceBatteryLevel() const { return _device_battery_level; }

    std::shared_ptr<DeviceDriver> deviceDriver() const { return _device_driver; }

    float batteryDrainFactor() const { return _battery_drain_factor; }

    friend std::ostream &operator<<(std::ostream &os, const Device &rhs);
};

#endif // DEVICE_H
