#include<iostream>
#include<thread>
#include<mutex>

/*
    100 withdraw transactions of 10 units each
    100 Deposit transactions of 10 units each
*/

std::mutex  mt;
int amount = 1000;

void withdraw()
{
    for(int i=0;i<100;i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
        //critical section start
        mt.lock();
        amount -=10;
        //critical section end
        mt.unlock();
    }
}

void deposit()
{
    for(int i=0;i<100;i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(2));
        //critical section start
        mt.lock();
        //critical section ---> any part of program where shared memory is being modified 
        amount +=10;//critical section end
        //critical section end
        mt.unlock();
    }

}

int main()
{
    std::thread t1(&withdraw);
    std::thread t2(&deposit);

    t1.join();
    t2.join();

    std::cout<<"FInal amount is :"<<amount<<"\n";

}

/*
write operation cannot be performed by more than one thread at the same time otherwise the
output will be wrong.

*/