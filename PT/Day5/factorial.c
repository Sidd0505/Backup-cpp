#include<stdio.h>
int main()
{
    int num1;
    long ans=1,sol;
    printf("Enter the num1 :");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++)
    {
        ans = ans*i;

    }
    printf("THe factorial of %d is %ld.",num1,ans);
}