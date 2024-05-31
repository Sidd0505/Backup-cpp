#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Car>(
            "DZire",
            "Suzuki",
            carType::SEDAN,
            std::make_shared<Engine>(
                "ENGINE101",
                EngineType::ICT,
                100,
                80

                ),
            2000000));
    data.emplace_back(
        std::make_shared<Car>(
            "Indigo",
            "TATA",
            carType::SUV,
            std::make_shared<Engine>(
                "ENGINE202",
                EngineType::ICT,
                120,
                100

                ),
            2000000));
}

int HorsepowerUsingCardID(const Container &data, std::string carid)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty");
    }
    for (auto &p : data)
    {
        if (p->getCarId() == carid)
        {
            return p->getCarEngine()->getEngineHorsepower();
        }
    }
    throw std::runtime_error("No data found for given CarID");
}

Container TorqueOver80(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty");
    }
    Container answer;
    for (auto &p : data)
    {
        if (p->getCarEngine()->getEngineTorque() > 80)
        {
            answer.emplace_back(p);
        }
    }
    if (answer.empty())
    {
        throw std::runtime_error("No such data found above 80Nm of torque");
    }
    return answer;
}

Container SearchWithCarType(const Container &data, carType type)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty");
    }
    Container answer;
    for (auto &p : data)
    {
        if (p->type() == type)
        {
            answer.emplace_back(p);
        }
    }
    if (answer.empty())
    {
        throw std::runtime_error("No such data found for given carType");
    }
    return answer;
}

float AverageEngineHorsepower(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty");
    }
    float total = 0, count = 0;
    for (auto &p : data)
    {
        if ((p->getCarPrice() > 1000000) && p->getCarEngine()->getEngineType() == EngineType::ICT)
        {
            total += p->getCarEngine()->getEngineHorsepower();
            count++;
        }
    }
    if (total == 0)
    {
        throw std::runtime_error("No data satisfies");
    }
    return total / count;
}

std::string CardIdByLowestPrice(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data container is empty");
    }
    float lowest = data[0]->getCarPrice();
    std::string ans = data[0]->getCarId();
    for (auto &p : data)
    {
        if (p->getCarPrice() < lowest)
        {
            lowest = p->getCarPrice();
            ans = p->getCarId();
        }
    }

    return ans;
}

float CombinedPrice(Pointer &p1, Pointer &p2)
{
    return (p1->getCarPrice() + p2->getCarPrice());
}
