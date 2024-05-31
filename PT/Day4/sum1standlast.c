#include<stdio.h>
int main()
{
    int num1,num2,num3,ans,sol;
    printf("Enter the number :");
    scanf("%d",&num1);
    num2 = num1%10;
    while(num1>0)
    {
        num3 = num1%10;
        num1 = num1/10;
    }
    sol = num3 + num2;
    printf("The sum of first and last digit is :%d",sol);
    return 0;
}