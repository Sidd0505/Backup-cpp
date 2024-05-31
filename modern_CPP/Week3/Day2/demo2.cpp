//ON LINE NO 38 THE THREAD WHICH IS BLOCKED IS MAIN.
#include<iostream>
#include<array>
#include<thread>

std::array<int, 10> result;

void square(std::array<int, 5>&data)
{
    int k=0;
    for(int val:data){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        result[k++]=val*val;
    }

}
/*
void cube(std::array<int, 5>&data)
{

    int k=5;
    for(int val:data){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        result[k++]=val*val*val;
    }

}
*/


int main()
{
    std::array<int, 5>data{1,2,3,4,5};
    

    std::thread t1(&square, std::ref(data));

    //thread using lambda
    std::thread t2(
        [](std::array<int, 5>&data){
            int k=5;
            for(int val:data){
                std::this_thread::sleep_for(std::chrono::seconds(1));
                result[k++]=val*val*val;
            }
        },
        std::ref(data)
    );
    
    //main should not proceed further than this line UNTIL
    //t1 sends a signal "that it has finished"
    t1.join();

    //main should not proceed further than this line UNTIL
    //t1 sends a signal "that it has finished"
    t2.join();

    for(int val:result)
    {
        std::cout<<val<<"\t";

    }
    std::cout<<"\n";


/*
    main will just request os to look if we can make thread it will not execute
    the thread.
    so once it sends request to os like on line 33 and 34 it will just go ahead with for each 
    loop and will execute for each loop but as we know in this program the thread t1 and t2 
    have 5 sec delay but the main is executing for-each loop asap therefore we will get error
    like core dumped.
    Therefore we use join keyword to stop main 

*/

//THREAD IS JUST A SET OF INSTRUCTIONS, IT IS NOT RESOURCE
//ON LINE NO 38 THE THREAD WHICH IS BLOCKED IS MAIN.

// auto itr = result.front();
// for(auto& itr : result)
// {
//     std::cout<<itr;
// }
// }
}