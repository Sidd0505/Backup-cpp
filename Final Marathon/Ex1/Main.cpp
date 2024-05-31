#include"Functionalities.h"

int main()
{
    Container data;
    CreateObjects(data);


    std::optional<Container> container =  MatchTheConditions(data);
    if(container.has_value()){
        Container result;
        for(Pointer& ptr : data)
        {
            std::cout<<*ptr;
        }
    }
    else{
        std::cout<<"No data entry satisfied the condition";
    }


try{
    if(CheckEngineTorqueAbove110(data))
    {
        std::cout<<"\nAll the vehicles have Torque above 110";
    }
    else{
        std::cout<<"\nNot all the vehicles have torque above 110";
    }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

   
try{   
    std::cout<<"\n";
    std::cout<<CountOfInstances(data, 500);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
      
}
