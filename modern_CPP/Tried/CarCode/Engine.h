#include<iostream>
#include"EngineType.h"


class Engine{
    private:
    int _horsepower;
    EngineType _engineType;

public:
    int horsepower() const { return _horsepower; }

    EngineType engineType() const { return _engineType; }

    Engine() = default;

    Engine(Engine&) = delete;

    Engine(Engine&&) = delete;

    Engine& operator= (Engine&) = delete;

    Engine& operator= (Engine&&) = delete;

    ~Engine() = default;

    Engine(int horsepower, EngineType type);

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);


    

};