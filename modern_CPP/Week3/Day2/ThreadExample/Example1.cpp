/*
    Create a thread t1 that calculates square of all numbers in an 
    array in an array and stores them in a result container
*/

#include<iostream>
#include<thread>
#include<array>

int main()
{
    std::array<int, 5> result;
    std::array<int, 5> data{10,20,30,40,50};

    /*
        Create and instantiate t1
    */
    std::thread t1(
        //function
        [&result](std::array<int,5>&data){
            int k=0;
            for(int val :data)
            {
                result[k++]=val*val;
            }
        },
        //arguments for function
        std::ref(data)
    );



   /*
        Wait for t1
   */
    t1.join();

    /*
        Display output
    */
    auto itr = result.begin(); 
    for(int val: result)
    {
        if(itr != result.end())
        {
            std::cout<<"Square of :"<<*itr<<" is :"<<val<<"\n";
            itr++;
        }
    }
}