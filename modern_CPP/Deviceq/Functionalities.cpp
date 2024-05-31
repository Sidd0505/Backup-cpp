#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Device>("403A",_device_type::INFORTAINMENT,90,
        std::make_shared<DeviceDriver>("A4",_release_quarter::Q1,34.56)
        )
    );

    data.emplace_back(
        std::make_shared<Device>("3B",_device_type::SAFETY,30,
        std::make_shared<DeviceDriver>("A404",_release_quarter::Q2,36.86)
        )
    );

    data.emplace_back(
        std::make_shared<Device>("6C",_device_type::INFORTAINMENT,50,
        std::make_shared<DeviceDriver>("A456",_release_quarter::Q2,34.56)
        )
    );

    data.emplace_back(
        std::make_shared<Device>("9D",_device_type::INFORTAINMENT,67,
        std::make_shared<DeviceDriver>("A4",_release_quarter::Q2,34.56)
        )
    );

    data.emplace_back(
        std::make_shared<Device>("A56",_device_type::ACCESORY,11,
        std::make_shared<DeviceDriver>("A4",_release_quarter::Q4,34.56)
        )
    );
}

using insta = std::vector<std::string>;
std::vector<std::string> FindDeviceId(Container &data)
{
    if(data.empty())
        throw std::runtime_error("The data is empty.");

    insta i1;

    for(Pointer& ptr:data)
    {
        if(ptr->batteryDrainFactor()>0.3)
            i1.emplace_back(ptr->deviceId());
    }
    if(i1.empty())
    {
        throw std::runtime_error("The i1 is empty");
    }
    return i1;
}

bool InfotainmentOrNot(Container &data)
{
    if(data.empty())
        throw std::runtime_error("The data is empty."); 
    int flag =0;
    for(Pointer &ptr:data)
    {
        if(ptr->type()==_device_type::INFORTAINMENT)
            flag == 1;
        else
            flag ==0;
    }
    if(flag ==1)
        return true;
    else
        return false;
}

float AverageSizeinBytes(Container &data)
{
    if(data.empty())
        throw std::runtime_error("The data is empty.");
    float total = 0.0f;
    int count =0;
    for(Pointer &ptr:data)
    {
        if(ptr->deviceDriver()->quarter()==_release_quarter::Q1 || ptr->deviceDriver()->quarter()==_release_quarter::Q4)
        {
            total = total + ptr->deviceDriver()->sizeInBytes();
            count++;
        }
    }
    if(count==0)
        throw std::runtime_error("The count is zero");
    return total/count;
}

std::string FindVersionNumber(Container &data, std::string device_id)
{
    if(data.empty())
        throw std::runtime_error("The data is empty.");
    for(Pointer &ptr:data)
    {
        if(ptr->deviceId()==device_id)
        {
            return(ptr->deviceDriver()->versionNumber());
        }
    }
    throw std::runtime_error("The Id does not exist");
}

Container2 DevicedriverTypeMatch(Container &data, _device_type typee)
{
    if(data.empty())
        throw std::runtime_error("The data is empty.");
    Container2 result;
    for(Pointer& ptr:data)
    {
        if(ptr->type()== typee)
            result.emplace_back(ptr->deviceDriver());
    }
    if(result.empty())
    {
        throw std::runtime_error("The result is empty.");
    }
    return result;
}
