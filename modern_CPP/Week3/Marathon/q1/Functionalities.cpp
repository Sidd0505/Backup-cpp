#include"Functionalities.h"
#include<future>


void Returnsum(std::future<int> & ft1, std::future<int> & ft2)
{
    int result;
    int n1 = ft1.get();
    int n2 = ft2.get();

    // result = n1 + n2;
    // std::cout<<"The result is :"<<result;
    // std::promise<int> pr1;

    // std::future<int> ft1 = pr1.get_future();

    // std::promise<int> pr2;

    // std::future<int> ft2 = pr2.get_future();

    // std::future<int> result_ft = std::async(std::launch::async, &square, std::ref(ft));
}

void SumOfFirstNNumbers(int &N)
{
    if(N < 0 || N ==0 )
    {
        std::cout<<"Enter the correct values.";
    }
    int result = 0;
    for(int i=N; i>1;i--)
    {
        result +=i;
    }
    //what to do about return think
}

void OddNumbersInVector(std::vector<int>&f1)
{
    for(int & v : f1)
    {
        if(v%2 == 0)
        {
            std::cout<<"The odd numbers are :"<<v;
        }
    }
}

// void Operation(std::function<void(Container)> func, std::array<std::thread, 3>& arr)
// {
//     std::thread t1(&Returnsum, std::ref(num1), std::ref(num2));
//     std::thread t2(&SumOfFirstNNumbers, std::ref(N));

// }
