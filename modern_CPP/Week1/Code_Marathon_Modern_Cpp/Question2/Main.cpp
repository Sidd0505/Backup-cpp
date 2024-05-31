#include"Functionlities.h"

int main()
{
    Container data;

    CreateObjects(data);

    for(Pointer& ptr: data)
    {
        std::cout<<*ptr<<"\n";
    }


    try                                                          //SatisfyAllConditions Function call
    {
        Container result;
        result = SatisfyTheConditions(data);
        for(Pointer& ptr:result)
            std::cout<<*ptr;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try                                                                 //Function call of AveragePermitDurationLeft
    {
        int left = AveragePermitDurationLeft(data);
            std::cout<<"\nThe Average for the Type CAB is :"<<left;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try                                                                 //Function call for FindTouristVehicle
    {
        PermitType typee;
        typee = FindTouristVehicle(data);
        std::cout<<"\n";
        PermitTypeToString(typee);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try                                                         //Function call for NInstancesTouristVehicle
    {
        Container result;
        result = NInstancesTouristVehicle(data, 2);
        for(Pointer &ptr:data)
        {
            std::cout<<"\n"<<*ptr;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}