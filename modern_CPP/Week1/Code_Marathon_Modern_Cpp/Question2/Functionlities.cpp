#include "Functionlities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<TouristVehicle>("A101",TouristVehicleType::BUS, 20,
        std::make_shared<Permit>("1234",PermitType::LEASE, 20, 456.76) 
    ));

    data.emplace_back(std::make_shared<TouristVehicle>("B102",TouristVehicleType::BIKE, 2,
        std::make_shared<Permit>("4567",PermitType::OWNED, 2, 767.67) 
    ));

    data.emplace_back(std::make_shared<TouristVehicle>("C103",TouristVehicleType::CAB, 3,
        std::make_shared<Permit>("789",PermitType::LEASE, 100, 167.98) 
    ));


}

Container SatisfyTheConditions(Container &data)
{
    if(data.empty())
        throw std::runtime_error("The data container is empty");
    Container result;
    for(Pointer& ptr: data)
    {
        if(ptr->seatCount()>=4 && ptr->permit()->permitType()== PermitType::LEASE)
        {
            result.emplace_back(ptr);
        }
    }
    if(result.empty())
        throw std::runtime_error("The result container is empty");
    return result;
}

float AveragePermitDurationLeft(Container &data)
{
    if(data.empty())
        throw std::runtime_error("The data container is empty");
  
    float total =0.0f;
    int count =0;

    for(Pointer &ptr :data)
    {
        if(ptr->type()==TouristVehicleType::CAB)
        {
            total = total+ ptr->permit()->permitDurationLeft();
            count++;
        }
    }

    if(count ==0)
        throw std::runtime_error("The count is zero");
    
    return total/count;
}

PermitType FindTouristVehicle(Container &data)
{
    Container2 result; 
    float min = data.front()->permit()->permitRenewalCharge();
    for(Pointer & ptr:data)
    {
        if(ptr->permit()->permitRenewalCharge()<min)
        {
            min = ptr->permit()->permitRenewalCharge(); 
        }
        return ptr->permit()->permitType();
    }
    throw std::runtime_error("The min value is already provided");
}

Container NInstancesTouristVehicle(Container &data, int N) 
{
    if(data.empty())
        throw std::runtime_error("The data container is empty");
  
    Container result;
    
    for(auto itr = data.rbegin(); N>0;itr++,N--)
    {
        result.emplace_back(*itr);
    }
        
    if(N <0 && N>data.size())
        throw std::runtime_error("The N is not in the data range");
    return result;
}

