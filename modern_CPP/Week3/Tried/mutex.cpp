#include<mutex>
#include<iostream>
#include<thread>
#include<array>

std::mutex mt;

/*
    A regular mutex based on lock and unlock analog
    A scope based lock_guard gets applied at the point of installation and is unlocked
    automatically when the object goes out of scope.

*/

void CalculteSquare(std::array<int, 5>& arr){
    for(int val:arr){
        std::lock_guard<std::mutex>lk(mt);    //constructor called
        std::cout<< val* val <<"\n";

    }
}

void CalculateCube(std::array<int, 5>& arr){
    for(int val :arr)
    {
        std::lock_guard<std::mutex>lk(mt);    //constructor called
        std::cout<< val* val* val <<"\n";
    }
}

int main()
{
    std::array<int, 5> arr{10,20,30,40,50};
    std::thread t1(&CalculteSquare, std::ref(arr));
    t1.join();
    std::thread t2(&CalculateCube, std::ref(arr));
    t2.join();
}