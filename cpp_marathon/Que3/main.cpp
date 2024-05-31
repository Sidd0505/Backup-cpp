#include"header.h"
#include<iostream>
using namespace std;

int main()
{
    int size = 0,lp = 1,choice,count = 0,flag=0;
    long tempno=0;
    std::cout<<"Enter the number of flights that you want enter \n";
    cin>>size;
    Flight *arr = new Flight[size];
    while(lp)
    {
        std::cout<<"Select 1 for add flight :"<<std::endl;
        std::cout<<"Select 2 for display all flight :"<<std::endl;
        std::cout<<"Select 3 for search flight :"<<std::endl;
        std::cout<<"Select 4 for display current flight object :"<<std::endl;
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            if(count == size)
            {
                std::cout<<"The stack is full! \n";
            }
            else
            {
                arr[count].FeedInfo();
                count++;
            }
            
            break;
        case 2:
            if(count == 0)
            {
                std::cout<<"There is no entry available !!\n";
            }
            else
            {
                for(int i=0;i<count;i++)
                {
                    arr[i].showInfo();
                }
            }
            break;
        case 3:
            
            std::cout<<"Enter the flight number\n";
            std::cin>>tempno;
            for(int i=0;i<count;i++)
            {   flag =0;
                if(arr[i].getFlightno()== tempno)
                {   
                    flag = 1;
                    std::cout<<"The flight numer you have entered is present here";
                    break;
                }
            }
            if(flag == 0)
            {
                std::cout<<"The flight is not present in the list !!!!!\n";
            }
            break;
        case 4:
                arr[count-1].showInfo();
            break;
        case 5:
            std::cout<<"Thank you";
            lp = 0;
            break;
        default:
            std::cout<<"Your choice is wrong Please \nRe-enter the cohice";
            break;
        }

    }
    delete []arr;  //free memory
    return 0;
}