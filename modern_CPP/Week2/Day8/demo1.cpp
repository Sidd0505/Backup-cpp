/*
#include<iostream>

void square(int number)
{
    std::cout<<number*number;
}

void cube(int number)
{
    std::cout<<number*number*number;
}

void times100(int number){
    std::cout<<number*100<<"\n";

}

void percent_10(int number){
    std::cout<<(int)(number*0.1f);
}
void operation(int number)
{
    std::cout<<number *number;
}


int main()
{
    //A function pointer(which points to a function)
    //Type of ptr is signature of function 
    void (*ptr)(int) = &square;
    //only assign function to pointer who have same signature
    //both should have same signature
    operation(cube,7);
}



*/


#include<iostream>
#include<functional>

void square(int number)
{
    std::cout<<number*number;
}

void times100(int number){
    std::cout<<number*100<<"\n";

}

void percent_10(int number){
    std::cout<<(int)(number*0.1f);
}

// void operation(void (*fn)(int), int data)        //function pointer
//     {fn(data);}                                  

void operation(std::function <void(int)> fn ,int data)      //function wrapper
    {fn(data);}    


int main()
{
    //A function pointer(which points to a function)
    //Type of ptr is signature of function 
    void (*ptr)(int) = &square;
    //only assign function to pointer who have same signature
    //both should have same signature
    operation(times100,7);
}



//operation is a function which is taking a function as a parameter and it is applying it on the main.
//lambda is used for small functions when u have to quickly write a logic but u dont want to waste function that is why u use lambda
//either take funct wrapper or pointer