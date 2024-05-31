#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<list>
#include"Car.h"
#include"Bike.h"
#include<variant>
#include<memory>
#include<optional>

using BikePointer = std::shared_ptr<Bike>;
using CarPointer = std::shared_ptr<Car>;
using VType = std::variant<BikePointer, CarPointer>;
using Container = std::list<VType>;

/*
    *Taking an empty container by lvalue reference and fill it with variant objects
    * It should return void 
*/
void CreateObjects(Container & data);

/*
    Average price can be found using visit and total
    lvalue arguments are taken by function
*/
float AveragePrice(const Container& data);

/*
    Find instance with minimum price (all vehicles have prices which are unique)
    In which way we should returntype?
    variant
    shared_ptr  --> fun have 2 return types i.e.(car or Bike can have min price) that is why not feasible
    object within shared_ptr --> same as above reason
    That is why use varaint 
*/
VType InstanceWithMinimumPrice(const Container& data);


/*
    Check if given ID is present in any of the instance
*/
bool IfIdExists(const Container& data, std::string id);

/*
    Return all instances whose type matches with type passed
    challenge
    1) 
    2) if i write something then how should i return becaue t is like thread function
    3) we can't do anything(can't access) without visit no leeway like = lagake krliya 
*/
//std::optional<std::list<VType>> InstancesMatchingType(const Container& data, std::variant<VehicleType, VehicleType> type);

std::optional<Container>InstancesMatchingType(const Container& data, std::variant<VehicleType, VehicleType>type);

#endif // FUNCTIONALITIES_H


template <typename T>
std::optional<std::list<VType>> InstancesMatchingType(const Container &data, T type)
{

    if(data.empty())
        throw std::runtime_error("Data is empty.");

    Container result;
    for(const VType& v : data)
    {
        std::visit(
            [&](auto && val){ if(val->type()==type){result.emplace_back(val);} },    //val can be a bike or car pointer becoz we are inside variant already  //why val and not v?
            v    
        );
    }
    /*
        If result is empty even after for loop, it means no instances has a matching type,
        Compiler should be notified that result has no valid value, this is why we send 
        nullopt
    */
    if(result.empty())
    {
        return std::nullopt;
    }
    return result;
}