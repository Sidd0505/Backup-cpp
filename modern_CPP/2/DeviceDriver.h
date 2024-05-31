#include<iostream>
#include"_release_quater.h"

class DeviceDriver
{
private:
    /* data */
    std::string _version_number{""};
    _release_quater _r_quater{_release_quater::Q1};
    float _size{0.0f};

public:
    //delete parameterized
     DeviceDriver(/* args */) =delete;

    //delete copy constructor
    DeviceDriver(const DeviceDriver&)=delete;

    //delete assignment operator
    DeviceDriver operator=(const DeviceDriver&)=delete;

    //delete semantics
    DeviceDriver(DeviceDriver&&)=delete;
    DeviceDriver operator=(DeviceDriver&&)=delete;

    //parameterized constructor
    DeviceDriver(std::string num,_release_quater q_type,float size);

    //Destrucor 
    ~DeviceDriver() =default;

    std::string versionNumber() const { return _version_number; }

    _release_quater rQuater() const { return _r_quater; }

    float size() const { return _size; }

    friend std::ostream &operator<<(std::ostream &os, const DeviceDriver &rhs);
};