#include <iostream>
#include "Functionalities.h"
#include <algorithm>

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<hotel>("HAYATT", 4, 5, HotelType::THREE_STORY)
    );

    data.emplace_back(
        std::make_shared<hotel>("OBEROI HOTEL", 5, 3, HotelType::TWO_STORY)
    );

    data.emplace_back(
        std::make_shared<house>("GUPTA's RESIDENCE", 3, 4, HotelType::LUXURIOUS)
    );

    data.emplace_back(
        std::make_shared<house>("SHARMA's RESIDENCE", 3, 5, HotelType::SINGLE_STORY)
    );

    data.emplace_back(
        std::make_shared<house>("DELUXE APARTMENTS", 6, 8, HotelType::LUXURIOUS)
    );
}


void print(Container &data)
{
    for(const VType &v : data)
    {
        std::visit(
            [&](auto&& val){
                std::cout<<*val<<"\n";
            },
            v
        );
    }
}


void ShowRoomsLeft(const Container &data)
{
    
}

float AverageRoomsAvailable(const Container &data)
{
    float total = 0;
    for(const VType &g : data)
    {
        std::visit(
            [&](auto&& val){
                total += val->rooms();
            },
            g
        );
    }
    return total / data.size();
}

VType MinimumMemberVisit(const Container &data)
{
    VType result;
    int min;
    auto itr = data.front();
    std::visit([&](auto&& arg)
        {
            min = arg->members();
            result = arg;
        },
        itr
    );

    for(auto v : data){
        std::visit (
            [&](auto&& val){
                if(val->members() < min){
                    min = val->members();
                    result = v;
                }
            },
            v
        );
    }
    return result;
}

bool IfHotelExists(const Container &data, std::string name)
{
    if(data.empty()){
        throw std::runtime_error("NO DATA AVAILABLE");
    }

    bool flag = false;

    for(VType v : data){
        std::visit(
            [&](auto&& val){
                if(val->name() == name){
                    flag = true;
                }
            },
            v
        );
    }
    return flag;
}

int MinimumMemberNumberReturn(const Container &data)
{
    int min;
    auto itr = data.front();
    std::visit([&](auto&& arg)
        {
            min = arg->members();
        },
        itr
    );

    //Here is MUTEX
    std::mutex mt;
    for(auto v : data){
        std::lock_guard<std::mutex> lk(mt);
        std::visit (
            [&](auto&& val){
                if(val->members() < min){
                    min = val->members();
                }
            },
            v
        );
    }
    return min;
}


void Ninstances(Container &data, int n)
{
    if(data.empty()){
        throw std::runtime_error("No Data Available");
    }
    
    for(auto v : data){
        std::visit(
            [&](auto&& val){
                if(n>0){
                    std::cout<<*val<<std::endl;
                    n--;
                }
            },v
        );
    }
}

Container FirstThreeNInstancesThroughAscing(const Container &data, std::future<int> &ft)
{
    int n = ft.get();
    Container res;

    for(const VType& v : data){
        std::visit(
            [&](auto&& p){
                if(n>0){
                    res.emplace_back(p);
                    n--;
                }
            },
            v
        );
    }
    return res;
}


std::vector<std::string> DataOfTheHotelNames(const Container &data)
{
    std::vector <std::string> vec;

    for(const VType& v : data){
        if(std::holds_alternative <HotPointer> (v)){
            const HotPointer& ptr = std::get <HotPointer> (v);
            vec.emplace_back(ptr->name());
        }
    }
    return vec;
}

Container DataOfTheHotel(const Container &data)
{
    Container res;

    for(const VType& g : data){
        if(std::holds_alternative <HotPointer> (g)){
            const HotPointer& ptr = std::get <HotPointer> (g);
            res.emplace_back(ptr);
        }
    }
    return res;
}
