#ifndef DEVICE_H
#define DEVICE_H

#include<iostream>
#include"_device_type.h"
#include"DeviceDriver.h"
#include<memory>
#include<vector>

class Device
{
    private:
    std::string _device_id = "";
    _device_type _type;
    int _device_battery_level=0;
    std::shared_ptr<DeviceDriver> _DeviceDriver;
    float _battery_drain_factor =0.0f;

public:
    Device() = default;

    ~Device() = default;

    Device (Device&) = delete;

    Device (Device&&) = delete;

    Device&  operator = (Device&) = delete;

    Device& operator = (Device&&) = delete;

    Device(std::string device_id, _device_type type, int device_battery_level, std::shared_ptr<DeviceDriver> DeviceDriver);

    std::string deviceId() const { return _device_id; }
    void setDeviceId(const std::string &device_id) { _device_id = device_id; }

    _device_type type() const { return _type; }
    void setType(const _device_type &type) { _type = type; }

    int deviceBatteryLevel() const { return _device_battery_level; }
    void setDeviceBatteryLevel(int deviceBatteryLevel) { _device_battery_level = deviceBatteryLevel; }

    std::shared_ptr<DeviceDriver> deviceDriver() const { return _DeviceDriver; }
    void setDeviceDriver(const std::shared_ptr<DeviceDriver> &DeviceDriver) { _DeviceDriver = DeviceDriver; }

    float batteryDrainFactor() const { return _battery_drain_factor; }
    void setBatteryDrainFactor(float battery_drain_factor) { _battery_drain_factor = battery_drain_factor; }

    friend std::ostream &operator<<(std::ostream &os, const Device &rhs);

    public:

    





};

#endif // DEVICE_H
