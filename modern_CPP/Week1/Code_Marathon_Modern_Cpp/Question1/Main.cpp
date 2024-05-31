#include"Functionalities.h"

int main()
{
    Container data;

    CreateObjects(data);

    for(Pointer& ptr:data)
    {
        std::cout<<*ptr<<"\n";
    }

    try
    {
        if(CheckReading(data))                                                  //CheckReading Function call
             std::cout<<"True"<<"\nAll value are Below 25";
        else
             std::cout<<"False"<<"\nOne or more values are above 25";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        int ans = CountOfSimilarType(data, SensorType::TEMPERATURE);                    //CountOfSimilarType Function call
            std::cout<<"\nThe total count of Sensors who have similar Types is :"<<ans;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::string Name = FindNameOfSensor(data, 003, SensorType::TEMPERATURE);                //FindNameOfSensor Function call
            std::cout<<"\n"<<Name<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Container result;
        result = ReturnAllInstances(data);                                      //ReturnAllInstances Function call
        for(Pointer& ptr:data)
        {
            std::cout<<*ptr;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}