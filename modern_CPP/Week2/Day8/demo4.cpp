/*
    f1     f2       f3   ----3 o/p
    |      |        |
    o1     o2       o3   ----3 o/p
    |       |       |
    D1      D2      D3   ---- 3 o/p

*/


#include<iostream>
#include<vector>
#include<functional>


using FnType = std::function<void(int)>;
using FnContainer = std::vector<FnType>;
using DataContainer = std::vector<int>;


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
void ApplyLogicOnData(const FnContainer& functions,const DataContainer& data)
{
    for(const FnType& fn :functions)
    {
        for(const int n:data){
            fn(n);
        }
    }
}

int main()
{
    FnContainer functions;
    MakeLambdaFunctions(functions);
    DataContainer data{10,20,30};
    ApplyLogicOnData(functions, data);
}

//to reprsent state we create object