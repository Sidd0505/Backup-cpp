#include "Functionalities.h"
#include <functional>
#include <list>
#include<algorithm>
#include<numeric>

void CreateObject(Container &data)
{
    data.emplace_back(std::make_shared<Car>(Manufacturer::Acura, "Integra", 16919, 16360, 21500.0f, 101));
    data.emplace_back(std::make_shared<Car>(Manufacturer::Acura, "RL", 16919, 116360, 42500.0f, 210));
    data.emplace_back(std::make_shared<Car>(Manufacturer::Audi, "A4", 16919, 116360, 32500.0f, 150));
    data.emplace_back(std::make_shared<Car>(Manufacturer::Audi, "A6", 1456, 116360, 41500.0f, 200));
    data.emplace_back(std::make_shared<Car>(Manufacturer::Audi, "A8", 16919, 25000, 61500.0f, 310));

    data.emplace_back(std::make_shared<Car>(Manufacturer::BMW, "Integra", 16919, 200000, 21500.0f, 170));
    data.emplace_back(std::make_shared<Car>(Manufacturer::BMW, "RL", 16919, 16360, 28500.0f, 193));
    data.emplace_back(std::make_shared<Car>(Manufacturer::BMW, "A4", 16919, 16360, 36500.0f, 193));
    data.emplace_back(std::make_shared<Car>(Manufacturer::Cadillac, "A6", 1456, 16360, 42000.0f, 255));
    data.emplace_back(std::make_shared<Car>(Manufacturer::Chevrolet, "A8", 16919, 106360, 9000.0f, 115));
}

void CountCarsMatchingCondition(Container &data, float inputPrice)
{
    if (data.empty())
    {
        throw std::runtime_error("DATA IS EMPTY");
    }

    int count = 0;
    for (Pointer &ptr : data)
    {
        if (ptr->horsepower() > 100 && ptr->price() > inputPrice)
        {
            count += 1;
        }
    }
    std::cout << "Count of car with matching conditions is : " << count << std::endl;
}

void DisplayAverageHorsepowerOfCars(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("DATA IS EMPTY");
    }
    // int sum = 0;
    // int count = 0;
    // for (Pointer &ptr : data)
    // {
    //     if (ptr->price() > 10000 && ptr->manufacturer() != Manufacturer::Cadillac && ptr->manufacturer() != Manufacturer::Audi)
    //     {
    //         sum += ptr->horsepower();
    //         count += 1;
    //     }
    // }

    // std::cout << "Average Horsepower of Cars is : " << sum / count << std::endl;
    std::cout << "Average Horsepower of Cars is : " << std::accumulate(data.begin(),data.end(),0.0,[](float current_result,Pointer& p){return current_result+p->price();})/data.size()<< std::endl;
}

void DisplayCombinedInsuranceCostOfCars(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("DATA IS EMPTY");
    }

    float combineInsurancePrice = 0;
    for (Pointer &ptr : data)
    {
        if (ptr->manufacturer() == Manufacturer::BMW)
        {
            combineInsurancePrice += ptr->price() * 0.20f;
        }
        else
        {
            combineInsurancePrice += ptr->price() * 0.8f;
        }
    }

    std::cout << "Combine insurance price of all cars is : " << combineInsurancePrice << std::endl;
}

void DisplayUniqueCarBrands(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("DATA IS EMPTY");
    }
    std::cout<<"Unique Index "<<std::endl;
    for (Pointer &ptr : data)
    {
        if (ptr->horsepower() > 150 && ptr->rescaleValue() > 25000)
        {
            std::cout<<(int)ptr->manufacturer()<<std::endl;
        }
           
    }
}

void Operation(std::function<void(Container)> func, Container &data)
{
    func(data);
}