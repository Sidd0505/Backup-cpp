#include"Functionalities.h"

int main(){
    int n;
    std::cout<<"Enter Number : ";
    std::cin>>n;
    std::thread t1(Print_odd_numbers,std::ref(n));
    std::thread t2(Print_even_numbers,std::ref(n));

    t1.join();
    t2.join();
}