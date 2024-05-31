/* 
    D1     D2       D3
    |      |        |
    f1     f2       f3
    |      |        |
    o1     o2       o3
Passing different diff data to diiferent functions.
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
        functions.emplace_back(
        [](int number) {std::cout<<number*number*number*number<<"\n";}
    );

}

/*
    run a for loop on the function container
    execute each function with given data
*/
void ApplyLogicOnData(const FnContainer& functions,const DataContainer& data)
{
    /*
    for(int i=0;i<3;i++)
    {
        functions[i](data[i]);
    }
    */  //for vector but it is hard coded 

    auto itr = data.begin();

    for(const FnType& fn :functions)
    {
        //int value = *itr++;
        fn(*itr++);
    }
}

int main()
{
    FnContainer functions;
    MakeLambdaFunctions(functions);
    DataContainer data{10,20,30};
    ApplyLogicOnData(functions, data);
}

