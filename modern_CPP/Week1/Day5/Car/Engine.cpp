#include "Engine.h"
#include"_CarEngine_type.h"

Engine::Engine(std::string EngineNumber, int EngineHorsepower, int EngineTorque, EngineType type)
    :_EngineNumber(EngineNumber), _EngineHorsepower(EngineHorsepower), _EngineTorque(EngineTorque),_Type(type)
{
}

std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
    os << "_EngineNumber: " << rhs._EngineNumber
       << " _EngineHorsepower: " << rhs._EngineHorsepower
       << " _EngineTorque: " << rhs._EngineTorque
       << " _Type: " << static_cast<int>(rhs._Type);
    return os;
}


