#include "Functionalities.h"
#include <mutex>

std::mutex mt;


void CreateObjects(Container & data)
{
    data.emplace_back(
        std::make_shared<Automobile>("BMW", AutoType::REGULAR, 
        50000.0f, 5, 700)
    );
    data.emplace_back(
        std::make_shared<Automobile>("Mercedes", AutoType::TRANSPORT, 
        70000.0f, 2, 1000)
    );
    data.emplace_back(
        std::make_shared<Automobile>("Audi", AutoType::REGULAR, 
        30000.0f, 3, 300)
    );

    data.emplace_back(
        std::make_shared<EvCar>("Maruti", AutoType::REGULAR, 
        80000.0f, 5, 500, 1000.0f)
    );
    data.emplace_back(
        std::make_shared<EvCar>("Innova", AutoType::TRANSPORT, 
        60000.0f, 2, 200, 1500.0f)
    );
}

int DisplaySeatCount(const Container& data, std::future<std::string>& ft)
{
    std::string id = ft.get();
    int ans = 0;
    for(const VType& v : data){
        std::visit([&](auto &&val){
            if (val->id() == id)
            {
                ans = val->seatCount();
            }
        },
        v
        );
    }
    return ans;
}





void TotalGSTOfAllInstances(const Container &data)
{
    float total = 0.0f;

    for(const VType& v : data){
        std::visit([&](auto &&val){
            total += val->CalculateGST();
        }, v);
    }
    mt.lock();
    std::cout << "Total GST of all instances: \n" << total << "\n";
    mt.unlock();
}
