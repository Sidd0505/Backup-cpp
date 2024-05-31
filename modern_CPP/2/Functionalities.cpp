#include "Functionalities.h"


// Creating Objects 

void Create_Object(container &data)
{
    data.emplace_back(
        std::make_shared<Device>("D1",Device_type::ACCESSORY,40,
        std::make_shared<DeviceDriver>("V1",_release_quater::Q1,30.0f))
    );

    data.emplace_back(
        std::make_shared<Device>("D2",Device_type::ACCESSORY,50,
        std::make_shared<DeviceDriver>("V2",_release_quater::Q2,40.0f))
    );

    data.emplace_back(
        std::make_shared<Device>("D3",Device_type::SAFETY,30,
        std::make_shared<DeviceDriver>("V3",_release_quater::Q2,10.0f))
    );

    data.emplace_back(
        std::make_shared<Device>("D4",Device_type::INFOTAINMENT,40,
        std::make_shared<DeviceDriver>("V4",_release_quater::Q1,30.0f))
    );

    data.emplace_back(
        std::make_shared<Device>("D5",Device_type::SAFETY,43,
        std::make_shared<DeviceDriver>("V5",_release_quater::Q4,35.0f))
    );
}


// function for return device id of battety drain above 0.3

std::vector<std::string>_DeviceID_By_Batter_Drain(const container &data)noexcept(false)
{
    if(data.empty()){
        throw std::runtime_error("No data found");
    }

    std::vector<std::string> ans;
    for(const pointer &ptr:data){
        if(ptr->batteryDrainFactor()>0.3){
            ans.emplace_back(ptr->deviceId());
        }
    }
    if(ans.empty()){
        throw std::runtime_error("No data available for battery drain above 0.3"); 
    }
    return ans;
}



//function for checking all device type is INFOTAINAMENT

bool Check_AllDevice_INFOTAINMENT(const container &data) noexcept(false)
{
    if(data.empty()){
        throw std::runtime_error("No data found");
    }

    int flag=0;
    for(const pointer& ptr:data){

        if(ptr->deviceType()==Device_type::INFOTAINMENT){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        return true;
    }
    return false;
}

//Return average of size which type is Q1 && Q2
float Return_AvgOfSizeOfQ1Q2(const container &data)noexcept(false)
{
    if(data.empty()){
        throw std::runtime_error("No data found");
    }
    
    float sum=0;
    int count=0;

    for(const pointer& ptr:data){
        if(ptr->deviceDriver()->rQuater()==_release_quater::Q1 || ptr->deviceDriver()->rQuater()==_release_quater::Q4)
            {
                sum+=ptr->deviceDriver()->size();
                count++;
            }
    }

    if(count==0){
        throw std::runtime_error("No matching type data found");
    }

    return sum/count;
}

//Return version number of Given Device id 

std::string Verson_number_by_Given_DeviceID(const container &data, std::string id) noexcept(false)
{
    if(data.empty()){
        throw std::runtime_error("No data found");
    }

    std::string ans="";
    for(const pointer& ptr:data){
        if(ptr->deviceId()==id){
            ans=ptr->deviceDriver()->versionNumber();
        }
    }
    return ans;
}

//Return Driver instance of given device type
container2 Device_Driver_instances(const container &data, Device_type type)noexcept(false)
{
    if(data.empty()){
        throw std::runtime_error("No data found");
    }
    container2 ans;
    for(const pointer &ptr:data){
        if(ptr->deviceType()==type){
            ans.emplace_back(ptr->deviceDriver());
        }
    }
    
    return ans;
}
