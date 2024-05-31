#include<iostream>
#include"head.h"

using namespace std;

evenodd::evenodd()
{

}

int evenodd::input()
{
    int num2;
    cout<<"Enter the number :";
    cin>>num2;
    if(num2%2==0)
        return 1;    
    return 0;
}



void evenodd::display()
{
    if(input())
        cout<<"The number is even."<<endl;
    else
        cout<<"THe number is  odd"<<endl;
}