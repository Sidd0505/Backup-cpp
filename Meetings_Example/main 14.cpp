#include<iostream>
#include<thread>
#include<mutex>

std::mutex mt;

int main(){
// Lambda function
auto Print_Number= [](int a, int b){

    std::lock_guard<std::mutex>lck(mt);

    for(int i=a;i<=b;i++){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
};
    std::thread t1(Print_Number,1,10);
    std::thread t2(Print_Number,11,20);

    t1.join();
    t2.join();

    return 0;
}