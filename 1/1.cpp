#include<iostream>
using namespace std;

void array()
{
    int arr[3]={10,20,30};
    int* ptr;
    ptr = arr;
    cout<<"THe value at ptr is :"<<ptr<<endl;
    cout<<"The value qat *pte is :"<<*ptr<<endl;

    ptr++;
}

int main()
{
    for(int i=0;i<3;i++)
    {
        array();
    }
    return 0;
}