#include<iostream>

/*
    pass by value: accepts both lvalue and rvalue =. rvalue is assigned. 
    lvalue is copied. n1 is also modifyable in the scope of f1.
*/

int f1(int n1)
{
    std::cout<<"Address of n1 in f1 function : "<<&n1<<"\n";
    std::cout<<"Value of n1 in f1 before modification : "<<n1<<"\n";
    n1 = 100;
    std::cout<<"Value of n1 in f1 after modification :"<<n1<<"\n";

}

/*
    pass by non-const reference. ACCEPTS ONLY LVALUES. RVALUES CANNOT BE PASSED.
    NO COPY CREATED. ORIGINAL VALUE IS ASSIGNED BY REFERENCE.
*/
int f2(int& n1)
{
    std::cout<<"Address of n1 in f1 function : "<< &n1 <<"\n";
    std::cout<<"Value of n1 in f1 before modification : "<< n1 <<"\n";
    n1 = 100;
    std::cout<<"Value of n1 in f1 after modification :"<< n1 <<"\n";
}

/*
    pass by const value : accepts both lvalue and rvalue but DOES NOT ALLOW ANY
    MODIFICATION. LVALUE IS COPIED. RVALUE IS ASSIGNED
*/

f3(data);  //copy but make it constant 
f3(10); //assign rvalue to n1. make it constant.
//f3 fun ke local stack pe store hoga 10
//rvalue cant be copy or moved in this example so we assigned it

int f1(const int n1)
{
    std::cout<<"Address of n1 in f1 function : "<<&n1<<"\n";
    std::cout<<"Value of n1 in f1 before modification : "<<n1<<"\n";
   // n1 = 100; //this will be invalid since modification is not allowed
    std::cout<<"Value of n1 in f1 after modification :"<<n1<<"\n";

}

/*
    This will accept bith lvalues and rvalues
    lvalues will be asigned to n1. No modification 
    we will not be making copy as there is by refrence. 
*/
int f4(const int& n1)
{
    std::cout<<"Address of n1 in f1 function : "<<&n1<<"\n";
    std::cout<<"Value of n1 in f1 before modification : "<<n1<<"\n";
    //n1 = 100;
    std::cout<<"Value of n1 in f1 after modification :"<<n1<<"\n";

}

/*
    only accepts rvalues. rvalue "maps" itself to n1. n1 can also be modified 
    inside n1
*/
/*
    once the rvalue is mapped then it will be converted into lvalue and  
    we can modify lvalue.
*/
//const void f5()--> we can write this syntax if the fun is only meber function
void f5(int&& n1)
{
    //lvalue will be stored incall stack of f5
    std::cout<<"Address of n1 in f1 function : "<<&n1<<"\n";
    std::cout<<"Value of n1 in f1 before modification : "<<n1<<"\n";
    n1 = 100;
    std::cout<<"Value of n1 in f1 after modification :"<<n1<<"\n";
}

/*
f6 take const rvalue refrence of n1 as an argument
*/
int f6(const int&& n1)
{
    std::cout<<"Address of n1 in f1 function : "<<&n1<<"\n";
    std::cout<<"Value of n1 in f1 before modification : "<<n1<<"\n";
    // n1 = 100;
    std::cout<<"Value of n1 in f1 after modification :"<<n1<<"\n";
}


