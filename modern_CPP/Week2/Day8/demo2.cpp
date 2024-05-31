/*
    A container of 3 functions
    Then run a loop over the container to execute the functions


        DATA
    |      |        |
    f1     f2       f3
    |      |        |
    o1     o2       o3

*/


#include<iostream>
#include<vector>
#include<functional>


using FnType = std::function<void(int)>;
using FnContainer = std::vector<FnType>;


/*
    Accept a blank cntainer 
    It will add 3 lambdas into the container
*/
void MakeLambdaFunctions(FnContainer& functions)
{
    //auto f1 = [](int number) {std::cout<<number * number<<"\n"};
    //auto f2 = [](int number) {std::cout<<number*number*number<<"\n"};

    functions.emplace_back(
        [](int number) {std::cout<<number * number<<"\n";}
    );
    functions.emplace_back(
        [](int number) {std::cout<<number*number*number<<"\n";}
    );

}

/*
    run a for loop on the function container
    execute each function with given data
*/
void ApplyLogicOnData(FnContainer& functions, int data)
{
    for(FnType & fn :functions)
    {
        fn(data);
    }
}

int main()
{
    FnContainer functions;
    MakeLambdaFunctions(functions);
    ApplyLogicOnData(functions, 5);
}





