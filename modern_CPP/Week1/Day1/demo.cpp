/*
#include<iostream>
//enum get typecasted into int by compilerlike 0,1,2
enum Rank{
    FIRST,
    SECOND,
    THIRD
};

enum Gear {
    FIRST,
    SECOND,
    THIRD
};

void Magic(int data)
{

}
int main()
{
   // enum Rank r1 = FIRST;       //error
    enum Rank r1 = Rank::FIRST;  

    enum Gear g1 = FIRST;
    //you shldn't have given feature to compare enum its not logical
    if(r1 == g1){
        std::cout<<"OOPS!!!!\n";
    }

    Magic(r1);

}
*/


#include<iostream>
//enum get typecasted into int by compilerlike 0,1,2
enum class Rank{
    FIRST,
    SECOND,
    THIRD
};

enum class Gear {
    FIRST,
    SECOND,
    THIRD
};

void Magic(int data)
{

}
int main()
{
    enum Rank r1 = Rank::FIRST;  
    enum Rank r2 = Rank::SECOND;
    enum Gear g1 = Gear::FIRST;

    //we can compare similar enum object
    if(r1 == r2)
    {
        std::cout<<"OOPS!!!\n";
    }

    //will give error in enum class.
    // if(r1 == g1){
    //     std::cout<<"OOPS!!!!\n";
    // }


    //Typecasted is not done when we use enum class
    //Magic(r1);

}
