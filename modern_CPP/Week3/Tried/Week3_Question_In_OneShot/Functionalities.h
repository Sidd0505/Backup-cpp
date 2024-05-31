#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>
#include <memory>
#include <variant>
#include "Hotel.h"
#include "House.h"
#include <optional>
#include <list>
#include <future>
#include <algorithm>
#include <thread>
#include <mutex>


using HotPointer = std::shared_ptr<hotel>;
using HousPointer = std::shared_ptr <house>;

using VType = std::variant<HotPointer, HousPointer>;

using Container = std::vector<VType>;

void CreateObjects(Container& data);

void print(Container& data);

void ShowRoomsLeft(const Container& data);

float AverageRoomsAvailable (const Container& data);

VType MinimumMemberVisit (const Container& data);

bool IfHotelExists(const Container& data, std::string name);

// Here is the concept of the lock_guard
int MinimumMemberNumberReturn (const Container& data);

/*
    Print First 3 data NInstances
*/
void Ninstances(Container& data, int n);

/*
    Print first 3 data instances through ASCING
*/
Container FirstThreeNInstancesThroughAscing(const Container& data, std::future<int>& ft);


/*
    For the calling of the data of Hotel names only using holds_alternative
*/
std::vector <std::string> DataOfTheHotelNames(const Container& data);


/*
    For the calling of the data of all the hotel data
*/
Container DataOfTheHotel (const Container& data);


template<typename T>
inline std::optional<std::vector<VType>> InstancesMatchingType (const Container& data, T type)
{
    {
        if(data.empty()){
            throw std::runtime_error("NILL");
        }
        Container result;

        for(const VType& v : data){
            std::visit(
                [&](auto&& val){
                    if(val->type() == type){
                        result.emplace_back(val);
                    }
                },
                v
            );
        }

        if(result.empty()){
            std::nullopt;
        }
        return result;
    }

}

template <typename T>
inline std::optional<std::vector<VType>> ReturnRoomsMoreThan20 (Container& data, T type, int n)
{
    if(data.empty()){
        throw std::runtime_error ("No dat available");
    }
    Container results;
    for(const VType& v : data){
        std::visit(
            [&](auto&& val){
                if(val->type() == type && val->rooms() > n){
                    results.emplace_back(val);
                }
            },
            v
        );
    }
    if(results.empty()){
        std::nullopt;
    }
    return results;
}



#endif // FUNCTIONALITIES_H