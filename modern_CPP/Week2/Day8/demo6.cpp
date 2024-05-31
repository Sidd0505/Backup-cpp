#include<iostream>
#include<functional>
#include<array>


//create a fun to calculate avg of no using a fun pointer/wrapper.
void operation(std::function<float(std::array<int,3>)>fn, std::array<int,3>fn2 )
{   
    fn(fn2);
};

//Make a function wrapper

//make a function
float AverageOfNo(std::array<int, 3>t1)
{
    float number,total=0.0f;
    for(int ele :t1)
    {
        total +=ele;

    }
    std::cout<<total/t1.size();
};


//main
int main(){
    std::array<int, 3>f1{1,1,1};
    operation(AverageOfNo,f1);

}