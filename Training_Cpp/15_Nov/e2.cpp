#include<iostream>

int main()
{
    int a=10,b=0;
    try
    {
        if(b==0)
            throw "Division by 0 not posiible\n";
            int c = a/b;
            std::cout<<c;
    }
    catch(const char * msg)
    {
        std::cout<<msg;
    }
    int n=4,f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    std::cout<<"The factorial is :"<<f<<std::endl;
}