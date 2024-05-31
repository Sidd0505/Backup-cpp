#include"Functionalities.h"

int main()
{
    Container data;
    CreateObjects(data);
    for(int i=0;i<data.size();i++)
    {
        std::cout<<*data[i];
    }
    try
    {
        std::vector<std::string> ans = 
        FindDeviceId(data);
        for(int i=0;i<ans.size();i++)
        {
            std::cout<<ans[i];
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
       if(InfotainmentOrNot(data))
       {
        std::cout<<"True";
       }
       else
       {
        std::cout<<"False";
       }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout<<AverageSizeinBytes(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::cout<<FindVersionNumber(data,"403A");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Container2 result;
        result = DevicedriverTypeMatch(data,_device_type::SAFETY);
        for(int i=0;i<result.size();i++)
        {
            std::cout<<*result[i];
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

}