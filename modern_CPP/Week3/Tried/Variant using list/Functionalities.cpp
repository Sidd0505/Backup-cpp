#include"Functionalities.h"
#include<memory>
#include<iostream>
#include<functional>

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Car>("C101",890000.0f, VehicleType::SEDAN)
    );

    data.emplace_back(
        std::make_shared<Car>("C201",650000.0f, VehicleType::HATCHBACK)
    );


    data.emplace_back(
        std::make_shared<Bike>("B001",120000.0f, VehicleType::COMMUTE)
    );

}

float AveragePrice(const Container &data)
{
    if(data.empty())
        throw std::runtime_error("The data is empty.");

    float totalPrice = 0.0f;
    
    for (const VType& v: data)
    {
        std::visit(
            [&](auto && val){
                totalPrice = totalPrice + val->price();
            },
            v
        );
    }
    return totalPrice / data.size();
}

VType InstanceWithMinimumPrice(const Container &data)
{
    return VType();
}


bool IfIdExists(const Container &data, std::string id)
{
    if(data.empty())
        throw std::runtime_error("Data is empty.");

    bool flag = false;

    for(VType v: data){
        std::visit(
            [&](auto&& val){if (val->id() == id){flag = true; }
            },
            v
        );
    }

    return flag;
}


// std::optional<std::list<VType>> InstancesMatchingType(const Container &data, std::variant<VehicleType, VehicleType> type)
// {
    
//     if(data.empty())
//         throw std::runtime_error("Data is empty.");
    
//     Container result;
//     for(VType v: data)
//     {
//         std::visit(
//             [](auto&&){if (val ->type()==)} , //variant ko enum se compare kese karoge

//         )
//     }
//     return std::optional<std::list<VType>>();
// }
