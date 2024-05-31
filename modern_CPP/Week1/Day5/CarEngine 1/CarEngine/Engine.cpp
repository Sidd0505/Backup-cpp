#include "Engine.h"

Engine::Engine(std::string num, EngineType type, int hp, int torque)
    : engineNumber(num), engineType(type), engineHorsepower(hp), engineTorque(torque)
{
}
std::ostream &operator<<(std::ostream &os, const Engine &rhs)
{
    os << "engineNumber: " << rhs.engineNumber
       << " engineType: " << static_cast<int>(rhs.engineType)
       << " engineHorsepower: " << rhs.engineHorsepower
       << " engineTorque: " << rhs.engineTorque;
    return os;
}
