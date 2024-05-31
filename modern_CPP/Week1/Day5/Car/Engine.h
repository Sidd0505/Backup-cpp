#include<iostream>
#include"_CarEngine_type.h"


class Engine
{
    private:
    std::string _EngineNumber;
    int _EngineHorsepower;
    int _EngineTorque;
    EngineType _Type;

    public:
    Engine() = default;

    Engine(std::string EngineNumber, int EngineHorsepower, int EngineTorque ,EngineType Type);

    Engine(const Engine&) = delete;

    Engine(const Engine&&) = delete;

    Engine& operator = (const Engine&) = delete;

    Engine& operator = (const Engine&&) = delete;

    std::string engineNumber() const { return _EngineNumber; }
    void setEngineNumber(const std::string &EngineNumber) { _EngineNumber = EngineNumber; }

    int engineHorsepower() const { return _EngineHorsepower; }
    void setEngineHorsepower(int EngineHorsepower) { _EngineHorsepower = EngineHorsepower; }

    int engineTorque() const { return _EngineTorque; }
    void setEngineTorque(int EngineTorque) { _EngineTorque = EngineTorque; }

    EngineType type() const { return _Type; }
    void setType(const EngineType &Type) { _Type = Type; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs);

    

};