#include<stdio.h>
int main()
{
    int num1,ans=1,sol=1,num2,i=1;
    printf("ENter the number :");
    scanf("%d",&num1);
    printf("ENter the power :");
    scanf("%d",&num2);
    while(i<=num2)
    {
        sol = sol*num1;
        i++;
    }
    printf("THe ans is :%d",sol);
}