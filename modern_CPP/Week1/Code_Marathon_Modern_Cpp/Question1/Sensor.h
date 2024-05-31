#ifndef SENSOR_H
#define SENSOR_H

#include<iostream>
#include<memory>
#include<vector>
#include"Sensor_Type.h"

class Sensor
{
    private:
    int _id;
    std::string _name;
    SensorType _Type;
    int _reading;

    public:

    Sensor() = delete;

    ~Sensor() = default;

    Sensor (Sensor&) = delete;

    Sensor (Sensor&&) = delete;

    Sensor operator = (Sensor&) = delete;

    Sensor operator =(Sensor&&) = delete;

    Sensor(int id, std::string name, SensorType Type, int reading);

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    SensorType type() const { return _Type; }
    void setType(const SensorType &Type) { _Type = Type; }

    int reading() const { return _reading; }
    void setReading(int reading) { _reading = reading; }

    friend std::ostream &operator<<(std::ostream &os, const Sensor &rhs);

};

#endif // SENSOR_H
