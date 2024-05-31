#include<iostream>
#include<functional>
#include<array>


auto n1 = 10; 
//accept no. return square
auto lfn1 =[](int number) {return number*number;};

using FnType = std::function<int(int)>;

/*
lambdas are object basically
    WHAT?
    Lambdas are callables like regular function
    (top-level functions/Global Functions)
    Lambdas have no name i.e. they are anonymous functions

    WHY?
        They help us to pass, receive, store and utilize  logic in the form of an object 
        with proper type system support.

        They can be used for specifying a shrt-term, one time or scope 
        based logical process to be performed on some data

        Cpp lambda have a concept of capture clause which allows them to act like closures

        using capture clause lambda can access local variable of different function

*/

/*
   
    [n1] :Capture n1 only nu value
    [=] : capture and use all variables frim surrounding function by value

    OPTIONS A AND B DOESN'T ALLOW TO MODIFY BY FUNCTION VALUE.

    [&n1] : capture n1 by lvalue reference
    [&] :capture and use all variables from surrounding function by reference

*/


int main()
{
    int n1 =100;
    /*
    As lambda can capture data
    capture data from surrounding and they can  

    Lambda to be used as closures
    (also known as lambda closures)
    
    */
    std::cout<<lfn1(n1);


    std::array<std::function<int(int)>,1>arr{lfn1};

    //std::array<FnType>arr{lfn1}
       

}



/*
#include <iostream>
#include <functional>
 
void performOperation(std::function<int(int, int)> operation, int a, int b) {
    std::cout << "Result: " << operation(a, b) << "\n";
}
 
int main() {
    // Addition lambda
    auto add = [](int x, int y) { return x + y; };
    
    std::cout<<add(10,20);
    // Subtraction lambda
    auto subtract = [](int x, int y) { return x - y; };
 
    // Use the lambda functions with performOperation
    // performOperation(add, 10, 5);
    // performOperation(subtract, 8, 3);
 
    return 0;
}

*/