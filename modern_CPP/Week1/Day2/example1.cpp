#include<iostream>
//variable ko address compile time pe nahi milta
//compile time pe data ram me nahi hota
/*

    
     &                                  (just name)         //to fetch value 
    address         Name                Content 
    0x100H           n1                  10
    0x111H          ptr                 0x100H
    0x891H          sptr                0x111H

*/

int main()
{
    int n1 =10;

    int *ptr = &n1;

    //sptr is a pointer to a pointer 
    int ** sptr = &ptr;

    std::cout<<"Address of n1 is :"<<&n1<<"\n";
    std::cout<<"Content of n1 is :"<<n1<<"\n";

    std::cout<<"Address of sptr is :"<<&sptr<<"\n";
    std::cout<<"Content of sptr is :"<<sptr<<"\n";

    std::cout<<"Address of ptr is :"<<&ptr<<"\n";
    std::cout<<"Content of ptr is :"<<ptr<<"\n";
    
}