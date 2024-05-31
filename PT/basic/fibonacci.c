#include<stdio.h>
int main()
{
    int num1,ans,sol,temp;
    int a=-1,b=1;
    printf("Enter th range :");
    scanf("%d",&num1);
    for(int i=0;i<num1;i++)
    {
        sol = a+b;
        printf("%d\n",sol);
        a = temp;
        a =b;
        b =sol;
    }
}