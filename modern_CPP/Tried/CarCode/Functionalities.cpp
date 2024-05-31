#include"Functionalities.h"
#include"Car.h"
#include<vector>
#include<functional>

void CreateObject(CarContainer& cardata,EngineContainer& engdata)
{
    engdata[0] = std::make_shared<Engine>(450, EngineType::HYBRID);

    cardata[0] = std::make_shared<Car>(78, "Suzuki",56000.0f, engdata[0]);

    engdata[1] = std::make_shared<Engine>(700, EngineType::DISEL);

    cardata[1] = std::make_shared<Car>(69, "Maruti",186000.0f, engdata[1]);

    engdata[2] = std::make_shared<Engine>(1000, EngineType::HYBRID);

    cardata[2] = std::make_shared<Car>(9, "Raider",99000.0f, engdata[2]);

}


void Display(CarContainer & data)
{
    for(auto& ptr : data)
    {
        std::cout<<*ptr<<"\n";
    }
}

float highdata(std::function<float(CarContainer&, EngineType) >fn, CarContainer& data)
{
    return fn(data, EngineType::PETROL);
}