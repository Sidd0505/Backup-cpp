#include"Functionalities.h"
#include<optional>
#include<algorithm>

void CreateObjects(Container &data)
{

    data[0] = std::make_shared<Engine>("A101", 1600, EngineType::DISEL, 1.2f,200.0f);
    data[1] = std::make_shared<Engine>("B201", 1200, EngineType::HYBRID, 2.0f,700.0f);
    data[2] = std::make_shared<Engine>("C301", 1900, EngineType::PETROL, 1.0f,1000.0f);
}


std::optional< Container> MatchTheConditions(Container &data)
{
    //make it optional 
    Container result;
    if(data.empty())
        throw std::runtime_error("The data is empty");
    int i=0;
    for(Pointer& ptr : data)
    {
        if(ptr ->horsepower()>1000 && ptr-> engineCapacity()<2.0f)
        {
            result[i] =(ptr);
            i++;
        }
    }
    if(result.empty())
    {
        return std::nullopt;
    }

    return result;
}

//any-of algorithm
bool CheckEngineTorqueAbove110(Container &data)
 {
       
    if(data.empty())
        throw std::runtime_error("Data is empty.");

    bool flag = true;

    flag = std::any_of(data.begin(), data.end(), 
        [&](const Pointer& ptr){
            return ptr->engineTorque() < 110;
        }   
    );

    return flag;
}

//count-if algorithm
int CountOfInstances(Container &data, float value)
{
    
    if(data.empty())
    {
        throw std::runtime_error("Data is empty");
    }
    int count = std::count_if(data.begin(), data.end(), 
            [&](const Pointer& ptr){ return ptr->engineCapacity() > value; }
        );
    
    return count;
}
