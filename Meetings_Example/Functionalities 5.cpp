#include "Functionalities.h"

std::mutex mt;
std::condition_variable cv;
bool isodd=true;

void Print_even_numbers(int n)
{
    for(int i=1;i<=n;i+=2){

    std::unique_lock<std::mutex>lock(mt);
    cv.wait(lock,[](){
        return isodd;
    });
    std::cout<<"Odd :  "<<i<<std::endl;
    isodd=false;
    cv.notify_all();
    }
}

void Print_odd_numbers(int n)
{
    for(int i=2;i<=n;i+=2){
        std::unique_lock<std::mutex> lock(mt);
        cv.wait(lock,[](){
            return !isodd;
        });
    std::cout<<"Even : "<<i<<std::endl;
    isodd=true;
    cv.notify_all();
    }
}
