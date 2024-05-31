#include<stdio.h>
int main()
{
    int num,ans,sol=1;
    printf("ENter the num :");
    scanf("%d",&num);
    for(int i=num;i>=1;i--)
    {
        sol = sol*i;
    }
    printf("The factorial is :%d",sol);
}