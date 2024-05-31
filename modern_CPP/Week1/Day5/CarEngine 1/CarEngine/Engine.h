#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <memory>

#include "engineType.h"

class Engine
{
private:
    std::string engineNumber;
    EngineType engineType;
    int engineHorsepower;
    int engineTorque;

public:
    Engine(/* args */) = default;
    Engine(std::string num, EngineType type, int hp, int torque);
    ~Engine() = default;

    std::string getEngineNumber() const { return engineNumber; }

    EngineType getEngineType() const { return engineType; }

    int getEngineHorsepower() const { return engineHorsepower; }

    int getEngineTorque() const { return engineTorque; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);
};

#endif // ENGINE_H
