#include<iostream>
#include"Train.h"

int main()
{
    Train arr[5];
    int trainsize =5;
    arr[0].createtrain("Shatabdi1",101,200,AC2TIER,"Delhi","Nagpur",2000);
    arr[1].createtrain("Shatabdi2",102,200,FIRST,"Delhi","Nashik",2000);
    arr[2].createtrain("Shatabdi3",103,200,SLEEPER,"Delhi","Satana",2000);
    arr[3].createtrain("Shatabdi4",104,200,AC3TIER,"Delhi","Punjab",2000);
    arr[4].createtrain("Shatabdi5",105,200,AC3ECONOMY,"Delhi","Dehradun",2000);

}
int choice;
do
{
    std::cout<<"Please make a choice here!!!"<<std::endl;
    std::cout<<"Enter your choice :";
    std::cin>>choice;
    std::cout<<"1.Display the trains\n";
    std::cout<<"2.Search Train"
    std::cout<<"3.Book train seats.\n";
    std::cout<<"4. Exit";
} while (choice!=4);
