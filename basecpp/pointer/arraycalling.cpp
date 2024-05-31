#include<iostream>
using namespace std;

int main()
{
    int arr[3]={2,3,4};
    int *ptr;
    ptr = arr;
    //we can also write as ptr = &arr[0]
    cout<<ptr[0]<<"\n"<<ptr[1]<<"\n"<<ptr[2]<<endl;
    

}