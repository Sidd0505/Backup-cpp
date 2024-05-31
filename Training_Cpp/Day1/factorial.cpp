#include<iostream>
using namespace std;

int main()
{
    int num1,ans=1,sol;
    cout<<"Enter the number :";
    cin>>num1;
    for(int i=1;i<=num1;i++)
    {
        ans = ans*i;
    }
    cout<<"The factorial of the number "<<num1<<" is "<<ans;
}