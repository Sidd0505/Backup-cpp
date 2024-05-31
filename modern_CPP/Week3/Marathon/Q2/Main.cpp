#include"Functionalities.h"
#include<thread>

int main()
{
    Container data;

    std::thread t1(&CreateObjects, std::ref(data));
    t1.join();

    //std::thread t2(&FindSeatCount, std::ref(data));

    std::thread t3(&EngineHorsepowerBelow600Count, std::ref(data));


}