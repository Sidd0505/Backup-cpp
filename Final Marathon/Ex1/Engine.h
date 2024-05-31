#ifndef ENGINE_H
#define ENGINE_H

#include<iostream>
#include<vector>
#include"EngineType.h"

class Engine{

    private:
    std::string _engineId;
    int _horsepower;
    EngineType _type;
    float _engineCapacity;
    float _engineTorque;

    public:

    Engine(std::string engineId, int horsepower, EngineType type, float engineCapacity, float engineTorque);

    Engine() = default;
    ~Engine() = default;
    Engine(Engine&) = delete;
    Engine(Engine&&) = delete;
    Engine operator= (Engine&) = delete;
    Engine operator= (Engine&&) = delete;

    std::string engineId() const { return _engineId; }

    int horsepower() const { return _horsepower; }

    EngineType type() const { return _type; }

    float engineCapacity() const { return _engineCapacity; }

    float engineTorque() const { return _engineTorque; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);


};

#endif // ENGINE_H
