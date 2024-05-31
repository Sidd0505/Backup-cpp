#include<iostream>
#include<thread>
#include<array>
#include<mutex>
#include<condition_variable>
#include"Functionalities.h"
#include<future>


int num1=0;
int num2=0; 
std::mutex mt;
int number =0;
bool flag =false;
std::condition_variable cv;


int main()
{
    std::array<std::thread,3> arr;

    std::promise<int> pr1;

    std::future<int> ft1 = pr1.get_future();

    std::promise<int> pr2;

    std::future<int> ft2 = pr2.get_future();

    std::future<int> result_ft = std::async(std::launch::async, &Returnsum, std::ref(ft1), std::ref(ft2));

    std::cin>>num1;

    std::cin>>num2;

    pr1.set_value(num1);

    pr1.set_value(num2);


     

}



// JoinThreads(threadarr);






/*
    std::cout<<"Please Enter the Number one :";
    std::cin>>num1;
    std::cout<<"Please Enter the Number two :";
    std::cin>>num2;

    std::thread t1(&operation,Returnsum, std::ref(num1), std::ref(num2));

    int N;
    std::cout<<"Give me a Number to print sum :";
    std::cin>>N;

    

}
*/