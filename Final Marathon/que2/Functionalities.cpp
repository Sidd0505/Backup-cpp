#include "Functionalities.h"

void PrintOddNumbers(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    bool check = std::any_of(data.begin(), data.end(),              //use of any_of
            [&](int n){ return n%2 != 0; }
        );

    if(check){
        std::cout << "Odd Numbers  ";
        for(const int& i : data){
            if (i%2 != 0)
            {
                std::cout << i << " ";
            }
        }
        std::cout << "\n";
    }
    else{
        std::cout << "No odd Numbers found\n\n";
    }
    
}

void CountOfNumberDivisibleby4(const Container &data)
{
    if (data.empty())
    {
        throw std::runtime_error("Data is empty\n");
    }

    int count = std::count_if(data.begin(), data.end(),                     //Use of count_if
            [&](int n){ return n % 4 == 0; }
        );
    if (count)
    {
        std::cout << "Count of numbers divisible is: " << count << "\n\n";
    }
    else
    {
        std::cout << "No number is divisible by 4\n\n";
    }
    
}


FWrapper SumOfElements = [](const Container &data){          //use sort
    
    Container sum = data;
    std::sort(sum.begin(), sum.end());
    std::cout << "Sum is: " << sum[3] + sum[4] << "\n\n";

};

FWrapper MinElementOfContainer = [](const Container &data){       //use of min_element

    auto itr = std::min_element(data.begin(), data.end());
    std::cout << "Minimum element is: " << *itr << "\n";
};

void Operation(FContainer &data, const Container& arr)
{
    for(int i=0;i<4;i++)
    {
        data[i](arr);
    }
}
