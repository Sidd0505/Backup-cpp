#include<iostream>
#include<thread>
#include<mutex>


int main(){
    auto f1= [](int a){
        std::cout<<"Square of "<<a<<" : "<<a*a;
    };

    std::thread t1(f1,5);
    t1.join();
}