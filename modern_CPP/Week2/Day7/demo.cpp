#include<iostream>
#include"employee.h"
#include<list>

int main()
{
    
    std::list<employee> data;
    employee e1(101);   //step 1 & 2
    data.push_back(employee(101));


} //copy 2 malloc 1 extra delete and 1extra object

int main()
{
    
    std::list<employee> data;
    data.push_back(employee(101));

} //2 mallocs 1 redundant copy and 1 redundant delete

//one  optimized method
int main()
{
    
    std::list<employee> data;
    
    data.emplace_back(employee(101));
}
//most optimzed version scenario-3



 //scenario -4
//how to take input from user

int input_from_user()
{
    int id =0;
    std::cin>>id;
    return id;
}//return value optimization 
//directly make the return in the 50 th line 

int main()
{
    std::list<employee> data;

    data.emplace_back(employee(input_from_user()));
}


/*
    1) Create a new data object of some type

    2) Object was saved into a new variable (providing lifetime)

    3) make a new node for linked list

    4) copy data in new data

    5) attach the current linked list

    sceario 1 :
    Make a lvalue object. Allocate a new node in the list.
    Copy data into the list (UNOPTIMIZED)

    Scenario 2 :
    Make a temperory object. Allocate a new node in the list.
    move the temperoroy data into the new node llocated
*/