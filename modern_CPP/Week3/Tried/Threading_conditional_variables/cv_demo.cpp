#include<iostream>
#include<condition_variable>
#include<thread>

//std::condition_variable cv;
/*
    DisplaySquare:
    It should print the square of the number received as input from the user.


    Main - 
    Main will take cin input and store value in a global variable
*/

std::mutex mt;
int number =0;
bool flag =false;
std::condition_variable cv;

void square()
{
    //condition check - each time t1 thread is scheduled, condition must be checked
    std::unique_lock<std::mutex> ul(mt);
    cv.wait(ul , [](){return flag;});
    std::cout<<"Square of "<<number<<" is : "<< number*number<<"\n";
}

int main()
{
    //step 1: thread is registered (instantiated and handed over to os) 
    std::thread t1(&square);
    std::cin>>number;

    //step 2: user input arrives (this can take a very long time)
    flag = true;   //this specifisis met!

    //step 3: send a signal 
    cv.notify_one(); //signal send from main to os and that we can now invoke the waiting thread
    t1.join();
}