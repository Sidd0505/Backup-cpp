#include"Engine.h"

std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "_engineId: " << rhs._engineId
       << " _horsepower: " << rhs._horsepower
       << " _type: " << static_cast<int>(rhs._type)
       << " _engineCapacity: " << rhs._engineCapacity
       << " _engineTorque: " << rhs._engineTorque;
    return os;
}

Engine::Engine(std::string engineId, int horsepower, EngineType type, float engineCapacity, float engineTorque)
        : _engineId(engineId), _horsepower(horsepower), _type(type), _engineCapacity(engineCapacity), _engineTorque(engineTorque)
{
    if (_engineTorque < 20 || _engineTorque > 150 || _horsepower < 0)
    {
        std::cout << "Wrong input for Engine Torque or Horsepower\n";
    }
 
}
