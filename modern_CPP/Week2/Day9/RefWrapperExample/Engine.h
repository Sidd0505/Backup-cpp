#ifndef ENGINE_H
#define ENGINE_H

#include<iostream>
#include"EngineType.h"
class Engine
{
private:
    int _horsepower;
    EngineType _engineType;

public:
    Engine(int horsepower, EngineType type);

    int horsepower() const { return _horsepower; }
    void setHorsepower(int horsepower) { _horsepower = horsepower; }

    EngineType engineType() const { return _engineType; }
    void setEngineType(const EngineType &engineType) { _engineType = engineType; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);

    ~Engine()=default;
};

// Engine::Engine(/* args */)
// {
// }

// Engine::~Engine()
// {
// }


#endif // ENGINE_H
