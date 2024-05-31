//add function that can accept 1,2,3,4.... infinite prameters and return total 
//This is variable number code
#include<memory>
#include<iostream>

/*
    Variadic templates (templates that can accept variable number of arguments)
    e.g. make_shared function template

*/

//use concept of recursion and base cas

//my base case in addition is : adding only 1 value.
template <typename T>
T add(T n1)
{
    return n1;
}

template<typename T, typename... Args>
auto add(T n1, Args... args){
    return n1+ add(args...);
}

/*
cpp-17 syntax of writing above code

template<typename ...T>
auto add(T... args){
    return (args + ...);
}
*/
int main()
{
    std::cout<< add<int>(10,20,30) <<"\n";
    std::cout<< add<int>(10,20) <<"\n";
}