#include<thread>
#include<iostream>
#include<array>


std::array<int, 10>result;

void square(std::array<int,5>&data)
{
    //square
    int k = 0;
    for(int val : data)
    {
        result[k++] = val * val;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }    
}

void cube(std::array<int,5>&data)
{
    int k =5;
    for(int val: data)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        result[k++] = val*val*val;
    }
}


int main()
{
    std::array<int, 5>data{1,2,3,4,5};
    square(data);
    cube(data);
    for(int val: result)
    std::cout<<"The value is :"<<val <<"\n";
}