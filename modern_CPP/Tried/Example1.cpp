//referance wrapper demo
#include<iostream>
#include<functional>
#include<vector>
std::vector<int> v{1,2,3,4,6};
 
void average(std::function<float(std::vector<int> v)> data )
{
    std::cout<<"Average is : "<<data(v)/v.size()<<std::endl;
}
 
int main()
{
    auto a=0;
 
    auto total=[](std::vector<int> v){
        float sum=0;
        for(int val:v)
    {
        sum+=val;
    }
    return sum;
    };
    
    average(total);
    return 0;
}