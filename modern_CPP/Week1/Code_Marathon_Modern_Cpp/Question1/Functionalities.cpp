#include "Functionalities.h"
#include<list>
#include<memory>

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared <Sensor>(001, "Slytherin",SensorType::TEMPERATURE, 12));
    data.emplace_back(std::make_shared <Sensor>(002,"Gryfindorr",SensorType::CABIN_PRESSURE,13));
    data.emplace_back(std::make_shared <Sensor>(003, "RAVENCLAW",SensorType::TEMPERATURE, 14));
    data.emplace_back(std::make_shared <Sensor>(004, "HUPPLEPUFF",SensorType::TEMPERATURE, 15));
    data.emplace_back(std::make_shared <Sensor>(005, "MUGGLES",SensorType::TEMPERATURE, 3));
}

bool CheckReading(Container &data)
{
    int flag =0;                        //Using the Flag Concept
    if(data.empty())
        throw std::runtime_error("The data container is empty");
    for(Pointer& ptr:data)
    {
        if(ptr->reading()<25)
            flag = 1;
    }
    return flag;
}

int CountOfSimilarType(Container &data, SensorType typee)
{
    if(data.empty())
        throw std::runtime_error("The data container is empty");
  
    int count =0;
    for(Pointer &ptr:data)
    {
        if(ptr->type()==typee)      
            count++;                            //Using Count Varible
    }
    if(count==0)
        throw std::runtime_error("The SensorType is not on the list");
    return count;
}

std::string FindNameOfSensor(Container &data, int id, SensorType typee)
{
    if(data.empty())
        throw std::runtime_error("The data container is empty");
  
    for(Pointer &ptr:data)                  
    {
        if(ptr->id()== id && ptr->type()==typee)                        //to find the similar type
            return ptr->name();
    }
    throw std::runtime_error("The Id and Vehicle Type does not match");
}

Container ReturnAllInstances(Container & data)
{
    if(data.empty())
        throw std::runtime_error("The data container is empty");
  
    Container result;
    for(Pointer &ptr: data)
    {
        if(ptr->reading()>=15 && ptr->type()== SensorType::TYRE_PRESSURE)
            result.emplace_back(ptr);                                       //pushing the ptr in result
    }
    if(result.empty())
        throw std::runtime_error("The Conditions does not match with any of the Sensors");
    
    return result;
}
