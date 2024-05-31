// #include<stdio.h>

// int main()
// {
//     float num1,num2;
//     char ans;
//     ans = 'A';
//     num1 =printf("The value of ans is :%c\n",ans);
//     printf("\nTHe value of  num1 is :%f",num1);
//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    int var = 10;
    // int *ptr;
    // ptr = &var;
    int* ptr = &var;
    *ptr = 40;
    cout<<"THe value of *ptr is :"<<*ptr;
}
