#include "Functionalities.h"

void PrintOddNumber(Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    bool check = std::any_of(data.begin(), data.end(),          //check for odd numbers using any_of
            [&](int n){return n%2 !=0; } 
     );

    if(check)
    {
        std::cout<<"Odd Numbers are :";
        for(const int& num : data)
        {
            if(num%2 != 0)
            {
                std::cout<<num<<" ";     
            }
        }
        std::cout<<"\n";
    }
    else{
        std::cout<<"No odd numbers found!!!";
    }
}


void Operation(FContainer &data, Container& array)
{
    for(int i=0;i<1;i++)
    {
        data[i](array);
    }
}
