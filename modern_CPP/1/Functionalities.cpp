#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Order>("Order 1",9999.9f,Order_type::PAID,100.00f)
    );

    data.emplace_back(
        std::make_shared<Order>("Order 2",8878.9f,Order_type::PROMOTION,101.00f)
    );

    data.emplace_back(
        std::make_shared<Order>("Order 3",7777.9f,Order_type::COD,102.00f)
    );

    data.emplace_back(
        std::make_shared<Order>("Order 4",6666.6f,Order_type::PAID,120.01f)
    );

    data.emplace_back(
        std::make_shared<Order>("Order 5",999.20f,Order_type::PAID,101.00f)
    );
}

//FUNCTION TO FIND HIGHEST DISCOUNT ID

std::string IdwithHighestDiscount(const Container& data)noexcept(false)
{
    if(data.empty()){
        throw std::runtime_error("data is empty");
    }

    std::string result="";
    float high_dis = data.front()->discount();

    for(const pointer& ptr:data){
        if(ptr->discount() >= high_dis){
            high_dis = ptr->discount();
            result = ptr->id();
        }
    }
    
    
    return result;
}

//A FUNCTION TO FIND THE RETURN TYPE BY GIVEN ID

Order_type ReturnTypeofOrder(const Container &data, std::string id) noexcept(false)
{
    if(data.empty()){
        throw std::runtime_error("data is empty");
    }
    Order_type ot;
    for(const pointer&ptr:data){

        if(ptr->id()==id){
            ot = ptr->type();
     }

    }
    return ot;
        
}

//A FUNCTION TO FIND AND RETURN AVERAGE VALUE

float Average_Value(const Container &data)noexcept(false) 
{
    if(data.empty()){
        throw std::runtime_error("data is empty");
    }

    float result = 0.0f;

    for(const pointer &ptr : data){
        result += ptr->value();
    }

    return result/data.size();
}

//A function to find and Return N Instances 
Container FirstNinstances_data(const Container &data, int N)noexcept(false) 
{
    if(N>data.size() || N<0)
    {
        throw std::runtime_error("data is empty");
    }

    if(data.empty()){
        throw std::runtime_error("data is empty");
    }
    
    Container result;
    int cnt = N;

    for(const pointer &ptr: data){
        result.emplace_back(ptr);
        cnt--;
        
        if(cnt == 0){
            break;
        }
    }
    if(result.empty()){
        throw std::runtime_error("/nNo Data Found of given Index");
    }

    return result;
}


