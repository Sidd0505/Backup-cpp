#include<iostream>
#include"Functionalities.h"

int main(){
    container data;

    Create_Object(data);

    for(int i=0;i<data.size();i++)
    {
        std::cout<<*data[i]<<"\n";
    }

    std::cout<<"\nDevice ID above 0.3 Battery drainage : "; 
    try{
        std::vector<std::string> ans=_DeviceID_By_Batter_Drain(data);
        // for(const std::string &ptr:ans){
        //     std::cout<<ptr<<"  ";
        // }
        for(int i=0;i<ans.size();i++)
        {
            std::cout<<ans[i];
        }
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }

    try{
        if(Check_AllDevice_INFOTAINMENT(data)){
            std::cout<<"\nAll Device type is INFOTAINMENT type";
        }
        else{
            std::cout<<"\nAll Device type is not INFOTAINMENT type";
        }
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }

    try{
        std::cout<<"\nAverage of size in bytes of Q1 & Q2 :"<<Return_AvgOfSizeOfQ1Q2(data);
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }

    try{
        std::cout<<"\nVerson Number of given id :"<<Verson_number_by_Given_DeviceID(data,"D2");
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }

    std::cout<<"\nDevice Driver Instances : "; 
    try{
        container2 ans=Device_Driver_instances(data,Device_type::ACCESSORY);
        for(const pointer2 &ptr:ans){
            std::cout<<*ptr<<"\n";
        }
    }
    catch(std::runtime_error &mess){
        std::cout<<mess.what();
    }
}