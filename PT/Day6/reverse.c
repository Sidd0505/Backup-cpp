#include<stdio.h>
int main()
{
    int num1,sol=0,ans;
    printf("Enter the number :");
    scanf("%d",&num1);
    while(num1>0)
    {
        sol = sol*10 +num1%10;
        num1 = num1/10;
    }
    printf("The reverse of a number is :%d",sol);
}
