#include"Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Car>("W14","Toyota",400000.0f,CarType::HATCHBACK,
        std::make_shared<Engine>("E12",812,300,EngineType::ICT)
        )
    );

}

int CarEngineHorsepower(Container &data, std::string CarId)
{
    
}
